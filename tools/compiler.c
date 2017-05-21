/* -*- mode: C; c-file-style: "gnu"; indent-tabs-mode: nil; -*-
 * GObject introspection: Typelib compiler
 *
 * Copyright (C) 2005 Matthias Clasen
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#include <errno.h>
#include <string.h>

#include <glib.h>
#include <glib/gstdio.h>
#include <gio/gio.h>

#ifdef G_OS_WIN32
#include <io.h>
#include <fcntl.h>
#endif

#include "girmodule.h"
#include "girnode.h"
#include "girparser.h"
#include "gitypelib-internal.h"

gchar **includedirs = NULL;
gchar **input = NULL;
gchar *output = NULL;
gchar *mname = NULL;
gchar **shlibs = NULL;
gboolean include_cwd = FALSE;
gboolean debug = FALSE;
gboolean verbose = FALSE;

static GIrModule *
parse_modules () {
  GIrParser *parser;
  GIrModule *current_module, *first_module = NULL;
  gchar **module_filename_ptr;
  gint i;
  GError *error = NULL;

  if (includedirs != NULL)
    for (i = 0; includedirs[i]; i++)
      g_irepository_prepend_search_path (includedirs[i]);

  parser = _g_ir_parser_new ();
  _g_ir_parser_set_includes (parser, (const char*const*) includedirs);

  for (module_filename_ptr = input; *module_filename_ptr != NULL; module_filename_ptr ++)
    {
      current_module = _g_ir_parser_parse_file (parser, *module_filename_ptr, &error);

      if (current_module == NULL) 
        {
          g_fprintf (stderr, "error parsing file %s: %s\n",
                     *module_filename_ptr, error->message);
          return NULL;
        }

      if (first_module == NULL)
        {
          first_module = current_module;
        }
      else
        {
          if (strcmp (current_module->name, first_module->name) != 0)
            {
              g_fprintf (stderr, "All current_modules must have the same namespace name. "
                                 "Got %s and %s.", first_module->name, current_module->name);
              return NULL;
            }
          if (strcmp (current_module->version, first_module->version) != 0)
            {
              g_fprintf (stderr, "All current_modules must have the same namespace version. "
                                 "Got %s and %s.", first_module->version, current_module->version);
              return NULL;
            }
          if (strcmp (current_module->shared_library, first_module->shared_library) != 0)
            {
              g_fprintf (stderr, "All current_modules must be in the same shared library. "
                                 "Got %s and %s.", first_module->shared_library, current_module->shared_library);
              return NULL;
            }
          if (strcmp (current_module->c_prefix, first_module->c_prefix) != 0)
            {
              g_fprintf (stderr, "All current_modules must be in the same C prefix. "
                                 "Got %s and %s.", first_module->c_prefix, current_module->c_prefix);
              return NULL;
            }

          _g_ir_module_merge (first_module, current_module);
          _g_ir_module_free (current_module);
        }
    }

  return first_module;
};

static gboolean
write_out_typelib (gchar *prefix,
		   GITypelib *typelib)
{
  FILE *file;
  gsize written;
  GFile *file_obj;
  gchar *filename;
  GFile *tmp_file_obj;
  gchar *tmp_filename;
  GError *error = NULL;
  gboolean success = FALSE;

  if (output == NULL)
    {
      file = stdout;
      file_obj = NULL;
      filename = NULL;
      tmp_filename = NULL;
      tmp_file_obj = NULL;
#ifdef G_OS_WIN32
      setmode (fileno (file), _O_BINARY);
#endif
    }
  else
    {
      if (prefix)
	filename = g_strdup_printf ("%s-%s", prefix, output);  
      else
	filename = g_strdup (output);
      file_obj = g_file_new_for_path (filename);
      tmp_filename = g_strdup_printf ("%s.tmp", filename);
      tmp_file_obj = g_file_new_for_path (tmp_filename);
      file = g_fopen (tmp_filename, "wb");

      if (file == NULL)
	{
          g_fprintf (stderr, "failed to open '%s': %s\n",
                     tmp_filename, g_strerror (errno));
          goto out;
	}
    }

  written = fwrite (typelib->data, 1, typelib->len, file);
  if (written < typelib->len) {
    g_fprintf (stderr, "ERROR: Could not write the whole output: %s",
	       strerror(errno));
    goto out;
  }

  if (output != NULL)
    fclose (file);
  if (tmp_filename != NULL)
    {
      if (!g_file_move (tmp_file_obj, file_obj, G_FILE_COPY_OVERWRITE, NULL, NULL, NULL, &error))
        {
	  g_fprintf (stderr, "ERROR: failed to rename %s to %s: %s", tmp_filename, filename, error->message);
          g_clear_error (&error);
	  goto out;
        }
    }
  success = TRUE;
out:
  g_free (filename);
  g_free (tmp_filename);

  return success;
}

GLogLevelFlags logged_levels;

static void log_handler (const gchar *log_domain,
			 GLogLevelFlags log_level,
			 const gchar *message,
			 gpointer user_data)
{
  
  if (log_level & logged_levels)
    g_log_default_handler (log_domain, log_level, message, user_data);
}

static GOptionEntry options[] = 
{
  { "includedir", 0, 0, G_OPTION_ARG_FILENAME_ARRAY, &includedirs, "include directories in GIR search path", NULL }, 
  { "output", 'o', 0, G_OPTION_ARG_FILENAME, &output, "output file", "FILE" }, 
  { "module", 'm', 0, G_OPTION_ARG_STRING, &mname, "module to compile", "NAME" }, 
  { "shared-library", 'l', 0, G_OPTION_ARG_FILENAME_ARRAY, &shlibs, "shared library", "FILE" }, 
  { "debug", 0, 0, G_OPTION_ARG_NONE, &debug, "show debug messages", NULL }, 
  { "verbose", 0, 0, G_OPTION_ARG_NONE, &verbose, "show verbose messages", NULL }, 
  { G_OPTION_REMAINING, 0, 0, G_OPTION_ARG_FILENAME_ARRAY, &input, NULL, NULL },
  { NULL, }
};

int
main (int argc, char ** argv)
{
  GOptionContext *context;
  GError *error = NULL;
  GIrModule *module;
  g_typelib_check_sanity ();

  context = g_option_context_new ("");
  g_option_context_add_main_entries (context, options, NULL);
  g_option_context_parse (context, &argc, &argv, &error);
  g_option_context_free (context);

  if (error)
    {
      g_fprintf (stderr, "error parsing arguments: %s\n", error->message);

      g_error_free (error);

      return 1;
    }

  logged_levels = G_LOG_LEVEL_MASK & ~(G_LOG_LEVEL_MESSAGE|G_LOG_LEVEL_DEBUG);
  if (debug)
    logged_levels = logged_levels | G_LOG_LEVEL_DEBUG;
  if (verbose)
    logged_levels = logged_levels | G_LOG_LEVEL_MESSAGE;
  g_log_set_always_fatal (G_LOG_LEVEL_WARNING | G_LOG_LEVEL_CRITICAL);

  g_log_set_default_handler (log_handler, NULL);

  if (!input) 
    { 
      g_fprintf (stderr, "no input files\n"); 

      return 1;
    }

  g_debug ("[parsing] start, %d includes", 
	   includedirs ? g_strv_length (includedirs) : 0);

  module = parse_modules ();
  if (!module)
    return 1;

  g_debug ("[parsing] done");

  g_debug ("[building] start");

  {
      GITypelib *typelib;

      if (shlibs)
	{
          if (module->shared_library)
	    g_free (module->shared_library);
          module->shared_library = g_strjoinv (",", shlibs);
	}

      g_debug ("[building] module %s", module->name);

      typelib = _g_ir_module_build_typelib (module);
      if (typelib == NULL)
	g_error ("Failed to build typelib for module '%s'\n", module->name);
      if (!g_typelib_validate (typelib, &error))
	g_error ("Invalid typelib for module '%s': %s", 
		 module->name, error->message);

      if (!write_out_typelib (NULL, typelib))
	return 1;
      g_typelib_free (typelib);
      typelib = NULL;
    }

  g_debug ("[building] done");

#if 0
  /* No point */
  _g_ir_parser_free (parser);
#endif  

  return 0; 
}
