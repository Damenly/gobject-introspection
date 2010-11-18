/************************************************************/
/* THIS FILE IS GENERATED DO NOT EDIT */
/************************************************************/

/**
 * g_mount_guess_content_type:
 * @mount: a #GMount
 * @force_rescan: Whether to force a rescan of the content. Otherwise a cached result will be used if available
 * @cancellable: optional #GCancellable object, %NULL to ignore
 * @callback: a #GAsyncReadyCallback
 * @user_data: user data passed to @callback
 *
 * Tries to guess the type of content stored on @mount. Returns one or
 * more textual identifiers of well-known content types (typically
 * prefixed with "x-content/"), e.g. x-content/image-dcf for camera
 * memory cards. See the <ulink url="http://www.freedesktop.org/wiki/Specifications/shared-mime-info-spec">shared-mime-info</ulink>
 * specification for more on x-content types.
 * This is an asynchronous operation (see
 * g_mount_guess_content_type_sync() for the synchronous version), and
 * is finished by calling g_mount_guess_content_type_finish() with the
 *
 * Since: 2.18
 */


/**
 * g_output_stream_flush_async:
 * @stream: a #GOutputStream.
 * @io_priority: the io priority of the request.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: the data to pass to callback function
 *
 * Flushes a stream asynchronously.
 * For behaviour details see g_output_stream_flush().
 * When the operation is finished @callback will be
 * called. You can then call g_output_stream_flush_finish() to get the
 * result of the operation.
 */


/**
 * GZlibDecompressor:file-info:
 *
 * A #GFileInfo containing the information found in the GZIP header
 * of the data stream processed, or %NULL if the header was not yet
 * fully processed, is not present at all, or the compressor's
 * #GZlibDecompressor:format property is not %G_ZLIB_COMPRESSOR_FORMAT_GZIP.
 *
 * Since: 2.26
 */


/**
 * g_file_attribute_info_list_ref:
 * @list: a #GFileAttributeInfoList to reference.
 *
 * References a file attribute info list.
 *
 * Returns: #GFileAttributeInfoList or %NULL on error.
 */


/**
 * g_drive_is_media_check_automatic:
 * @drive: a #GDrive.
 *
 * Checks if @drive is capabable of automatically detecting media changes.
 * media changes, %FALSE otherwise.
 *
 * Returns: %TRUE if the @drive is capabable of automatically detecting
 */


/**
 * g_dbus_message_set_header:
 * @message: A #GDBusMessage.
 * @header_field: A 8-bit unsigned integer (typically a value from the #GDBusMessageHeaderField enumeration)
 * @value: A #GVariant to set the header field or %NULL to clear the header field.
 *
 * Sets a header field on @message.
 * If @value is floating, @message assumes ownership of @value.
 *
 * Since: 2.26
 */


/**
 * g_app_info_add_supports_type:
 * @appinfo: a #GAppInfo.
 * @content_type: a string.
 * @error: a #GError.
 *
 * Adds a content type to the application information to indicate the
 * application is capable of opening files with the given content type.
 *
 * Returns: %TRUE on success, %FALSE on error.
 */


/**
 * g_file_info_get_size:
 * @info: a #GFileInfo.
 *
 * Gets the file's size.
 *
 * Returns: a #goffset containing the file's size.
 */


/**
 * g_dbus_interface_info_lookup_signal:
 * @info: A #GDBusInterfaceInfo.
 * @name: A D-Bus signal name (typically in CamelCase)
 *
 * Looks up information about a signal.
 * This cost of this function is O(n) in number of signals.
 *
 * Returns: A #GDBusSignalInfo or %NULL if not found. Do not free, it is owned by @info.
 * Since: 2.26
 */


/**
 * g_dbus_connection_flush_sync:
 * @connection: A #GDBusConnection.
 * @cancellable: A #GCancellable or %NULL.
 * @error: Return location for error or %NULL.
 *
 * Synchronously flushes @connection. The calling thread is blocked
 * until this is done. See g_dbus_connection_flush() for the
 * asynchronous version of this method and more details about what it
 * does.
 *
 * Returns: %TRUE if the operation succeeded, %FALSE if @error is set.
 * Since: 2.26
 */


/**
 * g_dbus_message_set_signature:
 * @message: A #GDBusMessage.
 * @value: The value to set.
 *
 * Convenience setter for the %G_DBUS_MESSAGE_HEADER_FIELD_SIGNATURE header field.
 *
 * Since: 2.26
 */


/**
 * g_file_make_symbolic_link:
 * @file: a #GFile with the name of the symlink to create
 * @symlink_value: a string with the path for the target of the new symlink
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError.
 *
 * Creates a symbolic link named @file which contains the string
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: %TRUE on the creation of a new symlink, %FALSE otherwise.
 */


/**
 * g_io_stream_has_pending:
 * @stream: a #GIOStream
 *
 * Checks if a stream has pending actions.
 *
 * Returns: %TRUE if @stream has pending actions.
 * Since: 2.22
 */


/**
 * g_dbus_message_get_message_type:
 * @message: A #GDBusMessage.
 *
 * Gets the type of @message.
 *
 * Returns: A 8-bit unsigned integer (typically a value from the #GDBusMessageType enumeration).
 * Since: 2.26
 */


/**
 * SECTION:gdbusnamewatchin:
 * @title: Watching Bus Names
 * @short_description: Simple API for watching bus names
 * @include: gio/gio.h
 *
 * Convenience API for watching bus names.
 * <example id="gdbus-watching-names"><title>Simple application watching a name</title><programlisting><xi:include xmlns:xi="http://www.w3.org/2001/XInclude" parse="text" href="../../../../gio/tests/gdbus-example-watch-name.c"><xi:fallback>FIXME: MISSING XINCLUDE CONTENT</xi:fallback></xi:include></programlisting></example>
 */


/**
 * GDBusProxy:g-flags:
 *
 * Flags from the #GDBusProxyFlags enumeration.
 *
 * Since: 2.26
 */


/**
 * g_socket_listener_new:
 *
 * Creates a new #GSocketListener with no sockets to listen for.
 * New listeners can be added with e.g. g_socket_listener_add_address()
 * or g_socket_listener_add_inet_port().
 *
 * Returns: a new #GSocketListener.
 * Since: 2.22
 */


/**
 * g_bus_watch_name_with_closures:
 * @bus_type: The type of bus to watch a name on.
 * @name: The name (well-known or unique) to watch.
 * @flags: Flags from the #GBusNameWatcherFlags enumeration.
 * @name_appeared_closure: (allow-none): #GClosure to invoke when @name is known to exist or %NULL.
 * @name_vanished_closure: (allow-none): #GClosure to invoke when @name is known to not exist or %NULL.
 *
 * Version of g_bus_watch_name() using closures instead of callbacks for
 * easier binding in other languages.
 * g_bus_unwatch_name() to stop watching the name.
 *
 * Returns: An identifier (never 0) that an be used with
 * Rename to: g_bus_watch_name
 * Since: 2.26
 */


/**
 * g_converter_output_stream_new:
 * @base_stream: a #GOutputStream
 * @converter: a #GConverter
 *
 * Creates a new converter output stream for the @base_stream.
 *
 * Returns: a new #GOutputStream.
 */


/**
 * g_async_result_get_user_data:
 * @res: a #GAsyncResult.
 *
 * Gets the user data from a #GAsyncResult.
 *
 * Returns: (transfer full): the user data for @res.
 */


/**
 * g_file_poll_mountable:
 * @file: input #GFile.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied, or %NULL.
 * @user_data: the data to pass to callback function
 *
 * Polls a file of type G_FILE_TYPE_MOUNTABLE.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * When the operation is finished, @callback will be called. You can then call
 * g_file_mount_mountable_finish() to get the result of the operation.
 *
 * Since: 2.22
 */


/**
 * g_socket_check_connect_result:
 * @socket: a #GSocket
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Checks and resets the pending connect error for the socket.
 * This is used to check for errors when g_socket_connect() is
 * used in non-blocking mode.
 *
 * Returns: %TRUE if no error, %FALSE otherwise, setting @error to the error
 * Since: 2.22
 */


/**
 * g_io_module_new:
 * @filename: filename of the shared library module.
 *
 * Creates a new GIOModule that will load the specific
 * shared library when in use.
 * or %NULL on error.
 *
 * Returns: a #GIOModule from given @filename,
 */


/**
 * g_application_new:
 * @application_id: the application id
 * @flags: the application flags
 * @returns: a new #GApplication instance
 *
 * Creates a new #GApplication instance.
 * This function calls g_type_init() for you.
 * The application id must be valid.  See g_application_id_is_valid().
 */


/**
 * g_dbus_connection_get_capabilities:
 * @connection: A #GDBusConnection.
 *
 * Gets the capabilities negotiated with the remote peer
 *
 * Returns: Zero or more flags from the #GDBusCapabilityFlags enumeration.
 * Since: 2.26
 */


/**
 * GSrvTarget:
 *
 * A single target host/port that a network service is running on.
 */


/**
 * g_dbus_connection_close:
 * @connection: A #GDBusConnection.
 * @cancellable: A #GCancellable or %NULL.
 * @callback: A #GAsyncReadyCallback to call when the request is satisfied or %NULL if you don't care about the result.
 * @user_data: The data to pass to @callback.
 *
 * Closes @connection. Note that this never causes the process to
 * exit (this might only happen if the other end of a shared message
 * bus connection disconnects, see #GDBusConnection:exit-on-close).
 * Once the connection is closed, operations such as sending a message
 * will return with the error %G_IO_ERROR_CLOSED. Closing a connection
 * will not automatically flush the connection so queued messages may
 * be lost. Use g_dbus_connection_flush() if you need such guarantees.
 * If @connection is already closed, this method fails with
 * %G_IO_ERROR_CLOSED.
 * When @connection has been closed, the #GDBusConnection::closed
 * signal is emitted in the <link
 * linkend="g-main-context-push-thread-default">thread-default main
 * loop</link> of the thread that @connection was constructed in.
 * This is an asynchronous method. When the operation is finished,
 * linkend="g-main-context-push-thread-default">thread-default main
 * loop</link> of the thread you are calling this method from. You can
 * then call g_dbus_connection_close_finish() to get the result of the
 * operation.  See g_dbus_connection_close_sync() for the synchronous
 * version.
 *
 * Since: 2.26
 */


/**
 * g_resolver_lookup_by_address:
 * @resolver: a #GResolver
 * @address: the address to reverse-resolve
 * @cancellable: a #GCancellable, or %NULL
 * @error: return location for a #GError, or %NULL
 *
 * Synchronously reverse-resolves @address to determine its
 * associated hostname.
 * If the DNS resolution fails, @error (if non-%NULL) will be set to
 * a value from #GResolverError.
 * If @cancellable is non-%NULL, it can be used to cancel the
 * operation, in which case @error (if non-%NULL) will be set to
 * %G_IO_ERROR_CANCELLED.
 * form), or %NULL on error.
 *
 * Returns: a hostname (either ASCII-only, or in ASCII-encoded
 * Since: 2.22
 */


/**
 * GDataStream:newline-type:
 *
 * The :newline-type property determines what is considered
 * as a line ending when reading complete lines from the stream.
 */


/**
 * SECTION:gdbusnameownin:
 * @title: Owning Bus Names
 * @short_description: Simple API for owning bus names
 * @include: gio/gio.h
 *
 * Convenience API for owning bus names.
 * <example id="gdbus-owning-names"><title>Simple application owning a name</title><programlisting><xi:include xmlns:xi="http://www.w3.org/2001/XInclude" parse="text" href="../../../../gio/tests/gdbus-example-own-name.c"><xi:fallback>FIXME: MISSING XINCLUDE CONTENT</xi:fallback></xi:include></programlisting></example>
 */


/**
 * GInetAddress:is-loopback:
 *
 * Whether this is the loopback address for its family.
 * See g_inet_address_get_is_loopback().
 *
 * Since: 2.22
 */


/**
 * GSettings:path:
 *
 * The path within the backend where the settings are stored.
 */


/**
 * GDBusMethodInvocationClass:
 *
 * Class structure for #GDBusMethodInvocation.
 *
 * Since: 2.26
 */


/**
 * g_dbus_method_invocation_get_user_data: (skip)
 * @invocation: A #GDBusMethodInvocation.
 *
 * Gets the @user_data #gpointer passed to g_dbus_connection_register_object().
 *
 * Returns: A #gpointer.
 * Since: 2.26
 */


/**
 * g_unix_mount_point_guess_icon:
 * @mount_point: a #GUnixMountPoint
 *
 * Guesses the icon of a Unix mount point.
 *
 * Returns: (transfer full): a #GIcon
 */


/**
 * g_settings_get:
 * @settings: a #GSettings object
 * @key: the key to get the value for
 * @format: a #GVariant format string
 * @...: arguments as per @format
 *
 * Gets the value that is stored at @key in @settings.
 * A convenience function that combines g_settings_get_value() with
 * g_variant_get().
 * It is a programmer error to give a @key that isn't contained in the
 * schema for @settings or for the #GVariantType of @format to mismatch
 * the type given in the schema.
 *
 * Since: 2.26
 */


/**
 * g_socket_control_message_get_size:
 * @message: a #GSocketControlMessage
 *
 * Returns the space required for the control message, not including
 * headers or alignment.
 *
 * Returns: The number of bytes required.
 * Since: 2.22
 */


/**
 * g_settings_new_with_path:
 * @schema: the name of the schema
 * @path: the path to use
 * @returns: a new #GSettings object
 *
 * Creates a new #GSettings object with a given schema and path.
 * You only need to do this if you want to directly create a settings
 * object with a schema that doesn't have a specified path of its own.
 * That's quite rare.
 * It is a programmer error to call this function for a schema that
 * has an explicitly specified path.
 *
 * Since: 2.26
 */


/**
 * g_file_info_set_edit_name:
 * @info: a #GFileInfo.
 * @edit_name: a string containing an edit name.
 *
 * Sets the edit name for the current file.
 * See %G_FILE_ATTRIBUTE_STANDARD_EDIT_NAME.
 */


/**
 * g_drive_can_start:
 * @drive: a #GDrive.
 *
 * Checks if a drive can be started.
 *
 * Returns: %TRUE if the @drive can be started, %FALSE otherwise.
 * Since: 2.22
 */


/**
 * g_socket_service_is_active:
 * @service: a #GSocketService
 *
 * Check whether the service is active or not. An active
 * service will accept new clients that connect, while
 * a non-active service will let connecting clients queue
 * up until the service is started.
 *
 * Returns: %TRUE if the service is active, %FALSE otherwise
 * Since: 2.22
 */


/**
 * g_unix_mount_at:
 * @mount_path: path for a possible unix mount.
 * @time_read: guint64 to contain a timestamp.
 *
 * Gets a #GUnixMountEntry for a given mount path. If @time_read
 * is set, it will be filled with a unix timestamp for checking
 * if the mounts have changed since with g_unix_mounts_changed_since().
 *
 * Returns: (transfer full): a #GUnixMount.
 */


/**
 * g_proxy_address_get_usernam:
 * @proxy: a #GProxyAddress
 *
 * Gets @proxy's username.
 *
 * Returns: the @proxy's username
 * Since: 2.26
 */


/**
 * g_initable_init:
 * @initable: a #GInitable.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError location to store the error occuring, or %NULL to ignore.
 *
 * Initializes the object implementing the interface. This must be
 * done before any real use of the object after initial construction.
 * Implementations may also support cancellation. If @cancellable is not %NULL,
 * then initialization can be cancelled by triggering the cancellable object
 * from another thread. If the operation was cancelled, the error
 * %G_IO_ERROR_CANCELLED will be returned. If @cancellable is not %NULL and
 * the object doesn't support cancellable initialization the error
 * %G_IO_ERROR_NOT_SUPPORTED will be returned.
 * If this function is not called, or returns with an error then all
 * operations on the object should fail, generally returning the
 * error %G_IO_ERROR_NOT_INITIALIZED.
 * Implementations of this method must be idempotent, i.e. multiple calls
 * to this function with the same argument should return the same results.
 * Only the first call initializes the object, further calls return the result
 * of the first call. This is so that its safe to implement the singleton
 * pattern in the GObject constructor function.
 * return %FALSE and set @error appropriately if present.
 *
 * Returns: %TRUE if successful. If an error has occurred, this function will
 * Since: 2.22
 */


/**
 * g_drive_enumerate_identifiers:
 * @drive: a #GDrive
 *
 * Gets the kinds of identifiers that @drive has.
 * Use g_drive_get_identifer() to obtain the identifiers
 * themselves.
 * kinds of identifiers. Use g_strfreev() to free.
 *
 * Returns: (transfer full): a %NULL-terminated array of strings containing
 */


/**
 * g_volume_monitor_get_volumes:
 * @volume_monitor: a #GVolumeMonitor.
 *
 * Gets a list of the volumes on the system.
 * The returned list should be freed with g_list_free(), after
 * its elements have been unreffed with g_object_unref().
 *
 * Returns: (element-type GVolume) (transfer full): a #GList of #GVolume objects.
 */


/**
 * g_dbus_message_new_signal:
 * @path: A valid object path.
 * @interface_: A valid D-Bus interface name.
 * @signal: A valid signal name.
 *
 * Creates a new #GDBusMessage for a signal emission.
 *
 * Returns: A #GDBusMessage. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * g_settings_bind_writable:
 * @settings: a #GSettings object
 * @key: the key to bind
 * @object: a #GObject
 * @property: the name of a boolean property to bind
 * @inverted: whether to 'invert' the value
 *
 * Create a binding between the writability of @key in the
 * The property must be boolean; "sensitive" or "visible"
 * properties of widgets are the most likely candidates.
 * Writable bindings are always uni-directional; changes of the
 * writability of the setting will be propagated to the object
 * property, not the other way.
 * When the @inverted argument is %TRUE, the binding inverts the
 * value as it passes from the setting to the object, i.e. @property
 * will be set to %TRUE if the key is <emphasis>not</emphasis>
 * writable.
 * Note that the lifecycle of the binding is tied to the object,
 * and that you can have only one binding per object property.
 * If you bind the same property twice on the same object, the second
 * binding overrides the first one.
 *
 * Since: 2.26
 */


/**
 * g_memory_input_stream_new_from_data:
 * @data: input data
 * @len: length of the data, may be -1 if @data is a nul-terminated string
 * @destroy: function that is called to free @data, or %NULL
 *
 * Creates a new #GMemoryInputStream with data in memory of a given size.
 *
 * Returns: new #GInputStream read from @data of @len bytes.
 */


/**
 * g_socket_connection_get_socket:
 * @connection: a #GSocketConnection
 *
 * Gets the underlying #GSocket object of the connection.
 * This can be useful if you want to do something unusual on it
 * not supported by the #GSocketConnection APIs.
 *
 * Returns: (transfer none): a #GSocketAddress or %NULL on error.
 * Since: 2.22
 */


/**
 * g_input_stream_is_closed:
 * @stream: input stream.
 *
 * Checks if an input stream is closed.
 *
 * Returns: %TRUE if the stream is closed.
 */


/**
 * g_credentials_get_native: (skip)
 * @credentials: A #GCredentials.
 * @native_type: The type of native credentials to get.
 *
 * Gets a pointer to native credentials of type @native_type from
 * It is a programming error (which will cause an warning to be
 * logged) to use this method if there is no #GCredentials support for
 * the OS or if @native_type isn't supported by the OS.
 * operation there is no #GCredentials support for the OS or if
 * data, it is owned by @credentials.
 *
 * Returns: The pointer to native credentials or %NULL if the
 * Since: 2.26
 */


/**
 * g_file_replace_contents:
 * @file: input #GFile.
 * @contents: a string containing the new contents for @file.
 * @length: the length of @contents in bytes.
 * @etag: (allow-none): the old <link linkend="gfile-etag">entity tag</link> for the document, or %NULL
 * @make_backup: %TRUE if a backup should be created.
 * @flags: a set of #GFileCreateFlags.
 * @new_etag: (allow-none) (out): a location to a new <link linkend="gfile-etag">entity tag</link> for the document. This should be freed with g_free() when no longer needed, or %NULL
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Replaces the contents of @file with @contents of @length bytes.
 * If @etag is specified (not %NULL) any existing file must have that etag, or
 * the error %G_IO_ERROR_WRONG_ETAG will be returned.
 * If @make_backup is %TRUE, this function will attempt to make a backup of @file.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * The returned @new_etag can be used to verify that the file hasn't changed the
 * next time it is saved over.
 * has occurred, this function will return %FALSE and set @error
 * appropriately if present.
 *
 * Returns: %TRUE if successful. If an error
 */


/**
 * g_inet_address_to_bytes:
 * @address: a #GInetAddress
 *
 * Gets the raw binary address data from @address.
 * which should not be modified, stored, or freed. The size of this
 * array can be gotten with g_inet_address_get_native_size().
 *
 * Returns: a pointer to an internal array of the bytes in @address,
 * Since: 2.22
 */


/**
 * g_file_get_path:
 * @file: input #GFile.
 *
 * Gets the local pathname for #GFile, if one exists.
 * This call does no blocking i/o.
 * no such path exists. The returned string should be
 * freed with g_free() when no longer needed.
 *
 * Returns: string containing the #GFile's path, or %NULL if
 */


/**
 * g_file_input_stream_query_info:
 * @stream: a #GFileInputStream.
 * @attributes: a file attribute query string.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError location to store the error occuring, or %NULL to ignore.
 *
 * Queries a file input stream the given @attributes. This function blocks
 * while querying the stream. For the asynchronous (non-blocking) version
 * of this function, see g_file_input_stream_query_info_async(). While the
 * stream is blocked, the stream will set the pending flag internally, and
 * any other operations on the stream will fail with %G_IO_ERROR_PENDING.
 *
 * Returns: (transfer full): a #GFileInfo, or %NULL on error.
 */


/**
 * g_permission_acquire_finish:
 * @permission: a #GPermission instance
 * @result: the #GAsyncResult given to the #GAsyncReadyCallback
 * @error: a pointer to a %NULL #GError, or %NULL
 * @returns: %TRUE if the permission was successfully acquired
 *
 * Collects the result of attempting to acquire the permission
 * represented by @permission.
 * This is the second half of the asynchronous version of
 * g_permission_acquire().
 *
 * Since: 2.26
 */


/**
 * g_file_mount_enclosing_volume_finish:
 * @location: input #GFile.
 * @result: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes a mount operation started by g_file_mount_enclosing_volume().
 * has occurred, this function will return %FALSE and set @error
 * appropriately if present.
 *
 * Returns: %TRUE if successful. If an error
 */


/**
 * g_application_id_is_valid:
 * @application_id: a potential application identifier
 * @returns: %TRUE if @application_id is valid
 *
 * Checks if @application_id is a valid application identifier.
 * A valid ID is required for calls to g_application_new() and
 * g_application_set_application_id().
 * For convenience, the restrictions on application identifiers are
 * reproduced here:
 * <itemizedlist>
 * <listitem>Application identifiers must contain only the ASCII characters "[A-Z][a-z][0-9]_-" and must not begin with a digit.</listitem>
 * <listitem>Application identifiers must contain at least one '.' (period) character (and thus at least two elements).</listitem>
 * <listitem>Application identifiers must not begin with a '.' (period) character.</listitem>
 * <listitem>Application identifiers must not contain consecutive '.' (period) characters.</listitem>
 * <listitem>Application identifiers must not exceed 255 characters.</listitem>
 * </itemizedlist>
 */


/**
 * g_resolver_lookup_service_async:
 * @resolver: a #GResolver
 * @service: the service type to look up (eg, "ldap")
 * @protocol: the networking protocol to use for @service (eg, "tcp")
 * @domain: the DNS domain to look up the service in
 * @cancellable: a #GCancellable, or %NULL
 * @callback: callback to call after resolution completes
 * @user_data: data for @callback
 *
 * Begins asynchronously performing a DNS SRV lookup for the given
 * get the final result. See g_resolver_lookup_service() for more
 * details.
 *
 * Since: 2.22
 */


/**
 * g_proxy_resolver_lookup:
 * @resolver: a #GProxyResolver
 * @uri: a URI representing the destination to connect to
 * @cancellable: a #GCancellable, or %NULL
 * @error: return location for a #GError, or %NULL
 *
 * Looks into the system proxy configuration to determine what proxy,
 * if any, to use to connect to @uri. The returned proxy URIs are of the
 * form <literal>&lt;protocol&gt;://[user[:password]@]host:port</literal>
 * or <literal>direct://</literal>, where &lt;protocol&gt; could be
 * http, rtsp, socks or other proxying protocol.
 * If you don't know what network protocol is being used on the
 * socket, you should use <literal>none</literal> as the URI protocol.
 * In this case, the resolver might still return a generic proxy type
 * (such as SOCKS), but would not return protocol-specific proxy types
 * (such as http).
 * <literal>direct://</literal> is used when no proxy is needed.
 * Direct connection should not be attempted unless it is part of the
 * returned array of proxies.
 * g_strfreev().
 *
 * Returns: (transfer full) (element-type utf8): A NULL-terminated array of proxy URIs. Must be freed with
 * Since: 2.26
 */


/**
 * g_data_output_stream_new:
 * @base_stream: a #GOutputStream.
 *
 * Creates a new data output stream for @base_stream.
 *
 * Returns: #GDataOutputStream.
 */


/**
 * g_file_make_director:
 * @file: input #GFile.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Creates a directory. Note that this will only create a child directory of
 * the immediate parent directory of the path or URI given by the #GFile. To
 * recursively create directories, see g_file_make_directory_with_parents().
 * This function will fail if the parent directory does not exist, setting
 * directories, this function will fail, setting @error to
 * %G_IO_ERROR_NOT_SUPPORTED.
 * For a local #GFile the newly created directory will have the default
 * (current) ownership and permissions of the current process.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: %TRUE on successful creation, %FALSE otherwise.
 */


/**
 * g_zlib_compressor_set_file_info:
 * @compressor: a #GZlibCompressor
 * @file_info: (allow-none): a #GFileInfo
 *
 * Sets @file_info in @compressor. If non-%NULL, and @compressor's
 * #GZlibCompressor:format property is %G_ZLIB_COMPRESSOR_FORMAT_GZIP,
 * it will be used to set the file name and modification time in
 * the GZIP header of the compressed data.
 * progress; it may only be called immediately after creation of @compressor,
 * or after resetting it with g_converter_reset().
 *
 * Note: it is an error to call this function while a compression is in
 * Since: 2.26
 */


/**
 * g_cancellable_make_pollfd:
 * @cancellable: a #GCancellable or %NULL
 * @pollfd: a pointer to a #GPollFD
 *
 * Creates a #GPollFD corresponding to @cancellable; this can be passed
 * to g_poll() and used to poll for cancellation. This is useful both
 * for unix systems without a native poll and for portability to
 * windows.
 * When this function returns %TRUE, you should use
 * g_cancellable_release_fd() to free up resources allocated for the
 * If this function returns %FALSE, either no @cancellable was given or
 * resource limits prevent this function from allocating the necessary
 * structures for polling. (On Linux, you will likely have reached
 * the maximum number of file descriptors.) The suggested way to handle
 * these cases is to ignore the @cancellable.
 * You are not supposed to read from the fd yourself, just check for
 * readable status. Reading to unset the readable status is done
 * with g_cancellable_reset().
 * failure to prepare the cancellable.
 *
 * Returns: %TRUE if @pollfd was successfully initialized, %FALSE on
 * Since: 2.22
 */


/**
 * g_file_icon_get_file:
 * @icon: a #GIcon.
 *
 * Gets the #GFile associated with the given @icon.
 *
 * Returns: (transfer none): a #GFile, or %NULL.
 */


/**
 * g_seekable_seek:
 * @seekable: a #GSeekable.
 * @offset: a #goffset.
 * @type: a #GSeekType.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError location to store the error occuring, or %NULL to ignore.
 *
 * Seeks in the stream by the given @offset, modified by @type.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * has occurred, this function will return %FALSE and set @error
 * appropriately if present.
 *
 * Returns: %TRUE if successful. If an error
 */


/**
 * SECTION:gcontenttyp:
 * @short_description: Platform-specific content typing
 * @include: gio/gio.h
 *
 * A content type is a platform specific string that defines the type
 * of a file. On unix it is a mime type, on win32 it is an extension string
 * like ".doc", ".txt" or a percieved string like "audio". Such strings
 * can be looked up in the registry at HKEY_CLASSES_ROOT.
 */


/**
 * GDBusConnection:locked:
 *
 * A boolean specifying whether the message is locked.
 *
 * Since: 2.26
 */


/**
 * g_dbus_proxy_call_finish:
 * @proxy: A #GDBusProxy.
 * @res: A #GAsyncResult obtained from the #GAsyncReadyCallback passed to g_dbus_proxy_call().
 * @error: Return location for error or %NULL.
 *
 * Finishes an operation started with g_dbus_proxy_call().
 * return values. Free with g_variant_unref().
 *
 * Returns: %NULL if @error is set. Otherwise a #GVariant tuple with
 * Since: 2.26
 */


/**
 * g_socket_client_get_timeout:
 * @client: a #GSocketClient
 *
 * Gets the I/O timeout time for sockets created by @client.
 * See g_socket_client_set_timeout() for details.
 *
 * Returns: the timeout in seconds
 * Since: 2.26
 */


/**
 * g_socket_address_to_native:
 * @address: a #GSocketAddress
 * @dest: a pointer to a memory location that will contain the native <type>struct sockaddr</type>.
 * @destlen: the size of @dest. Must be at least as large as g_socket_address_get_native_size().
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Converts a #GSocketAddress to a native <type>struct
 * sockaddr</type>, which can be passed to low-level functions like
 * connect() or bind().
 * If not enough space is availible, a %G_IO_ERROR_NO_SPACE error is
 * returned. If the address type is not known on the system
 * then a %G_IO_ERROR_NOT_SUPPORTED error is returned.
 *
 * Returns: %TRUE if @dest was filled in, %FALSE on error
 * Since: 2.22
 */


/**
 * g_bus_own_name_on_connection_with_closures:
 * @connection: A #GDBusConnection.
 * @name: The well-known name to own.
 * @flags: A set of flags from the #GBusNameOwnerFlags enumeration.
 * @name_acquired_closure: (allow-none): #GClosure to invoke when @name is acquired or %NULL.
 * @name_lost_closure: (allow-none): #GClosure to invoke when @name is lost or %NULL.
 *
 * Version of g_bus_own_name_on_connection() using closures instead of callbacks for
 * easier binding in other languages.
 * g_bus_unown_name() to stop owning the name.
 *
 * Returns: An identifier (never 0) that an be used with
 * Rename to: g_bus_own_name_on_connection
 * Since: 2.26
 */


/**
 * g_socket_client_connect:
 * @client: a #GSocketClient.
 * @connectable: a #GSocketConnectable specifying the remote address.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Tries to resolve the @connectable and make a network connection to it..
 * Upon a successful connection, a new #GSocketConnection is constructed
 * and returned.  The caller owns this new object and must drop their
 * reference to it when finished with it.
 * The type of the #GSocketConnection object returned depends on the type of
 * the underlying socket that is used. For instance, for a TCP/IP connection
 * it will be a #GTcpConnection.
 * The socket created will be the same family as the the address that the
 * or indirectly via g_socket_client_set_local_address(). The socket type
 * defaults to %G_SOCKET_TYPE_STREAM but can be set with
 * g_socket_client_set_socket_type().
 * If a local address is specified with g_socket_client_set_local_address() the
 * socket will be bound to this address before connecting.
 *
 * Returns: (transfer full): a #GSocketConnection on success, %NULL on error.
 * Since: 2.22
 */


/**
 * g_settings_unbind:
 * @object: the object
 * @property: the property whose binding is removed
 *
 * Removes an existing binding for @property on @object.
 * Note that bindings are automatically removed when the
 * object is finalized, so it is rarely necessary to call this
 * function.
 *
 * Since: 2.26
 */


/**
 * g_file_input_stream_query_info_finish:
 * @stream: a #GFileInputStream.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occuring, or %NULL to ignore.
 *
 * Finishes an asynchronous info query operation.
 *
 * Returns: (transfer full): #GFileInfo.
 */


/**
 * GInetAddress:is-mc-link-local:
 *
 * Whether this is a link-local multicast address.
 * See g_inet_address_get_is_mc_link_local().
 *
 * Since: 2.22
 */


/**
 * GUnixCredentialsMessage:credentials:
 *
 * The credentials stored in the message.
 *
 * Since: 2.26
 */


/**
 * g_mount_is_shadowed:
 * @mount: A #GMount.
 *
 * Determines if @mount is shadowed. Applications or libraries should
 * avoid displaying @mount in the user interface if it is shadowed.
 * A mount is said to be shadowed if there exists one or more user
 * visible objects (currently #GMount objects) with a root that is
 * inside the root of @mount.
 * One application of shadow mounts is when exposing a single file
 * system that is used to address several logical volumes. In this
 * situation, a #GVolumeMonitor implementation would create two
 * #GVolume objects (for example, one for the camera functionality of
 * the device and one for a SD card reader on the device) with
 * activation URIs <literal>gphoto2://[usb:001,002]/store1/</literal>
 * and <literal>gphoto2://[usb:001,002]/store2/</literal>. When the
 * underlying mount (with root
 * <literal>gphoto2://[usb:001,002]/</literal>) is mounted, said
 * #GVolumeMonitor implementation would create two #GMount objects
 * (each with their root matching the corresponding volume activation
 * root) that would shadow the original mount.
 * The proxy monitor in GVfs 2.26 and later, automatically creates and
 * manage shadow mounts (and shadows the underlying mount) if the
 * activation root on a #GVolume is set.
 *
 * Returns: %TRUE if @mount is shadowed.
 * Since: 2.20
 */


/**
 * g_io_scheduler_push_job:
 * @job_func: a #GIOSchedulerJobFunc.
 * @user_data: data to pass to @job_func
 * @notify: a #GDestroyNotify for @user_data, or %NULL
 * @io_priority: the <link linkend="gioscheduler">I/O priority</link> of the request.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 *
 * Schedules the I/O job to run.
 * regardless whether the job was cancelled or has run to completion.
 * If @cancellable is not %NULL, it can be used to cancel the I/O job
 * by calling g_cancellable_cancel() or by calling
 * g_io_scheduler_cancel_all_jobs().
 */


/**
 * g_dbus_message_set_serial:
 * @message: A #GDBusMessage.
 * @serial: A #guint32.
 *
 * Sets the serial for @message.
 *
 * Since: 2.26
 */


/**
 * g_dbus_auth_observer_authorize_authenticated_peer:
 * @observer: A #GDBusAuthObserver.
 * @stream: A #GIOStream for the #GDBusConnection.
 * @credentials: Credentials received from the peer or %NULL.
 *
 * Emits the #GDBusAuthObserver::authorize-authenticated-peer signal on @observer.
 *
 * Returns: %TRUE if the peer is authorized, %FALSE if not.
 * Since: 2.26
 */


/**
 * g_io_stream_get_output_stream:
 * @stream: a #GIOStream
 *
 * Gets the output stream for this object. This is used for
 * writing.
 * Do not free.
 *
 * Returns: (transfer none): a #GOutputStream, owned by the #GIOStream.
 * Since: 2.22
 */


/**
 * g_file_query_settable_attributes:
 * @file: input #GFile.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Obtain the list of settable attributes for the file.
 * Returns the type and full attribute name of all the attributes
 * that can be set on this file. This doesn't mean setting it will always
 * succeed though, you might get an access failure, or some specific
 * file may not support a specific attribute.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * When you are done with it, release it with g_file_attribute_info_list_unref()
 *
 * Returns: a #GFileAttributeInfoList describing the settable attributes.
 */


/**
 * GActionGroup::action-added:
 * @action_group: the #GActionGroup that changed
 * @action_name: the name of the action in @action_group
 *
 * Signals that a new action was just added to the group.  This signal
 * is emitted after the action has been added and is now visible.
 *
 * Since: 2.28
 */


/**
 * GWin32InputStream:close-handle:
 *
 * Whether to close the file handle when the stream is closed.
 *
 * Since: 2.26
 */


/**
 * g_socket_listener_set_backlog:
 * @listener: a #GSocketListener
 * @listen_backlog: an integer
 *
 * Sets the listen backlog on the sockets in the listener.
 * See g_socket_set_listen_backlog() for details
 *
 * Since: 2.22
 */


/**
 * GFilenameCompleter::got-completion-data:
 *
 * Emitted when the file name completion information comes available.
 */


/**
 * g_dbus_connection_flush_finish:
 * @connection: A #GDBusConnection.
 * @res: A #GAsyncResult obtained from the #GAsyncReadyCallback passed to g_dbus_connection_flush().
 * @error: Return location for error or %NULL.
 *
 * Finishes an operation started with g_dbus_connection_flush().
 *
 * Returns: %TRUE if the operation succeeded, %FALSE if @error is set.
 * Since: 2.26
 */


/**
 * g_dbus_method_invocation_get_message:
 * @invocation: A #GDBusMethodInvocation.
 *
 * Gets the #GDBusMessage for the method invocation. This is useful if
 * you need to use low-level protocol features, such as UNIX file
 * descriptor passing, that cannot be properly expressed in the
 * #GVariant API.
 * See <xref linkend="gdbus-server"/> and <xref
 * linkend="gdbus-unix-fd-client"/> for an example of how to use this
 * low-level API to send and receive UNIX file descriptors.
 *
 * Returns: (transfer none): #GDBusMessage. Do not free, it is owned by @invocation.
 * Since: 2.26
 */


/**
 * g_socket_create_source:
 * @socket: a #GSocket
 * @condition: a #GIOCondition mask to monitor
 * @cancellable: a %GCancellable or %NULL
 *
 * Creates a %GSource that can be attached to a %GMainContext to monitor
 * for the availibility of the specified @condition on the socket.
 * The callback on the source is of the #GSocketSourceFunc type.
 * It is meaningless to specify %G_IO_ERR or %G_IO_HUP in @condition;
 * these conditions will always be reported output if they are true.
 * cause the source to trigger, reporting the current condition (which
 * is likely 0 unless cancellation happened at the same time as a
 * condition change). You can check for this in the callback using
 * g_cancellable_is_cancelled().
 * If @socket has a timeout set, and it is reached before @condition
 * occurs, the source will then trigger anyway, reporting %G_IO_IN or
 * %G_IO_OUT depending on @condition. However, @socket will have been
 * marked as having had a timeout, and so the next #GSocket I/O method
 * you call will then fail with a %G_IO_ERROR_TIMED_OUT.
 *
 * Returns: (transfer full): a newly allocated %GSource, free with g_source_unref().
 * Since: 2.22
 */


/**
 * g_file_attribute_matcher_enumerate_namespace:
 * @matcher: a #GFileAttributeMatcher.
 * @ns: a string containing a file attribute namespace.
 *
 * Checks if the matcher will match all of the keys in a given namespace.
 * This will always return %TRUE if a wildcard character is in use (e.g. if
 * matcher was created with "standard::*" and @ns is "standard", or if matcher was created
 * using "*" and namespace is anything.)
 * in the given @ns, %FALSE otherwise.
 *
 * Todo: this is awkwardly worded.
 * Returns: %TRUE if the matcher matches all of the entries
 */


/**
 * g_simple_async_result_get_op_res_gboolean:
 * @simple: a #GSimpleAsyncResult.
 *
 * Gets the operation result boolean from within the asynchronous result.
 * if the operation's result was %FALSE.
 *
 * Returns: %TRUE if the operation's result was %TRUE, %FALSE
 */


/**
 * SECTION:gnetworkaddres:
 * @short_description: A GSocketConnectable for resolving hostnames
 * @include: gio/gio.h
 *
 * #GNetworkAddress provides an easy way to resolve a hostname and
 * then attempt to connect to that host, handling the possibility of
 * multiple IP addresses and multiple address families.
 * See #GSocketConnectable for and example of using the connectable
 * interface.
 */


/**
 * g_application_get_is_remote:
 * @application: a #GApplication
 * @returns: %TRUE if @application is remote
 *
 * Checks if @application is remote.
 * If @application is remote then it means that another instance of
 * application already exists (the 'primary' instance).  Calls to
 * perform actions on @application will result in the actions being
 * performed by the primary instance.
 * The value of this property can not be accessed before
 * g_application_register() has been called.  See
 * g_application_get_is_registered().
 *
 * Since: 2.28
 */


/**
 * GVolumeMonitor::drive-changed:
 * @volume_monitor: The volume monitor emitting the signal.
 * @drive: the drive that changed
 *
 * Emitted when a drive changes.
 */


/**
 * g_credentials_get_unix_user:
 * @credentials: A #GCredentials
 * @error: Return location for error or %NULL.
 *
 * Tries to get the UNIX user identifier from @credentials. This
 * method is only available on UNIX platforms.
 * This operation can fail if #GCredentials is not supported on the
 * OS or if the native credentials type does not contain information
 * about the UNIX user.
 *
 * Returns: The UNIX user identifier or -1 if @error is set.
 * Since: 2.26
 */


/**
 * SECTION:gemblemedico:
 * @short_description: Icon with emblems
 * @include: gio/gio.h
 * @see_also: #GIcon, #GLoadableIcon, #GThemedIcon, #GEmblem
 *
 * #GEmblemedIcon is an implementation of #GIcon that supports
 * adding an emblem to an icon. Adding multiple emblems to an
 * icon is ensured via g_emblemed_icon_add_emblem().
 * Note that #GEmblemedIcon allows no control over the position
 * of the emblems. See also #GEmblem for more information.
 */


/**
 * g_file_enumerator_set_pending:
 * @enumerator: a #GFileEnumerator.
 * @pending: a boolean value.
 *
 * Sets the file enumerator as having pending operations.
 */


/**
 * g_dbus_proxy_get_default_timeout:
 * @proxy: A #GDBusProxy.
 *
 * Gets the timeout to use if -1 (specifying default timeout) is
 * passed as @timeout_msec in the g_dbus_proxy_call() and
 * g_dbus_proxy_call_sync() functions.
 * See the #GDBusProxy:g-default-timeout property for more details.
 *
 * Returns: Timeout to use for @proxy.
 * Since: 2.26
 */


/**
 * g_application_release:
 * @application: a #GApplication
 *
 * Decrease the use count of @application.
 * When the use count reaches zero, the application will stop running.
 * Never call this function except to cancel the effect of a previous
 * call to g_application_hold().
 */


/**
 * GSocketService::incoming:
 * @service: the #GSocketService.
 * @connection: a new #GSocketConnection object.
 * @source_object: the source_object passed to g_socket_listener_add_address().
 *
 * The ::incoming signal is emitted when a new incoming connection
 * to @service needs to be handled. The handler must initiate the
 * handling of @connection, but may not block; in essence,
 * asynchronous operations must be used.
 *
 * Returns: %TRUE to stop other handlers from being called
 * Since: 2.22
 */


/**
 * g_io_error_from_errno:
 * @err_no: Error number as defined in errno.h.
 *
 * Converts errno.h error codes into GIO error codes.
 *
 * Returns: #GIOErrorEnum value for the given errno.h error number.
 */


/**
 * g_file_enumerator_get_container:
 * @enumerator: a #GFileEnumerator
 *
 * Get the #GFile container which is being enumerated.
 *
 * Returns: (transfer full): the #GFile which is being enumerated.
 * Since: 2.18
 */


/**
 * g_volume_monitor_adopt_orphan_mount:
 * @mount: a #GMount object to find a parent for
 *
 * This function should be called by any #GVolumeMonitor
 * implementation when a new #GMount object is created that is not
 * associated with a #GVolume object. It must be called just before
 * emitting the @mount_added signal.
 * If the return value is not %NULL, the caller must associate the
 * returned #GVolume object with the #GMount. This involves returning
 * it in its g_mount_get_volume() implementation. The caller must
 * also listen for the "removed" signal on the returned object
 * and give up its reference when handling that signal
 * Similary, if implementing g_volume_monitor_adopt_orphan_mount(),
 * the implementor must take a reference to @mount and return it in
 * its g_volume_get_mount() implemented. Also, the implementor must
 * listen for the "unmounted" signal on @mount and give up its
 * reference upon handling that signal.
 * There are two main use cases for this function.
 * One is when implementing a user space file system driver that reads
 * blocks of a block device that is already represented by the native
 * volume monitor (for example a CD Audio file system driver). Such
 * a driver will generate its own #GMount object that needs to be
 * assoicated with the #GVolume object that represents the volume.
 * The other is for implementing a #GVolumeMonitor whose sole purpose
 * is to return #GVolume objects representing entries in the users
 * "favorite servers" list or similar.
 * if no wants to adopt the #GMount.
 * implementations should instead create shadow mounts with the URI of
 * the mount they intend to adopt. See the proxy volume monitor in
 * gvfs for an example of this. Also see g_mount_is_shadowed(),
 * g_mount_shadow() and g_mount_unshadow() functions.
 *
 * Returns: (transfer full): the #GVolume object that is the parent for @mount or %NULL
 * Deprecated: 2.20: Instead of using this function, #GVolumeMonitor
 */


/**
 * g_action_get_state:
 * @action: a #GAction
 *
 * Queries the current state of @action.
 * If the action is not stateful then %NULL will be returned.  If the
 * action is stateful then the type of the return value is the type
 * given by g_action_get_state_type().
 * The return value (if non-%NULL) should be freed with
 * g_variant_unref() when it is no longer required.
 *
 * Returns: (transfer full): the current state of the action
 * Since: 2.28
 */


/**
 * g_dbus_connection_emit_signal:
 * @connection: A #GDBusConnection.
 * @destination_bus_name: The unique bus name for the destination for the signal or %NULL to emit to all listeners.
 * @object_path: Path of remote object.
 * @interface_name: D-Bus interface to emit a signal on.
 * @signal_name: The name of the signal to emit.
 * @parameters: A #GVariant tuple with parameters for the signal or %NULL if not passing parameters.
 * @error: Return location for error or %NULL.
 *
 * Emits a signal.
 * If the parameters GVariant is floating, it is consumed.
 * This can only fail if @parameters is not compatible with the D-Bus protocol.
 *
 * Returns: %TRUE unless @error is set.
 * Since: 2.26
 */


/**
 * g_emblemed_icon_add_emblem:
 * @emblemed: a #GEmblemedIcon
 * @emblem: a #GEmblem
 *
 * Adds @emblem to the #GList of #GEmblem <!-- -->s.
 *
 * Since: 2.18
 */


/**
 * g_emblem_get_icon:
 * @emblem: a #GEmblem from which the icon should be extracted.
 *
 * Gives back the icon from @emblem.
 * and should not be modified or freed.
 *
 * Returns: (transfer full): a #GIcon. The returned object belongs to the emblem
 * Since: 2.18
 */


/**
 * SECTION:gfilemonito:
 * @short_description: File Monitor
 * @include: gio/gio.h
 *
 * Monitors a file or directory for changes.
 * To obtain a #GFileMonitor for a file or directory, use
 * g_file_monitor(), g_file_monitor_file(), or
 * g_file_monitor_directory().
 * To get informed about changes to the file or directory you are
 * monitoring, connect to the #GFileMonitor::changed signal. The
 * signal will be emitted in the <link
 * linkend="g-main-context-push-thread-default">thread-default main
 * context</link> of the thread that the monitor was created in
 * (though if the global default main context is blocked, this may
 * cause notifications to be blocked even if the thread-default
 * context is still running).
 */


/**
 * g_dbus_node_info_ref:
 * @info: A #GDBusNodeInfo
 *
 * If @info is statically allocated does nothing. Otherwise increases
 * the reference count.
 *
 * Returns: The same @info.
 * Since: 2.26
 */


/**
 * g_action_get_enabled:
 * @action: a #GAction
 *
 * Checks if @action is currently enabled.
 * An action must be enabled in order to be activated or in order to
 * have its state changed from outside callers.
 *
 * Returns: whether the action is enabled
 * Since: 2.28
 */


/**
 * g_dbus_connection_new_for_address:
 * @address: A D-Bus address.
 * @flags: Flags describing how to make the connection.
 * @observer: A #GDBusAuthObserver or %NULL.
 * @cancellable: A #GCancellable or %NULL.
 * @callback: A #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: The data to pass to @callback.
 *
 * Asynchronously connects and sets up a D-Bus client connection for
 * exchanging D-Bus messages with an endpoint specified by @address
 * which must be in the D-Bus address format.
 * This constructor can only be used to initiate client-side
 * connections - use g_dbus_connection_new() if you need to act as the
 * server. In particular, @flags cannot contain the
 * %G_DBUS_CONNECTION_FLAGS_AUTHENTICATION_SERVER or
 * %G_DBUS_CONNECTION_FLAGS_AUTHENTICATION_ALLOW_ANONYMOUS flags.
 * When the operation is finished, @callback will be invoked. You can
 * then call g_dbus_connection_new_finish() to get the result of the
 * operation.
 * If @observer is not %NULL it may be used to control the
 * authentication process.
 * This is a asynchronous failable constructor. See
 * g_dbus_connection_new_for_address_sync() for the synchronous
 * version.
 *
 * Since: 2.26
 */


/**
 * g_drive_get_identifier:
 * @drive: a #GDrive
 * @kind: the kind of identifier to return
 *
 * Gets the identifier of the given kind for @drive.
 * requested identfier, or %NULL if the #GDrive
 * doesn't have this kind of identifier.
 *
 * Returns: a newly allocated string containing the
 */


/**
 * GMountOperation:password:
 *
 * The password that is used for authentication when carrying out
 * the mount operation.
 */


/**
 * g_network_service_set_scheme:
 * @srv: a #GNetworkService
 * @scheme: a URI scheme
 *
 * Set's the URI scheme used to resolve proxies. By default, the service name
 * is used as scheme.
 *
 * Since: 2.26
 */


/**
 * g_win32_output_stream_new:
 * @handle: a Win32 file handle
 * @close_handle: %TRUE to close the handle when done
 *
 * Creates a new #GWin32OutputStream for the given @handle.
 * If @close_handle, is %TRUE, the handle will be closed when the
 * output stream is destroyed.
 *
 * Returns: a new #GOutputStream
 * Since: 2.26
 */


/**
 * g_volume_get_mount:
 * @volume: a #GVolume.
 *
 * Gets the mount for the @volume.
 * The returned object should be unreffed with g_object_unref()
 * when no longer needed.
 *
 * Returns: (transfer full): a #GMount or %NULL if @volume isn't mounted.
 */


/**
 * g_unix_socket_address_new:
 * @path: the socket path
 *
 * Creates a new #GUnixSocketAddress for @path.
 * To create abstract socket addresses, on systems that support that,
 * use g_unix_socket_address_new_abstract().
 *
 * Returns: a new #GUnixSocketAddress
 * Since: 2.22
 */


/**
 * GMountOperation:password-save:
 *
 * Determines if and how the password information should be saved.
 */


/**
 * g_dbus_proxy_get_flags:
 * @proxy: A #GDBusProxy.
 *
 * Gets the flags that @proxy was constructed with.
 *
 * Returns: Flags from the #GDBusProxyFlags enumeration.
 * Since: 2.26
 */


/**
 * g_inet_address_get_is_mc_global:
 * @address: a #GInetAddress
 *
 * Tests whether @address is a global multicast address.
 *
 * Returns: %TRUE if @address is a global multicast address.
 * Since: 2.22
 */


/**
 * GPermission:can-acquire:
 *
 * %TRUE if it is generally possible to acquire the permission by calling
 * g_permission_acquire().
 */


/**
 * GMemoryOutputStream:realloc-function:
 *
 * Function with realloc semantics called to enlarge the buffer.
 *
 * Since: 2.24
 */


/**
 * g_unix_input_stream_get_close_fd:
 * @stream: a #GUnixInputStream
 *
 * Returns whether the file descriptor of @stream will be
 * closed when the stream is closed.
 *
 * Returns: %TRUE if the file descriptor is closed when done
 * Since: 2.20
 */


/**
 * g_dbus_proxy_new_sync:
 * @connection: A #GDBusConnection.
 * @flags: Flags used when constructing the proxy.
 * @info: (allow-none): A #GDBusInterfaceInfo specifying the minimal interface that @proxy conforms to or %NULL.
 * @name: (allow-none): A bus name (well-known or unique) or %NULL if @connection is not a message bus connection.
 * @object_path: An object path.
 * @interface_name: A D-Bus interface name.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @error: (allow-none): Return location for error or %NULL.
 *
 * Creates a proxy for accessing @interface_name on the remote object
 * at @object_path owned by @name at @connection and synchronously
 * loads D-Bus properties unless the
 * %G_DBUS_PROXY_FLAGS_DO_NOT_LOAD_PROPERTIES flag is used.
 * If the %G_DBUS_PROXY_FLAGS_DO_NOT_CONNECT_SIGNALS flag is not set, also sets up
 * match rules for signals. Connect to the #GDBusProxy::g-signal signal
 * to handle signals from the remote object.
 * If @name is a well-known name and the
 * %G_DBUS_PROXY_FLAGS_DO_NOT_AUTO_START flag isn't set and no name
 * owner currently exists, the message bus will be requested to launch
 * a name owner for the name.
 * This is a synchronous failable constructor. See g_dbus_proxy_new()
 * and g_dbus_proxy_new_finish() for the asynchronous version.
 * See <xref linkend="gdbus-wellknown-proxy"/> for an example of how #GDBusProxy can be used.
 *
 * Returns: A #GDBusProxy or %NULL if error is set. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * SECTION:gdbusconnectio:
 * @short_description: D-Bus Connections
 * @include: gio/gio.h
 *
 * The #GDBusConnection type is used for D-Bus connections to remote
 * peers such as a message buses. It is a low-level API that offers a
 * lot of flexibility. For instance, it lets you establish a connection
 * over any transport that can by represented as an #GIOStream.
 * This class is rarely used directly in D-Bus clients. If you are writing
 * an D-Bus client, it is often easier to use the g_bus_own_name(),
 * g_bus_watch_name() or g_dbus_proxy_new_for_bus() APIs.
 * <example id="gdbus-server"><title>D-Bus server example</title><programlisting><xi:include xmlns:xi="http://www.w3.org/2001/XInclude" parse="text" href="../../../../gio/tests/gdbus-example-server.c"><xi:fallback>FIXME: MISSING XINCLUDE CONTENT</xi:fallback></xi:include></programlisting></example>
 * <example id="gdbus-subtree-server"><title>D-Bus subtree example</title><programlisting><xi:include xmlns:xi="http://www.w3.org/2001/XInclude" parse="text" href="../../../../gio/tests/gdbus-example-subtree.c"><xi:fallback>FIXME: MISSING XINCLUDE CONTENT</xi:fallback></xi:include></programlisting></example>
 * <example id="gdbus-unix-fd-client"><title>D-Bus UNIX File Descriptor example</title><programlisting><xi:include xmlns:xi="http://www.w3.org/2001/XInclude" parse="text" href="../../../../gio/tests/gdbus-example-unix-fd-client.c"><xi:fallback>FIXME: MISSING XINCLUDE CONTENT</xi:fallback></xi:include></programlisting></example>
 * <example id="gdbus-export"><title>Exporting a GObject</title><programlisting><xi:include xmlns:xi="http://www.w3.org/2001/XInclude" parse="text" href="../../../../gio/tests/gdbus-example-export.c"><xi:fallback>FIXME: MISSING XINCLUDE CONTENT</xi:fallback></xi:include></programlisting></example>
 */


/**
 * SECTION:gfileinputstrea:
 * @short_description: File input streaming operations
 * @include: gio/gio.h
 * @see_also: #GInputStream, #GDataInputStream, #GSeekable
 *
 * GFileInputStream provides input streams that take their
 * content from a file.
 * GFileInputStream implements #GSeekable, which allows the input
 * stream to jump to arbitrary positions in the file, provided the
 * filesystem of the file allows it. To find the position of a file
 * input stream, use g_seekable_tell(). To find out if a file input
 * stream supports seeking, use g_seekable_stream_can_seek().
 * To position a file input stream, use g_seekable_seek().
 */


/**
 * g_socket_client_new:
 *
 * Creates a new #GSocketClient with the default options.
 * Free the returned object with g_object_unref().
 *
 * Returns: a #GSocketClient.
 * Since: 2.22
 */


/**
 * GDBusProxy:g-connection:
 *
 * The #GDBusConnection the proxy is for.
 *
 * Since: 2.26
 */


/**
 * g_file_enumerator_has_pending:
 * @enumerator: a #GFileEnumerator.
 *
 * Checks if the file enumerator has pending operations.
 *
 * Returns: %TRUE if the @enumerator has pending operations.
 */


/**
 * g_socket_send_to:
 * @socket: a #GSocket
 * @address: a #GSocketAddress, or %NULL
 * @buffer: the buffer containing the data to send.
 * @size: the number of bytes to send
 * @cancellable: a %GCancellable or %NULL
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Tries to send @size bytes from @buffer to @address. If @address is
 * %NULL then the message is sent to the default receiver (set by
 * g_socket_connect()).
 * See g_socket_send() for additional information.
 * on error
 *
 * Returns: Number of bytes written (which may be less than @size), or -1
 * Since: 2.22
 */


/**
 * g_file_new_for_uri:
 * @uri: a UTF8 string containing a URI.
 *
 * Constructs a #GFile for a given URI. This operation never
 * fails, but the returned object might not support any I/O
 * operation if @uri is malformed or if the uri type is
 * not supported.
 *
 * Returns: (transfer full): a #GFile for the given @uri.
 */


/**
 * g_mount_operation_set_anonymous:
 * @op: a #GMountOperation.
 * @anonymous: boolean value.
 *
 * Sets the mount operation to use an anonymous user if @anonymous is %TRUE.
 */


/**
 * SECTION:
 * @title: GUnixFDMessage
 * @short_description: A GSocketControlMessage containing a GUnixFDList
 * @include: gio/gunixfdmessage.h
 * @see_also: #GUnixConnection, #GUnixFDList, #GSocketControlMessage
 *
 * This #GSocketControlMessage contains a #GUnixFDList.
 * It may be sent using g_socket_send_message() and received using
 * %G_SOCKET_ADDRESS_UNIX family). The file descriptors are copied
 * between processes by the kernel.
 * For an easier way to send and receive file descriptors over
 * stream-oriented UNIX sockets, see g_unix_connection_send_fd() and
 * g_unix_connection_receive_fd().
 * Note that <filename>&lt;gio/gunixfdmessage.h&gt;</filename> belongs to
 * the UNIX-specific GIO interfaces, thus you have to use the
 * <filename>gio-unix-2.0.pc</filename> pkg-config file when using it.
 *
 * G_socket_receive_message() over unix sockets (ie: sockets in the
 */


/**
 * SECTION:gdriv:
 * @short_description: Drive management
 * @include: gio/gio.h
 *
 * #GDrive - this represent a piece of hardware connected to the machine.
 * It's generally only created for removable hardware or hardware with
 * removable media.
 * #GDrive is a container class for #GVolume objects that stem from
 * the same piece of media. As such, #GDrive abstracts a drive with
 * (or without) removable media and provides operations for querying
 * whether media is available, determing whether media change is
 * automatically detected and ejecting the media.
 * If the #GDrive reports that media isn't automatically detected, one
 * can poll for media; typically one should not do this periodically
 * as a poll for media operation is potententially expensive and may
 * spin up the drive creating noise.
 * #GDrive supports starting and stopping drives with authentication
 * support for the former. This can be used to support a diverse set
 * of use cases including connecting/disconnecting iSCSI devices,
 * powering down external disk enclosures and starting/stopping
 * multi-disk devices such as RAID devices. Note that the actual
 * semantics and side-effects of starting/stopping a #GDrive may vary
 * according to implementation. To choose the correct verbs in e.g. a
 * file manager, use g_drive_get_start_stop_type().
 * For porting from GnomeVFS note that there is no equivalent of
 * #GDrive in that API.
 */


/**
 * g_periodic_add:
 * @periodic: a #GPeriodic clock
 * @callback: a #GPeriodicTickFunc function
 * @user_data: data for @callback
 * @notify: for freeing @user_data when it is no longer needed
 *
 * Request periodic calls to @callback to start.  The periodicity of the
 * calls is determined by the 'hz' property.
 * This function may not be called from a handler of the repair signal,
 * but it is perfectly reasonable to call it from a handler of the tick
 * signal.
 * The callback may be cancelled later by using g_periodic_remove() on
 * the return value of this function.
 *
 * Returns: a non-zero tag identifying this callback
 * Since: 2.28
 */


/**
 * g_dbus_message_get_header_fields:
 * @message: A #GDBusMessage.
 *
 * Gets an array of all header fields on @message that are set.
 * %G_DBUS_MESSAGE_HEADER_FIELD_INVALID.  Each element is a
 * #guchar. Free with g_free().
 *
 * Returns: An array of header fields terminated by
 * Since: 2.26
 */


/**
 * g_application_get_application_id:
 * @application: a #GApplication
 * @returns: the identifier for @application, owned by @application
 *
 * Gets the unique identifier for @application.
 *
 * Since: 2.28
 */


/**
 * g_socket_connection_factory_create_connection:
 * @socket: a #GSocket
 *
 * Creates a #GSocketConnection subclass of the right type for
 *
 * Returns: (transfer full): a #GSocketConnection
 * Since: 2.22
 */


/**
 * g_drive_poll_for_media:
 * @drive: a #GDrive.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback, or %NULL.
 * @user_data: user data to pass to @callback
 *
 * Asynchronously polls @drive to see if media has been inserted or removed.
 * When the operation is finished, @callback will be called.
 * You can then call g_drive_poll_for_media_finish() to obtain the
 * result of the operation.
 */


/**
 * g_file_trash:
 * @file: #GFile to send to trash.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Sends @file to the "Trashcan", if possible. This is similar to
 * deleting it, but the user can recover it before emptying the trashcan.
 * Not all file systems support trashing, so this call can return the
 * %G_IO_ERROR_NOT_SUPPORTED error.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: %TRUE on successful trash, %FALSE otherwise.
 */


/**
 * g_unix_mounts_get:
 * @time_read: (allow-none): guint64 to contain a timestamp, or %NULL
 *
 * Gets a #GList of #GUnixMountEntry containing the unix mounts.
 * If @time_read is set, it will be filled with the mount
 * timestamp, allowing for checking if the mounts have changed
 * with g_unix_mounts_changed_since().
 *
 * Returns: (element-type utf8) (transfer full): a #GList of the UNIX mounts.
 */


/**
 * SECTION:gappinf:
 * @short_description: Application information and launch contexts
 * @include: gio/gio.h
 *
 * #GAppInfo and #GAppLaunchContext are used for describing and launching
 * applications installed on the system.
 * As of GLib 2.20, URIs will always be converted to POSIX paths
 * (using g_file_get_path()) when using g_app_info_launch() even if
 * the application requested an URI and not a POSIX path. For example
 * for an desktop-file based application with Exec key <literal>totem
 * %%U</literal> and a single URI,
 * <literal>sftp://foo/file.avi</literal>, then
 * <literal>/home/user/.gvfs/sftp on foo/file.avi</literal> will be
 * passed. This will only work if a set of suitable GIO extensions
 * (such as gvfs 2.26 compiled with FUSE support), is available and
 * operational; if this is not the case, the URI will be passed
 * unmodified to the application. Some URIs, such as
 * <literal>mailto:</literal>, of course cannot be mapped to a POSIX
 * path (in gvfs there's no FUSE mount for it); such URIs will be
 * passed unmodified to the application.
 * Specifically for gvfs 2.26 and later, the POSIX URI will be mapped
 * back to the GIO URI in the #GFile constructors (since gvfs
 * implements the #GVfs extension point). As such, if the application
 * needs to examine the URI, it needs to use g_file_get_uri() or
 * similar on #GFile. In other words, an application cannot assume
 * that the URI passed to e.g. g_file_new_for_commandline_arg() is
 * equal to the result of g_file_get_uri(). The following snippet
 * illustrates this:
 * <programlisting>
 * GFile *f;
 * char *uri;
 * file = g_file_new_for_commandline_arg (uri_from_commandline);
 * uri = g_file_get_uri (file);
 * strcmp (uri, uri_from_commandline) == 0; // FALSE
 * g_free (uri);
 * if (g_file_has_uri_scheme (file, "cdda"))
 * {
 * // do something special with uri
 * }
 * g_object_unref (file);
 * </programlisting>
 * This code will work when both <literal>cdda://sr0/Track
 * 1.wav</literal> and <literal>/home/user/.gvfs/cdda on sr0/Track
 * 1.wav</literal> is passed to the application. It should be noted
 * that it's generally not safe for applications to rely on the format
 * of a particular URIs. Different launcher applications (e.g. file
 * managers) may have different ideas of what a given URI means.
 */


/**
 * g_proxy_address_get_destination_por:
 * @proxy: a #GProxyAddress
 *
 * Gets @proxy's destination port.
 *
 * Returns: the @proxy's destination port
 * Since: 2.26
 */


/**
 * g_action_group_get_action_state_type:
 * @action_group: a #GActionGroup
 * @action_name: the name of the action to query
 *
 * Queries the type of the state of the named action within
 * If the action is stateful then this function returns the
 * #GVariantType of the state.  All calls to g_action_group_set_state()
 * must give a #GVariant of this type and g_action_group_get_state()
 * will return a #GVariant of the same type.
 * If the action is not stateful then this function will return %NULL.
 * In that case, g_action_group_get_state() will return %NULL and you
 * must not call g_action_group_set_state().
 * The state type of a particular action will never change but it is
 * possible for an action to be removed and for a new action to be added
 * with the same name but a different state type.
 *
 * Returns: (transfer full): the state type, if the action is stateful
 * Since: 2.28
 */


/**
 * g_application_activate:
 * @application: a #GApplication
 *
 * Activates the application.
 * In essence, this results in the #GApplication::activate() signal being
 * emitted in the primary instance.
 * The application must be registered before calling this function.
 *
 * Since: 2.28
 */


/**
 * g_mount_unmount_with_operation:
 * @mount: a #GMount.
 * @flags: flags affecting the operation
 * @mount_operation: a #GMountOperation or %NULL to avoid user interaction.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback, or %NULL.
 * @user_data: user data passed to @callback.
 *
 * Unmounts a mount. This is an asynchronous operation, and is
 * finished by calling g_mount_unmount_with_operation_finish() with the @mount
 * and #GAsyncResult data returned in the @callback.
 *
 * Since: 2.22
 */


/**
 * g_dbus_connection_register_object:
 * @connection: A #GDBusConnection.
 * @object_path: The object path to register at.
 * @interface_info: Introspection data for the interface.
 * @vtable: A #GDBusInterfaceVTable to call into or %NULL.
 * @user_data: Data to pass to functions in @vtable.
 * @user_data_free_func: Function to call when the object path is unregistered.
 * @error: Return location for error or %NULL.
 *
 * Registers callbacks for exported objects at @object_path with the
 * D-Bus interface that is described in @interface_info.
 * Calls to functions in @vtable (and @user_data_free_func) will
 * happen in the <link linkend="g-main-context-push-thread-default">thread-default main
 * loop</link> of the thread you are calling this method from.
 * Note that all #GVariant values passed to functions in @vtable will match
 * the signature given in @interface_info - if a remote caller passes
 * incorrect values, the <literal>org.freedesktop.DBus.Error.InvalidArgs</literal>
 * is returned to the remote caller.
 * Additionally, if the remote caller attempts to invoke methods or
 * access properties not mentioned in @interface_info the
 * <literal>org.freedesktop.DBus.Error.UnknownMethod</literal> resp.
 * <literal>org.freedesktop.DBus.Error.InvalidArgs</literal> errors
 * are returned to the caller.
 * It is considered a programming error if the
 * #GDBusInterfaceGetPropertyFunc function in @vtable returns a
 * #GVariant of incorrect type.
 * If an existing callback is already registered at @object_path and
 * GDBus automatically implements the standard D-Bus interfaces
 * org.freedesktop.DBus.Properties, org.freedesktop.DBus.Introspectable
 * and org.freedesktop.Peer, so you don't have to implement those for
 * the objects you export. You <emphasis>can</emphasis> implement
 * org.freedesktop.DBus.Properties yourself, e.g. to handle getting
 * and setting of properties asynchronously.
 * Note that the reference count on @interface_info will be
 * incremented by 1 (unless allocated statically, e.g. if the
 * reference count is -1, see g_dbus_interface_info_ref()) for as long
 * as the object is exported. Also note that @vtable will be copied.
 * See <xref linkend="gdbus-server"/> for an example of how to use this method.
 * that can be used with g_dbus_connection_unregister_object() .
 *
 * Returns: 0 if @error is set, otherwise a registration id (never 0)
 * Since: 2.26
 */


/**
 * g_file_stop_mountable_finish:
 * @file: input #GFile.
 * @result: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes an stop operation, see g_file_stop_mountable() for details.
 * Finish an asynchronous stop operation that was started
 * with g_file_stop_mountable().
 * otherwise.
 *
 * Returns: %TRUE if the operation finished successfully. %FALSE
 * Since: 2.22
 */


/**
 * g_cancellable_get_current:
 *
 * Gets the top cancellable from the stack.
 * if the stack is empty.
 *
 * Returns: (transfer none): a #GCancellable from the top of the stack, or %NULL
 */


/**
 * g_file_replace_readwrite_async:
 * @file: input #GFile.
 * @etag: (allow-none): an <link linkend="gfile-etag">entity tag</link> for the current #GFile, or NULL to ignore.
 * @make_backup: %TRUE if a backup should be created.
 * @flags: a set of #GFileCreateFlags.
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: the data to pass to callback function
 *
 * Asynchronously overwrites the file in read-write mode, replacing the
 * contents, possibly creating a backup copy of the file first.
 * For more details, see g_file_replace_readwrite() which is
 * the synchronous version of this call.
 * When the operation is finished, @callback will be called. You can then
 * call g_file_replace_readwrite_finish() to get the result of the operation.
 *
 * Since: 2.22
 */


/**
 * g_dbus_server_new_sync:
 * @address: A D-Bus address.
 * @flags: Flags from the #GDBusServerFlags enumeration.
 * @guid: A D-Bus GUID.
 * @observer: A #GDBusAuthObserver or %NULL.
 * @cancellable: A #GCancellable or %NULL.
 * @error: Return location for server or %NULL.
 *
 * Creates a new D-Bus server that listens on the first address in
 * Once constructed, you can use g_dbus_server_get_client_address() to
 * get a D-Bus address string that clients can use to connect.
 * Connect to the #GDBusServer::new-connection signal to handle
 * incoming connections.
 * The returned #GDBusServer isn't active - you have to start it with
 * g_dbus_server_start().
 * See <xref linkend="gdbus-peer-to-peer"/> for how #GDBusServer can
 * be used.
 * This is a synchronous failable constructor. See
 * g_dbus_server_new() for the asynchronous version.
 * g_object_unref().
 *
 * Returns: A #GDBusServer or %NULL if @error is set. Free with
 * Since: 2.26
 */


/**
 * g_settings_backend_flatten_tree:
 * @tree: a #GTree containing the changes
 * @path: the location to save the path
 * @keys: the location to save the relative keys
 * @values: the location to save the values, or %NULL
 *
 * Calculate the longest common prefix of all keys in a tree and write
 * out an array of the key names relative to that prefix and,
 * optionally, the value to store at each of those keys.
 * You must free the value returned in @path, @keys and @values using
 * g_free().  You should not attempt to free or unref the contents of
 *
 * Since: 2.26
 */


/**
 * g_poll_file_monitor_new:
 * @file: a #GFile.
 *
 * Polls @file for changes.
 *
 * Returns: a new #GFileMonitor for the given #GFile.
 */


/**
 * g_filter_output_stream_get_base_stream:
 * @stream: a #GFilterOutputStream.
 *
 * Gets the base stream for the filter stream.
 *
 * Returns: (transfer none): a #GOutputStream.
 */


/**
 * g_unix_mount_compare:
 * @mount1: first #GUnixMountEntry to compare.
 * @mount2: second #GUnixMountEntry to compare.
 *
 * Compares two unix mounts.
 * or less than @mount2, respectively.
 *
 * Returns: 1, 0 or -1 if @mount1 is greater than, equal to,
 */


/**
 * g_resolver_free_addresses: (skip)
 * @addresses: a #GList of #GInetAddress
 *
 * Frees @addresses (which should be the return value from
 * g_resolver_lookup_by_name() or g_resolver_lookup_by_name_finish()).
 * (This is a convenience method; you can also simply free the results
 * by hand.)
 *
 * Since: 2.22
 */


/**
 * g_action_group_get_action_parameter_type:
 * @action_group: a #GActionGroup
 * @action_name: the name of the action to query
 *
 * Queries the type of the parameter that must be given when activating
 * the named action within @action_group.
 * When activating the action using g_action_group_activate(), the
 * #GVariant given to that function must be of the type returned by this
 * function.
 * In the case that this function returns %NULL, you must not give any
 * #GVariant, but %NULL instead.
 * The parameter type of a particular action will never change but it is
 * possible for an action to be removed and for a new action to be added
 * with the same name but a different parameter type.
 *
 * Returns: the parameter type
 * Since: 2.28
 */


/**
 * g_dbus_property_info_unref:
 * @info: A #GDBusPropertyInfo.
 *
 * If @info is statically allocated, does nothing. Otherwise decreases
 * the reference count of @info. When its reference count drops to 0,
 * the memory used is freed.
 *
 * Since: 2.26
 */


/**
 * g_file_unmount_mountable_with_operation:
 * @file: input #GFile.
 * @flags: flags affecting the operation
 * @mount_operation: a #GMountOperation, or %NULL to avoid user interaction.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied, or %NULL.
 * @user_data: the data to pass to callback function
 *
 * Unmounts a file of type G_FILE_TYPE_MOUNTABLE.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * When the operation is finished, @callback will be called. You can then call
 * g_file_unmount_mountable_finish() to get the result of the operation.
 *
 * Since: 2.22
 */


/**
 * g_permission_acquire_async:
 * @permission: a #GPermission instance
 * @cancellable: a #GCancellable, or %NULL
 * @callback: the #GAsyncReadyCallback to call when done
 * @user_data: the user data to pass to @callback
 *
 * Attempts to acquire the permission represented by @permission.
 * This is the first half of the asynchronous version of
 * g_permission_acquire().
 *
 * Since: 2.26
 */


/**
 * SECTION:gdataoutputstrea:
 * @short_description: Data Output Stream
 * @include: gio/gio.h
 * @see_also: #GOutputStream
 *
 * Data output stream implements #GOutputStream and includes functions for
 * writing data directly to an output stream.
 */


/**
 * g_output_stream_splice_async:
 * @stream: a #GOutputStream.
 * @source: a #GInputStream.
 * @flags: a set of #GOutputStreamSpliceFlags.
 * @io_priority: the io priority of the request.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback.
 * @user_data: user data passed to @callback.
 *
 * Splices a stream asynchronously.
 * When the operation is finished @callback will be called.
 * You can then call g_output_stream_splice_finish() to get the
 * result of the operation.
 * For the synchronous, blocking version of this function, see
 * g_output_stream_splice().
 */


/**
 * g_file_info_dup:
 * @other: a #GFileInfo.
 *
 * Duplicates a file info structure.
 *
 * Returns: (transfer full): a duplicate #GFileInfo of @other.
 */


/**
 * g_simple_action_group_lookup:
 * @simple: a #GSimpleActionGroup
 * @action_name: the name of an action
 *
 * Looks up the action with the name @action_name in the group.
 * If no such action exists, returns %NULL.
 *
 * Returns: (transfer none): a #GAction, or %NULL
 * Since: 2.28
 */


/**
 * g_output_stream_flush:
 * @stream: a #GOutputStream.
 * @cancellable: optional cancellable object
 * @error: location to store the error occuring, or %NULL to ignore
 *
 * Flushed any outstanding buffers in the stream. Will block during
 * the operation. Closing the stream will implicitly cause a flush.
 * This function is optional for inherited classes.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: %TRUE on success, %FALSE on error
 */


/**
 * g_dbus_is_guid:
 * @string: The string to check.
 *
 * Checks if @string is a D-Bus GUID.
 * See the D-Bus specification regarding what strings are valid D-Bus
 * GUID (for example, D-Bus GUIDs are not RFC-4122 compliant).
 *
 * Returns: %TRUE if @string is a guid, %FALSE otherwise.
 * Since: 2.26
 */


/**
 * g_file_io_stream_get_etag:
 * @stream: a #GFileIOStream.
 *
 * Gets the entity tag for the file when it has been written.
 * This must be called after the stream has been written
 * and closed, as the etag can change while writing.
 *
 * Returns: the entity tag for the stream.
 * Since: 2.22
 */


/**
 * g_buffered_input_stream_read_byte:
 * @stream: a #GBufferedInputStream
 * @cancellable: optional #GCancellable object, %NULL to ignore
 * @error: location to store the error occuring, or %NULL to ignore
 *
 * Tries to read a single byte from the stream or the buffer. Will block
 * during this read.
 * On success, the byte read from the stream is returned. On end of stream
 * -1 is returned but it's not an exceptional error and @error is not set.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned. If an
 * operation was partially finished when the operation was cancelled the
 * partial result will be returned, without an error.
 * On error -1 is returned and @error is set accordingly.
 *
 * Returns: the byte read from the @stream, or -1 on end of stream or error.
 */


/**
 * g_socket_set_blocking:
 * @socket: a #GSocket.
 * @blocking: Whether to use blocking I/O or not.
 *
 * Sets the blocking mode of the socket. In blocking mode
 * all operations block until they succeed or there is an error. In
 * non-blocking mode all functions return results immediately or
 * with a %G_IO_ERROR_WOULD_BLOCK error.
 * All sockets are created in blocking mode. However, note that the
 * platform level socket is always non-blocking, and blocking mode
 * is a GSocket level feature.
 *
 * Since: 2.22
 */


/**
 * g_buffered_input_stream_get_buffer_size:
 * @stream: a #GBufferedInputStream
 *
 * Gets the size of the input buffer.
 *
 * Returns: the current buffer size.
 */


/**
 * g_unix_fd_list_peek_fds:
 * @list: a #GUnixFDList
 * @length: pointer to the length of the returned array, or %NULL
 *
 * Returns the array of file descriptors that is contained in this
 * object.
 * After this call, the descriptors remain the property of @list.  The
 * caller must not close them and must not free the array.  The array is
 * valid only until @list is changed in any way.
 * If @length is non-%NULL then it is set to the number of file
 * descriptors in the returned array. The returned array is also
 * terminated with -1.
 * This function never returns %NULL. In case there are no file
 * descriptors contained in @list, an empty array is returned.
 *
 * Returns: an array of file descriptors
 * Since: 2.24
 */


/**
 * g_network_address_new:
 * @hostname: the hostname
 * @port: the port
 *
 * Creates a new #GSocketConnectable for connecting to the given
 *
 * Returns: (transfer full): the new #GNetworkAddress
 * Since: 2.22
 */


/**
 * g_file_info_has_namespace:
 * @info: a #GFileInfo.
 * @name_space: a file attribute namespace.
 *
 * Checks if a file info structure has an attribute in the
 * specified @name_space.
 * %FALSE otherwise.
 *
 * Returns: %TRUE if @Ginfo has an attribute in @name_space,
 * Since: 2.22
 */


/**
 * g_data_output_stream_put_uint32:
 * @stream: a #GDataOutputStream.
 * @data: a #guint32.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, %NULL to ignore.
 *
 * Puts an unsigned 32-bit integer into the stream.
 *
 * Returns: %TRUE if @data was successfully added to the @stream.
 */


/**
 * g_file_set_attribute:
 * @file: input #GFile.
 * @attribute: a string containing the attribute's name.
 * @type: The type of the attribute
 * @value_p: a pointer to the value (or the pointer itself if the type is a pointer type)
 * @flags: a set of #GFileQueryInfoFlags.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Sets an attribute in the file with attribute name @attribute to @value.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: %TRUE if the attribute was set, %FALSE otherwise.
 */


/**
 * g_filename_completer_get_completion_suffix:
 * @completer: the filename completer.
 * @initial_text: text to be completed.
 *
 * Obtains a completion for @initial_text from @completer.
 * This string is not owned by GIO, so remember to g_free() it
 * when finished.
 *
 * Returns: a completed string, or %NULL if no completion exists.
 */


/**
 * g_file_icon_new:
 * @file: a #GFile.
 *
 * Creates a new icon for a file.
 *
 * Returns: (transfer full): a #GIcon for the given @file, or %NULL on error.
 */


/**
 * SECTION:gnetworkservic:
 * @short_description: A GSocketConnectable for resolving SRV records
 * @include: gio/gio.h
 *
 * Like #GNetworkAddress does with hostnames, #GNetworkService
 * provides an easy way to resolve a SRV record, and then attempt to
 * connect to one of the hosts that implements that service, handling
 * service priority/weighting, multiple IP addresses, and multiple
 * address families.
 * See #GSrvTarget for more information about SRV records, and see
 * #GSocketConnectable for and example of using the connectable
 * interface.
 */


/**
 * g_file_start_mountable:
 * @file: input #GFile.
 * @flags: flags affecting the operation
 * @start_operation: a #GMountOperation, or %NULL to avoid user interaction.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied, or %NULL.
 * @user_data: the data to pass to callback function
 *
 * Starts a file of type G_FILE_TYPE_MOUNTABLE.
 * Using @start_operation, you can request callbacks when, for instance,
 * passwords are needed during authentication.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * When the operation is finished, @callback will be called. You can then call
 * g_file_mount_mountable_finish() to get the result of the operation.
 *
 * Since: 2.22
 */


/**
 * g_app_info_get_default_for_uri_scheme:
 * @uri_scheme: a string containing a URI scheme.
 *
 * Gets the default application for launching applications
 * using this URI scheme. A URI scheme is the initial part
 * of the URI, up to but not including the ':', e.g. "http",
 * "ftp" or "sip".
 *
 * Returns: #GAppInfo for given @uri_scheme or %NULL on error.
 */


/**
 * g_file_set_attributes_finish:
 * @file: input #GFile.
 * @result: a #GAsyncResult.
 * @info: (out) (transfer full): a #GFileInfo.
 * @error: a #GError, or %NULL
 *
 * Finishes setting an attribute started in g_file_set_attributes_async().
 *
 * Returns: %TRUE if the attributes were set correctly, %FALSE otherwise.
 */


/**
 * g_socket_listener_accept:
 * @listener: a #GSocketListener
 * @source_object: (out) (transfer none) (allow-none): location where #GObject pointer will be stored, or %NULL
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Blocks waiting for a client to connect to any of the sockets added
 * to the listener. Returns a #GSocketConnection for the socket that was
 * accepted.
 * If @source_object is not %NULL it will be filled out with the source
 * object specified when the corresponding socket or address was added
 * to the listener.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: (transfer full): a #GSocketConnection on success, %NULL on error.
 * Since: 2.22
 */


/**
 * g_dbus_node_info_unref:
 * @info: A #GDBusNodeInfo.
 *
 * If @info is statically allocated, does nothing. Otherwise decreases
 * the reference count of @info. When its reference count drops to 0,
 * the memory used is freed.
 *
 * Since: 2.26
 */


/**
 * g_unix_mount_point_guess_can_eject:
 * @mount_point: a #GUnixMountPoint
 *
 * Guesses whether a Unix mount point can be ejected.
 *
 * Returns: %TRUE if @mount_point is deemed to be ejectable.
 */


/**
 * g_file_enumerate_children_finish:
 * @file: input #GFile.
 * @res: a #GAsyncResult.
 * @error: a #GError.
 *
 * Finishes an async enumerate children operation.
 * See g_file_enumerate_children_async().
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): a #GFileEnumerator or %NULL if an error occurred.
 */


/**
 * g_dbus_connection_flush:
 * @connection: A #GDBusConnection.
 * @cancellable: A #GCancellable or %NULL.
 * @callback: A #GAsyncReadyCallback to call when the request is satisfied or %NULL if you don't care about the result.
 * @user_data: The data to pass to @callback.
 *
 * Asynchronously flushes @connection, that is, writes all queued
 * outgoing message to the transport and then flushes the transport
 * (using g_output_stream_flush_async()). This is useful in programs
 * that wants to emit a D-Bus signal and then exit
 * immediately. Without flushing the connection, there is no guarantee
 * that the message has been sent to the networking buffers in the OS
 * kernel.
 * This is an asynchronous method. When the operation is finished,
 * linkend="g-main-context-push-thread-default">thread-default main
 * loop</link> of the thread you are calling this method from. You can
 * then call g_dbus_connection_flush_finish() to get the result of the
 * operation.  See g_dbus_connection_flush_sync() for the synchronous
 * version.
 *
 * Since: 2.26
 */


/**
 * g_inet_address_new_any:
 * @family: the address family
 *
 * Creates a #GInetAddress for the "any" address (unassigned/"don't
 * care") for @family.
 * for @family.
 *
 * Returns: a new #GInetAddress corresponding to the "any" address
 * Since: 2.22
 */


/**
 * GProxyAddress:
 *
 * A #GInetSocketAddress representing a connection via a proxy server
 *
 * Since: 2.26
 */


/**
 * g_emblemed_icon_get_emblems:
 * @emblemed: a #GEmblemedIcon
 *
 * Gets the list of emblems for the @icon.
 * is owned by @emblemed
 *
 * Returns: (element-type utf8) (transfer none): a #GList of #GEmblem <!-- -->s that
 * Since: 2.18
 */


/**
 * g_file_io_stream_query_info_finish:
 * @stream: a #GFileIOStream.
 * @result: a #GAsyncResult.
 * @error: a #GError, %NULL to ignore.
 *
 * Finalizes the asynchronous query started
 * by g_file_io_stream_query_info_async().
 *
 * Returns: (transfer full): A #GFileInfo for the finished query.
 * Since: 2.22
 */


/**
 * g_file_hash:
 * @file: #gconstpointer to a #GFile.
 *
 * Creates a hash value for a #GFile.
 * This call does no blocking i/o.
 * integer that can be used as hash value for the #GFile.
 * This function is intended for easily hashing a #GFile to
 * add to a #GHashTable or similar data structure.
 *
 * Virtual: hash
 * Returns: 0 if @file is not a valid #GFile, otherwise an
 */


/**
 * g_inet_address_new_loopback:
 * @family: the address family
 *
 * Creates a #GInetAddress for the loopback address for @family.
 * for @family.
 *
 * Returns: a new #GInetAddress corresponding to the loopback address
 * Since: 2.22
 */


/**
 * g_unix_mount_monitor_set_rate_limit:
 * @mount_monitor: a #GUnixMountMonitor
 * @limit_msec: a integer with the limit in milliseconds to poll for changes.
 *
 * Sets the rate limit to which the @mount_monitor will report
 * consecutive change events to the mount and mount point entry files.
 *
 * Since: 2.18
 */


/**
 * g_file_copy:
 * @source: input #GFile.
 * @destination: destination #GFile
 * @flags: set of #GFileCopyFlags
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @progress_callback: (scope call): function to callback with progress information
 * @progress_callback_data: (closure): user data to pass to @progress_callback
 * @error: #GError to set on error, or %NULL
 *
 * Copies the file @source to the location specified by @destination.
 * Can not handle recursive copies of directories.
 * If the flag #G_FILE_COPY_OVERWRITE is specified an already
 * existing @destination file is overwritten.
 * If the flag #G_FILE_COPY_NOFOLLOW_SYMLINKS is specified then symlinks
 * will be copied as symlinks, otherwise the target of the
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * If @progress_callback is not %NULL, then the operation can be monitored by
 * setting this to a #GFileProgressCallback function. @progress_callback_data
 * will be passed to this function. It is guaranteed that this callback will
 * be called after all data has been transferred with the total number of bytes
 * copied during the operation.
 * If the @source file does not exist then the G_IO_ERROR_NOT_FOUND
 * error is returned, independent on the status of the @destination.
 * If #G_FILE_COPY_OVERWRITE is not specified and the target exists, then the
 * error G_IO_ERROR_EXISTS is returned.
 * If trying to overwrite a file over a directory the G_IO_ERROR_IS_DIRECTORY
 * error is returned. If trying to overwrite a directory with a directory the
 * G_IO_ERROR_WOULD_MERGE error is returned.
 * If the source is a directory and the target does not exist, or #G_FILE_COPY_OVERWRITE is
 * specified and the target is a file, then the G_IO_ERROR_WOULD_RECURSE error
 * is returned.
 * If you are interested in copying the #GFile object itself (not the on-disk
 * file), see g_file_dup().
 *
 * Returns: %TRUE on success, %FALSE otherwise.
 */


/**
 * g_file_set_attribute_int64:
 * @file: input #GFile.
 * @attribute: a string containing the attribute's name.
 * @value: a #guint64 containing the attribute's new value.
 * @flags: a #GFileQueryInfoFlags.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Sets @attribute of type %G_FILE_ATTRIBUTE_TYPE_INT64 to @value.
 * If @attribute is of a different type, this operation will fail.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: %TRUE if the @attribute was successfully set, %FALSE otherwise.
 */


/**
 * g_file_enumerator_next_files_finish:
 * @enumerator: a #GFileEnumerator.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occuring, or %NULL to ignore.
 *
 * Finishes the asynchronous operation started with g_file_enumerator_next_files_async().
 * g_list_free() and unref the infos with g_object_unref() when you're
 * done with them.
 *
 * Returns: (transfer full) (element-type Gio.FileInfo): a #GList of #GFileInfo<!---->s. You must free the list with
 */


/**
 * g_dbus_is_name:
 * @string: The string to check.
 *
 * Checks if @string is a valid D-Bus bus name (either unique or well-known).
 *
 * Returns: %TRUE if valid, %FALSE otherwise.
 * Since: 2.26
 */


/**
 * g_drive_get_name:
 * @drive: a #GDrive.
 *
 * Gets the name of @drive.
 * string should be freed when no longer needed.
 *
 * Returns: a string containing @drive's name. The returned
 */


/**
 * g_unix_fd_message_new_with_fd_list:
 * @fd_list: a #GUnixFDList
 *
 * Creates a new #GUnixFDMessage containing @list.
 *
 * Returns: a new #GUnixFDMessage
 * Since: 2.24
 */


/**
 * GDBusConnection:flags:
 *
 * Flags from the #GDBusConnectionFlags enumeration.
 *
 * Since: 2.26
 */


/**
 * g_application_run:
 * @application: a #GApplication
 * @argc: the argc from main()
 * @argv: the argv from main()
 * @returns: the exit status
 *
 * Runs the application.
 * This function is intended to be run from main() and its return value
 * is intended to be returned by main().
 * First, the local_command_line() virtual function is invoked.  This
 * function always runs on the local instance.  If that function returns
 * %FALSE then the application is registered and the #GApplication::command-line
 * signal is emitted in the primary instance (which may or may not be
 * this instance).
 * If the application has the %G_APPLICATION_HANDLES_COMMAND_LINE
 * flag set then the default implementation of local_command_line()
 * always returns %FALSE immediately, resulting in the commandline
 * always being handled in the primary instance.
 * Otherwise, the default implementation of local_command_line() tries
 * to do a couple of things that are probably reasonable for most
 * applications.  First, g_application_register() is called to attempt
 * to register the application.  If that works, then the command line
 * arguments are inspected.  If no commandline arguments are given, then
 * g_application_activate() is called.  If commandline arguments are
 * given and the %G_APPLICATION_HANDLES_OPEN flag is set then they
 * are assumed to be filenames and g_application_open() is called.
 * If you are interested in doing more complicated local handling of the
 * commandline then you should implement your own #GApplication subclass
 * and override local_command_line(). See
 * <xref linkend="gapplication-example-cmdline2"/> for an example.
 * If, after the above is done, the use count of the application is zero
 * then the exit status is returned immediately.  If the use count is
 * non-zero then the mainloop is run until the use count falls to zero,
 * at which point 0 is returned.
 * If the %G_APPLICATION_IS_SERVICE flag is set, then the exiting at
 * around to provide its <emphasis>service</emphasis> to others).
 *
 * Use count of zero is delayed for a while (ie: the instance stays
 * Since: 2.28
 */


/**
 * g_socket_service_new:
 *
 * Creates a new #GSocketService with no sockets to listen for.
 * New listeners can be added with e.g. g_socket_listener_add_address()
 * or g_socket_listener_add_inet_port().
 *
 * Returns: a new #GSocketService.
 * Since: 2.22
 */


/**
 * g_unix_connection_receive_fd:
 * @connection: a #GUnixConnection
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore
 * @error: (allow-none): #GError for error reporting, or %NULL to ignore
 *
 * Receives a file descriptor from the sending end of the connection.
 * The sending end has to call g_unix_connection_send_fd() for this
 * to work.
 * As well as reading the fd this also reads a single byte from the
 * stream, as this is required for fd passing to work on some
 * implementations.
 *
 * Returns: a file descriptor on success, -1 on error.
 * Since: 2.22
 */


/**
 * GMountOperation::show-processes:
 * @op: a #GMountOperation.
 * @message: string containing a message to display to the user.
 * @processes: an array of #GPid for processes blocking the operation.
 * @choices: an array of strings for each possible choice.
 *
 * Emitted when one or more processes are blocking an operation
 * e.g. unmounting/ejecting a #GMount or stopping a #GDrive.
 * Note that this signal may be emitted several times to update the
 * list of blocking processes as processes close files. The
 * application should only respond with g_mount_operation_reply() to
 * the latest signal (setting #GMountOperation:choice to the choice
 * the user made).
 * If the message contains a line break, the first line should be
 * presented as a heading. For example, it may be used as the
 * primary text in a #GtkMessageDialog.
 *
 * Since: 2.22
 */


/**
 * g_simple_async_result_set_error:
 * @simple: a #GSimpleAsyncResult.
 * @domain: a #GQuark (usually #G_IO_ERROR).
 * @code: an error code.
 * @format: a formatted error reporting string.
 * @...: a list of variables to fill in @format.
 *
 * Sets an error within the asynchronous result without a #GError.
 */


/**
 * g_file_info_remove_attribute:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 *
 * Removes all cases of @attribute from @info if it exists.
 */


/**
 * g_unix_input_stream_get_fd:
 * @stream: a #GUnixInputStream
 *
 * Return the UNIX file descriptor that the stream reads from.
 *
 * Returns: The file descriptor of @stream
 * Since: 2.20
 */


/**
 * g_dbus_connection_add_filter:
 * @connection: A #GDBusConnection.
 * @filter_function: A filter function.
 * @user_data: User data to pass to @filter_function.
 * @user_data_free_func: Function to free @user_data with when filter is removed or %NULL.
 *
 * Adds a message filter. Filters are handlers that are run on all
 * incoming and outgoing messages, prior to standard dispatch. Filters
 * are run in the order that they were added.  The same handler can be
 * added as a filter more than once, in which case it will be run more
 * than once.  Filters added during a filter callback won't be run on
 * the message being processed. Filter functions are allowed to modify
 * and even drop messages - see the #GDBusMessageFilterResult
 * enumeration for details.
 * Note that filters are run in a dedicated message handling thread so
 * they can't block and, generally, can't do anything but signal a
 * worker thread. Also note that filters are rarely needed - use API
 * such as g_dbus_connection_send_message_with_reply(),
 * g_dbus_connection_signal_subscribe() or
 * g_dbus_connection_call() instead.
 * If a filter consumes an incoming message the message is not
 * dispatched anywhere else - not even the standard dispatch machinery
 * (that API such as g_dbus_connection_signal_subscribe() and
 * g_dbus_connection_send_message_with_reply() relies on) will see the
 * message. Similary, if a filter consumes an outgoing message, the
 * message will not be sent to the other peer.
 * g_dbus_connection_remove_filter().
 *
 * Returns: A filter identifier that can be used with
 * Since: 2.26
 */


/**
 * g_dbus_method_invocation_return_dbus_error:
 * @invocation: A #GDBusMethodInvocation.
 * @error_name: A valid D-Bus error name.
 * @error_message: A valid D-Bus error message.
 *
 * Finishes handling a D-Bus method call by returning an error.
 * This method will free @invocation, you cannot use it afterwards.
 *
 * Since: 2.26
 */


/**
 * g_file_info_get_attribute_string:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 *
 * Gets the value of a string attribute. If the attribute does
 * not contain a string, %NULL will be returned.
 * %NULL otherwise.
 *
 * Returns: the contents of the @attribute value as a string, or
 */


/**
 * g_content_type_equals:
 * @type1: a content type string
 * @type2: a content type string
 *
 * Compares two content types for equality.
 * %FALSE otherwise.
 *
 * Returns: %TRUE if the two strings are identical or equivalent,
 */


/**
 * g_file_info_set_size:
 * @info: a #GFileInfo.
 * @size: a #goffset containing the file's size.
 *
 * Sets the %G_FILE_ATTRIBUTE_STANDARD_SIZE attribute in the file info
 * to the given size.
 */


/**
 * GApplication::startup:
 * @application: the application
 *
 * The ::startup signal is emitted on the primary instance immediately
 * after registration. See g_activation_register().
 */


/**
 * SECTION:gfileinf:
 * @short_description: File Information and Attributes
 * @include: gio/gio.h
 * @see_also: #GFile, <link linkend="gio-GFileAttribute">GFileAttribute</link>
 *
 * Functionality for manipulating basic metadata for files. #GFileInfo
 * implements methods for getting information that all files should
 * contain, and allows for manipulation of extended attributes.
 * See <link linkend="gio-GFileAttribute">GFileAttribute</link> for more
 * information on how GIO handles file attributes.
 * To obtain a #GFileInfo for a #GFile, use g_file_query_info() (or its
 * async variant). To obtain a #GFileInfo for a file input or output
 * stream, use g_file_input_stream_query_info() or
 * g_file_output_stream_query_info() (or their async variants).
 * To change the actual attributes of a file, you should then set the
 * attribute in the #GFileInfo and call g_file_set_attributes_from_info()
 * or g_file_set_attributes_async() on a GFile.
 * However, not all attributes can be changed in the file. For instance,
 * the actual size of a file cannot be changed via g_file_info_set_size().
 * You may call g_file_query_settable_attributes() and
 * g_file_query_writable_namespaces() to discover the settable attributes
 * of a particular file at runtime.
 * #GFileAttributeMatcher allows for searching through a #GFileInfo for
 * attributes.
 */


/**
 * g_socket_bind:
 * @socket: a #GSocket.
 * @address: a #GSocketAddress specifying the local address.
 * @allow_reuse: whether to allow reusing this address
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * When a socket is created it is attached to an address family, but it
 * doesn't have an address in this family. g_socket_bind() assigns the
 * address (sometimes called name) of the socket.
 * It is generally required to bind to a local address before you can
 * receive connections. (See g_socket_listen() and g_socket_accept() ).
 * In certain situations, you may also want to bind a socket that will be
 * used to initiate connections, though this is not normally required.
 * eventually call g_socket_accept() on), and %FALSE for client sockets.
 * (Specifically, if it is %TRUE, then g_socket_bind() will set the
 * %SO_REUSEADDR flag on the socket, allowing it to bind @address even if
 * that address was previously used by another socket that has not yet been
 * fully cleaned-up by the kernel. Failing to set this flag on a server
 * socket may cause the bind call to return %G_IO_ERROR_ADDRESS_IN_USE if
 * the server program is stopped and then immediately restarted.)
 *
 * Returns: %TRUE on success, %FALSE on error.
 * Since: 2.22
 */


/**
 * g_input_stream_read_all:
 * @stream: a #GInputStream.
 * @buffer: a buffer to read data into (which should be at least count bytes long).
 * @count: the number of bytes that will be read from the stream
 * @bytes_read: location to store the number of bytes that was read from the stream
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: location to store the error occuring, or %NULL to ignore
 *
 * Tries to read @count bytes from the stream into the buffer starting at
 * This function is similar to g_input_stream_read(), except it tries to
 * read as many bytes as requested, only stopping on an error or end of stream.
 * On a successful read of @count bytes, or if we reached the end of the
 * stream,  %TRUE is returned, and @bytes_read is set to the number of bytes
 * read into @buffer.
 * If there is an error during the operation %FALSE is returned and @error
 * is set to indicate the error status, @bytes_read is updated to contain
 * the number of bytes read into @buffer before the error occurred.
 *
 * Returns: %TRUE on success, %FALSE if there was an error
 */


/**
 * g_cancellable_pop_current:
 * @cancellable: a #GCancellable object
 *
 * Pops @cancellable off the cancellable stack (verifying that @cancellable
 * is on the top of the stack).
 */


/**
 * SECTION:gthemedico:
 * @short_description: Icon theming support
 * @include: gio/gio.h
 * @see_also: #GIcon, #GLoadableIcon
 *
 * #GThemedIcon is an implementation of #GIcon that supports icon themes.
 * #GThemedIcon contains a list of all of the icons present in an icon
 * theme, so that icons can be looked up quickly. #GThemedIcon does
 * not provide actual pixmaps for icons, just the icon names.
 * Ideally something like gtk_icon_theme_choose_icon() should be used to
 * resolve the list of names so that fallback icons work nicely with
 * themes that inherit other themes.
 */


/**
 * g_file_info_list_attributes:
 * @info: a #GFileInfo.
 * @name_space: a file attribute key's namespace.
 *
 * Lists the file info structure's attributes.
 * possible attribute types for the given @name_space, or
 * %NULL on error.
 *
 * Returns: (array zero-terminated=1) (transfer full): a null-terminated array of strings of all of the
 */


/**
 * GActionGroup::action-enabled-changed:
 * @action_group: the #GActionGroup that changed
 * @action_name: the name of the action in @action_group
 * @enabled: whether the action is enabled or not
 *
 * Signals that the enabled status of the named action has changed.
 *
 * Since: 2.28
 */


/**
 * g_dbus_connection_new_sync:
 * @stream: A #GIOStream.
 * @guid: The GUID to use if a authenticating as a server or %NULL.
 * @flags: Flags describing how to make the connection.
 * @observer: A #GDBusAuthObserver or %NULL.
 * @cancellable: A #GCancellable or %NULL.
 * @error: Return location for error or %NULL.
 *
 * Synchronously sets up a D-Bus connection for exchanging D-Bus messages
 * with the end represented by @stream.
 * If @observer is not %NULL it may be used to control the
 * authentication process.
 * This is a synchronous failable constructor. See
 * g_dbus_connection_new() for the asynchronous version.
 *
 * Returns: A #GDBusConnection or %NULL if @error is set. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * SECTION:gbufferedinputstrea:
 * @short_description: Buffered Input Stream
 * @include: gio/gio.h
 * @see_also: #GFilterInputStream, #GInputStream
 *
 * Buffered input stream implements #GFilterInputStream and provides
 * for buffered reads.
 * By default, #GBufferedInputStream's buffer size is set at 4 kilobytes.
 * To create a buffered input stream, use g_buffered_input_stream_new(),
 * or g_buffered_input_stream_new_sized() to specify the buffer's size at
 * construction.
 * To get the size of a buffer within a buffered input stream, use
 * g_buffered_input_stream_get_buffer_size(). To change the size of a
 * buffered input stream's buffer, use
 * g_buffered_input_stream_set_buffer_size(). Note that the buffer's size
 * cannot be reduced below the size of the data within the buffer.
 */


/**
 * g_proxy_connect_async:
 * @proxy: a #GProxy
 * @connection: a #GIOStream
 * @proxy_address: a #GProxyAddress
 * @cancellable: a #GCancellable
 * @callback: a #GAsyncReadyCallback
 * @user_data: callback data
 *
 * Asynchronous version of g_proxy_connect().
 *
 * Since: 2.26
 */


/**
 * g_resolver_lookup_service:
 * @resolver: a #GResolver
 * @service: the service type to look up (eg, "ldap")
 * @protocol: the networking protocol to use for @service (eg, "tcp")
 * @domain: the DNS domain to look up the service in
 * @cancellable: a #GCancellable, or %NULL
 * @error: return location for a #GError, or %NULL
 *
 * Synchronously performs a DNS SRV lookup for the given @service and
 * include the leading underscore that appears in the actual DNS
 * entry.
 * On success, g_resolver_lookup_service() will return a #GList of
 * #GSrvTarget, sorted in order of preference. (That is, you should
 * attempt to connect to the first target first, then the second if
 * the first fails, etc.)
 * If the DNS resolution fails, @error (if non-%NULL) will be set to
 * a value from #GResolverError.
 * If @cancellable is non-%NULL, it can be used to cancel the
 * operation, in which case @error (if non-%NULL) will be set to
 * %G_IO_ERROR_CANCELLED.
 * If you are planning to connect to the service, it is usually easier
 * to create a #GNetworkService and use its #GSocketConnectable
 * interface.
 * or %NULL on error. You must free each of the targets and the list when you are
 * done with it. (You can use g_resolver_free_targets() to do this.)
 *
 * Returns: (element-type GSrvTarget) (transfer full): a #GList of #GSrvTarget,
 * Since: 2.22
 */


/**
 * g_file_create:
 * @file: input #GFile.
 * @flags: a set of #GFileCreateFlags.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Creates a new file and returns an output stream for writing to it.
 * The file must not already exist.
 * By default files created are generally readable by everyone,
 * but if you pass #G_FILE_CREATE_PRIVATE in @flags the file
 * will be made readable only to the current user, to the level that
 * is supported on the target filesystem.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * If a file or directory with this name already exists the G_IO_ERROR_EXISTS
 * error will be returned.
 * Some file systems don't allow all file names, and may
 * return an G_IO_ERROR_INVALID_FILENAME error, and if the name
 * is to long G_IO_ERROR_FILENAME_TOO_LONG will be returned.
 * Other errors are possible too, and depend on what kind of
 * filesystem the file is on.
 * %NULL on error.
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): a #GFileOutputStream for the newly created file, or
 */


/**
 * g_buffered_input_stream_fill:
 * @stream: a #GBufferedInputStream
 * @count: the number of bytes that will be read from the stream
 * @cancellable: optional #GCancellable object, %NULL to ignore
 * @error: location to store the error occuring, or %NULL to ignore
 *
 * Tries to read @count bytes from the stream into the buffer.
 * Will block during this read.
 * If @count is zero, returns zero and does nothing. A value of @count
 * larger than %G_MAXSSIZE will cause a %G_IO_ERROR_INVALID_ARGUMENT error.
 * On success, the number of bytes read into the buffer is returned.
 * It is not an error if this is not the same as the requested size, as it
 * can happen e.g. near the end of a file. Zero is returned on end of file
 * (or if @count is zero),  but never otherwise.
 * If @count is -1 then the attempted read size is equal to the number of
 * bytes that are required to fill the buffer.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned. If an
 * operation was partially finished when the operation was cancelled the
 * partial result will be returned, without an error.
 * On error -1 is returned and @error is set accordingly.
 * For the asynchronous, non-blocking, version of this function, see
 * g_buffered_input_stream_fill_async().
 * or -1 on error.
 *
 * Returns: the number of bytes read into @stream's buffer, up to @count,
 */


/**
 * g_settings_backend_writable_changed:
 * @backend: a #GSettingsBackend implementation
 * @key: the name of the key
 *
 * Signals that the writability of a single key has possibly changed.
 * Since GSettings performs no locking operations for itself, this call
 * will always be made in response to external events.
 *
 * Since: 2.26
 */


/**
 * g_dbus_proxy_new:
 * @connection: A #GDBusConnection.
 * @flags: Flags used when constructing the proxy.
 * @info: A #GDBusInterfaceInfo specifying the minimal interface that @proxy conforms to or %NULL.
 * @name: A bus name (well-known or unique) or %NULL if @connection is not a message bus connection.
 * @object_path: An object path.
 * @interface_name: A D-Bus interface name.
 * @cancellable: A #GCancellable or %NULL.
 * @callback: Callback function to invoke when the proxy is ready.
 * @user_data: User data to pass to @callback.
 *
 * Creates a proxy for accessing @interface_name on the remote object
 * at @object_path owned by @name at @connection and asynchronously
 * loads D-Bus properties unless the
 * %G_DBUS_PROXY_FLAGS_DO_NOT_LOAD_PROPERTIES flag is used. Connect to
 * the #GDBusProxy::g-properties-changed signal to get notified about
 * property changes.
 * If the %G_DBUS_PROXY_FLAGS_DO_NOT_CONNECT_SIGNALS flag is not set, also sets up
 * match rules for signals. Connect to the #GDBusProxy::g-signal signal
 * to handle signals from the remote object.
 * If @name is a well-known name and the
 * %G_DBUS_PROXY_FLAGS_DO_NOT_AUTO_START flag isn't set and no name
 * owner currently exists, the message bus will be requested to launch
 * a name owner for the name.
 * This is a failable asynchronous constructor - when the proxy is
 * ready, @callback will be invoked and you can use
 * g_dbus_proxy_new_finish() to get the result.
 * See g_dbus_proxy_new_sync() and for a synchronous version of this constructor.
 * See <xref linkend="gdbus-wellknown-proxy"/> for an example of how #GDBusProxy can be used.
 *
 * Since: 2.26
 */


/**
 * g_unix_mount_point_free:
 * @mount_point: unix mount point to free.
 *
 * Frees a unix mount point.
 */


/**
 * GInetSocketAddress:
 *
 * An IPv4 or IPv6 socket address, corresponding to a <type>struct
 * sockaddr_in</type> or <type>struct sockaddr_in6</type>.
 */


/**
 * g_dbus_error_set_dbus_error_valist:
 * @error: A pointer to a #GError or %NULL.
 * @dbus_error_name: D-Bus error name.
 * @dbus_error_message: D-Bus error message.
 * @format: printf()-style format to prepend to @dbus_error_message or %NULL.
 * @var_args: Arguments for @format.
 *
 * Like g_dbus_error_set_dbus_error() but intended for language bindings.
 *
 * Since: 2.26
 */


/**
 * g_drive_start:
 * @drive: a #GDrive.
 * @flags: flags affecting the start operation.
 * @mount_operation: a #GMountOperation or %NULL to avoid user interaction.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback, or %NULL.
 * @user_data: user data to pass to @callback
 *
 * Asynchronously starts a drive.
 * When the operation is finished, @callback will be called.
 * You can then call g_drive_start_finish() to obtain the
 * result of the operation.
 *
 * Since: 2.22
 */


/**
 * g_unix_credentials_message_new_with_credentials:
 * @credentials: A #GCredentials object.
 *
 * Creates a new #GUnixCredentialsMessage holding @credentials.
 *
 * Returns: a new #GUnixCredentialsMessage
 * Since: 2.26
 */


/**
 * g_file_create_readwrite:
 * @file: a #GFile
 * @flags: a set of #GFileCreateFlags
 * @cancellable: optional #GCancellable object, %NULL to ignore
 * @error: return location for a #GError, or %NULL
 *
 * Creates a new file and returns a stream for reading and writing to it.
 * The file must not already exist.
 * By default files created are generally readable by everyone,
 * but if you pass #G_FILE_CREATE_PRIVATE in @flags the file
 * will be made readable only to the current user, to the level that
 * is supported on the target filesystem.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * If a file or directory with this name already exists the %G_IO_ERROR_EXISTS
 * error will be returned. Some file systems don't allow all file names,
 * and may return an %G_IO_ERROR_INVALID_FILENAME error, and if the name
 * is too long, %G_IO_ERROR_FILENAME_TOO_LONG will be returned. Other errors
 * are possible too, and depend on what kind of filesystem the file is on.
 * Note that in many non-local file cases read and write streams are not
 * supported, so make sure you really need to do read and write streaming,
 * rather than just opening for reading or writing.
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): a #GFileIOStream for the newly created file, or %NULL on error.
 * Since: 2.22
 */


/**
 * g_dbus_message_set_member:
 * @message: A #GDBusMessage.
 * @value: The value to set.
 *
 * Convenience setter for the %G_DBUS_MESSAGE_HEADER_FIELD_MEMBER header field.
 *
 * Since: 2.26
 */


/**
 * g_socket_receive_from:
 * @socket: a #GSocket
 * @address: a pointer to a #GSocketAddress pointer, or %NULL
 * @buffer: a buffer to read data into (which should be at least @size bytes long).
 * @size: the number of bytes you want to read from the socket
 * @cancellable: a %GCancellable or %NULL
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Receive data (up to @size bytes) from a socket.
 * If @address is non-%NULL then @address will be set equal to the
 * source address of the received packet.
 * See g_socket_receive() for additional information.
 *
 * Returns: Number of bytes read, or -1 on error
 * Since: 2.22
 */


/**
 * g_seekable_can_seek:
 * @seekable: a #GSeekable.
 *
 * Tests if the stream supports the #GSeekableIface.
 *
 * Returns: %TRUE if @seekable can be seeked. %FALSE otherwise.
 */


/**
 * GCredentialsClass:
 *
 * Class structure for #GCredentials.
 *
 * Since: 2.26
 */


/**
 * SECTION:gactio:
 * @title: GAction
 * @short_description: an action
 *
 * #GAction represents a single named action.
 * The main interface to an action is that it can be activated with
 * g_action_activate().  This results in the 'activate' signal being
 * emitted.  An activation has a #GVariant parameter (which may be
 * %NULL).  The correct type for the parameter is determined by a static
 * parameter type (which is given at construction time).
 * An action may optionally have a state, in which case the state may be
 * set with g_action_set_state().  This call takes a #GVariant.  The
 * correct type for the state is determined by a static state type
 * (which is given at construction time).
 * The state may have a hint associated with it, specifying its valid
 * range.
 * #GAction is merely the interface to the concept of an action, as
 * described above.  Various implementations of actions exist, including
 * #GSimpleAction and #GtkAction.
 * In all cases, the implementing class is responsible for storing the
 * name of the action, the parameter type, the enabled state, the
 * optional state type and the state and emitting the appropriate
 * signals when these change.  The implementor responsible for filtering
 * calls to g_action_activate() and g_action_set_state() for type safety
 * and for the state being enabled.
 * Probably the only useful thing to do with a #GAction is to put it
 * inside of a #GSimpleActionGroup.
 */


/**
 * g_file_attribute_matcher_new:
 * @attributes: an attribute string to match.
 *
 * Creates a new file attribute matcher, which matches attributes
 * against a given string. #GFileAttributeMatcher<!-- -->s are reference
 * counted structures, and are created with a reference count of 1. If
 * the number of references falls to 0, the #GFileAttributeMatcher is
 * automatically destroyed.
 * The @attribute string should be formatted with specific keys separated
 * from namespaces with a double colon. Several "namespace::key" strings may be
 * concatenated with a single comma (e.g. "standard::type,standard::is-hidden").
 * The wildcard "*" may be used to match all keys and namespaces, or
 * "namespace::*" will match all keys in a given namespace.
 * Examples of strings to use:
 * <table>
 * <title>File Attribute Matcher strings and results</title>
 * <tgroup cols='2' align='left'><thead>
 * <row><entry> Matcher String </entry><entry> Matches </entry></row></thead>
 * <tbody>
 * <row><entry>"*"</entry><entry>matches all attributes.</entry></row>
 * <row><entry>"standard::is-hidden"</entry><entry>matches only the key is-hidden in the standard namespace.</entry></row>
 * <row><entry>"standard::type,unix::*"</entry><entry>matches the type key in the standard namespace and
 * all keys in the unix namespace.</entry></row>
 * </tbody></tgroup>
 * </table>
 *
 * Returns: a #GFileAttributeMatcher.
 */


/**
 * GDBusMethodInvocation:
 *
 * The #GDBusMethodInvocation structure contains only private data and
 * should only be accessed using the provided API.
 *
 * Since: 2.26
 */


/**
 * GInetAddress:
 *
 * An IPv4 or IPv6 internet address.
 */


/**
 * g_file_info_get_attribute_type:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 *
 * Gets the attribute type for an attribute key.
 * %G_FILE_ATTRIBUTE_TYPE_INVALID if the key is not set.
 *
 * Returns: a #GFileAttributeType for the given @attribute, or
 */


/**
 * g_inet_socket_address_get_port:
 * @address: a #GInetSocketAddress
 *
 * Gets @address's port.
 *
 * Returns: the port for @address
 * Since: 2.22
 */


/**
 * g_dbus_message_get_destination:
 * @message: A #GDBusMessage.
 *
 * Convenience getter for the %G_DBUS_MESSAGE_HEADER_FIELD_DESTINATION header field.
 *
 * Returns: The value.
 * Since: 2.26
 */


/**
 * g_file_load_contents:
 * @file: input #GFile.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @contents: (out) (transfer full): a location to place the contents of the file.
 * @length: (out) (allow-none): a location to place the length of the contents of the file, or %NULL if the length is not needed
 * @etag_out: (out) (allow-none): a location to place the current entity tag for the file, or %NULL if the entity tag is not needed
 * @error: a #GError, or %NULL
 *
 * Loads the content of the file into memory. The data is always
 * zero-terminated, but this is not included in the resultant @length.
 * The returned @content should be freed with g_free() when no longer
 * needed.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * %FALSE if there were errors.
 *
 * Returns: %TRUE if the @file's contents were successfully loaded.
 */


/**
 * g_inet_address_get_is_multicast:
 * @address: a #GInetAddress
 *
 * Tests whether @address is a multicast address.
 *
 * Returns: %TRUE if @address is a multicast address.
 * Since: 2.22
 */


/**
 * GDBusServer:flags:
 *
 * Flags from the #GDBusServerFlags enumeration.
 *
 * Since: 2.26
 */


/**
 * GSettings:schema:
 *
 * The name of the schema that describes the types of keys
 * for this #GSettings object.
 */


/**
 * g_volume_monitor_get_volume_for_uuid:
 * @volume_monitor: a #GVolumeMonitor.
 * @uuid: the UUID to look for
 *
 * Finds a #GVolume object by its UUID (see g_volume_get_uuid())
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): a #GVolume or %NULL if no such volume is available.
 */


/**
 * g_settings_set_enum:
 * @settings: a #GSettings object
 * @key: a key, within @settings
 * @value: an enumerated value
 * @returns: %TRUE, if the set succeeds
 *
 * Looks up the enumerated type nick for @value and writes it to @key,
 * within @settings.
 * It is a programmer error to give a @key that isn't contained in the
 * schema for @settings or is not marked as an enumerated type, or for
 * After performing the write, accessing @key directly with
 * g_settings_get_string() will return the 'nick' associated with
 */


/**
 * g_network_address_parse:
 * @host_and_port: the hostname and optionally a port
 * @default_port: the default port if not in @host_and_port
 * @error: a pointer to a #GError, or %NULL
 *
 * Creates a new #GSocketConnectable for connecting to the given
 * parsing @host_and_port fails.
 * address, an IPv4 address, or a domain name (in which case a DNS
 * lookup is performed). Quoting with [] is supported for all address
 * types. A port override may be specified in the usual way with a
 * colon. Ports may be given as decimal numbers or symbolic names (in
 * which case an /etc/services lookup is performed).
 * If no port is specified in @host_and_port then @default_port will be
 * used as the port number to connect to.
 * In general, @host_and_port is expected to be provided by the user
 * (allowing them to give the hostname, and a port overide if necessary)
 * and @default_port is expected to be provided by the application.
 *
 * Returns: (transfer full): the new #GNetworkAddress, or %NULL on error
 * Since: 2.22
 */


/**
 * g_settings_backend_path_changed:
 * @backend: a #GSettingsBackend implementation
 * @path: the path containing the changes
 * @origin_tag: the origin tag
 *
 * Signals that all keys below a given path may have possibly changed.
 * Backend implementations should call this if an entire path of keys
 * have possibly changed their values.
 * not containing '//').
 * The meaning of this signal is that any of the key which has a name
 * starting with @path may have changed.
 * The same rules for when notifications must occur apply as per
 * g_settings_backend_changed().  This call might be an appropriate
 * reasponse to a 'reset' call but implementations are also free to
 * explicitly list the keys that were affected by that call if they can
 * easily do so.
 * For efficiency reasons, the implementation should strive for @path to
 * keys that were changed) but this is not strictly required.  As an
 * example, if this function is called with the path of "/" then every
 * single key in the application will be notified of a possible change.
 *
 * Be as long as possible (ie: the longest common prefix of all of the
 * Since: 2.26
 */


/**
 * g_socket_listener_accept_socket:
 * @listener: a #GSocketListener
 * @source_object: (out) (transfer none) (allow-none): location where #GObject pointer will be stored, or %NULL.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Blocks waiting for a client to connect to any of the sockets added
 * to the listener. Returns the #GSocket that was accepted.
 * If you want to accept the high-level #GSocketConnection, not a #GSocket,
 * which is often the case, then you should use g_socket_listener_accept()
 * instead.
 * If @source_object is not %NULL it will be filled out with the source
 * object specified when the corresponding socket or address was added
 * to the listener.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: (transfer full): a #GSocket on success, %NULL on error.
 * Since: 2.22
 */


/**
 * GVolumeMonitor::mount-removed:
 * @volume_monitor: The volume monitor emitting the signal.
 * @mount: a #GMount that was removed.
 *
 * Emitted when a mount is removed.
 */


/**
 * g_socket_address_get_family:
 * @address: a #GSocketAddress
 *
 * Gets the socket family type of @address.
 *
 * Returns: the socket family type of @address.
 * Since: 2.22
 */


/**
 * g_simple_async_result_get_op_res_gssize:
 * @simple: a #GSimpleAsyncResult.
 *
 * Gets a gssize from the asynchronous result.
 *
 * Returns: a gssize returned from the asynchronous function.
 */


/**
 * g_vfs_get_default:
 *
 * Gets the default #GVfs for the system.
 *
 * Returns: (transfer none): a #GVfs.
 */


/**
 * g_simple_action_new_stateful:
 * @name: the name of the action
 * @parameter_type: (allow-none): the type of the parameter to the activate function
 * @state: the initial state of the action
 *
 * Creates a new stateful action.
 * must have the same #GVariantType as the initial state.
 * If the @state GVariant is floating, it is consumed.
 *
 * Returns: a new #GSimpleAction
 * Since: 2.28
 */


/**
 * g_file_mount_mountable_finish:
 * @file: input #GFile.
 * @result: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes a mount operation. See g_file_mount_mountable() for details.
 * Finish an asynchronous mount operation that was started
 * with g_file_mount_mountable().
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): a #GFile or %NULL on error.
 */


/**
 * g_drive_poll_for_media_finish:
 * @drive: a #GDrive.
 * @result: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes an operation started with g_drive_poll_for_media() on a drive.
 * %FALSE otherwise.
 *
 * Returns: %TRUE if the drive has been poll_for_mediaed successfully,
 */


/**
 * g_dbus_message_set_reply_serial:
 * @message: A #GDBusMessage.
 * @value: The value to set.
 *
 * Convenience setter for the %G_DBUS_MESSAGE_HEADER_FIELD_REPLY_SERIAL header field.
 *
 * Since: 2.26
 */


/**
 * SECTION:gdbusmethodinvocatio:
 * @short_description: Object for handling remote calls
 * @include: gio/gio.h
 *
 * Instances of the #GDBusMethodInvocation class are used when
 * handling D-Bus method calls. It provides a way to asynchronously
 * return results and errors.
 * The normal way to obtain a #GDBusMethodInvocation object is to receive
 * it as an argument to the handle_method_call() function in a
 * #GDBusInterfaceVTable that was passed to g_dbus_connection_register_object().
 */


/**
 * g_async_initable_new_async:
 * @object_type: a #GType supporting #GAsyncInitable.
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the operation.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback to call when the initialization is finished
 * @user_data: the data to pass to callback function
 * @first_property_name: the name of the first property, or %NULL if no properties
 * @...: the value of the first property, followed by other property value pairs, and ended by %NULL.
 *
 * Helper function for constructing #GAsyncInitiable object. This is
 * similar to g_object_new() but also initializes the object asynchronously.
 * When the initialization is finished, @callback will be called. You can
 * then call g_async_initable_new_finish() to get the new object and check
 * for any errors.
 *
 * Since: 2.22
 */


/**
 * GWin32OutputStream:handle:
 *
 * The file handle that the stream writes to.
 *
 * Since: 2.26
 */


/**
 * SECTION:gasyncresul:
 * @short_description: Asynchronous Function Results
 * @include: gio/gio.h
 * @see_also: #GSimpleAsyncResult
 *
 * Provides a base class for implementing asynchronous function results.
 * Asynchronous operations are broken up into two separate operations
 * which are chained together by a #GAsyncReadyCallback. To begin
 * an asynchronous operation, provide a #GAsyncReadyCallback to the
 * asynchronous function. This callback will be triggered when the
 * operation has completed, and will be passed a #GAsyncResult instance
 * filled with the details of the operation's success or failure, the
 * object the asynchronous function was started for and any error codes
 * returned. The asynchronous callback function is then expected to call
 * the corresponding "_finish()" function, passing the object the
 * function was called for, the #GAsyncResult instance, and (optionally)
 * an @error to grab any error conditions that may have occurred.
 * The "_finish()" function for an operation takes the generic result
 * (of type #GAsyncResult) and returns the specific result that the
 * operation in question yields (e.g. a #GFileEnumerator for a
 * "enumerate children" operation). If the result or error status of the
 * operation is not needed, there is no need to call the "_finish()"
 * function; GIO will take care of cleaning up the result and error
 * information after the #GAsyncReadyCallback returns. Applications may
 * also take a reference to the #GAsyncResult and call "_finish()"
 * later; however, the "_finish()" function may be called at most once.
 * Example of a typical asynchronous operation flow:
 * |[
 * void _theoretical_frobnitz_async (Theoretical         *t,
 * GCancellable        *c,
 * GAsyncReadyCallback *cb,
 * gpointer             u);
 * gboolean _theoretical_frobnitz_finish (Theoretical   *t,
 * GAsyncResult  *res,
 * GError       **e);
 * static void
 * frobnitz_result_func (GObject      *source_object,
 * GAsyncResult *res,
 * gpointer      user_data)
 * {
 * gboolean success = FALSE;
 * success = _theoretical_frobnitz_finish (source_object, res, NULL);
 * if (success)
 * g_printf ("Hurray!\n");
 * else
 * g_printf ("Uh oh!\n");
 * /<!-- -->* ... *<!-- -->/
 * }
 * int main (int argc, void *argv[])
 * {
 * /<!-- -->* ... *<!-- -->/
 * _theoretical_frobnitz_async (theoretical_data,
 * NULL,
 * frobnitz_result_func,
 * NULL);
 * /<!-- -->* ... *<!-- -->/
 * }
 * ]|
 * The callback for an asynchronous operation is called only once, and is
 * always called, even in the case of a cancelled operation. On cancellation
 * the result is a %G_IO_ERROR_CANCELLED error.
 * Some asynchronous operations are implemented using synchronous calls.
 * These are run in a separate thread, if #GThread has been initialized, but
 * otherwise they are sent to the Main Event Loop and processed in an idle
 * function. So, if you truly need asynchronous operations, make sure to
 * initialize #GThread.
 */


/**
 * g_icon_new_for_string:
 * @str: A string obtained via g_icon_to_string().
 * @error: Return location for error.
 *
 * Generate a #GIcon instance from @str. This function can fail if
 * If your application or library provides one or more #GIcon
 * implementations you need to ensure that each #GType is registered
 * with the type system prior to calling g_icon_new_for_string().
 *
 * Returns: An object implementing the #GIcon interface or %NULL if
 * Since: 2.20
 */


/**
 * g_app_info_supports_files:
 * @appinfo: a #GAppInfo.
 *
 * Checks if the application accepts files as arguments.
 *
 * Returns: %TRUE if the @appinfo supports files.
 */


/**
 * g_action_group_get_action_state:
 * @action_group: a #GActionGroup
 * @action_name: the name of the action to query
 *
 * Queries the current state of the named action within @action_group.
 * If the action is not stateful then %NULL will be returned.  If the
 * action is stateful then the type of the return value is the type
 * given by g_action_group_get_state_type().
 * The return value (if non-%NULL) should be freed with
 * g_variant_unref() when it is no longer required.
 *
 * Returns: (allow-none): the current state of the action
 * Since: 2.28
 */


/**
 * g_drive_can_stop:
 * @drive: a #GDrive.
 *
 * Checks if a drive can be stopped.
 *
 * Returns: %TRUE if the @drive can be stopped, %FALSE otherwise.
 * Since: 2.22
 */


/**
 * g_file_input_stream_query_info_async:
 * @stream: a #GFileInputStream.
 * @attributes: a file attribute query string.
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: callback to call when the request is satisfied
 * @user_data: the data to pass to callback function
 *
 * Queries the stream information asynchronously.
 * When the operation is finished @callback will be called.
 * You can then call g_file_input_stream_query_info_finish()
 * to get the result of the operation.
 * For the synchronous version of this function,
 * see g_file_input_stream_query_info().
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be set
 */


/**
 * GSimplePermission:
 *
 * #GSimplePermission is an opaque data structure.  There are no methods
 * except for those defined by #GPermission.
 */


/**
 * g_data_input_stream_read_until:
 * @stream: a given #GDataInputStream.
 * @stop_chars: characters to terminate the read.
 * @length: a #gsize to get the length of the data read in.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: #GError for error reporting.
 *
 * Reads a string from the data input stream, up to the first
 * occurrence of any of the stop characters.
 * Note that, in contrast to g_data_input_stream_read_until_async(),
 * this function consumes the stop character that it finds.
 * Don't use this function in new code.  Its functionality is
 * inconsistent with g_data_input_stream_read_until_async().  Both
 * functions will be marked as deprecated in a future release.  Use
 * g_data_input_stream_read_upto() instead, but note that that function
 * does not consume the stop character.
 * any of the stop characters. Set @length to a #gsize to get the length
 * of the string. This function will return %NULL on an error.
 *
 * Returns: a string with the data that was read before encountering
 */


/**
 * g_cancellable_connect:
 * @cancellable: A #GCancellable.
 * @callback: The #GCallback to connect.
 * @data: Data to pass to @callback.
 * @data_destroy_func: Free function for @data or %NULL.
 *
 * Convenience function to connect to the #GCancellable::cancelled
 * signal. Also handles the race condition that may happen
 * if the cancellable is cancelled right before connecting.
 * time of the connect if @cancellable is already cancelled,
 * or when @cancellable is cancelled in some thread.
 * disconnected, or immediately if the cancellable is already
 * cancelled.
 * See #GCancellable::cancelled for details on how to use this.
 * been cancelled.
 *
 * Returns: The id of the signal handler or 0 if @cancellable has already
 * Since: 2.22
 */


/**
 * GSimpleAction:enabled:
 *
 * If @action is currently enabled.
 * If the action is disabled then calls to g_simple_action_activate() and
 * g_simple_action_set_state() have no effect.
 *
 * Since: 2.28
 */


/**
 * g_app_launch_context_new:
 *
 * Creates a new application launch context. This is not normally used,
 * instead you instantiate a subclass of this, such as #GdkAppLaunchContext.
 *
 * Returns: a #GAppLaunchContext.
 */


/**
 * g_simple_async_result_set_op_res_gpointer:
 * @simple: a #GSimpleAsyncResult.
 * @op_res: a pointer result from an asynchronous function.
 * @destroy_op_res: a #GDestroyNotify function.
 *
 * Sets the operation result within the asynchronous result to a pointer.
 */


/**
 * g_unix_mount_get_device_path:
 * @mount_entry: a #GUnixMount.
 *
 * Gets the device path for a unix mount.
 *
 * Returns: a string containing the device path.
 */


/**
 * g_dbus_error_strip_remote_error:
 * @error: A #GError.
 *
 * Looks for extra information in the error message used to recover
 * the D-Bus error name and strips it if found. If stripped, the
 * message field in @error will correspond exactly to what was
 * received on the wire.
 * This is typically used when presenting errors to the end user.
 *
 * Returns: %TRUE if information was stripped, %FALSE otherwise.
 * Since: 2.26
 */


/**
 * g_socket_control_message_deserialize:
 * @level: a socket level
 * @type: a socket control message type for the given @level
 * @size: the size of the data in bytes
 * @data: pointer to the message data
 *
 * Tries to deserialize a socket control message of a given
 * of #GSocketControlMessage if they can understand this kind
 * of message and if so deserialize it into a #GSocketControlMessage.
 * If there is no implementation for this kind of control message, %NULL
 * will be returned.
 *
 * Returns: (transfer full): the deserialized message or %NULL
 * Since: 2.22
 */


/**
 * g_file_enumerate_children:
 * @file: input #GFile.
 * @attributes: an attribute query string.
 * @flags: a set of #GFileQueryInfoFlags.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: #GError for error reporting.
 *
 * Gets the requested information about the files in a directory. The result
 * is a #GFileEnumerator object that will give out #GFileInfo objects for
 * all the files in the directory.
 * The @attributes value is a string that specifies the file attributes that
 * should be gathered. It is not an error if it's not possible to read a particular
 * requested attribute from a file - it just won't be set. @attributes should
 * be a comma-separated list of attributes or attribute wildcards. The wildcard "*"
 * means all attributes, and a wildcard like "standard::*" means all attributes in the standard
 * namespace. An example attribute query be "standard::*,owner::user".
 * The standard attributes are available as defines, like #G_FILE_ATTRIBUTE_STANDARD_NAME.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * If the file does not exist, the G_IO_ERROR_NOT_FOUND error will be returned.
 * If the file is not a directory, the G_FILE_ERROR_NOTDIR error will be returned.
 * Other errors are possible too.
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): A #GFileEnumerator if successful, %NULL on error.
 */


/**
 * g_output_stream_clear_pending:
 * @stream: output stream
 *
 * Clears the pending flag on @stream.
 */


/**
 * g_permission_get_can_release:
 * @permission: a #GPermission instance
 * @returns: the value of the 'can-release' property
 *
 * Gets the value of the 'can-release' property.  This property is %TRUE
 * if it is generally possible to release the permission by calling
 * g_permission_release().
 *
 * Since: 2.26
 */


/**
 * g_mount_get_default_location:
 * @mount: a #GMount.
 *
 * Gets the default location of @mount. The default location of the given
 * the home directory, or the root of the volume).
 * The returned object should be unreffed with
 * g_object_unref() when no longer needed.
 *
 * Returns: (transfer full): a #GFile.
 */


/**
 * g_io_scheduler_job_send_to_mainloop:
 * @job: a #GIOSchedulerJob
 * @func: a #GSourceFunc callback that will be called in the original thread
 * @user_data: data to pass to @func
 * @notify: a #GDestroyNotify for @user_data, or %NULL
 *
 * Used from an I/O job to send a callback to be run in the thread
 * that the job was started from, waiting for the result (and thus
 * blocking the I/O job).
 *
 * Returns: The return value of @func
 */


/**
 * SECTION:gdatainputstrea:
 * @short_description: Data Input Stream
 * @include: gio/gio.h
 * @see_also: #GInputStream
 *
 * Data input stream implements #GInputStream and includes functions for
 * reading structured data directly from a binary input stream.
 */


/**
 * g_socket_client_get_family:
 * @client: a #GSocketClient.
 *
 * Gets the socket family of the socket client.
 * See g_socket_client_set_family() for details.
 *
 * Returns: a #GSocketFamily
 * Since: 2.22
 */


/**
 * g_simple_async_result_new:
 * @source_object: a #GObject the asynchronous function was called with, or %NULL.
 * @callback: a #GAsyncReadyCallback.
 * @user_data: user data passed to @callback.
 * @source_tag: the asynchronous function.
 *
 * Creates a #GSimpleAsyncResult.
 *
 * Returns: a #GSimpleAsyncResult.
 */


/**
 * g_content_type_get_mime_type:
 * @type: a content type string
 *
 * Gets the mime type for the content type, if one is registered.
 * or %NULL if unknown.
 *
 * Returns: (allow-none): the registered mime type for the given @type,
 */


/**
 * g_file_find_enclosing_mount_async:
 * @file: a #GFile
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: the data to pass to callback function
 *
 * Asynchronously gets the mount for the file.
 * For more details, see g_file_find_enclosing_mount() which is
 * the synchronous version of this call.
 * When the operation is finished, @callback will be called. You can then call
 * g_file_find_enclosing_mount_finish() to get the result of the operation.
 */


/**
 * g_file_open_readwrite_async:
 * @file: input #GFile.
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: the data to pass to callback function
 *
 * Asynchronously opens @file for reading and writing.
 * For more details, see g_file_open_readwrite() which is
 * the synchronous version of this call.
 * When the operation is finished, @callback will be called. You can then call
 * g_file_open_readwrite_finish() to get the result of the operation.
 *
 * Since: 2.22
 */


/**
 * SECTION:gproxyresolve:
 * @short_description: Asynchronous and cancellable network proxy resolver
 * @include: gio/gio.h
 *
 * #GProxyResolver provides synchronous and asynchronous network proxy
 * resolution. #GProxyResolver is used within #GClientSocket through
 * the method g_socket_connectable_proxy_enumerate().
 */


/**
 * g_socket_client_set_enable_proxy:
 * @client: a #GSocketClient.
 * @enable: whether to enable proxies
 *
 * Sets whether or not @client attempts to make connections via a
 * proxy server. When enabled (the default), #GSocketClient will use a
 * #GProxyResolver to determine if a proxy protocol such as SOCKS is
 * needed, and automatically do the necessary proxy negotiation.
 *
 * Since: 2.26
 */


/**
 * g_file_attribute_matcher_matches:
 * @matcher: a #GFileAttributeMatcher.
 * @attribute: a file attribute key.
 *
 * Checks if an attribute will be matched by an attribute matcher. If
 * the matcher was created with the "*" matching string, this function
 * will always return %TRUE.
 *
 * Returns: %TRUE if @attribute matches @matcher. %FALSE otherwise.
 */


/**
 * g_resolver_lookup_service_finish:
 * @resolver: a #GResolver
 * @result: the result passed to your #GAsyncReadyCallback
 * @error: return location for a #GError, or %NULL
 *
 * Retrieves the result of a previous call to
 * g_resolver_lookup_service_async().
 * If the DNS resolution failed, @error (if non-%NULL) will be set to
 * a value from #GResolverError. If the operation was cancelled,
 * or %NULL on error. See g_resolver_lookup_service() for more details.
 *
 * Returns: (element-type GSrvTarget) (transfer full): a #GList of #GSrvTarget,
 * Since: 2.22
 */


/**
 * g_file_info_set_attribute_int32:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 * @attr_value: a signed 32-bit integer
 *
 * Sets the @attribute to contain the given @attr_value,
 * if possible.
 */


/**
 * g_socket_client_connect_to_service_finish:
 * @client: a #GSocketClient.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occuring, or %NULL to ignore.
 *
 * Finishes an async connect operation. See g_socket_client_connect_to_service_async()
 *
 * Returns: (transfer full): a #GSocketConnection on success, %NULL on error.
 * Since: 2.22
 */


/**
 * g_cancellable_cancel:
 * @cancellable: a #GCancellable object.
 *
 * Will set @cancellable to cancelled, and will emit the
 * #GCancellable::cancelled signal. (However, see the warning about
 * race conditions in the documentation for that signal if you are
 * planning to connect to it.)
 * This function is thread-safe. In other words, you can safely call
 * it from a thread other than the one running the operation that was
 * passed the @cancellable.
 * The convention within gio is that cancelling an asynchronous
 * operation causes it to complete asynchronously. That is, if you
 * cancel the operation from the same thread in which it is running,
 * then the operation's #GAsyncReadyCallback will not be invoked until
 * the application returns to the main loop.
 */


/**
 * g_dbus_arg_info_ref:
 * @info: A #GDBusArgInfo
 *
 * If @info is statically allocated does nothing. Otherwise increases
 * the reference count.
 *
 * Returns: The same @info.
 * Since: 2.26
 */


/**
 * g_file_attribute_matcher_enumerate_next:
 * @matcher: a #GFileAttributeMatcher.
 *
 * Gets the next matched attribute from a #GFileAttributeMatcher.
 * no more attribute exist.
 *
 * Returns: a string containing the next attribute or %NULL if
 */


/**
 * g_file_enumerator_close:
 * @enumerator: a #GFileEnumerator.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: location to store the error occuring, or %NULL to ignore
 *
 * Releases all resources used by this enumerator, making the
 * enumerator return %G_IO_ERROR_CLOSED on all calls.
 * This will be automatically called when the last reference
 * is dropped, but you might want to call this function to make
 * sure resources are released as early as possible.
 *
 * Returns: #TRUE on success or #FALSE on error.
 */


/**
 * g_socket_control_message_get_msg_type:
 * @message: a #GSocketControlMessage
 *
 * Returns the protocol specific type of the control message.
 * For instance, for UNIX fd passing this would be SCM_RIGHTS.
 *
 * Returns: an integer describing the type of control message
 * Since: 2.22
 */


/**
 * g_file_io_stream_query_info_async:
 * @stream: a #GFileIOStream.
 * @attributes: a file attribute query string.
 * @io_priority: the <link linkend="gio-GIOScheduler">I/O priority</link> of the request.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: callback to call when the request is satisfied
 * @user_data: the data to pass to callback function
 *
 * Asynchronously queries the @stream for a #GFileInfo. When completed,
 * finish the operation with g_file_io_stream_query_info_finish().
 * For the synchronous version of this function, see
 * g_file_io_stream_query_info().
 *
 * Since: 2.22
 */


/**
 * g_memory_output_stream_get_data: (skip)
 * @ostream: a #GMemoryOutputStream
 *
 * Gets any loaded data from the @ostream.
 * Note that the returned pointer may become invalid on the next
 * write or truncate operation on the stream.
 *
 * Returns: pointer to the stream's data
 */


/**
 * g_data_input_stream_read_upto_finish:
 * @stream: a #GDataInputStream
 * @result: the #GAsyncResult that was provided to the callback
 * @length: a #gsize to get the length of the data read in
 * @error: #GError for error reporting
 *
 * Finish an asynchronous call started by
 * g_data_input_stream_read_upto_async().
 * Note that this function does <emphasis>not</emphasis> consume the
 * stop character. You have to use g_data_input_stream_read_byte() to
 * get it before calling g_data_input_stream_read_upto_async() again.
 * any of the stop characters. Set @length to a #gsize to get the length
 * of the string. This function will return %NULL on an error.
 *
 * Returns: a string with the data that was read before encountering
 * Since: 2.24
 */


/**
 * g_simple_action_group_remove:
 * @simple: a #GSimpleActionGroup
 * @action_name: the name of the action
 *
 * Removes the named action from the action group.
 * If no action of this name is in the group then nothing happens.
 *
 * Since: 2.28
 */


/**
 * g_output_stream_splice:
 * @stream: a #GOutputStream.
 * @source: a #GInputStream.
 * @flags: a set of #GOutputStreamSpliceFlags.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError location to store the error occuring, or %NULL to ignore.
 *
 * Splices an input stream into an output stream.
 * -1 if an error occurred.
 *
 * Returns: a #gssize containing the size of the data spliced, or
 */


/**
 * g_socket_client_connect_to_uri:
 * @client: a #GSocketClient
 * @uri: A network URI
 * @default_port: the default port to connect to
 * @cancellable: a #GCancellable, or %NULL
 * @error: a pointer to a #GError, or %NULL
 *
 * This is a helper function for g_socket_client_connect().
 * Attempts to create a TCP connection with a network URI.
 * component. If a port is not specified in the URI, @default_port
 * will be used.
 * Using this rather than g_socket_client_connect() or
 * g_socket_client_connect_to_host() allows #GSocketClient to
 * determine when to use application-specific proxy protocols.
 * Upon a successful connection, a new #GSocketConnection is constructed
 * and returned.  The caller owns this new object and must drop their
 * reference to it when finished with it.
 * In the event of any failure (DNS error, service not found, no hosts
 * connectable) %NULL is returned and @error (if non-%NULL) is set
 * accordingly.
 *
 * Returns: (transfer full): a #GSocketConnection on success, %NULL on error.
 * Since: 2.26
 */


/**
 * g_unix_mount_points_get:
 * @time_read: (allow-none): guint64 to contain a timestamp.
 *
 * Gets a #GList of #GUnixMountPoint containing the unix mount points.
 * If @time_read is set, it will be filled with the mount timestamp,
 * allowing for checking if the mounts have changed with
 * g_unix_mounts_points_changed_since().
 *
 * Returns: (element-type utf8) (transfer full): a #GList of the UNIX mountpoints.
 */


/**
 * g_mount_guess_content_type_sync:
 * @mount: a #GMount
 * @force_rescan: Whether to force a rescan of the content. Otherwise a cached result will be used if available
 * @cancellable: optional #GCancellable object, %NULL to ignore
 * @error: a #GError location to store the error occuring, or %NULL to ignore
 *
 * Tries to guess the type of content stored on @mount. Returns one or
 * more textual identifiers of well-known content types (typically
 * prefixed with "x-content/"), e.g. x-content/image-dcf for camera
 * memory cards. See the <ulink url="http://www.freedesktop.org/wiki/Specifications/shared-mime-info-spec">shared-mime-info</ulink>
 * specification for more on x-content types.
 * This is an synchronous operation and as such may block doing IO;
 * see g_mount_guess_content_type() for the asynchronous version.
 * Caller should free this array with g_strfreev() when done with it.
 *
 * Returns: (transfer full) (element-type utf8): a %NULL-terminated array of content types or %NULL on error.
 * Since: 2.18
 */


/**
 * g_async_initable_init_async:
 * @initable: a #GAsyncInitable.
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the operation.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: the data to pass to callback function
 *
 * Starts asynchronous initialization of the object implementing the
 * interface. This must be done before any real use of the object after
 * initial construction. If the object also implements #GInitable you can
 * optionally call g_initable_init() instead.
 * When the initialization is finished, @callback will be called. You can
 * then call g_async_initable_init_finish() to get the result of the
 * initialization.
 * Implementations may also support cancellation. If @cancellable is not
 * %NULL, then initialization can be cancelled by triggering the cancellable
 * object from another thread. If the operation was cancelled, the error
 * %G_IO_ERROR_CANCELLED will be returned. If @cancellable is not %NULL, and
 * the object doesn't support cancellable initialization, the error
 * %G_IO_ERROR_NOT_SUPPORTED will be returned.
 * If this function is not called, or returns with an error, then all
 * operations on the object should fail, generally returning the
 * error %G_IO_ERROR_NOT_INITIALIZED.
 * to this function with the same argument should return the same results.
 * Only the first call initializes the object; further calls return the result
 * of the first call. This is so that it's safe to implement the singleton
 * pattern in the GObject constructor function.
 * For classes that also support the #GInitable interface, the default
 * implementation of this method will run the g_initable_init() function
 * in a thread, so if you want to support asynchronous initialization via
 * threads, just implement the #GAsyncInitable interface without overriding
 * any interface methods.
 *
 * Implementations of this method must be idempotent: i.e. multiple calls
 * Since: 2.22
 */


/**
 * g_file_new_for_path:
 * @path: a string containing a relative or absolute path. The string must be encoded in the glib filename encoding.
 *
 * Constructs a #GFile for a given path. This operation never
 * fails, but the returned object might not support any I/O
 * operation if @path is malformed.
 *
 * Returns: (transfer full): a new #GFile for the given @path.
 */


/**
 * g_file_copy_attributes:
 * @source: a #GFile with attributes.
 * @destination: a #GFile to copy attributes to.
 * @flags: a set of #GFileCopyFlags.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, %NULL to ignore.
 *
 * Copies the file attributes from @source to @destination.
 * Normally only a subset of the file attributes are copied,
 * those that are copies in a normal file copy operation
 * (which for instance does not include e.g. owner). However
 * if #G_FILE_COPY_ALL_METADATA is specified in @flags, then
 * all the metadata that is possible to copy is copied. This
 * is useful when implementing move by copy + delete source.
 *
 * Returns: %TRUE if the attributes were copied successfully, %FALSE otherwise.
 */


/**
 * g_dbus_message_get_byte_order:
 * @message: A #GDBusMessage.
 *
 * Gets the byte order of @message.
 *
 * Returns: The byte order.
 */


/**
 * g_app_info_get_default_for_type:
 * @content_type: the content type to find a #GAppInfo for
 * @must_support_uris: if %TRUE, the #GAppInfo is expected to support URIs
 *
 * Gets the #GAppInfo that corresponds to a given content type.
 *
 * Returns: #GAppInfo for given @content_type or %NULL on error.
 */


/**
 * g_settings_apply:
 * @settings: a #GSettings instance
 *
 * Applies any changes that have been made to the settings.  This
 * function does nothing unless @settings is in 'delay-apply' mode;
 * see g_settings_delay().  In the normal case settings are always
 * applied immediately.
 */


/**
 * g_file_info_get_symlink_target:
 * @info: a #GFileInfo.
 *
 * Gets the symlink target for a given #GFileInfo.
 *
 * Returns: a string containing the symlink target.
 */


/**
 * g_output_stream_is_closed:
 * @stream: a #GOutputStream.
 *
 * Checks if an output stream has already been closed.
 *
 * Returns: %TRUE if @stream is closed. %FALSE otherwise.
 */


/**
 * g_file_load_partial_contents_finish:
 * @file: input #GFile.
 * @res: a #GAsyncResult.
 * @contents: (out) (transfer full): a location to place the contents of the file.
 * @length: (out) (allow-none): a location to place the length of the contents of the file, or %NULL if the length is not needed
 * @etag_out: (out) (allow-none): a location to place the current entity tag for the file, or %NULL if the entity tag is not needed
 * @error: a #GError, or %NULL
 *
 * Finishes an asynchronous partial load operation that was started
 * with g_file_load_partial_contents_async(). The data is always
 * zero-terminated, but this is not included in the resultant @length.
 * The returned @content should be freed with g_free() when no longer
 * needed.
 * present, it will be set appropriately.
 *
 * Returns: %TRUE if the load was successful. If %FALSE and @error is
 */


/**
 * g_socket_listener_add_address:
 * @listener: a #GSocketListener
 * @address: a #GSocketAddress
 * @type: a #GSocketType
 * @protocol: a #GSocketProtocol
 * @source_object: Optional #GObject identifying this source
 * @effective_address: (out) (allow-none): location to store the address that was bound to, or %NULL.
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Creates a socket of type @type and protocol @protocol, binds
 * it to @address and adds it to the set of sockets we're accepting
 * sockets from.
 * Note that adding an IPv6 address, depending on the platform,
 * may or may not result in a listener that also accepts IPv4
 * connections.  For more determinstic behaviour, see
 * g_socket_listener_add_inet_port().
 * to accept to identify this particular source, which is
 * useful if you're listening on multiple addresses and do
 * different things depending on what address is connected to.
 * If successful and @effective_address is non-%NULL then it will
 * be set to the address that the binding actually occured at.  This
 * is helpful for determining the port number that was used for when
 * requested, belongs to the caller and must be freed.
 *
 * Requesting a binding to port 0 (ie: "any port").  This address, if
 * Returns: %TRUE on success, %FALSE on error.
 * Since: 2.22
 */


/**
 * g_socket_get_socket_type:
 * @socket: a #GSocket.
 *
 * Gets the socket type of the socket.
 *
 * Returns: a #GSocketType
 * Since: 2.22
 */


/**
 * g_vfs_get_supported_uri_schemes:
 * @vfs: a #GVfs.
 *
 * Gets a list of URI schemes supported by @vfs.
 * The returned array belongs to GIO and must
 * not be freed or modified.
 *
 * Returns: (transfer none): a %NULL-terminated array of strings.
 */


/**
 * GMount::changed:
 * @mount: the object on which the signal is emitted
 *
 * Emitted when the mount has been changed.
 */


/**
 * g_action_get_state_hint:
 * @action: a #GAction
 *
 * Requests a hint about the valid range of values for the state of
 * If %NULL is returned it either means that the action is not stateful
 * or that there is no hint about the valid range of values for the
 * state of the action.
 * If a #GVariant array is returned then each item in the array is a
 * returned then the tuple specifies the inclusive lower and upper bound
 * of valid values for the state.
 * In any case, the information is merely a hint.  It may be possible to
 * have a state value outside of the hinted range and setting a value
 * within the range may fail.
 * The return value (if non-%NULL) should be freed with
 * g_variant_unref() when it is no longer required.
 *
 * Possible value for the state.  if a #gvariant pair (ie: two-tuple) is
 * Returns: (transfer full): the state range hint
 * Since: 2.28
 */


/**
 * g_action_group_activate_action:
 * @action_group: a #GActionGroup
 * @action_name: the name of the action to activate
 * @parameter: (allow-none): parameters to the activation
 *
 * Activate the named action within @action_group.
 * If the action is expecting a parameter, then the correct type of
 * parameter must be given as @parameter.  If the action is expecting no
 * parameters then @parameter must be %NULL.  See
 * g_action_group_get_parameter_type().
 *
 * Since: 2.28
 */


/**
 * g_file_info_get_edit_name:
 * @info: a #GFileInfo.
 *
 * Gets the edit name for a file.
 *
 * Returns: a string containing the edit name.
 */


/**
 * g_dbus_address_get_stream:
 * @address: A valid D-Bus address.
 * @cancellable: A #GCancellable or %NULL.
 * @callback: A #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: Data to pass to @callback.
 *
 * Asynchronously connects to an endpoint specified by @address and
 * sets up the connection so it is in a state to run the client-side
 * of the D-Bus authentication conversation.
 * When the operation is finished, @callback will be invoked. You can
 * then call g_dbus_address_get_stream_finish() to get the result of
 * the operation.
 * This is an asynchronous failable function. See
 * g_dbus_address_get_stream_sync() for the synchronous version.
 *
 * Since: 2.26
 */


/**
 * g_simple_async_report_error_in_idle:
 * @object: a #GObject.
 * @callback: a #GAsyncReadyCallback.
 * @user_data: user data passed to @callback.
 * @domain: a #GQuark containing the error domain (usually #G_IO_ERROR).
 * @code: a specific error code.
 * @format: a formatted error reporting string.
 * @...: a list of variables to fill in @format.
 *
 * Reports an error in an asynchronous function in an idle function by
 * directly setting the contents of the #GAsyncResult with the given error
 * information.
 */


/**
 * g_file_read:
 * @file: #GFile to read.
 * @cancellable: a #GCancellable
 * @error: a #GError, or %NULL
 *
 * Opens a file for reading. The result is a #GFileInputStream that
 * can be used to read the contents of the file.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * If the file does not exist, the G_IO_ERROR_NOT_FOUND error will be returned.
 * If the file is a directory, the G_IO_ERROR_IS_DIRECTORY error will be returned.
 * Other errors are possible too, and depend on what kind of filesystem the file is on.
 * Free the returned object with g_object_unref().
 *
 * Virtual: read_fn
 * Returns: (transfer full): #GFileInputStream or %NULL on error.
 */


/**
 * GVolumeMonitor::volume-added:
 * @volume_monitor: The volume monitor emitting the signal.
 * @volume: a #GVolume that was added.
 *
 * Emitted when a mountable volume is added to the system.
 */


/**
 * g_volume_monitor_get_connected_drives:
 * @volume_monitor: a #GVolumeMonitor.
 *
 * Gets a list of drives connected to the system.
 * The returned list should be freed with g_list_free(), after
 * its elements have been unreffed with g_object_unref().
 *
 * Returns: (element-type GDrive) (transfer full): a #GList of connected #GDrive objects.
 */


/**
 * GDBusProxy::g-properties-changed:
 * @proxy: The #GDBusProxy emitting the signal.
 * @changed_properties: A #GVariant containing the properties that changed
 * @invalidated_properties: A %NULL terminated array of properties that was invalidated
 *
 * Emitted when one or more D-Bus properties on @proxy changes. The
 * local cache has already been updated when this signal fires. Note
 * that both @changed_properties and @invalidated_properties are
 * guaranteed to never be %NULL (either may be empty though).
 * This signal corresponds to the
 * <literal>PropertiesChanged</literal> D-Bus signal on the
 * <literal>org.freedesktop.DBus.Properties</literal> interface.
 *
 * Since: 2.26
 */


/**
 * g_simple_async_result_propagate_error:
 * @simple: a #GSimpleAsyncResult.
 * @dest: a location to propegate the error to.
 *
 * Propagates an error from within the simple asynchronous result to
 * a given destination.
 *
 * Returns: %TRUE if the error was propagated to @dest. %FALSE otherwise.
 */


/**
 * g_file_replace_readwrite_finish:
 * @file: input #GFile.
 * @res: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes an asynchronous file replace operation started with
 * g_file_replace_readwrite_async().
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): a #GFileIOStream, or %NULL on error.
 * Since: 2.22
 */


/**
 * GUnixInputStream:fd:
 *
 * The file descriptor that the stream reads from.
 *
 * Since: 2.20
 */


/**
 * GThemedIcon:names:
 *
 * A %NULL-terminated array of icon names.
 */


/**
 * g_io_extension_point_register:
 * @name: The name of the extension point
 *
 * Registers an extension point.
 * and should not be freed
 *
 * Returns: the new #GIOExtensionPoint. This object is owned by GIO
 */


/**
 * g_async_initable_newv_async:
 * @object_type: a #GType supporting #GAsyncInitable.
 * @n_parameters: the number of parameters in @parameters
 * @parameters: the parameters to use to construct the object
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the operation.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback to call when the initialization is finished
 * @user_data: the data to pass to callback function
 *
 * Helper function for constructing #GAsyncInitiable object. This is
 * similar to g_object_newv() but also initializes the object asynchronously.
 * When the initialization is finished, @callback will be called. You can
 * then call g_async_initable_new_finish() to get the new object and check
 * for any errors.
 *
 * Since: 2.22
 */


/**
 * g_simple_async_result_new_from_error:
 * @source_object: a #GObject, or %NULL.
 * @callback: a #GAsyncReadyCallback.
 * @user_data: user data passed to @callback.
 * @error: a #GError
 *
 * Creates a #GSimpleAsyncResult from an error condition.
 *
 * Returns: a #GSimpleAsyncResult.
 */


/**
 * g_file_info_get_sort_order:
 * @info: a #GFileInfo.
 *
 * Gets the value of the sort_order attribute from the #GFileInfo.
 * See %G_FILE_ATTRIBUTE_STANDARD_SORT_ORDER.
 *
 * Returns: a #gint32 containing the value of the "standard::sort_order" attribute.
 */


/**
 * g_themed_icon_new:
 * @iconname: a string containing an icon name.
 *
 * Creates a new themed icon for @iconname.
 *
 * Returns: (transfer full): a new #GThemedIcon.
 */


/**
 * g_dbus_message_get_unix_fd_list:
 * @message: A #GDBusMessage.
 *
 * Gets the UNIX file descriptors associated with @message, if any.
 * This method is only available on UNIX.
 * associated. Do not free, this object is owned by @message.
 *
 * Returns: (transfer none): A #GUnixFDList or %NULL if no file descriptors are
 * Since: 2.26
 */


/**
 * GThreadedSocketService::run:
 * @service: the #GThreadedSocketService.
 * @connection: a new #GSocketConnection object.
 * @source_object: the source_object passed to g_socket_listener_add_address().
 *
 * The ::run signal is emitted in a worker thread in response to an
 * incoming connection. This thread is dedicated to handling
 * not return until the connection is closed.
 *
 * Returns: %TRUE to stope further signal handlers from being called
 */


/**
 * g_dbus_proxy_new_for_bus_finish:
 * @res: A #GAsyncResult obtained from the #GAsyncReadyCallback function passed to g_dbus_proxy_new_for_bus().
 * @error: Return location for error or %NULL.
 *
 * Finishes creating a #GDBusProxy.
 *
 * Returns: A #GDBusProxy or %NULL if @error is set. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * g_unix_mount_guess_can_eject:
 * @mount_entry: a #GUnixMountEntry
 *
 * Guesses whether a Unix mount can be ejected.
 *
 * Returns: %TRUE if @mount_entry is deemed to be ejectable.
 */


/**
 * g_drive_stop_finish:
 * @drive: a #GDrive.
 * @result: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes stopping a drive.
 * %FALSE otherwise.
 *
 * Returns: %TRUE if the drive has been stopped successfully,
 * Since: 2.22
 */


/**
 * g_memory_output_stream_new:
 * @data: pointer to a chunk of memory to use, or %NULL
 * @size: the size of @data
 * @realloc_function: a function with realloc() semantics (like g_realloc()) to be called when @data needs to be grown, or %NULL
 * @destroy_function: a function to be called on @data when the stream is finalized, or %NULL
 *
 * Creates a new #GMemoryOutputStream.
 * If @data is non-%NULL, the stream  will use that for its internal storage.
 * If @realloc_fn is non-%NULL, it will be used for resizing the internal
 * storage when necessary. To construct a fixed-size output stream,
 * pass %NULL as @realloc_fn.
 * |[
 * /&ast; a stream that can grow &ast;/
 * stream = g_memory_output_stream_new (NULL, 0, realloc, free);
 * /&ast; another stream that can grow &ast;/
 * stream2 = g_memory_output_stream_new (NULL, 0, g_realloc, g_free);
 * /&ast; a fixed-size stream &ast;/
 * data = malloc (200);
 * stream3 = g_memory_output_stream_new (data, 200, NULL, free);
 * ]|
 *
 * Returns: A newly created #GMemoryOutputStream object.
 */


/**
 * g_buffered_output_stream_set_buffer_size:
 * @stream: a #GBufferedOutputStream.
 * @size: a #gsize.
 *
 * Sets the size of the internal buffer to @size.
 */


/**
 * GDBusConnection:
 *
 * The #GDBusConnection structure contains only private data and
 * should only be accessed using the provided API.
 *
 * Since: 2.26
 */


/**
 * g_proxy_address_get_passwor:
 * @proxy: a #GProxyAddress
 *
 * Gets @proxy's password.
 *
 * Returns: the @proxy's password
 * Since: 2.26
 */


/**
 * g_periodic_unblock:
 * @periodic: a #GPeriodic clock
 * @unblock_time: the unblock time
 *
 * Reverses the effect of a previous call to g_periodic_block().
 * If this call removes the last block, the tick signal is immediately
 * run.  The repair signal may also be run if the clock is marked as
 * damaged.
 * at which the event causing the unblock occured.
 * This function may not be called from handlers of any signal emitted
 * by @periodic.
 *
 * Since: 2.28
 */


/**
 * g_file_info_get_attribute_object:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 *
 * Gets the value of a #GObject attribute. If the attribute does
 * not contain a #GObject, %NULL will be returned.
 * %NULL otherwise.
 *
 * Returns: (transfer none): a #GObject associated with the given @attribute, or
 */


/**
 * g_action_set_state:
 * @action: a #GAction
 * @value: the new state
 *
 * Request for the state of @action to be changed to @value.
 * The action must be stateful and @value must be of the correct type.
 * See g_action_get_state_type().
 * This call merely requests a change.  The action may refuse to change
 * its state or may change its state to something other than @value.
 * See g_action_get_state_hint().
 * If the @value GVariant is floating, it is consumed.
 *
 * Since: 2.28
 */


/**
 * g_file_replace_finish:
 * @file: input #GFile.
 * @res: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes an asynchronous file replace operation started with
 * g_file_replace_async().
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): a #GFileOutputStream, or %NULL on error.
 */


/**
 * g_file_has_parent:
 * @file: input #GFile
 * @parent: the parent to check for, or %NULL
 *
 * Checks if @file has a parent, and optionally, if it is @parent.
 * If @parent is %NULL then this function returns %TRUE if @file has any
 * parent at all.  If @parent is non-%NULL then %TRUE is only returned
 * if @file is a child of @parent.
 * case that @parent is %NULL).
 *
 * Returns: %TRUE if @file is a child of @parent (or any parent in the
 * Since: 2.24
 */


/**
 * g_dbus_is_supported_address:
 * @string: A string.
 * @error: Return location for error or %NULL.
 *
 * Like g_dbus_is_address() but also checks if the library suppors the
 * transports in @string and that key/value pairs for each transport
 * are valid.
 * supported by this library, %FALSE if @error is set.
 *
 * Returns: %TRUE if @string is a valid D-Bus address that is
 * Since: 2.26
 */


/**
 * g_socket_connection_get_remote_address:
 * @connection: a #GSocketConnection
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Try to get the remote address of a socket connection.
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): a #GSocketAddress or %NULL on error.
 * Since: 2.22
 */


/**
 * g_dbus_message_new_method_call:
 * @name: A valid D-Bus name or %NULL.
 * @path: A valid object path.
 * @interface_: A valid D-Bus interface name or %NULL.
 * @method: A valid method name.
 *
 * Creates a new #GDBusMessage for a method call.
 *
 * Returns: A #GDBusMessage. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * g_simple_async_result_new_error:
 * @source_object: a #GObject, or %NULL.
 * @callback: a #GAsyncReadyCallback.
 * @user_data: user data passed to @callback.
 * @domain: a #GQuark.
 * @code: an error code.
 * @format: a string with format characters.
 * @...: a list of values to insert into @format.
 *
 * Creates a new #GSimpleAsyncResult with a set error.
 *
 * Returns: a #GSimpleAsyncResult.
 */


/**
 * g_simple_async_report_take_gerror_in_idle:
 * @object: a #GObject.
 * @callback: a #GAsyncReadyCallback.
 * @user_data: user data passed to @callback.
 * @error: the #GError to report
 *
 * Reports an error in an idle function. Similar to
 * g_simple_async_report_gerror_in_idle(), but takes over the caller's
 * ownership of @error, so the caller does not have to free it any more.
 *
 * Since: 2.28
 */


/**
 * g_file_unmount_mountable_finish:
 * @file: input #GFile.
 * @result: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes an unmount operation, see g_file_unmount_mountable() for details.
 * Finish an asynchronous unmount operation that was started
 * with g_file_unmount_mountable().
 * otherwise.
 *
 * Returns: %TRUE if the operation finished successfully. %FALSE
 * Deprecated: 2.22: Use g_file_unmount_mountable_with_operation_finish() instead.
 */


/**
 * g_app_info_can_remove_supports_type:
 * @appinfo: a #GAppInfo.
 *
 * Checks if a supported content type can be removed from an application.
 * content types from a given @appinfo, %FALSE if not.
 *
 * Returns: %TRUE if it is possible to remove supported
 */


/**
 * g_input_stream_read_finish:
 * @stream: a #GInputStream.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occuring, or %NULL to ignore.
 *
 * Finishes an asynchronous stream read operation.
 *
 * Returns: number of bytes read in, or -1 on error.
 */


/**
 * g_dbus_signal_info_ref:
 * @info: A #GDBusSignalInfo
 *
 * If @info is statically allocated does nothing. Otherwise increases
 * the reference count.
 *
 * Returns: The same @info.
 * Since: 2.26
 */


/**
 * g_loadable_icon_load:
 * @icon: a #GLoadableIcon.
 * @size: an integer.
 * @type: a location to store the type of the loaded icon, %NULL to ignore.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError location to store the error occuring, or %NULL to ignore.
 *
 * Loads a loadable icon. For the asynchronous version of this function,
 * see g_loadable_icon_load_async().
 *
 * Returns: (transfer full): a #GInputStream to read the icon from.
 */


/**
 * GMountOperation:domain:
 *
 * The domain to use for the mount operation.
 */


/**
 * g_socket_client_connect_to_uri_async:
 * @client: a #GSocketClient
 * @uri: a network uri
 * @default_port: the default port to connect to
 * @cancellable: a #GCancellable, or %NULL
 * @callback: a #GAsyncReadyCallback
 * @user_data: user data for the callback
 *
 * This is the asynchronous version of g_socket_client_connect_to_uri().
 * When the operation is finished @callback will be
 * called. You can then call g_socket_client_connect_to_uri_finish() to get
 * the result of the operation.
 *
 * Since: 2.26
 */


/**
 * g_app_info_delete:
 * @appinfo: a #GAppInfo
 *
 * Tries to delete a #GAppInfo.
 * On some platforms, there may be a difference between user-defined
 * #GAppInfo<!-- -->s which can be deleted, and system-wide ones which
 * cannot. See g_app_info_can_delete().
 *
 * Virtual: do_delete
 * Returns: %TRUE if @appinfo has been deleted
 * Since: 2.20
 */


/**
 * g_socket_control_message_get_level:
 * @message: a #GSocketControlMessage
 *
 * Returns the "level" (i.e. the originating protocol) of the control message.
 * This is often SOL_SOCKET.
 *
 * Returns: an integer describing the level
 * Since: 2.22
 */


/**
 * SECTION:gdbusutil:
 * @title: D-Bus Utilities
 * @short_description: Various utilities related to D-Bus.
 * @include: gio/gio.h
 *
 * Various utility routines related to D-Bus.
 */


/**
 * g_file_info_get_attribute_boolean:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 *
 * Gets the value of a boolean attribute. If the attribute does not
 * contain a boolean value, %FALSE will be returned.
 *
 * Returns: the boolean value contained within the attribute.
 */


/**
 * g_mount_operation_set_domain:
 * @op: a #GMountOperation.
 * @domain: the domain to set.
 *
 * Sets the mount operation's domain.
 */


/**
 * g_unix_mount_point_is_loopback:
 * @mount_point: a #GUnixMountPoint.
 *
 * Checks if a unix mount point is a loopback device.
 *
 * Returns: %TRUE if the mount point is a loopback. %FALSE otherwise.
 */


/**
 * g_mount_operation_get_password:
 * @op: a #GMountOperation.
 *
 * Gets a password from the mount operation.
 *
 * Returns: a string containing the password within @op.
 */


/**
 * SECTION:gfilenamecomplete:
 * @short_description: Filename Completer
 * @include: gio/gio.h
 *
 * Completes partial file and directory names given a partial string by
 * looking in the file system for clues. Can return a list of possible
 * completion strings for widget implementations.
 */


/**
 * g_dbus_message_get_interface:
 * @message: A #GDBusMessage.
 *
 * Convenience getter for the %G_DBUS_MESSAGE_HEADER_FIELD_INTERFACE header field.
 *
 * Returns: The value.
 * Since: 2.26
 */


/**
 * g_content_types_get_registered:
 *
 * Gets a list of strings containing all the registered content types
 * known to the system. The list and its data should be freed using
 * <programlisting>
 * g_list_foreach (list, g_free, NULL);
 * g_list_free (list);
 * </programlisting>
 *
 * Returns: (element-type utf8) (transfer full): #GList of the registered content types
 */


/**
 * g_dbus_interface_info_ref:
 * @info: A #GDBusInterfaceInfo
 *
 * If @info is statically allocated does nothing. Otherwise increases
 * the reference count.
 *
 * Returns: The same @info.
 * Since: 2.26
 */


/**
 * g_file_info_clear_status:
 * @info: a #GFileInfo.
 *
 * Clears the status information from @info.
 */


/**
 * g_file_eject_mountable:
 * @file: input #GFile.
 * @flags: flags affecting the operation
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied, or %NULL.
 * @user_data: the data to pass to callback function
 *
 * Starts an asynchronous eject on a mountable.
 * When this operation has completed, @callback will be called with
 * g_file_eject_mountable_finish().
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Deprecated: 2.22: Use g_file_eject_mountable_with_operation() instead.
 */


/**
 * g_dbus_message_get_member:
 * @message: A #GDBusMessage.
 *
 * Convenience getter for the %G_DBUS_MESSAGE_HEADER_FIELD_MEMBER header field.
 *
 * Returns: The value.
 * Since: 2.26
 */


/**
 * SECTION:gfilterinputstrea:
 * @short_description: Filter Input Stream
 * @include: gio/gio.h
 *
 * Base class for input stream implementations that perform some
 * kind of filtering operation on a base stream. Typical examples
 * of filtering operations are character set conversion, compression
 * and byte order flipping.
 */


/**
 * g_file_replace_readwrite:
 * @file: a #GFile
 * @etag: (allow-none): an optional <link linkend="gfile-etag">entity tag</link> for the current #GFile, or #NULL to ignore
 * @make_backup: %TRUE if a backup should be created
 * @flags: a set of #GFileCreateFlags
 * @cancellable: optional #GCancellable object, %NULL to ignore
 * @error: return location for a #GError, or %NULL
 *
 * Returns an output stream for overwriting the file in readwrite mode,
 * possibly creating a backup copy of the file first. If the file doesn't
 * exist, it will be created.
 * For details about the behaviour, see g_file_replace() which does the same
 * thing but returns an output stream only.
 * Note that in many non-local file cases read and write streams are not
 * supported, so make sure you really need to do read and write streaming,
 * rather than just opening for reading or writing.
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): a #GFileIOStream or %NULL on error.
 * Since: 2.22
 */


/**
 * g_simple_permission_new:
 * @allowed: %TRUE if the action is allowed
 * @returns: the #GSimplePermission, as a #GPermission
 *
 * Creates a new #GPermission instance that represents an action that is
 * either always or never allowed.
 *
 * Since: 2.26
 */


/**
 * g_file_query_filesystem_info_finish:
 * @file: input #GFile.
 * @res: a #GAsyncResult.
 * @error: a #GError.
 *
 * Finishes an asynchronous filesystem info query.  See
 * g_file_query_filesystem_info_async().
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): #GFileInfo for given @file or %NULL on error.
 */


/**
 * GVolumeMonitor::mount-changed:
 * @volume_monitor: The volume monitor emitting the signal.
 * @mount: a #GMount that changed.
 *
 * Emitted when a mount changes.
 */


/**
 * g_volume_get_identifier:
 * @volume: a #GVolume
 * @kind: the kind of identifier to return
 *
 * Gets the identifier of the given kind for @volume.
 * See the <link linkend="volume-identifier">introduction</link>
 * for more information about volume identifiers.
 * requested identfier, or %NULL if the #GVolume
 * doesn't have this kind of identifier
 *
 * Returns: a newly allocated string containing the
 */


/**
 * g_tcp_connection_get_graceful_disconnect:
 * @connection: a #GTcpConnection
 *
 * Checks if graceful disconnects are used. See
 * g_tcp_connection_set_graceful_disconnect().
 *
 * Returns: %TRUE if graceful disconnect is used on close, %FALSE otherwise
 * Since: 2.22
 */


/**
 * SECTION:gzdecompresso:
 * @short_description: Zlib decompressor
 * @include: gio/gio.h
 *
 * #GZlibDecompressor is an implementation of #GConverter that
 * decompresses data compressed with zlib.
 */


/**
 * g_dbus_message_get_reply_serial:
 * @message: A #GDBusMessage.
 *
 * Convenience getter for the %G_DBUS_MESSAGE_HEADER_FIELD_REPLY_SERIAL header field.
 *
 * Returns: The value.
 * Since: 2.26
 */


/**
 * g_emblem_get_origin:
 * @emblem: a #GEmblem
 *
 * Gets the origin of the emblem.
 *
 * Returns: the origin of the emblem
 * Since: 2.18
 */


/**
 * SECTION:gfiledescriptorbase:
 * @short_description: Interface for file descriptor based IO
 * @include: gio/gfiledescriptorbased.h
 * @see_also: #GInputStream, #GOutputStream
 *
 * #GFileDescriptorBased is implemented by streams (implementations of
 * #GInputStream or #GOutputStream) that are based on file descriptors.
 * Note that <filename>&lt;gio/gfiledescriptorbased.h&gt;</filename> belongs to
 * the UNIX-specific GIO interfaces, thus you have to use the
 * <filename>gio-unix-2.0.pc</filename> pkg-config file when using it.
 *
 * Since: 2.24
 */


/**
 * g_file_find_enclosing_mount_finish:
 * @file: a #GFile
 * @res: a #GAsyncResult
 * @error: a #GError
 *
 * Finishes an asynchronous find mount request.
 * See g_file_find_enclosing_mount_async().
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): #GMount for given @file or %NULL on error.
 */


/**
 * g_inet_address_get_is_site_local:
 * @address: a #GInetAddress
 *
 * Tests whether @address is a site-local address such as 10.0.0.1
 * (that is, the address identifies a host on a local network that can
 * not be reached directly from the Internet, but which may have
 * outgoing Internet connectivity via a NAT or firewall).
 *
 * Returns: %TRUE if @address is a site-local address.
 * Since: 2.22
 */


/**
 * g_dbus_message_set_num_unix_fds:
 * @message: A #GDBusMessage.
 * @value: The value to set.
 *
 * Convenience setter for the %G_DBUS_MESSAGE_HEADER_FIELD_NUM_UNIX_FDS header field.
 *
 * Since: 2.26
 */


/**
 * g_file_copy_async:
 * @source: input #GFile.
 * @destination: destination #GFile
 * @flags: set of #GFileCopyFlags
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @progress_callback: function to callback with progress information
 * @progress_callback_data: user data to pass to @progress_callback
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: the data to pass to callback function
 *
 * Copies the file @source to the location specified by @destination
 * asynchronously. For details of the behaviour, see g_file_copy().
 * If @progress_callback is not %NULL, then that function that will be called
 * just like in g_file_copy(), however the callback will run in the main loop,
 * not in the thread that is doing the I/O operation.
 * When the operation is finished, @callback will be called. You can then call
 * g_file_copy_finish() to get the result of the operation.
 */


/**
 * g_dbus_method_invocation_get_method_name:
 * @invocation: A #GDBusMethodInvocation.
 *
 * Gets the name of the method that was invoked.
 *
 * Returns: A string. Do not free, it is owned by @invocation.
 * Since: 2.26
 */


/**
 * g_io_extension_ref_class:
 * @extension: a #GIOExtension
 *
 * Gets a reference to the class for the type that is
 * associated with @extension.
 *
 * Returns: (transfer full): the #GTypeClass for the type of @extension
 */


/**
 * GVolumeMonitor::mount-pre-unmount:
 * @volume_monitor: The volume monitor emitting the signal.
 * @mount: a #GMount that is being unmounted.
 *
 * Emitted when a mount is about to be removed.
 */


/**
 * g_desktop_app_info_new_from_keyfile:
 * @key_file: an opened #GKeyFile
 *
 * Creates a new #GDesktopAppInfo.
 *
 * Returns: a new #GDesktopAppInfo or %NULL on error.
 * Since: 2.18
 */


/**
 * g_file_info_get_attribute_uint32:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 *
 * Gets an unsigned 32-bit integer contained within the attribute. If the
 * attribute does not contain an unsigned 32-bit integer, or is invalid,
 * 0 will be returned.
 *
 * Returns: an unsigned 32-bit integer from the attribute.
 */


/**
 * g_dbus_server_is_active:
 * @server: A #GDBusServer.
 *
 * Gets whether @server is active.
 *
 * Returns: %TRUE if server is active, %FALSE otherwise.
 * Since: 2.26
 */


/**
 * g_application_set_inactivity_timeout:
 * @application: a #GApplication
 * @inactivity_timeout: the timeout, in milliseconds
 *
 * Sets the current inactivity timeout for the application.
 * This is the amount of time (in milliseconds) after the last call to
 * g_application_release() before the application stops running.
 * This call has no side effects of its own.  The value set here is only
 * used for next time g_application_release() drops the use count to
 * zero.  Any timeouts currently in progress are not impacted.
 *
 * Returns: the timeout, in milliseconds
 * Since: 2.28
 */


/**
 * GVolume::removed:
 *
 * This signal is emitted when the #GVolume have been removed. If
 * the recipient is holding references to the object they should
 * release them so the object can be finalized.
 */


/**
 * g_settings_set_flags:
 * @settings: a #GSettings object
 * @key: a key, within @settings
 * @value: a flags value
 * @returns: %TRUE, if the set succeeds
 *
 * Looks up the flags type nicks for the bits specified by @value, puts
 * them in an array of strings and writes the array to @key, withing
 * It is a programmer error to give a @key that isn't contained in the
 * schema for @settings or is not marked as a flags type, or for @value
 * to contain any bits that are not value for the named type.
 * After performing the write, accessing @key directly with
 * g_settings_get_strv() will return an array of 'nicks'; one for each
 * bit in @value.
 */


/**
 * g_drive_has_volumes:
 * @drive: a #GDrive.
 *
 * Check if @drive has any mountable volumes.
 *
 * Returns: %TRUE if the @drive contains volumes, %FALSE otherwise.
 */


/**
 * g_app_info_get_description:
 * @appinfo: a #GAppInfo.
 *
 * Gets a human-readable description of an installed application.
 * application @appinfo, or %NULL if none.
 *
 * Returns: a string containing a description of the
 */


/**
 * g_input_stream_close_async:
 * @stream: A #GInputStream.
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: optional cancellable object
 * @callback: callback to call when the request is satisfied
 * @user_data: the data to pass to callback function
 *
 * Requests an asynchronous closes of the stream, releasing resources related to it.
 * When the operation is finished @callback will be called.
 * You can then call g_input_stream_close_finish() to get the result of the
 * operation.
 * For behaviour details see g_input_stream_close().
 * The asyncronous methods have a default fallback that uses threads to implement
 * asynchronicity, so they are optional for inheriting classes. However, if you
 * override one you must override all.
 */


/**
 * g_file_descriptor_based_get_fd:
 * @fd_based: a #GFileDescriptorBased.
 *
 * Gets the underlying file descriptor.
 *
 * Returns: The file descriptor
 * Since: 2.24
 */


/**
 * g_file_append_to:
 * @file: input #GFile.
 * @flags: a set of #GFileCreateFlags.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Gets an output stream for appending data to the file. If
 * the file doesn't already exist it is created.
 * By default files created are generally readable by everyone,
 * but if you pass #G_FILE_CREATE_PRIVATE in @flags the file
 * will be made readable only to the current user, to the level that
 * is supported on the target filesystem.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * Some file systems don't allow all file names, and may
 * return an %G_IO_ERROR_INVALID_FILENAME error.
 * If the file is a directory the %G_IO_ERROR_IS_DIRECTORY error will be
 * returned. Other errors are possible too, and depend on what kind of
 * filesystem the file is on.
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): a #GFileOutputStream, or %NULL on error.
 */


/**
 * g_data_input_stream_read_until_finish:
 * @stream: a given #GDataInputStream.
 * @result: the #GAsyncResult that was provided to the callback.
 * @length: a #gsize to get the length of the data read in.
 * @error: #GError for error reporting.
 *
 * Finish an asynchronous call started by
 * g_data_input_stream_read_until_async().
 * any of the stop characters. Set @length to a #gsize to get the length
 * of the string. This function will return %NULL on an error.
 *
 * Since: 2.20
 * Returns: a string with the data that was read before encountering
 */


/**
 * g_proxy_address_get_protocol:
 * @proxy: a #GProxyAddress
 *
 * Gets @proxy's protocol.
 *
 * Returns: the @proxy's protocol
 * Since: 2.26
 */


/**
 * g_input_stream_set_pending:
 * @stream: input stream
 * @error: a #GError location to store the error occuring, or %NULL to ignore.
 *
 * Sets @stream to have actions pending. If the pending flag is
 * already set or @stream is closed, it will return %FALSE and set
 *
 * Returns: %TRUE if pending was previously unset and is now set.
 */


/**
 * g_application_command_line_get_is_remote:
 * @cmdline: a #GApplicationCommandLine
 *
 * Determines if @cmdline represents a remote invocation.
 *
 * Returns: %TRUE if the invocation was remote
 * Since: 2.28
 */


/**
 * g_dbus_error_new_for_dbus_error:
 * @dbus_error_name: D-Bus error name.
 * @dbus_error_message: D-Bus error message.
 *
 * Creates a #GError based on the contents of @dbus_error_name and
 * Errors registered with g_dbus_error_register_error() will be looked
 * up using @dbus_error_name and if a match is found, the error domain
 * and code is used. Applications can use g_dbus_error_get_remote_error()
 * to recover @dbus_error_name.
 * If a match against a registered error is not found and the D-Bus
 * error name is in a form as returned by g_dbus_error_encode_gerror()
 * the error domain and code encoded in the name is used to
 * create the #GError. Also, @dbus_error_name is added to the error message
 * such that it can be recovered with g_dbus_error_get_remote_error().
 * Otherwise, a #GError with the error code %G_IO_ERROR_DBUS_ERROR
 * in the #G_IO_ERROR error domain is returned. Also, @dbus_error_name is
 * added to the error message such that it can be recovered with
 * g_dbus_error_get_remote_error().
 * In all three cases, @dbus_error_name can always be recovered from the
 * returned #GError using the g_dbus_error_get_remote_error() function
 * (unless g_dbus_error_strip_remote_error() hasn't been used on the returned error).
 * This function is typically only used in object mappings to prepare
 * #GError instances for applications. Regular applications should not use
 * it.
 *
 * Returns: An allocated #GError. Free with g_error_free().
 * Since: 2.26
 */


/**
 * g_dbus_proxy_get_cached_property_names:
 * @proxy: A #GDBusProxy.
 *
 * Gets the names of all cached properties on @proxy.
 * no cached properties. Free the returned array with g_strfreev().
 *
 * Returns: A %NULL-terminated array of strings or %NULL if @proxy has
 * Since: 2.26
 */


/**
 * GZlibDecompressor:
 *
 * Zlib decompression
 */


/**
 * GDrive::eject-button:
 * @drive: a #GDrive.
 *
 * Emitted when the physical eject button (if any) of a drive has
 * been pressed.
 */


/**
 * g_application_set_flags:
 * @application: a #GApplication
 * @flags: the flags for @application
 *
 * Sets the flags for @application.
 * The flags can only be modified if @application has not yet been
 * registered.
 * See #GApplicationFlags.
 *
 * Since: 2.28
 */


/**
 * GSettings::changed:
 * @settings: the object on which the signal was emitted
 * @key: the name of the key that changed
 *
 * The "changed" signal is emitted when a key has potentially changed.
 * You should call one of the g_settings_get() calls to check the new
 * value.
 * This signal supports detailed connections.  You can connect to the
 * detailed signal "changed::x" in order to only receive callbacks
 * when key "x" changes.
 */


/**
 * g_file_delete:
 * @file: input #GFile.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Deletes a file. If the @file is a directory, it will only be deleted if it
 * is empty.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Virtual: delete_file
 * Returns: %TRUE if the file was deleted. %FALSE otherwise.
 */


/**
 * GSettings:context:
 *
 * The name of the context that the settings are stored in.
 */


/**
 * g_output_stream_is_closing:
 * @stream: a #GOutputStream.
 *
 * Checks if an output stream is being closed. This can be
 * used inside e.g. a flush implementation to see if the
 * flush (or other i/o operation) is called from within
 * the closing operation.
 *
 * Returns: %TRUE if @stream is being closed. %FALSE otherwise.
 * Since: 2.24
 */


/**
 * g_data_input_stream_read_line_async:
 * @stream: a given #GDataInputStream.
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: callback to call when the request is satisfied.
 * @user_data: the data to pass to callback function.
 *
 * The asynchronous version of g_data_input_stream_read_line().  It is
 * an error to have two outstanding calls to this function.
 * When the operation is finished, @callback will be called. You
 * can then call g_data_input_stream_read_line_finish() to get
 * the result of the operation.
 *
 * Since: 2.20
 */


/**
 * g_output_stream_write_finish:
 * @stream: a #GOutputStream.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occuring, or %NULL to ignore.
 *
 * Finishes a stream write operation.
 *
 * Returns: a #gssize containing the number of bytes written to the stream.
 */


/**
 * g_file_create_readwrite_async:
 * @file: input #GFile
 * @flags: a set of #GFileCreateFlags
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request
 * @cancellable: optional #GCancellable object, %NULL to ignore
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: the data to pass to callback function
 *
 * Asynchronously creates a new file and returns a stream for reading and
 * writing to it. The file must not already exist.
 * For more details, see g_file_create_readwrite() which is
 * the synchronous version of this call.
 * When the operation is finished, @callback will be called. You can then
 * call g_file_create_readwrite_finish() to get the result of the operation.
 *
 * Since: 2.22
 */


/**
 * GDBusAuthObserver::authorize-authenticated-peer:
 * @observer: The #GDBusAuthObserver emitting the signal.
 * @stream: A #GIOStream for the #GDBusConnection.
 * @credentials: Credentials received from the peer or %NULL.
 *
 * Emitted to check if a peer that is successfully authenticated
 * is authorized.
 *
 * Returns: %TRUE if the peer is authorized, %FALSE if not.
 * Since: 2.26
 */


/**
 * GSimpleAction::activate:
 * @simple: the #GSimpleAction
 * @parameter: (allow-none): the parameter to the activation
 *
 * Indicates that the action was just activated.
 * an incorrect type was given, no signal will be emitted.
 *
 * Since: 2.28
 */


/**
 * g_data_input_stream_read_byte:
 * @stream: a given #GDataInputStream.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: #GError for error reporting.
 *
 * Reads an unsigned 8-bit/1-byte value from @stream.
 * if an error occurred.
 *
 * Returns: an unsigned 8-bit/1-byte value read from the @stream or %0
 */


/**
 * g_socket_client_connect_to_host_finish:
 * @client: a #GSocketClient.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occuring, or %NULL to ignore.
 *
 * Finishes an async connect operation. See g_socket_client_connect_to_host_async()
 *
 * Returns: (transfer full): a #GSocketConnection on success, %NULL on error.
 * Since: 2.22
 */


/**
 * GMountOperation::ask-question:
 * @op: a #GMountOperation asking a question.
 * @message: string containing a message to display to the user.
 * @choices: an array of strings for each possible choice.
 *
 * Emitted when asking the user a question and gives a list of
 * choices for the user to choose from.
 * If the message contains a line break, the first line should be
 * presented as a heading. For example, it may be used as the
 * primary text in a #GtkMessageDialog.
 */


/**
 * SECTION:extensionpoint:
 * @short_description: Extension Points
 * @include: gio.h
 * @see_also: <link linkend="extending-gio">Extending GIO</link>
 *
 * #GIOExtensionPoint provides a mechanism for modules to extend the
 * functionality of the library or application that loaded it in an
 * organized fashion.
 * An extension point is identified by a name, and it may optionally
 * require that any implementation must by of a certain type (or derived
 * thereof). Use g_io_extension_point_register() to register an
 * extension point, and g_io_extension_point_set_required_type() to
 * set a required type.
 * A module can implement an extension point by specifying the #GType
 * that implements the functionality. Additionally, each implementation
 * of an extension point has a name, and a priority. Use
 * g_io_extension_point_implement() to implement an extension point.
 * |[
 * GIOExtensionPoint *ep;
 * /&ast; Register an extension point &ast;/
 * ep = g_io_extension_point_register ("my-extension-point");
 * g_io_extension_point_set_required_type (ep, MY_TYPE_EXAMPLE);
 * ]|
 * |[
 * /&ast; Implement an extension point &ast;/
 * G_DEFINE_TYPE (MyExampleImpl, my_example_impl, MY_TYPE_EXAMPLE);
 * g_io_extension_point_implement ("my-extension-point",
 * my_example_impl_get_type (),
 * "my-example",
 * 10);
 * ]|
 * It is up to the code that registered the extension point how
 * it uses the implementations that have been associated with it.
 * Depending on the use case, it may use all implementations, or
 * only the one with the highest priority, or pick a specific
 * one by name.
 * To avoid opening all modules just to find out what extension
 * points they implement, GIO makes use of a caching mechanism,
 * see <link linkend="gio-querymodules">gio-querymodules</link>.
 * You are expected to run this command after installing a
 * GIO module.
 */


/**
 * g_output_stream_write:
 * @stream: a #GOutputStream.
 * @buffer: (array length=count) (element-type guint8): the buffer containing the data to write.
 * @count: the number of bytes to write
 * @cancellable: optional cancellable object
 * @error: location to store the error occuring, or %NULL to ignore
 *
 * Tries to write @count bytes from @buffer into the stream. Will block
 * during the operation.
 * If count is 0, returns 0 and does nothing. A value of @count
 * larger than %G_MAXSSIZE will cause a %G_IO_ERROR_INVALID_ARGUMENT error.
 * On success, the number of bytes written to the stream is returned.
 * It is not an error if this is not the same as the requested size, as it
 * can happen e.g. on a partial I/O error, or if there is not enough
 * storage in the stream. All writes block until at least one byte
 * is written or an error occurs; 0 is never returned (unless
 * If @cancellable is not NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned. If an
 * operation was partially finished when the operation was cancelled the
 * partial result will be returned, without an error.
 * On error -1 is returned and @error is set accordingly.
 *
 * Returns: Number of bytes written, or -1 on error
 */


/**
 * g_dbus_connection_new:
 * @stream: A #GIOStream.
 * @guid: The GUID to use if a authenticating as a server or %NULL.
 * @flags: Flags describing how to make the connection.
 * @observer: A #GDBusAuthObserver or %NULL.
 * @cancellable: A #GCancellable or %NULL.
 * @callback: A #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: The data to pass to @callback.
 *
 * Asynchronously sets up a D-Bus connection for exchanging D-Bus messages
 * with the end represented by @stream.
 * If @observer is not %NULL it may be used to control the
 * authentication process.
 * When the operation is finished, @callback will be invoked. You can
 * then call g_dbus_connection_new_finish() to get the result of the
 * operation.
 * This is a asynchronous failable constructor. See
 * g_dbus_connection_new_sync() for the synchronous
 * version.
 *
 * Since: 2.26
 */


/**
 * g_unix_credentials_message_get_credentials:
 * @message: A #GUnixCredentialsMessage.
 *
 * Gets the credentials stored in @message.
 *
 * Returns: (transfer none): A #GCredentials instance. Do not free, it is owned by @message.
 * Since: 2.26
 */


/**
 * SECTION:gfileenumerato:
 * @short_description: Enumerated Files Routines
 * @include: gio/gio.h
 *
 * #GFileEnumerator allows you to operate on a set of #GFile<!-- -->s,
 * returning a #GFileInfo structure for each file enumerated (e.g.
 * g_file_enumerate_children() will return a #GFileEnumerator for each
 * of the children within a directory).
 * To get the next file's information from a #GFileEnumerator, use
 * g_file_enumerator_next_file() or its asynchronous version,
 * g_file_enumerator_next_files_async(). Note that the asynchronous
 * version will return a list of #GFileInfo<!---->s, whereas the
 * synchronous will only return the next file in the enumerator.
 * To close a #GFileEnumerator, use g_file_enumerator_close(), or
 * its asynchronous version, g_file_enumerator_close_async(). Once
 * a #GFileEnumerator is closed, no further actions may be performed
 * on it, and it should be freed with g_object_unref().
 */


/**
 * GThemedIcon:use-default-fallbacks:
 *
 * Whether to use the default fallbacks found by shortening the icon name
 * at '-' characters. If the "names" array has more than one element,
 * ignores any past the first.
 * For example, if the icon name was "gnome-dev-cdrom-audio", the array
 * would become
 * |[
 * {
 * "gnome-dev-cdrom-audio",
 * "gnome-dev-cdrom",
 * "gnome-dev",
 * "gnome",
 * NULL
 * };
 * ]|
 */


/**
 * g_mount_remount_finish:
 * @mount: a #GMount.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occuring, or %NULL to ignore.
 *
 * Finishes remounting a mount. If any errors occurred during the operation,
 *
 * Returns: %TRUE if the mount was successfully remounted. %FALSE otherwise.
 */


/**
 * g_settings_sync:
 *
 * Ensures that all pending operations for the given are complete for
 * the default backend.
 * Writes made to a #GSettings are handled asynchronously.  For this
 * reason, it is very unlikely that the changes have it to disk by the
 * time g_settings_set() returns.
 * This call will block until all of the writes have made it to the
 * backend.  Since the mainloop is not running, no change notifications
 * will be dispatched during this call (but some may be queued by the
 * time the call is done).
 */


/**
 * GNetworkAddress:
 *
 * A #GSocketConnectable for resolving a hostname and connecting to
 * that host.
 */


/**
 * g_socket_address_enumerator_next_async:
 * @enumerator: a #GSocketAddressEnumerator
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: the data to pass to callback function
 *
 * Asynchronously retrieves the next #GSocketAddress from @enumerator
 * and then calls @callback, which must call
 * g_socket_address_enumerator_next_finish() to get the result.
 */


/**
 * g_settings_get_strv:
 * @settings: a #GSettings object
 * @key: the key to get the value for
 * @returns: (array zero-terminated=1) (transfer full): the value that is
 *
 * A convenience variant of g_settings_get() for string arrays.
 * It is a programmer error to give a @key that isn't specified as
 * having an array of strings type in the schema for @settings.
 * stored at @key in @settings.
 *
 * Since: 2.26
 */


/**
 * g_unix_output_stream_set_close_fd:
 * @stream: a #GUnixOutputStream
 * @close_fd: %TRUE to close the file descriptor when done
 *
 * Sets whether the file descriptor of @stream shall be closed
 * when the stream is closed.
 *
 * Since: 2.20
 */


/**
 * g_dbus_message_set_interface:
 * @message: A #GDBusMessage.
 * @value: The value to set.
 *
 * Convenience setter for the %G_DBUS_MESSAGE_HEADER_FIELD_INTERFACE header field.
 *
 * Since: 2.26
 */


/**
 * g_charset_converter_new:
 * @to_charset: destination charset
 * @from_charset: source charset
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Creates a new #GCharsetConverter.
 *
 * Returns: a new #GCharsetConverter or %NULL on error.
 * Since: 2.24
 */


/**
 * g_periodic_get_high_priority:
 * @periodic: a #GPeriodic clock
 *
 * Gets the #GSource priority of the clock.
 *
 * Returns: the high priority level
 * Since: 2.28
 */


/**
 * g_simple_async_result_set_op_res_gboolean:
 * @simple: a #GSimpleAsyncResult.
 * @op_res: a #gboolean.
 *
 * Sets the operation result to a boolean within the asynchronous result.
 */


/**
 * g_unix_fd_list_get:
 * @list: a #GUnixFDList
 * @index_: the index into the list
 * @error: a #GError pointer
 *
 * Gets a file descriptor out of @list.
 * programmer error for @index_ to be out of range; see
 * g_unix_fd_list_get_length().
 * The file descriptor is duplicated using dup() and set as
 * close-on-exec before being returned.  You must call close() on it
 * when you are done.
 * A possible cause of failure is exceeding the per-process or
 * system-wide file descriptor limit.
 *
 * Returns: the file descriptor, or -1 in case of error
 * Since: 2.24
 */


/**
 * g_simple_action_new:
 * @name: the name of the action
 * @parameter_type: (allow-none): the type of parameter to the activate function
 *
 * Creates a new action.
 * The created action is stateless.  See g_simple_action_new_stateful().
 *
 * Returns: a new #GSimpleAction
 * Since: 2.28
 */


/**
 * g_inet_address_get_is_link_local:
 * @address: a #GInetAddress
 *
 * Tests whether @address is a link-local address (that is, if it
 * identifies a host on a local network that is not connected to the
 * Internet).
 *
 * Returns: %TRUE if @address is a link-local address.
 * Since: 2.22
 */


/**
 * g_drive_has_media:
 * @drive: a #GDrive.
 *
 * Checks if the @drive has media. Note that the OS may not be polling
 * the drive for media changes; see g_drive_is_media_check_automatic()
 * for more details.
 *
 * Returns: %TRUE if @drive has media, %FALSE otherwise.
 */


/**
 * g_simple_async_result_set_op_res_gssize:
 * @simple: a #GSimpleAsyncResult.
 * @op_res: a #gssize.
 *
 * Sets the operation result within the asynchronous result to
 * the given @op_res.
 */


/**
 * g_loadable_icon_load_finish:
 * @icon: a #GLoadableIcon.
 * @res: a #GAsyncResult.
 * @type: a location to store the type of the loaded icon, %NULL to ignore.
 * @error: a #GError location to store the error occuring, or %NULL to ignore.
 *
 * Finishes an asynchronous icon load started in g_loadable_icon_load_async().
 *
 * Returns: (transfer full): a #GInputStream to read the icon from.
 */


/**
 * g_resolver_get_default:
 *
 * Gets the default #GResolver. You should unref it when you are done
 * with it. #GResolver may use its reference count as a hint about how
 * many threads/processes, etc it should allocate for concurrent DNS
 * resolutions.
 *
 * Returns: (transfer full): the default #GResolver.
 * Since: 2.22
 */


/**
 * g_application_command_line_print:
 * @cmdline: a #GApplicationCommandLine
 * @format: a printf-style format string
 * @...: arguments, as per @format
 *
 * Formats a message and prints it using the stdout print handler in the
 * invoking process.
 * If @cmdline is a local invocation then this is exactly equivalent to
 * g_print().  If @cmdline is remote then this is equivalent to calling
 * g_print() in the invoking process.
 *
 * Since: 2.28
 */


/**
 * g_file_info_has_attribute:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 *
 * Checks if a file info structure has an attribute named @attribute.
 * %FALSE otherwise.
 *
 * Returns: %TRUE if @Ginfo has an attribute named @attribute,
 */


/**
 * g_drive_get_volumes:
 * @drive: a #GDrive.
 *
 * Get a list of mountable volumes for @drive.
 * The returned list should be freed with g_list_free(), after
 * its elements have been unreffed with g_object_unref().
 *
 * Returns: (element-type GVolume) (transfer full): #GList containing any #GVolume objects on the given @drive.
 */


/**
 * g_dbus_connection_start_message_processing:
 * @connection: A #GDBusConnection.
 *
 * If @connection was created with
 * %G_DBUS_CONNECTION_FLAGS_DELAY_MESSAGE_PROCESSING, this method
 * starts processing messages. Does nothing on if @connection wasn't
 * created with this flag or if the method has already been called.
 *
 * Since: 2.26
 */


/**
 * g_desktop_app_info_set_desktop_env:
 * @desktop_env: a string specifying what desktop this is
 *
 * Sets the name of the desktop that the application is running in.
 * This is used by g_app_info_should_show() to evaluate the
 * <literal>OnlyShowIn</literal> and <literal>NotShowIn</literal>
 * desktop entry fields.
 * The <ulink url="http://standards.freedesktop.org/menu-spec/latest/">Desktop
 * Menu specification</ulink> recognizes the following:
 * <simplelist>
 * <member>GNOME</member>
 * <member>KDE</member>
 * <member>ROX</member>
 * <member>XFCE</member>
 * <member>Old</member>
 * </simplelist>
 * Should be called only once; subsequent calls are ignored.
 */


/**
 * g_cancellable_new:
 *
 * Creates a new #GCancellable object.
 * Applications that want to start one or more operations
 * that should be cancellable should create a #GCancellable
 * and pass it to the operations.
 * One #GCancellable can be used in multiple consecutive
 * operations, but not in multiple concurrent operations.
 *
 * Returns: a #GCancellable.
 */


/**
 * g_io_extension_get_priority:
 * @extension: a #GIOExtension
 *
 * Gets the priority with which @extension was registered.
 *
 * Returns: the priority of @extension
 */


/**
 * g_file_new_for_commandline_arg:
 * @arg: a command line string.
 *
 * Creates a #GFile with the given argument from the command line. The value of
 * relative to the current working directory.
 * This operation never fails, but the returned object might not support any
 * I/O operation if @arg points to a malformed path.
 *
 * Returns: (transfer full): a new #GFile.
 */


/**
 * g_app_info_get_display_name:
 * @appinfo: a #GAppInfo.
 *
 * Gets the display name of the application. The display name is often more
 * descriptive to the user than the name itself.
 * no display name is available.
 *
 * Returns: the display name of the application for @appinfo, or the name if
 * Since: 2.24
 */


/**
 * GApplication::activate:
 * @application: the application
 *
 * The ::activate signal is emitted on the primary instance when an
 * activation occurs. See g_application_activate().
 */


/**
 * g_proxy_connect_finish:
 * @proxy: a #GProxy
 * @result: a #GAsyncRetult
 * @error: return #GError
 *
 * See g_proxy_connect().
 *
 * Returns: (transfer full): a #GIOStream.
 * Since: 2.26
 */


/**
 * g_mount_get_icon:
 * @mount: a #GMount.
 *
 * Gets the icon for @mount.
 * The returned object should be unreffed with
 * g_object_unref() when no longer needed.
 *
 * Returns: (transfer full): a #GIcon.
 */


/**
 * g_mount_operation_reply:
 * @op: a #GMountOperation
 * @result: a #GMountOperationResult
 *
 * Emits the #GMountOperation::reply signal.
 */


/**
 * g_dbus_property_info_ref:
 * @info: A #GDBusPropertyInfo
 *
 * If @info is statically allocated does nothing. Otherwise increases
 * the reference count.
 *
 * Returns: The same @info.
 * Since: 2.26
 */


/**
 * g_themed_icon_new_with_default_fallbacks:
 * @iconname: a string containing an icon name
 *
 * Creates a new themed icon for @iconname, and all the names
 * that can be created by shortening @iconname at '-' characters.
 * In the following example, @icon1 and @icon2 are equivalent:
 * |[
 * const char *names[] = {
 * "gnome-dev-cdrom-audio",
 * "gnome-dev-cdrom",
 * "gnome-dev",
 * "gnome"
 * };
 * icon1 = g_themed_icon_new_from_names (names, 4);
 * icon2 = g_themed_icon_new_with_default_fallbacks ("gnome-dev-cdrom-audio");
 * ]|
 *
 * Returns: (transfer full): a new #GThemedIcon.
 */


/**
 * g_action_group_has_action:
 * @action_group: a #GActionGroup
 * @action_name: the name of the action to check for
 *
 * Checks if the named action exists within @action_group.
 *
 * Returns: whether the named action exists
 * Since: 2.28
 */


/**
 * g_buffered_input_stream_fill_async:
 * @stream: a #GBufferedInputStream
 * @count: the number of bytes that will be read from the stream
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request
 * @cancellable: optional #GCancellable object
 * @callback: a #GAsyncReadyCallback
 * @user_data: a #gpointer
 *
 * Reads data into @stream's buffer asynchronously, up to @count size.
 * version of this function, see g_buffered_input_stream_fill().
 * If @count is -1 then the attempted read size is equal to the number
 * of bytes that are required to fill the buffer.
 */


/**
 * g_inet_address_get_is_mc_node_local:
 * @address: a #GInetAddress
 *
 * Tests whether @address is a node-local multicast address.
 *
 * Returns: %TRUE if @address is a node-local multicast address.
 * Since: 2.22
 */


/**
 * SECTION:gvolum:
 * @short_description: Volume management
 * @include: gio/gio.h
 *
 * The #GVolume interface represents user-visible objects that can be
 * mounted. Note, when porting from GnomeVFS, #GVolume is the moral
 * equivalent of #GnomeVFSDrive.
 * Mounting a #GVolume instance is an asynchronous operation. For more
 * information about asynchronous operations, see #GAsyncReady and
 * #GSimpleAsyncReady. To mount a #GVolume, first call
 * g_volume_mount() with (at least) the #GVolume instance, optionally
 * a #GMountOperation object and a #GAsyncReadyCallback.
 * Typically, one will only want to pass %NULL for the
 * #GMountOperation if automounting all volumes when a desktop session
 * starts since it's not desirable to put up a lot of dialogs asking
 * for credentials.
 * The callback will be fired when the operation has resolved (either
 * with success or failure), and a #GAsyncReady structure will be
 * passed to the callback.  That callback should then call
 * g_volume_mount_finish() with the #GVolume instance and the
 * #GAsyncReady data to see if the operation was completed
 * successfully.  If an @error is present when g_volume_mount_finish()
 * is called, then it will be filled with any error information.
 * <para id="volume-identifier">
 * It is sometimes necessary to directly access the underlying
 * operating system object behind a volume (e.g. for passing a volume
 * to an application via the commandline). For this purpose, GIO
 * allows to obtain an 'identifier' for the volume. There can be
 * different kinds of identifiers, such as Hal UDIs, filesystem labels,
 * traditional Unix devices (e.g. <filename>/dev/sda2</filename>),
 * uuids. GIO uses predefind strings as names for the different kinds
 * #G_VOLUME_IDENTIFIER_KIND_LABEL, etc. Use g_volume_get_identifier()
 * to obtain an identifier for a volume.
 * </para>
 * Note that #G_VOLUME_IDENTIFIER_KIND_HAL_UDI will only be available
 * when the gvfs hal volume monitor is in use. Other volume monitors
 * will generally be able to provide the #G_VOLUME_IDENTIFIER_KIND_UNIX_DEVICE
 * identifier, which can be used to obtain a hal device by means of
 * libhal_manger_find_device_string_match().
 *
 * Of identifiers: #G_VOLUME_IDENTIFIER_KIND_HAL_UDI,
 */


/**
 * g_output_stream_write_async:
 * @stream: A #GOutputStream.
 * @buffer: (array length=count) (element-type guint8): the buffer containing the data to write.
 * @count: the number of bytes to write
 * @io_priority: the io priority of the request.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: callback to call when the request is satisfied
 * @user_data: the data to pass to callback function
 *
 * Request an asynchronous write of @count bytes from @buffer into
 * the stream. When the operation is finished @callback will be called.
 * You can then call g_output_stream_write_finish() to get the result of the
 * operation.
 * During an async request no other sync and async calls are allowed,
 * and will result in %G_IO_ERROR_PENDING errors.
 * A value of @count larger than %G_MAXSSIZE will cause a
 * %G_IO_ERROR_INVALID_ARGUMENT error.
 * On success, the number of bytes written will be passed to the
 * requested size, as it can happen e.g. on a partial I/O error,
 * but generally we try to write as many bytes as requested.
 * You are guaranteed that this method will never fail with
 * %G_IO_ERROR_WOULD_BLOCK - if @stream can't accept more data, the
 * method will just wait until this changes.
 * Any outstanding I/O request with higher priority (lower numerical
 * value) will be executed before an outstanding request with lower
 * priority. Default priority is %G_PRIORITY_DEFAULT.
 * The asyncronous methods have a default fallback that uses threads
 * to implement asynchronicity, so they are optional for inheriting
 * classes. However, if you override one you must override all.
 * For the synchronous, blocking version of this function, see
 * g_output_stream_write().
 */


/**
 * g_socket_condition_wait:
 * @socket: a #GSocket
 * @condition: a #GIOCondition mask to wait for
 * @cancellable: a #GCancellable, or %NULL
 * @error: a #GError pointer, or %NULL
 *
 * Waits for @condition to become true on @socket. When the condition
 * is met, %TRUE is returned.
 * If @cancellable is cancelled before the condition is met, or if the
 * socket has a timeout set and it is reached before the condition is
 * met, then %FALSE is returned and @error, if non-%NULL, is set to
 * the appropriate value (%G_IO_ERROR_CANCELLED or
 * %G_IO_ERROR_TIMED_OUT).
 *
 * Returns: %TRUE if the condition was met, %FALSE otherwise
 * Since: 2.22
 */


/**
 * g_dbus_message_to_gerror:
 * @message: A #GDBusMessage.
 * @error: The #GError to set.
 *
 * If @message is not of type %G_DBUS_MESSAGE_TYPE_ERROR does
 * nothing and returns %FALSE.
 * Otherwise this method encodes the error in @message as a #GError
 * using g_dbus_error_set_dbus_error() using the information in the
 * %G_DBUS_MESSAGE_HEADER_FIELD_ERROR_NAME header field of @message as
 * well as the first string item in @message's body.
 *
 * Returns: %TRUE if @error was set, %FALSE otherwise.
 * Since: 2.26
 */


/**
 * g_socket_client_connect_to_service_async:
 * @client: a #GSocketClient
 * @domain: a domain name
 * @service: the name of the service to connect to
 * @cancellable: a #GCancellable, or %NULL
 * @callback: a #GAsyncReadyCallback
 * @user_data: user data for the callback
 *
 * This is the asynchronous version of
 * g_socket_client_connect_to_service().
 *
 * Since: 2.22
 */


/**
 * g_mount_operation_get_domain:
 * @op: a #GMountOperation.
 *
 * Gets the domain of the mount operation.
 *
 * Returns: a string set to the domain.
 */


/**
 * g_file_info_get_display_name:
 * @info: a #GFileInfo.
 *
 * Gets a display name for a file.
 *
 * Returns: a string containing the display name.
 */


/**
 * g_dbus_server_get_client_address:
 * @server: A #GDBusServer.
 *
 * Gets a D-Bus address string that can be used by clients to connect
 * to @server.
 * by @server.
 *
 * Returns: A D-Bus address string. Do not free, the string is owned
 * Since: 2.26
 */


/**
 * g_socket_client_connect_to_service:
 * @client: a #GSocketConnection
 * @domain: a domain name
 * @service: the name of the service to connect to
 * @cancellable: a #GCancellable, or %NULL
 * @error: a pointer to a #GError, or %NULL
 * @returns: (transfer full): a #GSocketConnection if successful, or %NULL on error
 *
 * Attempts to create a TCP connection to a service.
 * This call looks up the SRV record for @service at @domain for the
 * "tcp" protocol.  It then attempts to connect, in turn, to each of
 * the hosts providing the service until either a connection succeeds
 * or there are no hosts remaining.
 * Upon a successful connection, a new #GSocketConnection is constructed
 * and returned.  The caller owns this new object and must drop their
 * reference to it when finished with it.
 * In the event of any failure (DNS error, service not found, no hosts
 * connectable) %NULL is returned and @error (if non-%NULL) is set
 * accordingly.
 */


/**
 * g_dbus_connection_register_subtree:
 * @connection: A #GDBusConnection.
 * @object_path: The object path to register the subtree at.
 * @vtable: A #GDBusSubtreeVTable to enumerate, introspect and dispatch nodes in the subtree.
 * @flags: Flags used to fine tune the behavior of the subtree.
 * @user_data: Data to pass to functions in @vtable.
 * @user_data_free_func: Function to call when the subtree is unregistered.
 * @error: Return location for error or %NULL.
 *
 * Registers a whole subtree of <quote>dynamic</quote> objects.
 * The @enumerate and @introspection functions in @vtable are used to
 * convey, to remote callers, what nodes exist in the subtree rooted
 * by @object_path.
 * When handling remote calls into any node in the subtree, first the
 * or the #G_DBUS_SUBTREE_FLAGS_DISPATCH_TO_UNENUMERATED_NODES flag is set
 * the @introspection function is used to check if the node supports the
 * requested method. If so, the @dispatch function is used to determine
 * where to dispatch the call. The collected #GDBusInterfaceVTable and
 * #gpointer will be used to call into the interface vtable for processing
 * the request.
 * All calls into user-provided code will be invoked in the <link
 * linkend="g-main-context-push-thread-default">thread-default main
 * loop</link> of the thread you are calling this method from.
 * If an existing subtree is already registered at @object_path or
 * then @error is set to #G_IO_ERROR_EXISTS.
 * Note that it is valid to register regular objects (using
 * g_dbus_connection_register_object()) in a subtree registered with
 * g_dbus_connection_register_subtree() - if so, the subtree handler
 * is tried as the last resort. One way to think about a subtree
 * handler is to consider it a <quote>fallback handler</quote>
 * for object paths not registered via g_dbus_connection_register_object()
 * or other bindings.
 * Note that @vtable will be copied so you cannot change it after
 * registration.
 * See <xref linkend="gdbus-subtree-server"/> for an example of how to use this method.
 * that can be used with g_dbus_connection_unregister_subtree() .
 *
 * Returns: 0 if @error is set, otherwise a subtree registration id (never 0)
 * Since: 2.26
 */


/**
 * SECTION:gseekabl:
 * @short_description: Stream seeking interface
 * @include: gio/gio.h
 * @see_also: #GInputStream, #GOutputStream
 *
 * #GSeekable is implemented by streams (implementations of
 * #GInputStream or #GOutputStream) that support seeking.
 */


/**
 * g_mount_get_drive:
 * @mount: a #GMount.
 *
 * Gets the drive for the @mount.
 * This is a convenience method for getting the #GVolume and then
 * using that object to get the #GDrive.
 * The returned object should be unreffed with
 * g_object_unref() when no longer needed.
 *
 * Returns: (transfer full): a #GDrive or %NULL if @mount is not associated with a volume or a drive.
 */


/**
 * g_file_get_parse_name:
 * @file: input #GFile.
 *
 * Gets the parse name of the @file.
 * A parse name is a UTF-8 string that describes the
 * file such that one can get the #GFile back using
 * g_file_parse_name().
 * This is generally used to show the #GFile as a nice
 * full-pathname kind of string in a user interface,
 * like in a location entry.
 * For local files with names that can safely be converted
 * to UTF8 the pathname is used, otherwise the IRI is used
 * (a form of URI that allows UTF8 characters unescaped).
 * This call does no blocking i/o.
 * string should be freed with g_free() when no longer needed.
 *
 * Returns: a string containing the #GFile's parse name. The returned
 */


/**
 * g_resolver_lookup_by_name_async:
 * @resolver: a #GResolver
 * @hostname: the hostname to look up the address of
 * @cancellable: a #GCancellable, or %NULL
 * @callback: callback to call after resolution completes
 * @user_data: data for @callback
 *
 * Begins asynchronously resolving @hostname to determine its
 * associated IP address(es), and eventually calls @callback, which
 * must call g_resolver_lookup_by_name_finish() to get the result.
 * See g_resolver_lookup_by_name() for more details.
 *
 * Since: 2.22
 */


/**
 * SECTION:gfilteroutputstrea:
 * @short_description: Filter Output Stream
 * @include: gio/gio.h
 *
 * Base class for output stream implementations that perform some
 * kind of filtering operation on a base stream. Typical examples
 * of filtering operations are character set conversion, compression
 * and byte order flipping.
 */


/**
 * g_file_equal:
 * @file1: the first #GFile.
 * @file2: the second #GFile.
 *
 * Checks equality of two given #GFile<!-- -->s. Note that two
 * #GFile<!-- -->s that differ can still refer to the same
 * file on the filesystem due to various forms of filename
 * aliasing.
 * This call does no blocking i/o.
 * %FALSE if either is not a #GFile.
 *
 * Returns: %TRUE if @file1 and @file2 are equal.
 */


/**
 * g_file_set_attributes_async:
 * @file: input #GFile.
 * @info: a #GFileInfo.
 * @flags: a #GFileQueryInfoFlags.
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback.
 * @user_data: a #gpointer.
 *
 * Asynchronously sets the attributes of @file with @info.
 * For more details, see g_file_set_attributes_from_info() which is
 * the synchronous version of this call.
 * When the operation is finished, @callback will be called. You can then call
 * g_file_set_attributes_finish() to get the result of the operation.
 */


/**
 * SECTION:gcharsetconverte:
 * @short_description: Convert between charsets
 * @include: gio/gio.h
 *
 * #GCharsetConverter is an implementation of #GConverter based on
 * GIConv.
 */


/**
 * g_dbus_method_invocation_get_parameters:
 * @invocation: A #GDBusMethodInvocation.
 *
 * Gets the parameters of the method invocation.
 *
 * Returns: A #GVariant. Do not free, it is owned by @invocation.
 * Since: 2.26
 */


/**
 * g_output_stream_close_async:
 * @stream: A #GOutputStream.
 * @io_priority: the io priority of the request.
 * @callback: callback to call when the request is satisfied
 * @user_data: the data to pass to callback function
 * @cancellable: optional cancellable object
 *
 * Requests an asynchronous close of the stream, releasing resources
 * related to it. When the operation is finished @callback will be
 * called. You can then call g_output_stream_close_finish() to get
 * the result of the operation.
 * For behaviour details see g_output_stream_close().
 * The asyncronous methods have a default fallback that uses threads
 * to implement asynchronicity, so they are optional for inheriting
 * classes. However, if you override one you must override all.
 */


/**
 * g_dbus_message_to_blob:
 * @message: A #GDBusMessage.
 * @out_size: Return location for size of generated blob.
 * @capabilities: A #GDBusCapabilityFlags describing what protocol features are supported.
 * @error: Return location for error.
 *
 * Serializes @message to a blob. The byte order returned by
 * g_dbus_message_get_byte_order() will be used.
 * generated by @message or %NULL if @error is set. Free with g_free().
 *
 * Returns: A pointer to a valid binary D-Bus message of @out_size bytes
 * Since: 2.26
 */


/**
 * SECTION:giostrea:
 * @short_description: Base class for implementing read/write streams
 * @include: gio/gio.h
 * @see_also: #GInputStream, #GOutputStream
 *
 * GIOStream represents an object that has both read and write streams.
 * Generally the two streams acts as separate input and output streams,
 * but they share some common resources and state. For instance, for
 * seekable streams they may use the same position in both streams.
 * Examples of #GIOStream objects are #GSocketConnection which represents
 * a two-way network connection, and #GFileIOStream which represent a
 * file handle opened in read-write mode.
 * To do the actual reading and writing you need to get the substreams
 * with g_io_stream_get_input_stream() and g_io_stream_get_output_stream().
 * The #GIOStream object owns the input and the output streams, not the other
 * way around, so keeping the substreams alive will not keep the #GIOStream
 * object alive. If the #GIOStream object is freed it will be closed, thus
 * closing the substream, so even if the substreams stay alive they will
 * always just return a %G_IO_ERROR_CLOSED for all operations.
 * To close a stream use g_io_stream_close() which will close the common
 * stream object and also the individual substreams. You can also close
 * the substreams themselves. In most cases this only marks the
 * substream as closed, so further I/O on it fails. However, some streams
 * may support "half-closed" states where one direction of the stream
 * is actually shut down.
 *
 * Since: 2.22
 */


/**
 * g_socket_client_get_local_address:
 * @client: a #GSocketClient.
 *
 * Gets the local address of the socket client.
 * See g_socket_client_set_local_address() for details.
 *
 * Returns: (transfer none): a #GSocketAddres or %NULL. don't free
 * Since: 2.22
 */


/**
 * g_data_input_stream_read_uint64:
 * @stream: a given #GDataInputStream.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: #GError for error reporting.
 *
 * Reads an unsigned 64-bit/8-byte value from @stream.
 * In order to get the correct byte order for this read operation,
 * see g_data_input_stream_get_byte_order().
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * an error occurred.
 *
 * Returns: an unsigned 64-bit/8-byte read from @stream or %0 if
 */


/**
 * g_proxy_connect:
 * @proxy: a #GProxy
 * @connection: a #GIOStream
 * @proxy_address: a #GProxyAddress
 * @cancellable: a #GCancellable
 * @error: return #GError
 *
 * Given @connection to communicate with a proxy (eg, a
 * #GSocketConnection that is connected to the proxy server), this
 * does the necessary handshake to connect to @proxy_address, and if
 * required, wraps the #GIOStream to handle proxy payload.
 * be the same as @connection, in which case a reference
 * will be added.
 *
 * Returns: (transfer full): a #GIOStream that will replace @connection. This might
 * Since: 2.26
 */


/**
 * g_content_type_guess:
 * @filename: (allow-none): a string, or %NULL
 * @data: (allow-none) (array length=data_size): a stream of data, or %NULL
 * @data_size: the size of @data
 * @result_uncertain: (allow-none) (out): return location for the certainty of the result, or %NULL
 *
 * Guesses the content type based on example data. If the function is
 * uncertain, @result_uncertain will be set to %TRUE. Either @filename
 * or @data may be %NULL, in which case the guess will be based solely
 * on the other argument.
 * given data. Free with g_free()
 *
 * Returns: a string indicating a guessed content type for the
 */


/**
 * g_settings_backend_keys_changed:
 * @backend: a #GSettingsBackend implementation
 * @path: the path containing the changes
 * @items: the %NULL-terminated list of changed keys
 * @origin_tag: the origin tag
 *
 * Signals that a list of keys have possibly changed.  Backend
 * implementations should call this if keys have possibly changed their
 * values.
 * not containing '//').  Each string in @items must form a valid key
 * end with '/' and must not contain '//').
 * The meaning of this signal is that any of the key names resulting
 * from the contatenation of @path with each item in @items may have
 * changed.
 * The same rules for when notifications must occur apply as per
 * g_settings_backend_changed().  These two calls can be used
 * interchangeably if exactly one item has changed (although in that
 * case g_settings_backend_changed() is definitely preferred).
 * For efficiency reasons, the implementation should strive for @path to
 * keys that were changed) but this is not strictly required.
 *
 * Name when @path is prefixed to it (ie: each item must not start or
 * Be as long as possible (ie: the longest common prefix of all of the
 * Since: 2.26
 */


/**
 * g_file_query_writable_namespaces:
 * @file: input #GFile.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Obtain the list of attribute namespaces where new attributes
 * can be created by a user. An example of this is extended
 * attributes (in the "xattr" namespace).
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * When you are done with it, release it with g_file_attribute_info_list_unref()
 *
 * Returns: a #GFileAttributeInfoList describing the writable namespaces.
 */


/**
 * g_file_eject_mountable_with_operation:
 * @file: input #GFile.
 * @flags: flags affecting the operation
 * @mount_operation: a #GMountOperation, or %NULL to avoid user interaction.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied, or %NULL.
 * @user_data: the data to pass to callback function
 *
 * Starts an asynchronous eject on a mountable.
 * When this operation has completed, @callback will be called with
 * g_file_eject_mountable_with_operation_finish().
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Since: 2.22
 */


/**
 * g_dbus_message_new_method_error_valist:
 * @method_call_message: A message of type %G_DBUS_MESSAGE_TYPE_METHOD_CALL to create a reply message to.
 * @error_name: A valid D-Bus error name.
 * @error_message_format: The D-Bus error message in a printf() format.
 * @var_args: Arguments for @error_message_format.
 *
 * Like g_dbus_message_new_method_error() but intended for language bindings.
 *
 * Returns: (transfer full): A #GDBusMessage. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * g_socket_set_listen_backlog:
 * @socket: a #GSocket.
 * @backlog: the maximum number of pending connections.
 *
 * Sets the maximum number of outstanding connections allowed
 * when listening on this socket. If more clients than this are
 * connecting to the socket and the application is not handling them
 * on time then the new connections will be refused.
 * Note that this must be called before g_socket_listen() and has no
 * effect if called after that.
 *
 * Since: 2.22
 */


/**
 * g_proxy_resolver_get_default:
 *
 * Gets the default #GProxyResolver for the system.
 *
 * Returns: (transfer none): the default #GProxyResolver.
 * Since: 2.26
 */


/**
 * g_settings_delay:
 * @settings: a #GSettings object
 *
 * Changes the #GSettings object into 'delay-apply' mode. In this
 * mode, changes to @settings are not immediately propagated to the
 * backend, but kept locally until g_settings_apply() is called.
 *
 * Since: 2.26
 */


/**
 * GMemoryOutputStream:destroy-function:
 *
 * Function called with the buffer as argument when the stream is destroyed.
 *
 * Since: 2.24
 */


/**
 * SECTION:gwin32outputstrea:
 * @short_description: Streaming output operations for Windows file handles
 * @include: gio/gwin32outputstream.h
 * @see_also: #GOutputStream
 *
 * #GWin32OutputStream implements #GOutputStream for writing to a
 * Windows file handle.
 * Note that <filename>&lt;gio/gwin32outputstream.h&gt;</filename> belongs
 * to the Windows-specific GIO interfaces, thus you have to use the
 * <filename>gio-windows-2.0.pc</filename> pkg-config file when using it.
 */


/**
 * g_file_monitor_is_cancelled:
 * @monitor: a #GFileMonitor
 *
 * Returns whether the monitor is canceled.
 *
 * Returns: %TRUE if monitor is canceled. %FALSE otherwise.
 */


/**
 * g_periodic_get_low_priority:
 * @periodic: a #GPeriodic clock
 *
 * Gets the priority level that #GPeriodic uses to check for mainloop
 * inactivity.  Other sources scheduled below this level of priority are
 * effectively ignored by #GPeriodic and may be starved.
 *
 * Returns: the low priority level
 * Since: 2.28
 */


/**
 * g_file_set_attributes_from_info:
 * @file: input #GFile.
 * @info: a #GFileInfo.
 * @flags: #GFileQueryInfoFlags
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Tries to set all attributes in the #GFileInfo on the target values,
 * not stopping on the first error.
 * If there is any error during this operation then @error will be set to
 * the first error. Error on particular fields are flagged by setting
 * the "status" field in the attribute value to
 * %G_FILE_ATTRIBUTE_STATUS_ERROR_SETTING, which means you can also detect
 * further errors.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: %TRUE if there was any error, %FALSE otherwise.
 */


/**
 * g_settings_is_writable:
 * @settings: a #GSettings object
 * @name: the name of a key
 * @returns: %TRUE if the key @name is writable
 *
 * Finds out if a key can be written or not
 *
 * Since: 2.26
 */


/**
 * g_file_create_async:
 * @file: input #GFile.
 * @flags: a set of #GFileCreateFlags.
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: the data to pass to callback function
 *
 * Asynchronously creates a new file and returns an output stream for writing to it.
 * The file must not already exist.
 * For more details, see g_file_create() which is
 * the synchronous version of this call.
 * When the operation is finished, @callback will be called. You can then call
 * g_file_create_finish() to get the result of the operation.
 */


/**
 * g_output_stream_splice_finish:
 * @stream: a #GOutputStream.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occuring, or %NULL to ignore.
 *
 * Finishes an asynchronous stream splice operation.
 *
 * Returns: a #gssize of the number of bytes spliced.
 */


/**
 * g_socket_shutdown:
 * @socket: a #GSocket
 * @shutdown_read: whether to shut down the read side
 * @shutdown_write: whether to shut down the write side
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Shut down part of a full-duplex connection.
 * If @shutdown_read is %TRUE then the recieving side of the connection
 * is shut down, and further reading is disallowed.
 * If @shutdown_write is %TRUE then the sending side of the connection
 * is shut down, and further writing is disallowed.
 * It is allowed for both @shutdown_read and @shutdown_write to be %TRUE.
 * One example where this is used is graceful disconnect for TCP connections
 * where you close the sending side, then wait for the other side to close
 * the connection, thus ensuring that the other side saw all sent data.
 *
 * Returns: %TRUE on success, %FALSE on error
 * Since: 2.22
 */


/**
 * g_file_get_relative_path:
 * @parent: input #GFile.
 * @descendant: input #GFile.
 *
 * Gets the path for @descendant relative to @parent.
 * This call does no blocking i/o.
 * to @parent, or %NULL if @descendant doesn't have @parent as prefix.
 * The returned string should be freed with g_free() when no longer needed.
 *
 * Returns: string with the relative path from @descendant
 */


/**
 * g_simple_async_result_take_error:
 * @simple: a #GSimpleAsyncResult
 * @error: a #GError
 *
 * Sets the result from @error, and takes over the caller's ownership
 * of @error, so the caller does not need to free it any more.
 *
 * Since: 2.28
 */


/**
 * g_unix_is_mount_path_system_internal:
 * @mount_path: a mount path, e.g. <filename>/media/disk</filename> or <filename>/usr</filename>
 *
 * Determines if @mount_path is considered an implementation of the
 * OS. This is primarily used for hiding mountable and mounted volumes
 * that only are used in the OS and has little to no relevance to the
 * casual user.
 * of the OS.
 *
 * Returns: %TRUE if @mount_path is considered an implementation detail
 */


/**
 * g_emblemed_icon_new:
 * @icon: a #GIcon
 * @emblem: (allow-none): a #GEmblem, or %NULL
 *
 * Creates a new emblemed icon for @icon with the emblem @emblem.
 *
 * Returns: (transfer full): a new #GIcon
 * Since: 2.18
 */


/**
 * g_file_eject_mountable_finish:
 * @file: input #GFile.
 * @result: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes an asynchronous eject operation started by
 * g_file_eject_mountable().
 * otherwise.
 *
 * Returns: %TRUE if the @file was ejected successfully. %FALSE
 * Deprecated: 2.22: Use g_file_eject_mountable_with_operation_finish() instead.
 */


/**
 * g_local_vfs_new:
 *
 * Returns a new #GVfs handle for a local vfs.
 *
 * Returns: a new #GVfs handle.
 */


/**
 * GDBusServer::new-connection:
 * @server: The #GDBusServer emitting the signal.
 * @connection: A #GDBusConnection for the new connection.
 *
 * Emitted when a new authenticated connection has been made. Use
 * g_dbus_connection_get_peer_credentials() to figure out what
 * identity (if any), was authenticated.
 * If you want to accept the connection, take a reference to the
 * connection call g_dbus_connection_close() and give up your
 * reference. Note that the other peer may disconnect at any time -
 * a typical thing to do when accepting a connection is to listen to
 * the #GDBusConnection::closed signal.
 * If #GDBusServer:flags contains %G_DBUS_SERVER_FLAGS_RUN_IN_THREAD
 * then the signal is emitted in a new thread dedicated to the
 * connection. Otherwise the signal is emitted in the <link
 * linkend="g-main-context-push-thread-default">thread-default main
 * loop</link> of the thread that @server was constructed in.
 * You are guaranteed that signal handlers for this signal runs
 * before incoming messages on @connection are processed. This means
 * that it's suitable to call g_dbus_connection_register_object() or
 * similar from the signal handler.
 * run.
 *
 * Returns: %TRUE to claim @connection, %FALSE to let other handlers
 * Since: 2.26
 */


/**
 * g_action_group_action_added:
 * @action_group: a #GActionGroup
 * @action_name: the name of an action in the group
 *
 * Emits the #GActionGroup::action-added signal on @action_group.
 * This function should only be called by #GActionGroup implementations.
 *
 * Since: 2.28
 */


/**
 * g_output_stream_has_pending:
 * @stream: a #GOutputStream.
 *
 * Checks if an ouput stream has pending actions.
 *
 * Returns: %TRUE if @stream has pending actions.
 */


/**
 * GDBusConnection:capabilities:
 *
 * Flags from the #GDBusCapabilityFlags enumeration
 * representing connection features negotiated with the other peer.
 *
 * Since: 2.26
 */


/**
 * g_dbus_error_unregister_error:
 * @error_domain: A #GQuark for a error domain.
 * @error_code: An error code.
 * @dbus_error_name: A D-Bus error name.
 *
 * Destroys an association previously set up with g_dbus_error_register_error().
 *
 * Returns: %TRUE if the association was destroyed, %FALSE if it wasn't found.
 * Since: 2.26
 */


/**
 * SECTION:gcancellabl:
 * @short_description: Thread-safe Operation Cancellation Stack
 * @include: gio/gio.h
 *
 * GCancellable is a thread-safe operation cancellation stack used
 * throughout GIO to allow for cancellation of synchronous and
 * asynchronous operations.
 */


/**
 * g_buffered_input_stream_peek:
 * @stream: a #GBufferedInputStream
 * @buffer: a pointer to an allocated chunk of memory
 * @offset: a #gsize
 * @count: a #gsize
 *
 * Peeks in the buffer, copying data of size @count into @buffer,
 * offset @offset bytes.
 *
 * Returns: a #gsize of the number of bytes peeked, or -1 on error.
 */


/**
 * g_file_is_native:
 * @file: input #GFile.
 *
 * Checks to see if a file is native to the platform.
 * A native file s one expressed in the platform-native filename format,
 * e.g. "C:\Windows" or "/usr/bin/". This does not mean the file is local,
 * as it might be on a locally mounted remote filesystem.
 * On some systems non-native files may be available using
 * the native filesystem via a userspace filesystem (FUSE), in
 * these cases this call will return %FALSE, but g_file_get_path()
 * will still return a native path.
 * This call does no blocking i/o.
 *
 * Returns: %TRUE if file is native.
 */


/**
 * g_file_set_attribute_uint64:
 * @file: input #GFile.
 * @attribute: a string containing the attribute's name.
 * @value: a #guint64 containing the attribute's new value.
 * @flags: a #GFileQueryInfoFlags.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Sets @attribute of type %G_FILE_ATTRIBUTE_TYPE_UINT64 to @value.
 * If @attribute is of a different type, this operation will fail.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * in the @file, %FALSE otherwise.
 *
 * Returns: %TRUE if the @attribute was successfully set to @value
 */


/**
 * g_output_stream_flush_finish:
 * @stream: a #GOutputStream.
 * @result: a GAsyncResult.
 * @error: a #GError location to store the error occuring, or %NULL to ignore.
 *
 * Finishes flushing an output stream.
 *
 * Returns: %TRUE if flush operation suceeded, %FALSE otherwise.
 */


/**
 * g_volume_get_icon:
 * @volume: a #GVolume.
 *
 * Gets the icon for @volume.
 * The returned object should be unreffed with g_object_unref()
 * when no longer needed.
 *
 * Returns: (transfer full): a #GIcon.
 */


/**
 * GMountOperation::aborted:
 *
 * Emitted by the backend when e.g. a device becomes unavailable
 * while a mount operation is in progress.
 * Implementations of GMountOperation should handle this signal
 * by dismissing open password dialogs.
 *
 * Since: 2.20
 */


/**
 * g_charset_converter_get_use_fallback:
 * @converter: a #GCharsetConverter
 *
 * Gets the #GCharsetConverter:use-fallback property.
 *
 * Returns: %TRUE if fallbacks are used by @converter
 * Since: 2.24
 */


/**
 * g_win32_output_stream_set_close_handle:
 * @stream: a #GWin32OutputStream
 * @close_handle: %TRUE to close the handle when done
 *
 * Sets whether the handle of @stream shall be closed when the stream
 * is closed.
 *
 * Since: 2.26
 */


/**
 * g_converter_convert:
 * @converter: a #GConverter.
 * @inbuf: the buffer containing the data to convert.
 * @inbuf_size: the number of bytes in @inbuf
 * @outbuf: a buffer to write converted data in.
 * @outbuf_size: the number of bytes in @outbuf, must be at least one
 * @flags: a #GConvertFlags controlling the conversion details
 * @bytes_read: will be set to the number of bytes read from @inbuf on success
 * @bytes_written: will be set to the number of bytes written to @outbuf on success
 * @error: location to store the error occuring, or %NULL to ignore
 *
 * This is the main operation used when converting data. It is to be called
 * multiple times in a loop, and each time it will do some work, i.e.
 * producing some output (in @outbuf) or consuming some input (from @inbuf) or
 * both. If its not possible to do any work an error is returned.
 * Note that a single call may not consume all input (or any input at all).
 * Also a call may produce output even if given no input, due to state stored
 * in the converter producing output.
 * If any data was either produced or consumed, and then an error happens, then
 * only the successful conversion is reported and the error is returned on the
 * next call.
 * A full conversion loop involves calling this method repeatedly, each time
 * giving it new input and space output space. When there is no more input
 * data after the data in @inbuf, the flag %G_CONVERTER_INPUT_AT_END must be set.
 * The loop will be (unless some error happens) returning %G_CONVERTER_CONVERTED
 * each time until all data is consumed and all output is produced, then
 * %G_CONVERTER_FINISHED is returned instead. Note, that %G_CONVERTER_FINISHED
 * may be returned even if %G_CONVERTER_INPUT_AT_END is not set, for instance
 * in a decompression converter where the end of data is detectable from the
 * data (and there might even be other data after the end of the compressed data).
 * When some data has successfully been converted @bytes_read and is set to
 * the number of bytes read from @inbuf, and @bytes_written is set to indicate
 * how many bytes was written to @outbuf. If there are more data to output
 * or consume (i.e. unless the G_CONVERTER_INPUT_AT_END is specified) then
 * G_CONVERTER_CONVERTED is returned, and if no more data is to be output
 * then G_CONVERTER_FINISHED is returned.
 * On error %G_CONVERTER_ERROR is returned and @error is set accordingly.
 * Some errors need special handling:
 * %G_IO_ERROR_NO_SPACE is returned if there is not enough space
 * to write the resulting converted data, the application should
 * call the function again with a larger @outbuf to continue.
 * %G_IO_ERROR_PARTIAL_INPUT is returned if there is not enough
 * input to fully determine what the conversion should produce,
 * and the %G_CONVERTER_INPUT_AT_END flag is not set. This happens for
 * example with an incomplete multibyte sequence when converting text,
 * or when a regexp matches up to the end of the input (and may match
 * further input). It may also happen when @inbuf_size is zero and
 * there is no more data to produce.
 * When this happens the application should read more input and then
 * call the function again. If further input shows that there is no
 * more data call the function again with the same data but with
 * the %G_CONVERTER_INPUT_AT_END flag set. This may cause the conversion
 * to finish as e.g. in the regexp match case (or, to fail again with
 * %G_IO_ERROR_PARTIAL_INPUT in e.g. a charset conversion where the
 * input is actually partial).
 * After g_converter_convert() has returned %G_CONVERTER_FINISHED the
 * converter object is in an invalid state where its not allowed
 * to call g_converter_convert() anymore. At this time you can only
 * free the object or call g_converter_reset() to reset it to the
 * initial state.
 * If the flag %G_CONVERTER_FLUSH is set then conversion is modified
 * to try to write out all internal state to the output. The application
 * has to call the function multiple times with the flag set, and when
 * the availible input has been consumed and all internal state has
 * been produced then %G_CONVERTER_FLUSHED (or %G_CONVERTER_FINISHED if
 * really at the end) is returned instead of %G_CONVERTER_CONVERTED.
 * This is somewhat similar to what happens at the end of the input stream,
 * but done in the middle of the data.
 * This has different meanings for different conversions. For instance
 * in a compression converter it would mean that we flush all the
 * compression state into output such that if you uncompress the
 * compressed data you get back all the input data. Doing this may
 * make the final file larger due to padding though. Another example
 * is a regexp conversion, where if you at the end of the flushed data
 * have a match, but there is also a potential longer match. In the
 * non-flushed case we would ask for more input, but when flushing we
 * treat this as the end of input and do the match.
 * Flushing is not always possible (like if a charset converter flushes
 * at a partial multibyte sequence). Converters are supposed to try
 * to produce as much output as possible and then return an error
 * (typically %G_IO_ERROR_PARTIAL_INPUT).
 *
 * Returns: a #GConverterResult, %G_CONVERTER_ERROR on error.
 * Since: 2.24
 */


/**
 * g_unix_mounts_changed_since:
 * @time: guint64 to contain a timestamp.
 *
 * Checks if the unix mounts have changed since a given unix time.
 *
 * Returns: %TRUE if the mounts have changed since @time.
 */


/**
 * GAction:state:
 *
 * The state of the action, or %NULL if the action is stateless.
 *
 * Since: 2.28
 */


/**
 * g_file_info_get_attribute_int64:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 *
 * Gets a signed 64-bit integer contained within the attribute. If the
 * attribute does not contain an signed 64-bit integer, or is invalid,
 * 0 will be returned.
 *
 * Returns: a signed 64-bit integer from the attribute.
 */


/**
 * g_unix_socket_address_get_is_abstract:
 * @address: a #GInetSocketAddress
 *
 * Tests if @address is abstract.
 *
 * Returns: %TRUE if the address is abstract, %FALSE otherwise
 * Since: 2.22
 * Deprecated: Use g_unix_socket_address_get_address_type()
 */


/**
 * g_io_extension_get_name:
 * @extension: a #GIOExtension
 *
 * Gets the name under which @extension was registered.
 * Note that the same type may be registered as extension
 * for multiple extension points, under different names.
 *
 * Returns: the name of @extension.
 */


/**
 * g_settings_backend_changed_tree:
 * @backend: a #GSettingsBackend implementation
 * @tree: a #GTree containing the changes
 * @origin_tag: the origin tag
 *
 * This call is a convenience wrapper.  It gets the list of changes from
 * g_settings_backend_changed().
 *
 * Since: 2.26
 */


/**
 * g_socket_client_connect_to_host:
 * @client: a #GSocketClient
 * @host_and_port: the name and optionally port of the host to connect to
 * @default_port: the default port to connect to
 * @cancellable: a #GCancellable, or %NULL
 * @error: a pointer to a #GError, or %NULL
 *
 * This is a helper function for g_socket_client_connect().
 * Attempts to create a TCP connection to the named host.
 * address, an IPv4 address, or a domain name (in which case a DNS
 * lookup is performed).  Quoting with [] is supported for all address
 * types.  A port override may be specified in the usual way with a
 * colon.  Ports may be given as decimal numbers or symbolic names (in
 * which case an /etc/services lookup is performed).
 * If no port override is given in @host_and_port then @default_port will be
 * used as the port number to connect to.
 * In general, @host_and_port is expected to be provided by the user (allowing
 * them to give the hostname, and a port overide if necessary) and
 * In the case that an IP address is given, a single connection
 * attempt is made.  In the case that a name is given, multiple
 * connection attempts may be made, in turn and according to the
 * number of address records in DNS, until a connection succeeds.
 * Upon a successful connection, a new #GSocketConnection is constructed
 * and returned.  The caller owns this new object and must drop their
 * reference to it when finished with it.
 * In the event of any failure (DNS error, service not found, no hosts
 * connectable) %NULL is returned and @error (if non-%NULL) is set
 * accordingly.
 *
 * Returns: (transfer full): a #GSocketConnection on success, %NULL on error.
 * Since: 2.22
 */


/**
 * g_srv_target_new:
 * @hostname: the host that the service is running on
 * @port: the port that the service is running on
 * @priority: the target's priority
 * @weight: the target's weight
 *
 * Creates a new #GSrvTarget with the given parameters.
 * You should not need to use this; normally #GSrvTarget<!-- -->s are
 * created by #GResolver.
 *
 * Returns: a new #GSrvTarget.
 * Since: 2.22
 */


/**
 * SECTION:gunixsocketaddres:
 * @short_description: UNIX GSocketAddress
 * @include: gio/gunixsocketaddress.h
 *
 * Support for UNIX-domain (also known as local) sockets.
 * UNIX domain sockets are generally visible in the filesystem.
 * However, some systems support abstract socket names which are not
 * visible in the filesystem and not affected by the filesystem
 * permissions, visibility, etc. Currently this is only supported
 * under Linux. If you attempt to use abstract sockets on other
 * systems, function calls may return %G_IO_ERROR_NOT_SUPPORTED
 * errors. You can use g_unix_socket_address_abstract_names_supported()
 * to see if abstract names are supported.
 * Note that <filename>&lt;gio/gunixsocketaddress.h&gt;</filename> belongs to
 * the UNIX-specific GIO interfaces, thus you have to use the
 * <filename>gio-unix-2.0.pc</filename> pkg-config file when using it.
 */


/**
 * g_vfs_get_file_for_uri:
 * @vfs: a#GVfs.
 * @uri: a string containing a URI
 *
 * Gets a #GFile for @uri.
 * This operation never fails, but the returned object
 * might not support any I/O operation if the URI
 * is malformed or if the URI scheme is not supported.
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): a #GFile.
 */


/**
 * SECTION:gbufferedoutputstrea:
 * @short_description: Buffered Output Stream
 * @include: gio/gio.h
 * @see_also: #GFilterOutputStream, #GOutputStream
 *
 * Buffered output stream implements #GFilterOutputStream and provides
 * for buffered writes.
 * By default, #GBufferedOutputStream's buffer size is set at 4 kilobytes.
 * To create a buffered output stream, use g_buffered_output_stream_new(),
 * or g_buffered_output_stream_new_sized() to specify the buffer's size
 * at construction.
 * To get the size of a buffer within a buffered input stream, use
 * g_buffered_output_stream_get_buffer_size(). To change the size of a
 * buffered output stream's buffer, use
 * g_buffered_output_stream_set_buffer_size(). Note that the buffer's
 * size cannot be reduced below the size of the data within the buffer.
 */


/**
 * g_action_group_change_action_state:
 * @action_group: a #GActionGroup
 * @action_name: the name of the action to request the change on
 * @value: the new state
 *
 * Request for the state of the named action within @action_group to be
 * changed to @value.
 * The action must be stateful and @value must be of the correct type.
 * See g_action_group_get_state_type().
 * This call merely requests a change.  The action may refuse to change
 * its state or may change its state to something other than @value.
 * See g_action_group_get_state_hint().
 * If the @value GVariant is floating, it is consumed.
 *
 * Since: 2.28
 */


/**
 * g_bus_get_sync:
 * @bus_type: A #GBusType.
 * @cancellable: A #GCancellable or %NULL.
 * @error: Return location for error or %NULL.
 *
 * Synchronously connects to the message bus specified by @bus_type.
 * Note that the returned object may shared with other callers,
 * e.g. if two separate parts of a process calls this function with
 * the same @bus_type, they will share the same object.
 * This is a synchronous failable function. See g_bus_get() and
 * g_bus_get_finish() for the asynchronous version.
 * The returned object is a singleton, that is, shared with other
 * callers of g_bus_get() and g_bus_get_sync() for @bus_type. In the
 * event that you need a private message bus connection, use
 * g_dbus_address_get_for_bus_sync() and
 * g_dbus_connection_new_for_address().
 * Note that the returned #GDBusConnection object will (usually) have
 * the #GDBusConnection:exit-on-close property set to %TRUE.
 *
 * Returns: (transfer full): A #GDBusConnection or %NULL if @error is set. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * g_file_unmount_mountable:
 * @file: input #GFile.
 * @flags: flags affecting the operation
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied, or %NULL.
 * @user_data: the data to pass to callback function
 *
 * Unmounts a file of type G_FILE_TYPE_MOUNTABLE.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * When the operation is finished, @callback will be called. You can then call
 * g_file_unmount_mountable_finish() to get the result of the operation.
 *
 * Deprecated: 2.22: Use g_file_unmount_mountable_with_operation() instead.
 */


/**
 * g_network_address_get_port:
 * @addr: a #GNetworkAddress
 *
 * Gets @addr's port number
 *
 * Returns: @addr's port (which may be 0)
 * Since: 2.22
 */


/**
 * g_dbus_proxy_call:
 * @proxy: A #GDBusProxy.
 * @method_name: Name of method to invoke.
 * @parameters: A #GVariant tuple with parameters for the signal or %NULL if not passing parameters.
 * @flags: Flags from the #GDBusCallFlags enumeration.
 * @timeout_msec: The timeout in milliseconds (with %G_MAXINT meaning "infinite") or -1 to use the proxy default timeout.
 * @cancellable: A #GCancellable or %NULL.
 * @callback: A #GAsyncReadyCallback to call when the request is satisfied or %NULL if you don't care about the result of the method invocation.
 * @user_data: The data to pass to @callback.
 *
 * Asynchronously invokes the @method_name method on @proxy.
 * If @method_name contains any dots, then @name is split into interface and
 * method name parts. This allows using @proxy for invoking methods on
 * other interfaces.
 * If the #GDBusConnection associated with @proxy is closed then
 * the operation will fail with %G_IO_ERROR_CLOSED. If
 * %G_IO_ERROR_CANCELLED. If @parameters contains a value not
 * compatible with the D-Bus protocol, the operation fails with
 * %G_IO_ERROR_INVALID_ARGUMENT.
 * If the @parameters #GVariant is floating, it is consumed. This allows
 * convenient 'inline' use of g_variant_new(), e.g.:
 * |[
 * g_dbus_proxy_call (proxy,
 * "TwoStrings",
 * g_variant_new ("(ss)",
 * "Thing One",
 * "Thing Two"),
 * G_DBUS_CALL_FLAGS_NONE,
 * -1,
 * NULL,
 * (GAsyncReadyCallback) two_strings_done,
 * &amp;data);
 * ]|
 * This is an asynchronous method. When the operation is finished,
 * <link linkend="g-main-context-push-thread-default">thread-default
 * main loop</link> of the thread you are calling this method from.
 * You can then call g_dbus_proxy_call_finish() to get the result of
 * the operation. See g_dbus_proxy_call_sync() for the synchronous
 * version of this method.
 *
 * Since: 2.26
 */


/**
 * GApplication::open:
 * @application: the application
 * @files: an array of #GFile objects
 * @n_files: the length of @files
 * @hint: a hint provided by the calling instance
 *
 * The ::open signal is emitted on the primary instance when there are
 * files to open. See g_application_open() for more information.
 */


/**
 * g_dbus_proxy_new_finish:
 * @res: A #GAsyncResult obtained from the #GAsyncReadyCallback function passed to g_dbus_proxy_new().
 * @error: Return location for error or %NULL.
 *
 * Finishes creating a #GDBusProxy.
 *
 * Returns: A #GDBusProxy or %NULL if @error is set. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * g_socket_client_set_local_address:
 * @client: a #GSocketClient.
 * @address: a #GSocketAddress, or %NULL
 *
 * Sets the local address of the socket client.
 * The sockets created by this object will bound to the
 * specified address (if not %NULL) before connecting.
 * This is useful if you want to ensure the the local
 * side of the connection is on a specific port, or on
 * a specific interface.
 *
 * Since: 2.22
 */


/**
 * g_input_stream_has_pending:
 * @stream: input stream.
 *
 * Checks if an input stream has pending actions.
 *
 * Returns: %TRUE if @stream has pending actions.
 */


/**
 * g_dbus_connection_send_message_with_reply:
 * @connection: A #GDBusConnection.
 * @message: A #GDBusMessage.
 * @flags: Flags affecting how the message is sent.
 * @timeout_msec: The timeout in milliseconds, -1 to use the default timeout or %G_MAXINT for no timeout.
 * @out_serial: Return location for serial number assigned to @message when sending it or %NULL.
 * @cancellable: A #GCancellable or %NULL.
 * @callback: A #GAsyncReadyCallback to call when the request is satisfied or %NULL if you don't care about the result.
 * @user_data: The data to pass to @callback.
 *
 * Asynchronously sends @message to the peer represented by @connection.
 * Unless @flags contain the
 * %G_DBUS_SEND_MESSAGE_FLAGS_PRESERVE_SERIAL flag, the serial number
 * will be assigned by @connection and set on @message via
 * g_dbus_message_set_serial(). If @out_serial is not %NULL, then the
 * serial number used will be written to this location prior to
 * submitting the message to the underlying transport.
 * If @connection is closed then the operation will fail with
 * %G_IO_ERROR_CLOSED. If @cancellable is canceled, the operation will
 * fail with %G_IO_ERROR_CANCELLED. If @message is not well-formed,
 * the operation fails with %G_IO_ERROR_INVALID_ARGUMENT.
 * This is an asynchronous method. When the operation is finished, @callback will be invoked
 * in the <link linkend="g-main-context-push-thread-default">thread-default main loop</link>
 * of the thread you are calling this method from. You can then call
 * g_dbus_connection_send_message_with_reply_finish() to get the result of the operation.
 * See g_dbus_connection_send_message_with_reply_sync() for the synchronous version.
 * Note that @message must be unlocked, unless @flags contain the
 * %G_DBUS_SEND_MESSAGE_FLAGS_PRESERVE_SERIAL flag.
 * See <xref linkend="gdbus-server"/> and <xref
 * linkend="gdbus-unix-fd-client"/> for an example of how to use this
 * low-level API to send and receive UNIX file descriptors.
 *
 * Since: 2.26
 */


/**
 * g_file_info_get_attribute_byte_string:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 *
 * Gets the value of a byte string attribute. If the attribute does
 * not contain a byte string, %NULL will be returned.
 * %NULL otherwise.
 *
 * Returns: the contents of the @attribute value as a byte string, or
 */


/**
 * g_socket_get_credentials:
 * @socket: a #GSocket.
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Returns the credentials of the foreign process connected to this
 * socket, if any (e.g. it is only supported for %G_SOCKET_FAMILY_UNIX
 * sockets).
 * If this operation isn't supported on the OS, the method fails with
 * the %G_IO_ERROR_NOT_SUPPORTED error. On Linux this is implemented
 * by reading the %SO_PEERCRED option on the underlying socket.
 * Other ways to obtain credentials from a foreign peer includes the
 * #GUnixCredentialsMessage type and
 * g_unix_connection_send_credentials() /
 * g_unix_connection_receive_credentials() functions.
 * that must be freed with g_object_unref().
 *
 * Returns: (transfer full): %NULL if @error is set, otherwise a #GCredentials object
 * Since: 2.26
 */


/**
 * GVolumeMonitor::volume-changed:
 * @volume_monitor: The volume monitor emitting the signal.
 * @volume: a #GVolume that changed.
 *
 * Emitted when mountable volume is changed.
 */


/**
 * g_dbus_proxy_new_for_bus_sync:
 * @bus_type: A #GBusType.
 * @flags: Flags used when constructing the proxy.
 * @info: A #GDBusInterfaceInfo specifying the minimal interface that @proxy conforms to or %NULL.
 * @name: A bus name (well-known or unique).
 * @object_path: An object path.
 * @interface_name: A D-Bus interface name.
 * @cancellable: A #GCancellable or %NULL.
 * @error: Return location for error or %NULL.
 *
 * Like g_dbus_proxy_new_sync() but takes a #GBusType instead of a #GDBusConnection.
 * See <xref linkend="gdbus-wellknown-proxy"/> for an example of how #GDBusProxy can be used.
 *
 * Returns: A #GDBusProxy or %NULL if error is set. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * GVolume::changed:
 *
 * Emitted when the volume has been changed.
 */


/**
 * g_buffered_output_stream_set_auto_grow:
 * @stream: a #GBufferedOutputStream.
 * @auto_grow: a #gboolean.
 *
 * Sets whether or not the @stream's buffer should automatically grow.
 * If @auto_grow is true, then each write will just make the buffer
 * larger, and you must manually flush the buffer to actually write out
 * the data to the underlying stream.
 */


/**
 * g_memory_output_stream_get_size:
 * @ostream: a #GMemoryOutputStream
 *
 * Gets the size of the currently allocated data area (availible from
 * g_memory_output_stream_get_data()). If the stream isn't
 * growable (no realloc was passed to g_memory_output_stream_new()) then
 * this is the maximum size of the stream and further writes
 * will return %G_IO_ERROR_NO_SPACE.
 * Note that for growable streams the returned size may become invalid on
 * the next write or truncate operation on the stream.
 * If you want the number of bytes currently written to the stream, use
 * g_memory_output_stream_get_data_size().
 *
 * Returns: the number of bytes allocated for the data buffer
 */


/**
 * GMount::unmounted:
 * @mount: the object on which the signal is emitted
 *
 * This signal is emitted when the #GMount have been
 * unmounted. If the recipient is holding references to the
 * object they should release them so the object can be
 * finalized.
 */


/**
 * GMount::pre-unmount:
 * @mount: the object on which the signal is emitted
 *
 * This signal is emitted when the #GMount is about to be
 * unmounted.
 *
 * Since: 2.22
 */


/**
 * g_dbus_connection_get_guid:
 * @connection: A #GDBusConnection.
 *
 * The GUID of the peer performing the role of server when
 * authenticating. See #GDBusConnection:guid for more details.
 *
 * Returns: The GUID. Do not free this string, it is owned by
 * Since: 2.26
 */


/**
 * g_socket_connection_factory_register_type:
 * @g_type: a #GType, inheriting from %G_TYPE_SOCKET_CONNECTION
 * @family: a #GSocketFamily
 * @type: a #GSocketType
 * @protocol: a protocol id
 *
 * Looks up the #GType to be used when creating socket connections on
 * sockets with the specified @family,@type and @protocol.
 * If no type is registered, the #GSocketConnection base type is returned.
 *
 * Since: 2.22
 */


/**
 * g_dbus_error_is_remote_error:
 * @error: A #GError.
 *
 * Checks if @error represents an error received via D-Bus from a remote peer. If so,
 * use g_dbus_error_get_remote_error() to get the name of the error.
 * %FALSE otherwise.
 *
 * Returns: %TRUE if @error represents an error from a remote peer,
 * Since: 2.26
 */


/**
 * g_unix_mount_point_get_device_path:
 * @mount_point: a #GUnixMountPoint.
 *
 * Gets the device path for a unix mount point.
 *
 * Returns: a string containing the device path.
 */


/**
 * g_socket_get_family:
 * @socket: a #GSocket.
 *
 * Gets the socket family of the socket.
 *
 * Returns: a #GSocketFamily
 * Since: 2.22
 */


/**
 * g_app_info_get_executable:
 * @appinfo: a #GAppInfo
 *
 * Gets the executable's name for the installed application.
 * binaries name
 *
 * Returns: a string containing the @appinfo's application
 */


/**
 * GDBusAuthObserver:
 *
 * The #GDBusAuthObserver structure contains only private data and
 * should only be accessed using the provided API.
 *
 * Since: 2.26
 */


/**
 * g_settings_get_value:
 * @settings: a #GSettings object
 * @key: the key to get the value for
 * @returns: a new #GVariant
 *
 * Gets the value that is stored in @settings for @key.
 * It is a programmer error to give a @key that isn't contained in the
 * schema for @settings.
 *
 * Since: 2.26
 */


/**
 * g_dbus_connection_close_finish:
 * @connection: A #GDBusConnection.
 * @res: A #GAsyncResult obtained from the #GAsyncReadyCallback passed to g_dbus_connection_close().
 * @error: Return location for error or %NULL.
 *
 * Finishes an operation started with g_dbus_connection_close().
 *
 * Returns: %TRUE if the operation succeeded, %FALSE if @error is set.
 * Since: 2.26
 */


/**
 * g_settings_set_value:
 * @settings: a #GSettings object
 * @key: the name of the key to set
 * @value: a #GVariant of the correct type
 * @returns: %TRUE if setting the key succeeded, %FALSE if the key was not writable
 *
 * Sets @key in @settings to @value.
 * It is a programmer error to give a @key that isn't contained in the
 * schema for @settings or for @value to have the incorrect type, per
 * the schema.
 * If @value is floating then this function consumes the reference.
 *
 * Since: 2.26
 */


/**
 * g_action_get_state_type:
 * @action: a #GAction
 *
 * Queries the type of the state of @action.
 * g_action_new_stateful()) then this function returns the #GVariantType
 * of the state.  This is the type of the initial value given as the
 * state.  All calls to g_action_set_state() must give a #GVariant of
 * this type and g_action_get_state() will return a #GVariant of the
 * same type.
 * this function will return %NULL.  In that case, g_action_get_state()
 * will return %NULL and you must not call g_action_set_state().
 *
 * If the action is stateful (ie: was created with
 * If the action is not stateful (ie: created with g_action_new()) then
 * Returns: (allow-none): the state type, if the action is stateful
 * Since: 2.28
 */


/**
 * g_input_stream_close_finish:
 * @stream: a #GInputStream.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occuring, or %NULL to ignore.
 *
 * Finishes closing a stream asynchronously, started from g_input_stream_close_async().
 *
 * Returns: %TRUE if the stream was closed successfully.
 */


/**
 * g_resolver_lookup_by_address_finish:
 * @resolver: a #GResolver
 * @result: the result passed to your #GAsyncReadyCallback
 * @error: return location for a #GError, or %NULL
 *
 * Retrieves the result of a previous call to
 * g_resolver_lookup_by_address_async().
 * If the DNS resolution failed, @error (if non-%NULL) will be set to
 * a value from #GResolverError. If the operation was cancelled,
 * form), or %NULL on error.
 *
 * Returns: a hostname (either ASCII-only, or in ASCII-encoded
 * Since: 2.22
 */


/**
 * mime_info_cache_reload:
 * @dir: directory path which needs reloading.
 *
 * Reload the mime information for the @dir.
 */


/**
 * g_socket_get_fd:
 * @socket: a #GSocket.
 *
 * Returns the underlying OS socket object. On unix this
 * is a socket file descriptor, and on windows this is
 * a Winsock2 SOCKET handle. This may be useful for
 * doing platform specific or otherwise unusual operations
 * on the socket.
 *
 * Returns: the file descriptor of the socket.
 * Since: 2.22
 */


/**
 * GDBusConnection:address:
 *
 * A D-Bus address specifying potential endpoints that can be used
 * when establishing the connection.
 *
 * Since: 2.26
 */


/**
 * g_mount_operation_set_choice:
 * @op: a #GMountOperation.
 * @choice: an integer.
 *
 * Sets a default choice for the mount operation.
 */


/**
 * g_dbus_message_set_body:
 * @message: A #GDBusMessage.
 * @body: Either %NULL or a #GVariant that is a tuple.
 *
 * Sets the body @message. As a side-effect the
 * %G_DBUS_MESSAGE_HEADER_FIELD_SIGNATURE header field is set to the
 * type string of @body (or cleared if @body is %NULL).
 * If @body is floating, @message assumes ownership of @body.
 *
 * Since: 2.26
 */


/**
 * g_data_input_stream_read_upto_async:
 * @stream: a #GDataInputStream
 * @stop_chars: characters to terminate the read
 * @stop_chars_len: length of @stop_chars. May be -1 if @stop_chars is nul-terminated
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: optional #GCancellable object, %NULL to ignore
 * @callback: callback to call when the request is satisfied
 * @user_data: the data to pass to callback function
 *
 * The asynchronous version of g_data_input_stream_read_upto().
 * It is an error to have two outstanding calls to this function.
 * In contrast to g_data_input_stream_read_until(), this function
 * does <emphasis>not</emphasis> consume the stop character. You have
 * to use g_data_input_stream_read_byte() to get it before calling
 * g_data_input_stream_read_upto() again.
 * Note that @stop_chars may contain '\0' if @stop_chars_len is
 * specified.
 * When the operation is finished, @callback will be called. You
 * can then call g_data_input_stream_read_upto_finish() to get
 * the result of the operation.
 *
 * Since: 2.24
 */


/**
 * g_application_set_application_id:
 * @application: a #GApplication
 * @application_id: the identifier for @application
 *
 * Sets the unique identifier for @application.
 * The application id can only be modified if @application has not yet
 * been registered.
 * The application id must be valid.  See g_application_id_is_valid().
 *
 * Since: 2.28
 */


/**
 * g_dbus_method_invocation_get_object_path:
 * @invocation: A #GDBusMethodInvocation.
 *
 * Gets the object path the method was invoked on.
 *
 * Returns: A string. Do not free, it is owned by @invocation.
 * Since: 2.26
 */


/**
 * g_application_open:
 * @application: a #GApplication
 * @files: an array of #GFiles to open
 * @n_files: the length of the @files array
 * @hint: a hint (or ""), but never %NULL
 *
 * Opens the given files.
 * In essence, this results in the #GApplication::open signal being emitted
 * in the primary instance.
 * intended to be used by applications that have multiple modes for
 * for this functionality, you should use "".
 * The application must be registered before calling this function
 * and it must have the %G_APPLICATION_HANDLES_OPEN flag set.
 *
 * Opening files (eg: "view" vs "edit", etc).  Unless you have a need
 * Since: 2.28
 */


/**
 * g_file_append_to_finish:
 * @file: input #GFile.
 * @res: #GAsyncResult
 * @error: a #GError, or %NULL
 *
 * Finishes an asynchronous file append operation started with
 * g_file_append_to_async().
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): a valid #GFileOutputStream or %NULL on error.
 */


/**
 * g_dbus_is_address:
 * @string: A string.
 *
 * Checks if @string is a D-Bus address.
 * This doesn't check if @string is actually supported by #GDBusServer
 * or #GDBusConnection - use g_dbus_is_supported_address() to do more
 * checks.
 *
 * Returns: %TRUE if @string is a valid D-Bus address, %FALSE otherwise.
 * Since: 2.26
 */


/**
 * g_dbus_message_get_flags:
 * @message: A #GDBusMessage.
 *
 * Gets the flags for @message.
 *
 * Returns: Flags that are set (typically values from the #GDBusMessageFlags enumeration bitwise ORed together).
 * Since: 2.26
 */


/**
 * g_dbus_arg_info_unref:
 * @info: A #GDBusArgInfo.
 *
 * If @info is statically allocated, does nothing. Otherwise decreases
 * the reference count of @info. When its reference count drops to 0,
 * the memory used is freed.
 *
 * Since: 2.26
 */


/**
 * g_mount_operation_new:
 *
 * Creates a new mount operation.
 *
 * Returns: a #GMountOperation.
 */


/**
 * GSimpleAction:state-type:
 *
 * The #GVariantType of the state that the action has, or %NULL if the
 * action is stateless.
 *
 * Since: 2.28
 */


/**
 * g_io_modules_load_all_in_directory:
 * @dirname: pathname for a directory containing modules to load.
 *
 * Loads all the modules in the specified directory.
 * If don't require all modules to be initialized (and thus registering
 * all gtypes) then you can use g_io_modules_scan_all_in_directory()
 * which allows delayed/lazy loading of modules.
 * from the directory,
 * All the modules are loaded into memory, if you want to
 * unload them (enabling on-demand loading) you must call
 * g_type_module_unuse() on all the modules. Free the list
 * with g_list_free().
 *
 * Returns: (element-type GIOModule) (transfer full): a list of #GIOModules loaded
 */


/**
 * g_unix_connection_receive_credentials:
 * @connection: A #GUnixConnection.
 * @cancellable: A #GCancellable or %NULL.
 * @error: Return location for error or %NULL.
 *
 * Receives credentials from the sending end of the connection.  The
 * sending end has to call g_unix_connection_send_credentials() (or
 * similar) for this to work.
 * As well as reading the credentials this also reads (and discards) a
 * single byte from the stream, as this is required for credentials
 * passing to work on some implementations.
 * Other ways to exchange credentials with a foreign peer includes the
 * #GUnixCredentialsMessage type and g_socket_get_credentials() function.
 * g_object_unref()), %NULL if @error is set.
 *
 * Returns: (transfer full): Received credentials on success (free with
 * Since: 2.26
 */


/**
 * g_proxy_resolver_lookup_finish:
 * @resolver: a #GProxyResolver
 * @result: the result passed to your #GAsyncReadyCallback
 * @error: return location for a #GError, or %NULL
 *
 * Call this function to obtain the array of proxy URIs when
 * g_proxy_resolver_lookup_async() is complete. See
 * g_proxy_resolver_lookup() for more details.
 * g_strfreev().
 *
 * Returns: (transfer full) (element-type utf8): A NULL-terminated array of proxy URIs. Must be freed with
 * Since: 2.26
 */


/**
 * g_dbus_message_set_error_name:
 * @message: A #GDBusMessage.
 * @value: The value to set.
 *
 * Convenience setter for the %G_DBUS_MESSAGE_HEADER_FIELD_ERROR_NAME header field.
 *
 * Since: 2.26
 */


/**
 * g_socket_client_connect_async:
 * @client: a #GTcpClient
 * @connectable: a #GSocketConnectable specifying the remote address.
 * @cancellable: a #GCancellable, or %NULL
 * @callback: a #GAsyncReadyCallback
 * @user_data: user data for the callback
 *
 * This is the asynchronous version of g_socket_client_connect().
 * When the operation is finished @callback will be
 * called. You can then call g_socket_client_connect_finish() to get
 * the result of the operation.
 *
 * Since: 2.22
 */


/**
 * GResolver:
 *
 * The object that handles DNS resolution. Use g_resolver_get_default()
 * to get the default resolver.
 */


/**
 * GDBusConnection:guid:
 *
 * The GUID of the peer performing the role of server when
 * authenticating.
 * If you are constructing a #GDBusConnection and pass
 * %G_DBUS_CONNECTION_FLAGS_AUTHENTICATION_SERVER in the
 * #GDBusConnection:flags property then you MUST also set this
 * property to a valid guid.
 * If you are constructing a #GDBusConnection and pass
 * %G_DBUS_CONNECTION_FLAGS_AUTHENTICATION_CLIENT in the
 * #GDBusConnection:flags property you will be able to read the GUID
 * of the other peer here after the connection has been successfully
 * initialized.
 *
 * Since: 2.26
 */


/**
 * g_inet_address_new_from_string:
 * @string: a string representation of an IP address
 *
 * Parses @string as an IP address and creates a new #GInetAddress.
 *
 * Returns: a new #GInetAddress corresponding to @string, or %NULL if
 * Since: 2.22
 */


/**
 * g_app_info_get_id:
 * @appinfo: a #GAppInfo.
 *
 * Gets the ID of an application. An id is a string that
 * identifies the application. The exact format of the id is
 * platform dependent. For instance, on Unix this is the
 * desktop file id from the xdg menu specification.
 * Note that the returned ID may be %NULL, depending on how
 * the @appinfo has been constructed.
 *
 * Returns: a string containing the application's ID.
 */


/**
 * g_dbus_message_new_method_error_literal:
 * @method_call_message: A message of type %G_DBUS_MESSAGE_TYPE_METHOD_CALL to create a reply message to.
 * @error_name: A valid D-Bus error name.
 * @error_message: The D-Bus error message.
 *
 * Creates a new #GDBusMessage that is an error reply to @method_call_message.
 *
 * Returns: (transfer full): A #GDBusMessage. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * g_dbus_node_info_lookup_interface:
 * @info: A #GDBusNodeInfo.
 * @name: A D-Bus interface name.
 *
 * Looks up information about an interface.
 * This cost of this function is O(n) in number of interfaces.
 *
 * Returns: A #GDBusInterfaceInfo or %NULL if not found. Do not free, it is owned by @info.
 * Since: 2.26
 */


/**
 * g_data_output_stream_put_int64:
 * @stream: a #GDataOutputStream.
 * @data: a #gint64.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, %NULL to ignore.
 *
 * Puts a signed 64-bit integer into the stream.
 *
 * Returns: %TRUE if @data was successfully added to the @stream.
 */


/**
 * g_output_stream_close:
 * @stream: A #GOutputStream.
 * @cancellable: optional cancellable object
 * @error: location to store the error occuring, or %NULL to ignore
 *
 * Closes the stream, releasing resources related to it.
 * Once the stream is closed, all other operations will return %G_IO_ERROR_CLOSED.
 * Closing a stream multiple times will not return an error.
 * Closing a stream will automatically flush any outstanding buffers in the
 * stream.
 * Streams will be automatically closed when the last reference
 * is dropped, but you might want to call this function to make sure
 * resources are released as early as possible.
 * Some streams might keep the backing store of the stream (e.g. a file descriptor)
 * open after the stream is closed. See the documentation for the individual
 * stream for details.
 * On failure the first error that happened will be reported, but the close
 * operation will finish as much as possible. A stream that failed to
 * close will still return %G_IO_ERROR_CLOSED for all operations. Still, it
 * is important to check and report the error to the user, otherwise
 * there might be a loss of data as all data might not be written.
 * If @cancellable is not NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * Cancelling a close will still leave the stream closed, but there some streams
 * can use a faster close that doesn't block to e.g. check errors. On
 * cancellation (as with any error) there is no guarantee that all written
 * data will reach the target.
 *
 * Returns: %TRUE on success, %FALSE on failure
 */


/**
 * g_win32_output_stream_get_handle:
 * @stream: a #GWin32OutputStream
 *
 * Return the Windows handle that the stream writes to.
 *
 * Returns: The handle descriptor of @stream
 * Since: 2.26
 */


/**
 * g_socket_connectable_enumerate:
 * @connectable: a #GSocketConnectable
 *
 * Creates a #GSocketAddressEnumerator for @connectable.
 *
 * Returns: (transfer full): a new #GSocketAddressEnumerator.
 * Since: 2.22
 */


/**
 * The string info map is an efficient data structure designed to b:
 *
 * used with a small set of items.  It is used by GSettings schemas for
 * three purposes:
 * 1) Implement <choices> with a list of valid strings
 * 2) Implement <alias> by mapping one string to another
 * 3) Implement enumerated types by mapping strings to integer values
 * (and back).
 * The map is made out of an array of uint32s.  Each entry in the array
 * is an integer value, followed by a specially formatted string value:
 * The string starts with the byte 0xff or 0xfe, followed by the
 * content of the string, followed by a nul byte, followed by
 * additional nul bytes for padding, followed by a 0xff byte.
 * Padding is added so that the entire formatted string takes up a
 * multiple of 4 bytes, and not less than 8 bytes.  The requirement
 * for a string to take up 8 bytes is so that the scanner doesn't lose
 * synch and mistake a string for an integer value.
 * The first byte of the formatted string depends on if the integer is
 * an enum value (0xff) or an alias (0xfe).  If it is an alias then the
 * number refers to the word offset within the info map at which the
 * integer corresponding to the "target" value is stored.
 * For example, consider the case of the string info map representing an
 * enumerated type of 'foo' (value 1) and 'bar' (value 2) and 'baz'
 * (alias for 'bar').  Note that string info maps are always little
 * endian.
 * x01 x00 x00 x00   xff 'f' 'o' 'o'   x00 x00 x00 xff   x02 x00 x00 x00
 * xff 'b' 'a' 'r'   x00 x00 x00 xff   x03 x00 x00 x00   xfe 'b' 'a' 'z'
 * x00 x00 x00 xff
 * The operations that someone may want to perform with the map:
 * - lookup if a string is valid (and not an alias)
 * - lookup the integer value for a enum 'nick'
 * - lookup the integer value for the target of an alias
 * - lookup an alias and convert it to its target string
 * - lookup the enum nick for a given value
 * In order to lookup if a string is valid, it is padded on either side
 * (as described) and scanned for in the array.  For example, you might
 * look for "foo":
 * xff 'f' 'o' 'o'   x00 x00 x00 xff
 * In order to lookup the integer value for a nick, the string is padded
 * on either side and scanned for in the array, as above.  Instead of
 * merely succeeding, we look at the integer value to the left of the
 * match.  This is the enum value.
 * In order to lookup an alias and convert it to its target enum value,
 * the string is padded on either side (as described, with 0xfe) and
 * scanned for.  For example, you might look for "baz":
 * xfe 'b' 'a' 'z'  x00 x00 x00 xff
 * The integer immediately preceeding the match then contains the offset
 * of the integer value of the target.  In our example, that's '3'.
 * This index is dereferenced to find the enum value of '2'.
 * To convert the alias to its target string, 5 bytes just need to be
 * added past the start of the integer value to find the start of the
 * string.
 * To lookup the enum nick for a given value, the value is searched for
 * in the array.  To ensure that the value isn't matching the inside of a
 * string, we must check that it is either the first item in the array or
 * immediately preceeded by the byte 0xff.  It must also be immediately
 * followed by the byte 0xff.
 * Because strings always take up a minimum of 2 words, because 0xff or
 * 0xfe never appear inside of a utf-8 string and because no two integer
 * values ever appear in sequence, the only way we can have the
 * sequence:
 * xff __ __ __ __ xff (or 0xfe)
 * is in the event of an integer nested between two strings.
 * For implementation simplicity/efficiency, strings may not be more
 * the value of each choice is set to zero and ignored.
 *
 * Than 65 characters in length (ie: 17 32bit words after padding).
 * In the event that we are doing <choices> (ie: not an enum type) then
 */


/**
 * g_settings_get_string:
 * @settings: a #GSettings object
 * @key: the key to get the value for
 * @returns: a newly-allocated string
 *
 * Gets the value that is stored at @key in @settings.
 * A convenience variant of g_settings_get() for strings.
 * It is a programmer error to give a @key that isn't specified as
 * having a string type in the schema for @settings.
 *
 * Since: 2.26
 */


/**
 * g_settings_get_boolean:
 * @settings: a #GSettings object
 * @key: the key to get the value for
 * @returns: a boolean
 *
 * Gets the value that is stored at @key in @settings.
 * A convenience variant of g_settings_get() for booleans.
 * It is a programmer error to give a @key that isn't specified as
 * having a boolean type in the schema for @settings.
 *
 * Since: 2.26
 */


/**
 * g_settings_list_schemas:
 *
 * Gets a list of the #GSettings schemas installed on the system.  The
 * returned list is exactly the list of schemas for which you may call
 * g_settings_new() without adverse effects.
 * This function does not list the schemas that do not provide their own
 * g_settings_new_with_path()).  See
 * g_settings_list_relocatable_schemas() for that.
 * schemas that are available.  The list must not be modified or
 * freed.
 *
 * Paths (ie: schemas for which you must use
 * Returns: (element-type utf8) (transfer none): a list of #GSettings
 * Since: 2.26
 */


/**
 * g_dbus_connection_signal_unsubscribe:
 * @connection: A #GDBusConnection.
 * @subscription_id: A subscription id obtained from g_dbus_connection_signal_subscribe().
 *
 * Unsubscribes from signals.
 *
 * Since: 2.26
 */


/**
 * g_dbus_message_set_flags:
 * @message: A #GDBusMessage.
 * @flags: Flags for @message that are set (typically values from the #GDBusMessageFlags enumeration bitwise ORed together).
 *
 * Sets the flags to set on @message.
 *
 * Since: 2.26
 */


/**
 * g_file_append_to_async:
 * @file: input #GFile.
 * @flags: a set of #GFileCreateFlags.
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: the data to pass to callback function
 *
 * Asynchronously opens @file for appending.
 * For more details, see g_file_append_to() which is
 * the synchronous version of this call.
 * When the operation is finished, @callback will be called. You can then call
 * g_file_append_to_finish() to get the result of the operation.
 */


/**
 * g_dbus_message_set_sender:
 * @message: A #GDBusMessage.
 * @value: The value to set.
 *
 * Convenience setter for the %G_DBUS_MESSAGE_HEADER_FIELD_SENDER header field.
 *
 * Since: 2.26
 */


/**
 * g_dbus_proxy_call_sync:
 * @proxy: A #GDBusProxy.
 * @method_name: Name of method to invoke.
 * @parameters: A #GVariant tuple with parameters for the signal or %NULL if not passing parameters.
 * @flags: Flags from the #GDBusCallFlags enumeration.
 * @timeout_msec: The timeout in milliseconds (with %G_MAXINT meaning "infinite") or -1 to use the proxy default timeout.
 * @cancellable: A #GCancellable or %NULL.
 * @error: Return location for error or %NULL.
 *
 * Synchronously invokes the @method_name method on @proxy.
 * If @method_name contains any dots, then @name is split into interface and
 * method name parts. This allows using @proxy for invoking methods on
 * other interfaces.
 * If the #GDBusConnection associated with @proxy is disconnected then
 * the operation will fail with %G_IO_ERROR_CLOSED. If
 * %G_IO_ERROR_CANCELLED. If @parameters contains a value not
 * compatible with the D-Bus protocol, the operation fails with
 * %G_IO_ERROR_INVALID_ARGUMENT.
 * If the @parameters #GVariant is floating, it is consumed. This allows
 * convenient 'inline' use of g_variant_new(), e.g.:
 * |[
 * g_dbus_proxy_call_sync (proxy,
 * "TwoStrings",
 * g_variant_new ("(ss)",
 * "Thing One",
 * "Thing Two"),
 * G_DBUS_CALL_FLAGS_NONE,
 * -1,
 * NULL,
 * &amp;error);
 * ]|
 * The calling thread is blocked until a reply is received. See
 * g_dbus_proxy_call() for the asynchronous version of this
 * method.
 * return values. Free with g_variant_unref().
 *
 * Returns: %NULL if @error is set. Otherwise a #GVariant tuple with
 * Since: 2.26
 */


/**
 * GDBusProxy:g-object-path:
 *
 * The object path the proxy is for.
 *
 * Since: 2.26
 */


/**
 * g_file_info_set_is_symlink:
 * @info: a #GFileInfo.
 * @is_symlink: a #gboolean.
 *
 * Sets the "is_symlink" attribute in a #GFileInfo according to @is_symlink.
 * See %G_FILE_ATTRIBUTE_STANDARD_IS_SYMLINK.
 */


/**
 * g_file_info_set_attribute_mask:
 * @info: a #GFileInfo.
 * @mask: a #GFileAttributeMatcher.
 *
 * Sets @mask on @info to match specific attribute types.
 */


/**
 * g_dbus_is_member_name:
 * @string: The string to check.
 *
 * Checks if @string is a valid D-Bus member (e.g. signal or method) name.
 *
 * Returns: %TRUE if valid, %FALSE otherwise.
 * Since: 2.26
 */


/**
 * g_file_query_default_handler:
 * @file: a #GFile to open.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Returns the #GAppInfo that is registered as the default
 * application to handle the file specified by @file.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * When you are done with it, release it with g_object_unref()
 *
 * Returns: (transfer full): a #GAppInfo if the handle was found, %NULL if there were errors.
 */


/**
 * GDBusProxy:g-bus-type:
 *
 * If this property is not %G_BUS_TYPE_NONE, then
 * #GDBusProxy:g-connection must be %NULL and will be set to the
 * #GDBusConnection obtained by calling g_bus_get() with the value
 * of this property.
 *
 * Since: 2.26
 */


/**
 * g_dbus_connection_get_peer_credentials:
 * @connection: A #GDBusConnection.
 *
 * Gets the credentials of the authenticated peer. This will always
 * return %NULL unless @connection acted as a server
 * (e.g. %G_DBUS_CONNECTION_FLAGS_AUTHENTICATION_SERVER was passed)
 * when set up and the client passed credentials as part of the
 * authentication process.
 * In a message bus setup, the message bus is always the server and
 * each application is a client. So this method will always return
 * %NULL for message bus clients.
 * this object, it is owned by @connection.
 *
 * Returns: (transfer none): A #GCredentials or %NULL if not available. Do not free
 * Since: 2.26
 */


/**
 * g_file_info_set_icon:
 * @info: a #GFileInfo.
 * @icon: a #GIcon.
 *
 * Sets the icon for a given #GFileInfo.
 * See %G_FILE_ATTRIBUTE_STANDARD_ICON.
 */


/**
 * g_socket_new_from_fd:
 * @fd: a native socket file descriptor.
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Creates a new #GSocket from a native file descriptor
 * or winsock SOCKET handle.
 * This reads all the settings from the file descriptor so that
 * all properties should work. Note that the file descriptor
 * will be set to non-blocking mode, independent on the blocking
 * mode of the #GSocket.
 * Free the returned object with g_object_unref().
 *
 * Returns: a #GSocket or %NULL on error.
 * Since: 2.22
 */


/**
 * g_app_launch_context_launch_failed:
 * @context: a #GAppLaunchContext.
 * @startup_notify_id: the startup notification id that was returned by g_app_launch_context_get_startup_notify_id().
 *
 * Called when an application has failed to launch, so that it can cancel
 * the application startup notification started in g_app_launch_context_get_startup_notify_id().
 */


/**
 * g_socket_get_blocking:
 * @socket: a #GSocket.
 *
 * Gets the blocking mode of the socket. For details on blocking I/O,
 * see g_socket_set_blocking().
 *
 * Returns: %TRUE if blocking I/O is used, %FALSE otherwise.
 * Since: 2.22
 */


/**
 * g_periodic_damaged:
 * @periodic: a #GPeriodic clock
 *
 * Report damage and schedule the "repair" signal to be emitted during
 * the next repair phase.
 * You may not call this function during the repair phase.
 *
 * Since: 2.28
 */


/**
 * g_buffered_input_stream_set_buffer_size:
 * @stream: a #GBufferedInputStream
 * @size: a #gsize
 *
 * Sets the size of the internal buffer of @stream to @size, or to the
 * size of the contents of the buffer. The buffer can never be resized
 * smaller than its current contents.
 */


/**
 * g_action_group_action_enabled_changed:
 * @action_group: a #GActionGroup
 * @action_name: the name of an action in the group
 * @enabled: whether or not the action is now enabled
 *
 * Emits the #GActionGroup::action-enabled-changed signal on @action_group.
 * This function should only be called by #GActionGroup implementations.
 *
 * Since: 2.28
 */


/**
 * g_input_stream_read:
 * @stream: a #GInputStream.
 * @buffer: a buffer to read data into (which should be at least count bytes long).
 * @count: the number of bytes that will be read from the stream
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: location to store the error occuring, or %NULL to ignore
 *
 * Tries to read @count bytes from the stream into the buffer starting at
 * If count is zero returns zero and does nothing. A value of @count
 * larger than %G_MAXSSIZE will cause a %G_IO_ERROR_INVALID_ARGUMENT error.
 * On success, the number of bytes read into the buffer is returned.
 * It is not an error if this is not the same as the requested size, as it
 * can happen e.g. near the end of a file. Zero is returned on end of file
 * (or if @count is zero),  but never otherwise.
 * If @cancellable is not NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error G_IO_ERROR_CANCELLED will be returned. If an
 * operation was partially finished when the operation was cancelled the
 * partial result will be returned, without an error.
 * On error -1 is returned and @error is set accordingly.
 *
 * Returns: Number of bytes read, or -1 on error
 */


/**
 * g_themed_icon_prepend_name:
 * @icon: a #GThemedIcon
 * @iconname: name of icon to prepend to list of icons from within @icon.
 *
 * Prepend a name to the list of icons from within @icon.
 * <note><para>
 * Note that doing so invalidates the hash computed by prior calls
 * to g_icon_hash().
 * </para></note>
 *
 * Since: 2.18
 */


/**
 * SECTION:gconverte:
 * @short_description: Data conversion interface
 * @include: gio/gio.h
 * @see_also: #GInputStream, #GOutputStream
 *
 * #GConverter is implemented by objects that convert
 * binary data in various ways. The conversion can be
 * stateful and may fail at any place.
 * compression, decompression and regular expression
 * replace.
 *
 * Some example conversions are: character set conversion,
 * Since: 2.24
 */


/**
 * g_settings_get_enum:
 * @settings: a #GSettings object
 * @key: the key to get the value for
 * @returns: the enum value
 *
 * Gets the value that is stored in @settings for @key and converts it
 * to the enum value that it represents.
 * In order to use this function the type of the value must be a string
 * and it must be marked in the schema file as an enumerated type.
 * It is a programmer error to give a @key that isn't contained in the
 * schema for @settings or is not marked as an enumerated type.
 * If the value stored in the configuration database is not a valid
 * value for the enumerated type then this function will return the
 * default value.
 *
 * Since: 2.26
 */


/**
 * g_app_info_reset_type_associations:
 * @content_type: a content type
 *
 * Removes all changes to the type associations done by
 * g_app_info_set_as_default_for_type(),
 * g_app_info_set_as_default_for_extension(),
 * g_app_info_add_supports_type() or g_app_info_remove_supports_type().
 *
 * Since: 2.20
 */


/**
 * g_dbus_proxy_get_name:
 * @proxy: A #GDBusProxy.
 *
 * Gets the name that @proxy was constructed for.
 *
 * Returns: A string owned by @proxy. Do not free.
 * Since: 2.26
 */


/**
 * g_file_info_get_name:
 * @info: a #GFileInfo.
 *
 * Gets the name for a file.
 *
 * Returns: a string containing the file name.
 */


/**
 * g_mount_operation_get_anonymous:
 * @op: a #GMountOperation.
 *
 * Check to see whether the mount operation is being used
 * for an anonymous user.
 *
 * Returns: %TRUE if mount operation is anonymous.
 */


/**
 * g_socket_is_connected:
 * @socket: a #GSocket.
 *
 * Check whether the socket is connected. This is only useful for
 * connection-oriented sockets.
 *
 * Returns: %TRUE if socket is connected, %FALSE otherwise.
 * Since: 2.22
 */


/**
 * g_application_hold:
 * @application: a #GApplication
 *
 * Increases the use count of @application.
 * Use this function to indicate that the application has a reason to
 * continue to run.  For example, g_application_hold() is called by GTK+
 * when a toplevel window is on the screen.
 * To cancel the hold, call g_application_release().
 */


/**
 * g_socket_get_remote_address:
 * @socket: a #GSocket.
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Try to get the remove address of a connected socket. This is only
 * useful for connection oriented sockets that have been connected.
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): a #GSocketAddress or %NULL on error.
 * Since: 2.22
 */


/**
 * g_dbus_message_new_method_reply:
 * @method_call_message: A message of type %G_DBUS_MESSAGE_TYPE_METHOD_CALL to create a reply message to.
 *
 * Creates a new #GDBusMessage that is a reply to @method_call_message.
 *
 * Returns: (transfer full): #GDBusMessage. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * g_application_register:
 * @application: a #GApplication
 * @cancellable: a #GCancellable, or %NULL
 * @error: a pointer to a NULL #GError, or %NULL
 * @returns: %TRUE if registration succeeded
 *
 * Attempts registration of the application.
 * This is the point at which the application discovers if it is the
 * primary instance or merely acting as a remote for an already-existing
 * primary instance.
 * If the application has already been registered then %TRUE is
 * returned with no work performed.
 * The #GApplication::startup signal is emitted if registration succeeds
 * and @application is the primary instance.
 * In the event of an error (such as @cancellable being cancelled, or a
 * failure to connect to the session bus), %FALSE is returned and @error
 * is set appropriately.
 * instance is or is not the primary instance of the application.  See
 * g_application_get_is_remote() for that.
 *
 * Note: the return value of this function is not an indicator that this
 * Since: 2.28
 */


/**
 * g_emblemed_icon_get_icon:
 * @emblemed: a #GEmblemedIcon
 *
 * Gets the main icon for @emblemed.
 *
 * Returns: (transfer full): a #GIcon that is owned by @emblemed
 * Since: 2.18
 */


/**
 * g_file_info_set_attribute_object:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 * @attr_value: a #GObject.
 *
 * Sets the @attribute to contain the given @attr_value,
 * if possible.
 */


/**
 * GDBusServer:authentication-observer:
 *
 * A #GDBusAuthObserver object to assist in the authentication process or %NULL.
 *
 * Since: 2.26
 */


/**
 * g_bus_watch_name_on_connection:
 * @connection: A #GDBusConnection.
 * @name: The name (well-known or unique) to watch.
 * @flags: Flags from the #GBusNameWatcherFlags enumeration.
 * @name_appeared_handler: Handler to invoke when @name is known to exist or %NULL.
 * @name_vanished_handler: Handler to invoke when @name is known to not exist or %NULL.
 * @user_data: User data to pass to handlers.
 * @user_data_free_func: Function for freeing @user_data or %NULL.
 *
 * Like g_bus_watch_name() but takes a #GDBusConnection instead of a
 * #GBusType.
 * g_bus_unwatch_name() to stop watching the name.
 *
 * Returns: An identifier (never 0) that an be used with
 * Since: 2.26
 */


/**
 * g_action_group_get_action_enabled:
 * @action_group: a #GActionGroup
 * @action_name: the name of the action to query
 *
 * Checks if the named action within @action_group is currently enabled.
 * An action must be enabled in order to be activated or in order to
 * have its state changed from outside callers.
 *
 * Returns: whether or not the action is currently enabled
 * Since: 2.28
 */


/**
 * g_app_info_should_show:
 * @appinfo: a #GAppInfo.
 *
 * Checks if the application info should be shown in menus that
 * list available applications.
 *
 * Returns: %TRUE if the @appinfo should be shown, %FALSE otherwise.
 */


/**
 * g_proxy_get_default_for_protocol:
 * @protocol: the proxy protocol name (e.g. http, socks, etc)
 *
 * Lookup "gio-proxy" extension point for a proxy implementation that supports
 * specified protocol.
 *
 * Returns: return a #GProxy or NULL if protocol is not supported.
 * Since: 2.26
 */


/**
 * g_dbus_connection_send_message_with_reply_finish:
 * @connection: a #GDBusConnection
 * @res: A #GAsyncResult obtained from the #GAsyncReadyCallback passed to g_dbus_connection_send_message_with_reply().
 * @error: Return location for error or %NULL.
 *
 * Finishes an operation started with g_dbus_connection_send_message_with_reply().
 * Note that @error is only set if a local in-process error
 * occured. That is to say that the returned #GDBusMessage object may
 * be of type %G_DBUS_MESSAGE_TYPE_ERROR. Use
 * g_dbus_message_to_gerror() to transcode this to a #GError.
 * See <xref linkend="gdbus-server"/> and <xref
 * linkend="gdbus-unix-fd-client"/> for an example of how to use this
 * low-level API to send and receive UNIX file descriptors.
 *
 * Returns: (transfer full): A locked #GDBusMessage or %NULL if @error is set.
 * Since: 2.26
 */


/**
 * SECTION:gunixinputstrea:
 * @short_description: Streaming input operations for UNIX file descriptors
 * @include: gio/gunixinputstream.h
 * @see_also: #GInputStream
 *
 * #GUnixInputStream implements #GInputStream for reading from a
 * UNIX file descriptor, including asynchronous operations. The file
 * descriptor must be selectable, so it doesn't work with opened files.
 * Note that <filename>&lt;gio/gunixinputstream.h&gt;</filename> belongs
 * to the UNIX-specific GIO interfaces, thus you have to use the
 * <filename>gio-unix-2.0.pc</filename> pkg-config file when using it.
 */


/**
 * GZlibCompressor:
 *
 * Zlib decompression
 */


/**
 * g_dbus_server_get_guid:
 * @server: A #GDBusServer.
 *
 * Gets the GUID for @server.
 *
 * Returns: A D-Bus GUID. Do not free this string, it is owned by @server.
 * Since: 2.26
 */


/**
 * g_file_get_basename:
 * @file: input #GFile.
 *
 * Gets the base name (the last component of the path) for a given #GFile.
 * If called for the top level of a system (such as the filesystem root
 * or a uri like sftp://host/) it will return a single directory separator
 * (and on Windows, possibly a drive letter).
 * The base name is a byte string (*not* UTF-8). It has no defined encoding
 * or rules other than it may not contain zero bytes.  If you want to use
 * filenames in a user interface you should use the display name that you
 * can get by requesting the %G_FILE_ATTRIBUTE_STANDARD_DISPLAY_NAME
 * attribute with g_file_query_info().
 * This call does no blocking i/o.
 * if given #GFile is invalid. The returned string should be
 * freed with g_free() when no longer needed.
 *
 * Returns: string containing the #GFile's base name, or %NULL
 */


/**
 * g_volume_get_drive:
 * @volume: a #GVolume.
 *
 * Gets the drive for the @volume.
 * The returned object should be unreffed with g_object_unref()
 * when no longer needed.
 *
 * Returns: (transfer full): a #GDrive or %NULL if @volume is not associated with a drive.
 */


/**
 * GUnixMountMonitor::mountpoints-changed:
 * @monitor: the object on which the signal is emitted
 *
 * Emitted when the unix mount points have changed.
 */


/**
 * GDBusProxy:g-interface-name:
 *
 * The D-Bus interface name the proxy is for.
 *
 * Since: 2.26
 */


/**
 * g_icon_to_string:
 * @icon: a #GIcon.
 *
 * Generates a textual representation of @icon that can be used for
 * serialization such as when passing @icon to a different process or
 * saving it to persistent storage. Use g_icon_new_for_string() to
 * get @icon back from the returned string.
 * The encoding of the returned string is proprietary to #GIcon except
 * in the following two cases
 * <itemizedlist>
 * <listitem><para>
 * If @icon is a #GFileIcon, the returned string is a native path
 * (such as <literal>/path/to/my icon.png</literal>) without escaping
 * if the #GFile for @icon is a native file.  If the file is not
 * native, the returned string is the result of g_file_get_uri()
 * (such as <literal>sftp://path/to/my%%20icon.png</literal>).
 * </para></listitem>
 * <listitem><para>
 * If @icon is a #GThemedIcon with exactly one name, the encoding is
 * simply the name (such as <literal>network-server</literal>).
 * </para></listitem>
 * </itemizedlist>
 * be serialized. Use g_free() to free.
 *
 * Virtual: to_tokens
 * Returns: An allocated NUL-terminated UTF8 string or %NULL if @icon can't
 * Since: 2.20
 */


/**
 * g_dbus_connection_unregister_subtree:
 * @connection: A #GDBusConnection.
 * @registration_id: A subtree registration id obtained from g_dbus_connection_register_subtree().
 *
 * Unregisters a subtree.
 *
 * Returns: %TRUE if the subtree was unregistered, %FALSE otherwise.
 * Since: 2.26
 */


/**
 * g_socket_listener_accept_socket_finish:
 * @listener: a #GSocketListener
 * @result: a #GAsyncResult.
 * @source_object: Optional #GObject identifying this source
 * @error: a #GError location to store the error occuring, or %NULL to ignore.
 *
 * Finishes an async accept operation. See g_socket_listener_accept_socket_async()
 *
 * Returns: (transfer full): a #GSocket on success, %NULL on error.
 * Since: 2.22
 */


/**
 * g_io_extension_point_get_required_type:
 * @extension_point: a #GIOExtensionPoint
 *
 * Gets the required type for @extension_point.
 * or #G_TYPE_INVALID if the extension point has no required type
 *
 * Returns: the #GType that all implementations must have,
 */


/**
 * GDBusProxy:g-default-timeout:
 *
 * The timeout to use if -1 (specifying default timeout) is passed
 * as @timeout_msec in the g_dbus_proxy_call() and
 * g_dbus_proxy_call_sync() functions.
 * This allows applications to set a proxy-wide timeout for all
 * remote method invocations on the proxy. If this property is -1,
 * the default timeout (typically 25 seconds) is used. If set to
 * %G_MAXINT, then no timeout is used.
 *
 * Since: 2.26
 */


/**
 * g_file_info_set_attribute_uint64:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 * @attr_value: an unsigned 64-bit integer.
 *
 * Sets the @attribute to contain the given @attr_value,
 * if possible.
 */


/**
 * g_socket_get_timeout:
 * @socket: a #GSocket.
 *
 * Gets the timeout setting of the socket. For details on this, see
 * g_socket_set_timeout().
 *
 * Returns: the timeout in seconds
 * Since: 2.26
 */


/**
 * g_dbus_connection_set_exit_on_close:
 * @connection: A #GDBusConnection.
 * @exit_on_close: Whether the process should be terminated when @connection is closed by the remote peer.
 *
 * Sets whether the process should be terminated when @connection is
 * closed by the remote peer. See #GDBusConnection:exit-on-close for
 * more details.
 *
 * Since: 2.26
 */


/**
 * SECTION:gsimpleasyncresul:
 * @short_description: Simple asynchronous results implementation
 * @include: gio/gio.h
 * @see_also: #GAsyncResult
 *
 * Implements #GAsyncResult for simple cases. Most of the time, this
 * will be all an application needs, and will be used transparently.
 * Because of this, #GSimpleAsyncResult is used throughout GIO for
 * handling asynchronous functions.
 * GSimpleAsyncResult handles #GAsyncReadyCallback<!-- -->s, error
 * reporting, operation cancellation and the final state of an operation,
 * completely transparent to the application. Results can be returned
 * as a pointer e.g. for functions that return data that is collected
 * asynchronously, a boolean value for checking the success or failure
 * of an operation, or a #gssize for operations which return the number
 * of bytes modified by the operation; all of the simple return cases
 * are covered.
 * Most of the time, an application will not need to know of the details
 * of this API; it is handled transparently, and any necessary operations
 * are handled by #GAsyncResult's interface. However, if implementing a
 * new GIO module, for writing language bindings, or for complex
 * applications that need better control of how asynchronous operations
 * are completed, it is important to understand this functionality.
 * GSimpleAsyncResults are tagged with the calling function to ensure
 * that asynchronous functions and their finishing functions are used
 * together correctly.
 * To create a new #GSimpleAsyncResult, call g_simple_async_result_new().
 * If the result needs to be created for a #GError, use
 * g_simple_async_result_new_from_error() or
 * g_simple_async_result_new_take_error(). If a #GError is not available
 * (e.g. the asynchronous operation's doesn't take a #GError argument),
 * but the result still needs to be created for an error condition, use
 * g_simple_async_result_new_error() (or g_simple_async_result_set_error_va()
 * if your application or binding requires passing a variable argument list
 * directly), and the error can then be propagated through the use of
 * g_simple_async_result_propagate_error().
 * An asynchronous operation can be made to ignore a cancellation event by
 * calling g_simple_async_result_set_handle_cancellation() with a
 * #GSimpleAsyncResult for the operation and %FALSE. This is useful for
 * operations that are dangerous to cancel, such as close (which would
 * cause a leak if cancelled before being run).
 * GSimpleAsyncResult can integrate into GLib's event loop, #GMainLoop,
 * or it can use #GThread<!-- -->s if available.
 * g_simple_async_result_complete() will finish an I/O task directly
 * from the point where it is called. g_simple_async_result_complete_in_idle()
 * will finish it from an idle handler in the <link
 * linkend="g-main-context-push-thread-default">thread-default main
 * context</link>. g_simple_async_result_run_in_thread() will run the
 * job in a separate thread and then deliver the result to the
 * thread-default main context.
 * To set the results of an asynchronous function,
 * g_simple_async_result_set_op_res_gpointer(),
 * g_simple_async_result_set_op_res_gboolean(), and
 * g_simple_async_result_set_op_res_gssize()
 * are provided, setting the operation's result to a gpointer, gboolean, or
 * gssize, respectively.
 * Likewise, to get the result of an asynchronous function,
 * g_simple_async_result_get_op_res_gpointer(),
 * g_simple_async_result_get_op_res_gboolean(), and
 * g_simple_async_result_get_op_res_gssize() are
 * provided, getting the operation's result as a gpointer, gboolean, and
 * gssize, respectively.
 * For the details of the requirements implementations must respect, see
 * #GAsyncResult.  A typical implementation of an asynchronous operation
 * using GSimpleAsyncResult looks something like this:
 * |[
 * static void
 * baked_cb (Cake    *cake,
 * gpointer user_data)
 * {
 * /&ast; In this example, this callback is not given a reference to the cake, so
 * &ast; the GSimpleAsyncResult has to take a reference to it.
 * &ast;/
 * GSimpleAsyncResult *result = user_data;
 * if (cake == NULL)
 * g_simple_async_result_set_error (result,
 * BAKER_ERRORS,
 * BAKER_ERROR_NO_FLOUR,
 * "Go to the supermarket");
 * else
 * g_simple_async_result_set_op_res_gpointer (result,
 * g_object_ref (cake),
 * g_object_unref);
 * /&ast; In this example, we assume that baked_cb is called as a callback from
 * &ast; the mainloop, so it's safe to complete the operation synchronously here.
 * &ast; If, however, _baker_prepare_cake () might call its callback without
 * &ast; first returning to the mainloop — inadvisable, but some APIs do so —
 * &ast; we would need to use g_simple_async_result_complete_in_idle().
 * &ast;/
 * g_simple_async_result_complete (result);
 * g_object_unref (result);
 * }
 * void
 * baker_bake_cake_async (Baker              *self,
 * guint               radius,
 * GAsyncReadyCallback callback,
 * gpointer            user_data)
 * {
 * GSimpleAsyncResult *simple;
 * Cake               *cake;
 * if (radius < 3)
 * {
 * g_simple_async_report_error_in_idle (G_OBJECT (self),
 * callback,
 * user_data,
 * BAKER_ERRORS,
 * BAKER_ERROR_TOO_SMALL,
 * "%ucm radius cakes are silly",
 * radius);
 * return;
 * }
 * simple = g_simple_async_result_new (G_OBJECT (self),
 * callback,
 * user_data,
 * baker_bake_cake_async);
 * cake = _baker_get_cached_cake (self, radius);
 * if (cake != NULL)
 * {
 * g_simple_async_result_set_op_res_gpointer (simple,
 * g_object_ref (cake),
 * g_object_unref);
 * g_simple_async_result_complete_in_idle (simple);
 * g_object_unref (simple);
 * /&ast; Drop the reference returned by _baker_get_cached_cake(); the
 * &ast; GSimpleAsyncResult has taken its own reference.
 * &ast;/
 * g_object_unref (cake);
 * return;
 * }
 * _baker_prepare_cake (self, radius, baked_cb, user_data);
 * }
 * Cake *
 * baker_bake_cake_finish (Baker        *self,
 * GAsyncResult *result,
 * GError      **error)
 * {
 * GSimpleAsyncResult *simple;
 * Cake               *cake;
 * g_return_val_if_fail (g_simple_async_result_is_valid (result,
 * G_OBJECT (self),
 * baker_bake_cake_async),
 * NULL);
 * simple = (GSimpleAsyncResult *) result;
 * if (g_simple_async_result_propagate_error (simple, error))
 * return NULL;
 * cake = CAKE (g_simple_async_result_get_op_res_gpointer (simple));
 * return g_object_ref (cake);
 * }
 * ]|
 */


/**
 * g_async_initable_init_finish:
 * @initable: a #GAsyncInitable.
 * @res: a #GAsyncResult.
 * @error: a #GError location to store the error occuring, or %NULL to ignore.
 *
 * Finishes asynchronous initialization and returns the result.
 * See g_async_initable_init_async().
 * will return %FALSE and set @error appropriately if present.
 *
 * Returns: %TRUE if successful. If an error has occurred, this function
 * Since: 2.22
 */


/**
 * g_input_stream_skip_async:
 * @stream: A #GInputStream.
 * @count: the number of bytes that will be skipped from the stream
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: callback to call when the request is satisfied
 * @user_data: the data to pass to callback function
 *
 * Request an asynchronous skip of @count bytes from the stream.
 * When the operation is finished @callback will be called.
 * You can then call g_input_stream_skip_finish() to get the result
 * of the operation.
 * During an async request no other sync and async calls are allowed,
 * and will result in %G_IO_ERROR_PENDING errors.
 * A value of @count larger than %G_MAXSSIZE will cause a %G_IO_ERROR_INVALID_ARGUMENT error.
 * On success, the number of bytes skipped will be passed to the callback.
 * It is not an error if this is not the same as the requested size, as it
 * can happen e.g. near the end of a file, but generally we try to skip
 * as many bytes as requested. Zero is returned on end of file
 * (or if @count is zero), but never otherwise.
 * Any outstanding i/o request with higher priority (lower numerical value)
 * will be executed before an outstanding request with lower priority.
 * Default priority is %G_PRIORITY_DEFAULT.
 * The asynchronous methods have a default fallback that uses threads to
 * implement asynchronicity, so they are optional for inheriting classes.
 * However, if you override one, you must override all.
 */


/**
 * g_mount_guess_content_type_finish:
 * @mount: a #GMount
 * @result: a #GAsyncResult
 * @error: a #GError location to store the error occuring, or %NULL to ignore
 *
 * Finishes guessing content types of @mount. If any errors occured
 * during the operation, @error will be set to contain the errors and
 * %FALSE will be returned. In particular, you may get an
 * %G_IO_ERROR_NOT_SUPPORTED if the mount does not support content
 * guessing.
 * Caller should free this array with g_strfreev() when done with it.
 *
 * Returns: (transfer full) (element-type utf8): a %NULL-terminated array of content types or %NULL on error.
 * Since: 2.18
 */


/**
 * g_cancellable_push_current:
 * @cancellable: a #GCancellable object
 *
 * Pushes @cancellable onto the cancellable stack. The current
 * cancllable can then be recieved using g_cancellable_get_current().
 * This is useful when implementing cancellable operations in
 * code that does not allow you to pass down the cancellable object.
 * This is typically called automatically by e.g. #GFile operations,
 * so you rarely have to call this yourself.
 */


/**
 * g_file_query_exists:
 * @file: input #GFile.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 *
 * Utility function to check if a particular file exists. This is
 * implemented using g_file_query_info() and as such does blocking I/O.
 * Note that in many cases it is racy to first check for file existence
 * and then execute something based on the outcome of that, because the
 * file might have been created or removed in between the operations. The
 * general approach to handling that is to not check, but just do the
 * operation and handle the errors as they come.
 * As an example of race-free checking, take the case of reading a file, and
 * can both result in two processes creating the file (with perhaps a partially
 * written file as the result). The correct approach is to always try to create
 * the file with g_file_create() which will either atomically create the file
 * or fail with a G_IO_ERROR_EXISTS error.
 * However, in many cases an existence check is useful in a user
 * interface, for instance to make a menu item sensitive/insensitive, so that
 * you don't have to fool users that something is possible and then just show
 * and error dialog. If you do this, you should make sure to also handle the
 * errors that can happen due to races when you execute the operation.
 *
 * If it doesn't exist, creating it. there are two racy versions: read it, and
 * On error create it; and: check if it exists, if not create it. These
 * Returns: %TRUE if the file exists (and can be detected without error), %FALSE otherwise (or if cancelled).
 */


/**
 * g_inet_address_get_is_any:
 * @address: a #GInetAddress
 *
 * Tests whether @address is the "any" address for its family.
 *
 * Returns: %TRUE if @address is the "any" address for its family.
 * Since: 2.22
 */


/**
 * g_unix_socket_address_get_path:
 * @address: a #GInetSocketAddress
 *
 * Gets @address's path, or for abstract sockets the "name".
 * Guaranteed to be zero-terminated, but an abstract socket
 * may contain embedded zeros, and thus you should use
 * g_unix_socket_address_get_path_len() to get the true length
 * of this string.
 *
 * Returns: the path for @address
 * Since: 2.22
 */


/**
 * SECTION:gdbusserve:
 * @short_description: Helper for accepting connections
 * @include: gio/gio.h
 *
 * #GDBusServer is a helper for listening to and accepting D-Bus
 * connections.
 * <example id="gdbus-peer-to-peer"><title>D-Bus peer-to-peer example</title><programlisting><xi:include xmlns:xi="http://www.w3.org/2001/XInclude" parse="text" href="../../../../gio/tests/gdbus-example-peer.c"><xi:fallback>FIXME: MISSING XINCLUDE CONTENT</xi:fallback></xi:include></programlisting></example>
 */


/**
 * SECTION:gdbusmessag:
 * @short_description: D-Bus Message
 * @include: gio/gio.h
 *
 * A type for representing D-Bus messages that can be sent or received
 * on a #GDBusConnection.
 */


/**
 * g_inet_address_get_is_mc_link_local:
 * @address: a #GInetAddress
 *
 * Tests whether @address is a link-local multicast address.
 *
 * Returns: %TRUE if @address is a link-local multicast address.
 * Since: 2.22
 */


/**
 * GDBusMessage:
 *
 * The #GDBusMessage structure contains only private data and should
 * only be accessed using the provided API.
 *
 * Since: 2.26
 */


/**
 * g_file_enumerator_close_async:
 * @enumerator: a #GFileEnumerator.
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: the data to pass to callback function
 *
 * Asynchronously closes the file enumerator.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned in
 * g_file_enumerator_close_finish().
 */


/**
 * SECTION:gactiongrou:
 * @title: GActionGroup
 * @short_description: a group of actions
 *
 * #GActionGroup represents a group of actions.
 * Each action in the group has a unique name (which is a string).  All
 * method calls, except g_action_group_list_actions() take the name of
 * an action as an argument.
 * The #GActionGroup API is meant to be the 'public' API to the action
 * group.  The calls here are exactly the interaction that 'external
 * the action group implementation) are found on subclasses.  This is
 * why you will find -- for example -- g_action_group_get_enabled() but
 * not an equivalent <function>set()</function> call.
 * Signals are emitted on the action group in response to state changes
 * on individual actions.
 *
 * Forces' (eg: UI, incoming D-Bus messages, etc.) are supposed to have
 * With actions.  'internal' apis (ie: ones meant only to be accessed by
 */


/**
 * GUnixOutputStream:close-fd:
 *
 * Whether to close the file descriptor when the stream is closed.
 *
 * Since: 2.20
 */


/**
 * g_app_info_dup:
 * @appinfo: a #GAppInfo.
 *
 * Creates a duplicate of a #GAppInfo.
 *
 * Returns: (transfer full): a duplicate of @appinfo.
 */


/**
 * g_srv_target_copy:
 * @target: a #GSrvTarget
 *
 * Copies @target
 *
 * Returns: a copy of @target
 * Since: 2.22
 */


/**
 * g_app_launch_context_get_display:
 * @context: a #GAppLaunchContext
 * @info: a #GAppInfo
 * @files: (element-type GFile): a #GList of #GFile objects
 *
 * Gets the display string for the @context. This is used to ensure new
 * applications are started on the same display as the launching
 * application, by setting the <envvar>DISPLAY</envvar> environment variable.
 *
 * Returns: a display string for the display.
 */


/**
 * g_desktop_app_info_get_is_hidden:
 * @info: a #GDesktopAppInfo.
 *
 * A desktop file is hidden if the Hidden key in it is
 * set to True.
 *
 * Returns: %TRUE if hidden, %FALSE otherwise.
 */


/**
 * SECTION:gperiodi:
 * @title: GPeriodic
 * @short_description: a periodic event clock
 *
 * #GPeriodic is a periodic event clock that fires a configurable number
 * of times per second and is capable of being put into synch with an
 * external time source.
 * A number of #GPeriodicTickFunc<!-- -->s are registered with
 * g_periodic_add() and are called each time the clock "ticks".
 * performed) that are handled in a "repair" phase that follows all the
 * tick functions having been run.  It is also possible to report damage
 * while the clock is not running, in which case the rate of repairs
 * will be rate limited as if the clock were running.
 * #GPeriodic has a configurable priority range consisting of a high and
 * low value.  Other sources with a priority higher than the high value
 * might starve #GPeriodic and sources with the priority lower than the
 * low value may be starved by #GPeriodic.
 * #GPeriodic will engage in dynamic scheduling with respect to sources
 * that have their priorities within the high to low range.  A given
 * #GPeriodic will ensure that the events dispatched from itself are
 * generally using less than 50% of the CPU (on average) if other tasks
 * are pending.  If no other sources within the range are pending then
 * #GPeriodic will use up to all of the available CPU (which can lead to
 * starvation of lower-priority sources, as mentioned above).  The 50%
 * figure is entirely arbitrary and may change or become configurable in
 * the future.
 * For example, if a #GPeriodic has been set to run at 10Hz and a
 * particular iteration uses 140ms of time, then 2 ticks will be
 * "skipped" to give other sources a chance to run (ie: the next tick
 * will occur 300ms later rather than 100ms later, giving 160ms of time
 * for other sources).
 * This means that the high priority value for #GPeriodic should be set
 * quite high (above anything else) and the low priority value for
 * #GPeriodic should be set lower than everything except true "idle"
 * truly idle).
 * #GPeriodic generally assumes that although the things attached to it
 * may be poorly behaved in terms of non-yielding behaviour (either
 * individually or in aggregate), the other sources on the main loop
 * should be "well behaved".  Other sources should try not to block the
 * CPU for a substantial portion of the periodic interval.
 * The sources attached to a #GPeriodic are permitted to be somewhat
 * less well-behaved because they are generally rendering the UI for the
 * user (which should be done smoothly) and also because they will be
 * throttled by #GPeriodic.
 * #GPeriodic is intended to be used as a paint clock for managing
 * geometry updates and painting of windows.
 *
 * The tick functions can report "damage" (ie: updates that need to be
 * Handlers (ie: things that you want to run only when the program is
 * Since: 2.28
 */


/**
 * g_socket_send_message:
 * @socket: a #GSocket
 * @address: a #GSocketAddress, or %NULL
 * @vectors: an array of #GOutputVector structs
 * @num_vectors: the number of elements in @vectors, or -1
 * @messages: a pointer to an array of #GSocketControlMessages, or %NULL.
 * @num_messages: number of elements in @messages, or -1.
 * @flags: an int containing #GSocketMsgFlags flags
 * @cancellable: a %GCancellable or %NULL
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Send data to @address on @socket.  This is the most complicated and
 * fully-featured version of this call. For easier use, see
 * g_socket_send() and g_socket_send_to().
 * If @address is %NULL then the message is sent to the default receiver
 * (set by g_socket_connect()).
 * then @vectors is assumed to be terminated by a #GOutputVector with a
 * %NULL buffer pointer.) The #GOutputVector structs describe the buffers
 * that the sent data will be gathered from. Using multiple
 * #GOutputVector<!-- -->s is more memory-efficient than manually copying
 * data from multiple sources into a single buffer, and more
 * network-efficient than making multiple calls to g_socket_send().
 * #GSocketControlMessage instances. These correspond to the control
 * messages to be sent on the socket.
 * If @num_messages is -1 then @messages is treated as a %NULL-terminated
 * array.
 * for this are available in the #GSocketMsgFlags enum, but the
 * values there are the same as the system values, and the flags
 * are passed in as-is, so you can pass in system-specific flags too.
 * If the socket is in blocking mode the call will block until there is
 * space for the data in the socket queue. If there is no space available
 * and the socket is in non-blocking mode a %G_IO_ERROR_WOULD_BLOCK error
 * will be returned. To be notified when space is available, wait for the
 * %G_IO_OUT condition. Note though that you may still receive
 * %G_IO_ERROR_WOULD_BLOCK from g_socket_send() even if you were previously
 * notified of a %G_IO_OUT condition. (On Windows in particular, this is
 * very common due to the way the underlying APIs work.)
 * On error -1 is returned and @error is set accordingly.
 * on error
 *
 * Returns: Number of bytes written (which may be less than @size), or -1
 * Since: 2.22
 */


/**
 * g_permission_release:
 * @permission: a #GPermission instance
 * @cancellable: a #GCancellable, or %NULL
 * @error: a pointer to a %NULL #GError, or %NULL
 * @returns: %TRUE if the permission was successfully released
 *
 * Attempts to release the permission represented by @permission.
 * The precise method by which this happens depends on the permission
 * and the underlying authentication mechanism.  In most cases the
 * permission will be dropped immediately without further action.
 * You should check with g_permission_get_can_release() before calling
 * this function.
 * If the permission is released then %TRUE is returned.  Otherwise,
 * %FALSE is returned and @error is set appropriately.
 * This call is blocking, likely for a very long time (in the case that
 * user interaction is required).  See g_permission_release_async() for
 * the non-blocking version.
 *
 * Since: 2.26
 */


/**
 * GSettings::change-event:
 * @settings: the object on which the signal was emitted
 * @keys: an array of #GQuark<!-- -->s for the changed keys, or %NULL
 * @n_keys: the length of the @keys array, or 0
 * @returns: %TRUE to stop other handlers from being invoked for the event. FALSE to propagate the event further.
 *
 * The "change-event" signal is emitted once per change event that
 * affects this settings object.  You should connect to this signal
 * only if you are interested in viewing groups of changes before they
 * are split out into multiple emissions of the "changed" signal.
 * For most use cases it is more appropriate to use the "changed" signal.
 * In the event that the change event applies to one or more specified
 * keys, @keys will be an array of #GQuark of length @n_keys.  In the
 * event that the change event applies to the #GSettings object as a
 * be %NULL and @n_keys will be 0.
 * The default handler for this signal invokes the "changed" signal
 * for each affected key.  If any other connected handler returns
 * %TRUE then this default functionality will be supressed.
 *
 * Whole (ie: potentially every key has been changed) then @keys will
 */


/**
 * GInetAddress:is-mc-org-local:
 *
 * Whether this is an organization-local multicast address.
 * See g_inet_address_get_is_mc_org_local().
 *
 * Since: 2.22
 */


/**
 * g_file_start_mountable_finish:
 * @file: input #GFile.
 * @result: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes a start operation. See g_file_start_mountable() for details.
 * Finish an asynchronous start operation that was started
 * with g_file_start_mountable().
 * otherwise.
 *
 * Returns: %TRUE if the operation finished successfully. %FALSE
 * Since: 2.22
 */


/**
 * g_input_stream_read_async:
 * @stream: A #GInputStream.
 * @buffer: a buffer to read data into (which should be at least count bytes long).
 * @count: the number of bytes that will be read from the stream
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: callback to call when the request is satisfied
 * @user_data: the data to pass to callback function
 *
 * Request an asynchronous read of @count bytes from the stream into the buffer
 * starting at @buffer. When the operation is finished @callback will be called.
 * You can then call g_input_stream_read_finish() to get the result of the
 * operation.
 * During an async request no other sync and async calls are allowed on @stream, and will
 * result in %G_IO_ERROR_PENDING errors.
 * A value of @count larger than %G_MAXSSIZE will cause a %G_IO_ERROR_INVALID_ARGUMENT error.
 * On success, the number of bytes read into the buffer will be passed to the
 * callback. It is not an error if this is not the same as the requested size, as it
 * can happen e.g. near the end of a file, but generally we try to read
 * as many bytes as requested. Zero is returned on end of file
 * (or if @count is zero),  but never otherwise.
 * Any outstanding i/o request with higher priority (lower numerical value) will
 * be executed before an outstanding request with lower priority. Default
 * priority is %G_PRIORITY_DEFAULT.
 * The asyncronous methods have a default fallback that uses threads to implement
 * asynchronicity, so they are optional for inheriting classes. However, if you
 * override one you must override all.
 */


/**
 * g_data_input_stream_new:
 * @base_stream: a #GInputStream.
 *
 * Creates a new data input stream for the @base_stream.
 *
 * Returns: a new #GDataInputStream.
 */


/**
 * g_file_get_uri:
 * @file: input #GFile.
 *
 * Gets the URI for the @file.
 * This call does no blocking i/o.
 * The returned string should be freed with g_free() when no longer needed.
 *
 * Returns: a string containing the #GFile's URI.
 */


/**
 * g_mount_get_volume:
 * @mount: a #GMount.
 *
 * Gets the volume for the @mount.
 * The returned object should be unreffed with
 * g_object_unref() when no longer needed.
 *
 * Returns: (transfer full): a #GVolume or %NULL if @mount is not associated with a volume.
 */


/**
 * g_buffered_input_stream_get_available:
 * @stream: #GBufferedInputStream
 *
 * Gets the size of the available data within the stream.
 *
 * Returns: size of the available stream.
 */


/**
 * g_settings_reset:
 * @settings: a #GSettings object
 * @key: the name of a key
 *
 * Resets @key to its default value.
 * This call resets the key, as much as possible, to its default value.
 * That might the value specified in the schema or the one set by the
 * administrator.
 */


/**
 * SECTION:gdbusaddres:
 * @title: D-Bus Addresses
 * @short_description: D-Bus connection endpoints
 * @include: gio/gio.h
 *
 * Routines for working with D-Bus addresses. A D-Bus address is a string
 * like "unix:tmpdir=/tmp/my-app-name". The exact format of addresses
 * is explained in detail in the <link linkend="http://dbus.freedesktop.org/doc/dbus-specification.html&num;addresses">D-Bus specification</link>.
 */


/**
 * g_volume_eject_finish:
 * @volume: pointer to a #GVolume.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store an error, or %NULL to ignore
 *
 * Finishes ejecting a volume. If any errors occured during the operation,
 *
 * Returns: %TRUE, %FALSE if operation failed.
 * Deprecated: 2.22: Use g_volume_eject_with_operation_finish() instead.
 */


/**
 * g_volume_mount:
 * @volume: a #GVolume.
 * @flags: flags affecting the operation
 * @mount_operation: (allow-none): a #GMountOperation or %NULL to avoid user interaction.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback, or %NULL.
 * @user_data: user data that gets passed to @callback
 *
 * Mounts a volume. This is an asynchronous operation, and is
 * finished by calling g_volume_mount_finish() with the @volume
 * and #GAsyncResult returned in the @callback.
 *
 * Virtual: mount_fn
 */


/**
 * g_unix_mount_points_changed_since:
 * @time: guint64 to contain a timestamp.
 *
 * Checks if the unix mount points have changed since a given unix time.
 *
 * Returns: %TRUE if the mount points have changed since @time.
 */


/**
 * SECTION:gdbusauthobserve:
 * @short_description: Object used for authenticating connections
 * @include: gio/gio.h
 *
 * The #GDBusAuthObserver type provides a mechanism for participating
 * in how a #GDBusServer (or a #GDBusConnection) authenticates remote
 * peers. Simply instantiate a #GDBusAuthObserver and connect to the
 * signals you are interested in. Note that new signals may be added
 * in the future
 * For example, if you only want to allow D-Bus connections from
 * processes owned by the same uid as the server, you would use a
 * signal handler like the following:
 * <example id="auth-observer"><title>Controlling Authentication</title><programlisting>
 * static gboolean
 * on_authorize_authenticated_peer (GDBusAuthObserver *observer,
 * GIOStream         *stream,
 * GCredentials      *credentials,
 * gpointer           user_data)
 * {
 * gboolean authorized;
 * authorized = FALSE;
 * if (credentials != NULL)
 * {
 * GCredentials *own_credentials;
 * own_credentials = g_credentials_new ();
 * if (g_credentials_is_same_user (credentials, own_credentials, NULL))
 * authorized = TRUE;
 * g_object_unref (own_credentials);
 * }
 * return authorized;
 * }
 * </programlisting></example>
 */


/**
 * g_settings_set_string:
 * @settings: a #GSettings object
 * @key: the name of the key to set
 * @value: the value to set it to
 * @returns: %TRUE if setting the key succeeded, %FALSE if the key was not writable
 *
 * Sets @key in @settings to @value.
 * A convenience variant of g_settings_set() for strings.
 * It is a programmer error to give a @key that isn't specified as
 * having a string type in the schema for @settings.
 *
 * Since: 2.26
 */


/**
 * g_mount_unmount_finish:
 * @mount: a #GMount.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occuring, or %NULL to ignore.
 *
 * Finishes unmounting a mount. If any errors occurred during the operation,
 *
 * Returns: %TRUE if the mount was successfully unmounted. %FALSE otherwise.
 * Deprecated: 2.22: Use g_mount_unmount_with_operation_finish() instead.
 */


/**
 * g_buffered_output_stream_get_buffer_size:
 * @stream: a #GBufferedOutputStream.
 *
 * Gets the size of the buffer in the @stream.
 *
 * Returns: the current size of the buffer.
 */


/**
 * g_action_group_list_actions:
 * @action_group: a #GActionGroup
 *
 * Lists the actions contained within @action_group.
 * The caller is responsible for freeing the list with g_strfreev() when
 * it is no longer required.
 * actions in the groupb
 *
 * Returns: (transfer full): a %NULL-terminated array of the names of the
 * Since: 2.28
 */


/**
 * g_dbus_method_invocation_return_error_literal:
 * @invocation: A #GDBusMethodInvocation.
 * @domain: A #GQuark for the #GError error domain.
 * @code: The error code.
 * @message: The error message.
 *
 * Like g_dbus_method_invocation_return_error() but without printf()-style formatting.
 * This method will free @invocation, you cannot use it afterwards.
 *
 * Since: 2.26
 */


/**
 * g_dbus_message_get_serial:
 * @message: A #GDBusMessage.
 *
 * Gets the serial for @message.
 *
 * Returns: A #guint32.
 * Since: 2.26
 */


/**
 * g_file_attribute_matcher_ref:
 * @matcher: a #GFileAttributeMatcher.
 *
 * References a file attribute matcher.
 *
 * Returns: a #GFileAttributeMatcher.
 */


/**
 * g_file_info_new:
 *
 * Creates a new file info structure.
 *
 * Returns: a #GFileInfo.
 */


/**
 * g_unix_output_stream_new:
 * @fd: a UNIX file descriptor
 * @close_fd: %TRUE to close the file descriptor when done
 *
 * Creates a new #GUnixOutputStream for the given @fd.
 * If @close_fd, is %TRUE, the file descriptor will be closed when
 * the output stream is destroyed.
 *
 * Returns: a new #GOutputStream
 */


/**
 * g_input_stream_close:
 * @stream: A #GInputStream.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: location to store the error occuring, or %NULL to ignore
 *
 * Closes the stream, releasing resources related to it.
 * Once the stream is closed, all other operations will return %G_IO_ERROR_CLOSED.
 * Closing a stream multiple times will not return an error.
 * Streams will be automatically closed when the last reference
 * is dropped, but you might want to call this function to make sure
 * resources are released as early as possible.
 * Some streams might keep the backing store of the stream (e.g. a file descriptor)
 * open after the stream is closed. See the documentation for the individual
 * stream for details.
 * On failure the first error that happened will be reported, but the close
 * operation will finish as much as possible. A stream that failed to
 * close will still return %G_IO_ERROR_CLOSED for all operations. Still, it
 * is important to check and report the error to the user.
 * If @cancellable is not NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * Cancelling a close will still leave the stream closed, but some streams
 * can use a faster close that doesn't block to e.g. check errors.
 *
 * Returns: %TRUE on success, %FALSE on failure
 */


/**
 * g_dbus_annotation_info_lookup:
 * @annotations: A %NULL-terminated array of annotations or %NULL.
 * @name: The name of the annotation to look up.
 *
 * Looks up the value of an annotation.
 * This cost of this function is O(n) in number of annotations.
 *
 * Returns: The value or %NULL if not found. Do not free, it is owned by @annotations.
 * Since: 2.26
 */


/**
 * g_file_set_display_name_async:
 * @file: input #GFile.
 * @display_name: a string.
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: the data to pass to callback function
 *
 * Asynchronously sets the display name for a given #GFile.
 * For more details, see g_file_set_display_name() which is
 * the synchronous version of this call.
 * When the operation is finished, @callback will be called. You can then call
 * g_file_set_display_name_finish() to get the result of the operation.
 */


/**
 * g_socket_listener_accept_finish:
 * @listener: a #GSocketListener
 * @result: a #GAsyncResult.
 * @source_object: Optional #GObject identifying this source
 * @error: a #GError location to store the error occuring, or %NULL to ignore.
 *
 * Finishes an async accept operation. See g_socket_listener_accept_async()
 *
 * Returns: (transfer full): a #GSocketConnection on success, %NULL on error.
 * Since: 2.22
 */


/**
 * GSimpleAction:parameter-type:
 *
 * The type of the parameter that must be given when activating the
 * action.
 *
 * Since: 2.28
 */


/**
 * g_proxy_supports_hostname:
 * @proxy: a #GProxy
 *
 * Some proxy protocols expect to be passed a hostname, which they
 * will resolve to an IP address themselves. Others, like SOCKS4, do
 * not allow this. This function will return %FALSE if @proxy is
 * implementing such a protocol. When %FALSE is returned, the caller
 * should resolve the destination hostname first, and then pass a
 * #GProxyAddress containing the stringified IP address to
 * g_proxy_connect() or g_proxy_connect_async().
 *
 * Returns: %TRUE if hostname resolution is supported.
 * Since: 2.26
 */


/**
 * g_file_info_get_attribute_uint64:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 *
 * Gets a unsigned 64-bit integer contained within the attribute. If the
 * attribute does not contain an unsigned 64-bit integer, or is invalid,
 * 0 will be returned.
 *
 * Returns: a unsigned 64-bit integer from the attribute.
 */


/**
 * g_dbus_message_get_sender:
 * @message: A #GDBusMessage.
 *
 * Convenience getter for the %G_DBUS_MESSAGE_HEADER_FIELD_SENDER header field.
 *
 * Returns: The value.
 * Since: 2.26
 */


/**
 * g_mount_operation_set_username:
 * @op: a #GMountOperation.
 * @username: input username.
 *
 * Sets the user name within @op to @username.
 */


/**
 * GDBusProxy:g-name:
 *
 * The well-known or unique name that the proxy is for.
 *
 * Since: 2.26
 */


/**
 * g_mount_shadow:
 * @mount: A #GMount.
 *
 * Increments the shadow count on @mount. Usually used by
 * #GVolumeMonitor implementations when creating a shadow mount for
 * will need to emit the #GMount::changed signal on @mount manually.
 *
 * Since: 2.20
 */


/**
 * g_file_query_filesystem_info_async:
 * @file: input #GFile.
 * @attributes: an attribute query string.
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: the data to pass to callback function
 *
 * Asynchronously gets the requested information about the filesystem
 * that the specified @file is on. The result is a #GFileInfo object
 * that contains key-value attributes (such as type or size for the
 * file).
 * For more details, see g_file_query_filesystem_info() which is the
 * synchronous version of this call.
 * When the operation is finished, @callback will be called. You can
 * then call g_file_query_info_finish() to get the result of the
 * operation.
 */


/**
 * g_file_attribute_info_list_add:
 * @list: a #GFileAttributeInfoList.
 * @name: the name of the attribute to add.
 * @type: the #GFileAttributeType for the attribute.
 * @flags: #GFileAttributeInfoFlags for the attribute.
 *
 * Adds a new attribute with @name to the @list, setting
 * its @type and @flags.
 */


/**
 * GUnixInputStream:close-fd:
 *
 * Whether to close the file descriptor when the stream is closed.
 *
 * Since: 2.20
 */


/**
 * g_content_type_from_mime_type:
 * @mime_type: a mime type string
 *
 * Tries to find a content type based on the mime type name.
 * or %NULL. Free with g_free()
 *
 * Returns: (allow-none): Newly allocated string with content type
 * Since: 2.18
 */


/**
 * g_srv_target_get_port:
 * @target: a #GSrvTarget
 *
 * Gets @target's port
 *
 * Returns: @target's port
 * Since: 2.22
 */


/**
 * g_mount_eject:
 * @mount: a #GMount.
 * @flags: flags affecting the unmount if required for eject
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback, or %NULL.
 * @user_data: user data passed to @callback.
 *
 * Ejects a mount. This is an asynchronous operation, and is
 * finished by calling g_mount_eject_finish() with the @mount
 * and #GAsyncResult data returned in the @callback.
 *
 * Deprecated: 2.22: Use g_mount_eject_with_operation() instead.
 */


/**
 * g_dbus_error_get_remote_error:
 * @error: A #GError.
 *
 * Gets the D-Bus error name used for @error, if any.
 * This function is guaranteed to return a D-Bus error name for all
 * #GError<!-- -->s returned from functions handling remote method
 * calls (e.g. g_dbus_connection_call_finish()) unless
 * g_dbus_error_strip_remote_error() has been used on @error.
 *
 * Returns: An allocated string or %NULL if the D-Bus error name could not be found. Free with g_free().
 * Since: 2.26
 */


/**
 * SECTION:gsettingsbacken:
 * @title: GSettingsBackend
 * @short_description: an interface for settings backend implementations
 * @include: gio/gsettingsbackend.h
 * @see_also: #GSettings, #GIOExtensionPoint
 *
 * The #GSettingsBackend interface defines a generic interface for
 * non-strictly-typed data that is stored in a hierarchy. To implement
 * an alternative storage backend for #GSettings, you need to implement
 * the #GSettingsBackend interface and then make it implement the
 * extension point #G_SETTINGS_BACKEND_EXTENSION_POINT_NAME.
 * The interface defines methods for reading and writing values, a
 * method for determining if writing of certain values will fail
 * (lockdown) and a change notification mechanism.
 * The semantics of the interface are very precisely defined and
 * implementations must carefully adhere to the expectations of
 * callers that are documented on each of the interface methods.
 * Some of the GSettingsBackend functions accept or return a #GTree.
 * These trees always have strings as keys and #GVariant as values.
 * g_settings_backend_create_tree() is a convenience function to create
 * suitable trees.
 * <note><para>
 * The #GSettingsBackend API is exported to allow third-party
 * implementations, but does not carry the same stability guarantees
 * as the public GIO API. For this reason, you have to define the
 * C preprocessor symbol #G_SETTINGS_ENABLE_BACKEND before including
 * <filename>gio/gsettingsbackend.h</filename>
 * </para></note>
 */


/**
 * g_dbus_interface_info_lookup_method:
 * @info: A #GDBusInterfaceInfo.
 * @name: A D-Bus method name (typically in CamelCase)
 *
 * Looks up information about a method.
 * This cost of this function is O(n) in number of methods.
 *
 * Returns: A #GDBusMethodInfo or %NULL if not found. Do not free, it is owned by @info.
 * Since: 2.26
 */


/**
 * GDBusConnection:closed:
 *
 * A boolean specifying whether the connection has been closed.
 *
 * Since: 2.26
 */


/**
 * g_zlib_compressor_new:
 * @format: The format to use for the compressed data
 * @level: compression level (0-9), -1 for default
 *
 * Creates a new #GZlibCompressor.
 *
 * Returns: a new #GZlibCompressor
 * Since: 2.24
 */


/**
 * g_cancellable_disconnect:
 * @cancellable: A #GCancellable or %NULL.
 * @handler_id: Handler id of the handler to be disconnected, or %0.
 *
 * Disconnects a handler from a cancellable instance similar to
 * g_signal_handler_disconnect().  Additionally, in the event that a
 * signal handler is currently running, this call will block until the
 * handler has finished.  Calling this function from a
 * #GCancellable::cancelled signal handler will therefore result in a
 * deadlock.
 * This avoids a race condition where a thread cancels at the
 * same time as the cancellable operation is finished and the
 * signal handler is removed. See #GCancellable::cancelled for
 * details on how to use this.
 * If @cancellable is %NULL or @handler_id is %0 this function does
 * nothing.
 *
 * Since: 2.22
 */


/**
 * g_input_stream_skip_finish:
 * @stream: a #GInputStream.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occuring, or %NULL to ignore.
 *
 * Finishes a stream skip operation.
 *
 * Returns: the size of the bytes skipped, or %-1 on error.
 */


/**
 * g_resolver_set_default:
 * @resolver: the new default #GResolver
 *
 * Sets @resolver to be the application's default resolver (reffing
 * Future calls to g_resolver_get_default() will return this resolver.
 * This can be used if an application wants to perform any sort of DNS
 * caching or "pinning"; it can implement its own #GResolver that
 * calls the original default resolver for DNS operations, and
 * implements its own cache policies on top of that, and then set
 * itself as the default resolver for all later code to use.
 *
 * Since: 2.22
 */


/**
 * g_dbus_annotation_info_unref:
 * @info: A #GDBusAnnotationInfo.
 *
 * If @info is statically allocated, does nothing. Otherwise decreases
 * the reference count of @info. When its reference count drops to 0,
 * the memory used is freed.
 *
 * Since: 2.26
 */


/**
 * g_file_info_set_sort_order:
 * @info: a #GFileInfo.
 * @sort_order: a sort order integer.
 *
 * Sets the sort order attribute in the file info structure. See
 * %G_FILE_ATTRIBUTE_STANDARD_SORT_ORDER.
 */


/**
 * SECTION:goutputstrea:
 * @short_description: Base class for implementing streaming output
 * @include: gio/gio.h
 *
 * GOutputStream has functions to write to a stream (g_output_stream_write()),
 * to close a stream (g_output_stream_close()) and to flush pending writes
 * (g_output_stream_flush()).
 * To copy the content of an input stream to an output stream without
 * manually handling the reads and writes, use g_output_stream_splice().
 * All of these functions have async variants too.
 */


/**
 * SECTION:gmemoryinputstrea:
 * @short_description: Streaming input operations on memory chunks
 * @include: gio/gio.h
 * @see_also: #GMemoryOutputStream
 *
 * #GMemoryInputStream is a class for using arbitrary
 * memory chunks as input for GIO streaming input operations.
 */


/**
 * g_action_get_name:
 * @action: a #GAction
 *
 * Queries the name of @action.
 *
 * Returns: the name of the action
 * Since: 2.28
 */


/**
 * SECTION:gvf:
 * @short_description: Virtual File System
 * @include: gio/gio.h
 *
 * Entry point for using GIO functionality.
 */


/**
 * g_file_output_stream_query_info_async:
 * @stream: a #GFileOutputStream.
 * @attributes: a file attribute query string.
 * @io_priority: the <link linkend="gio-GIOScheduler">I/O priority</link> of the request.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: callback to call when the request is satisfied
 * @user_data: the data to pass to callback function
 *
 * Asynchronously queries the @stream for a #GFileInfo. When completed,
 * finish the operation with g_file_output_stream_query_info_finish().
 * For the synchronous version of this function, see
 * g_file_output_stream_query_info().
 */


/**
 * g_dbus_connection_remove_filter:
 * @connection: a #GDBusConnection
 * @filter_id: an identifier obtained from g_dbus_connection_add_filter()
 *
 * Removes a filter.
 *
 * Since: 2.26
 */


/**
 * g_resolver_lookup_by_name:
 * @resolver: a #GResolver
 * @hostname: the hostname to look up
 * @cancellable: a #GCancellable, or %NULL
 * @error: return location for a #GError, or %NULL
 *
 * Synchronously resolves @hostname to determine its associated IP
 * address(es). @hostname may be an ASCII-only or UTF-8 hostname, or
 * the textual form of an IP address (in which case this just becomes
 * a wrapper around g_inet_address_new_from_string()).
 * On success, g_resolver_lookup_by_name() will return a #GList of
 * #GInetAddress, sorted in order of preference. (That is, you should
 * attempt to connect to the first address first, then the second if
 * the first fails, etc.)
 * If the DNS resolution fails, @error (if non-%NULL) will be set to a
 * value from #GResolverError.
 * If @cancellable is non-%NULL, it can be used to cancel the
 * operation, in which case @error (if non-%NULL) will be set to
 * %G_IO_ERROR_CANCELLED.
 * If you are planning to connect to a socket on the resolved IP
 * address, it may be easier to create a #GNetworkAddress and use its
 * #GSocketConnectable interface.
 * of #GInetAddress, or %NULL on error. You
 * must unref each of the addresses and free the list when you are
 * done with it. (You can use g_resolver_free_addresses() to do this.)
 *
 * Returns: (element-type GInetAddress) (transfer full): a #GList
 * Since: 2.22
 */


/**
 * g_socket_listener_accept_async:
 * @listener: a #GSocketListener
 * @cancellable: a #GCancellable, or %NULL
 * @callback: a #GAsyncReadyCallback
 * @user_data: user data for the callback
 *
 * This is the asynchronous version of g_socket_listener_accept().
 * When the operation is finished @callback will be
 * called. You can then call g_socket_listener_accept_socket()
 * to get the result of the operation.
 *
 * Since: 2.22
 */


/**
 * g_mount_unshadow:
 * @mount: A #GMount.
 *
 * Decrements the shadow count on @mount. Usually used by
 * #GVolumeMonitor implementations when destroying a shadow mount for
 * will need to emit the #GMount::changed signal on @mount manually.
 *
 * Since: 2.20
 */


/**
 * g_file_info_get_is_backup:
 * @info: a #GFileInfo.
 *
 * Checks if a file is a backup file.
 *
 * Returns: %TRUE if file is a backup file, %FALSE otherwise.
 */


/**
 * g_dbus_connection_call:
 * @connection: A #GDBusConnection.
 * @bus_name: A unique or well-known bus name or %NULL if @connection is not a message bus connection.
 * @object_path: Path of remote object.
 * @interface_name: D-Bus interface to invoke method on.
 * @method_name: The name of the method to invoke.
 * @parameters: A #GVariant tuple with parameters for the method or %NULL if not passing parameters.
 * @reply_type: The expected type of the reply, or %NULL.
 * @flags: Flags from the #GDBusCallFlags enumeration.
 * @timeout_msec: The timeout in milliseconds, -1 to use the default timeout or %G_MAXINT for no timeout.
 * @cancellable: A #GCancellable or %NULL.
 * @callback: A #GAsyncReadyCallback to call when the request is satisfied or %NULL if you don't care about the result of the method invocation.
 * @user_data: The data to pass to @callback.
 *
 * Asynchronously invokes the @method_name method on the
 * If @connection is closed then the operation will fail with
 * %G_IO_ERROR_CLOSED. If @cancellable is canceled, the operation will
 * fail with %G_IO_ERROR_CANCELLED. If @parameters contains a value
 * not compatible with the D-Bus protocol, the operation fails with
 * %G_IO_ERROR_INVALID_ARGUMENT.
 * If @reply_type is non-%NULL then the reply will be checked for having this type and an
 * error will be raised if it does not match.  Said another way, if you give a @reply_type
 * then any non-%NULL return value will be of this type.
 * If the @parameters #GVariant is floating, it is consumed. This allows
 * convenient 'inline' use of g_variant_new(), e.g.:
 * |[
 * g_dbus_connection_call (connection,
 * "org.freedesktop.StringThings",
 * "/org/freedesktop/StringThings",
 * "org.freedesktop.StringThings",
 * "TwoStrings",
 * g_variant_new ("(ss)",
 * "Thing One",
 * "Thing Two"),
 * NULL,
 * G_DBUS_CALL_FLAGS_NONE,
 * -1,
 * NULL,
 * (GAsyncReadyCallback) two_strings_done,
 * NULL);
 * ]|
 * This is an asynchronous method. When the operation is finished, @callback will be invoked
 * in the <link linkend="g-main-context-push-thread-default">thread-default main loop</link>
 * of the thread you are calling this method from. You can then call
 * g_dbus_connection_call_finish() to get the result of the operation.
 * See g_dbus_connection_call_sync() for the synchronous version of this
 * function.
 *
 * Since: 2.26
 */


/**
 * g_unix_fd_message_get_fd_list:
 * @message: a #GUnixFDMessage
 *
 * Gets the #GUnixFDList contained in @message.  This function does not
 * return a reference to the caller, but the returned list is valid for
 * the lifetime of @message.
 *
 * Returns: (transfer none): the #GUnixFDList from @message
 * Since: 2.24
 */


/**
 * g_filter_input_stream_get_base_stream:
 * @stream: a #GFilterInputStream.
 *
 * Gets the base stream for the filter stream.
 *
 * Returns: (transfer none): a #GInputStream.
 */


/**
 * g_data_input_stream_get_byte_order:
 * @stream: a given #GDataInputStream.
 *
 * Gets the byte order for the data input stream.
 *
 * Returns: the @stream's current #GDataStreamByteOrder.
 */


/**
 * SECTION:gdbuserro:
 * @title: GDBusError
 * @short_description: Mapping D-Bus errors to and from GError
 * @include: gio/gio.h
 *
 * All facilities that return errors from remote methods (such as
 * g_dbus_connection_call_sync()) use #GError to represent both D-Bus
 * errors (e.g. errors returned from the other peer) and locally
 * in-process generated errors.
 * To check if a returned #GError is an error from a remote peer, use
 * g_dbus_error_is_remote_error(). To get the actual D-Bus error name,
 * use g_dbus_error_get_remote_error(). Before presenting an error,
 * always use g_dbus_error_strip_remote_error().
 * In addition, facilities used to return errors to a remote peer also
 * use #GError. See g_dbus_method_invocation_return_error() for
 * discussion about how the D-Bus error name is set.
 * Applications can associate a #GError error domain with a set of D-Bus errors in order to
 * automatically map from D-Bus errors to #GError and back. This
 * is typically done in the function returning the #GQuark for the
 * error domain:
 * <example id="error-registration"><title>Error Registration</title><programlisting>
 * /<!-- -->* foo-bar-error.h: *<!-- -->/
 * #define FOO_BAR_ERROR (foo_bar_error_quark ())
 * GQuark foo_bar_error_quark (void);
 * typedef enum
 * {
 * FOO_BAR_ERROR_FAILED,
 * FOO_BAR_ERROR_ANOTHER_ERROR,
 * FOO_BAR_ERROR_SOME_THIRD_ERROR,
 * } FooBarError;
 * /<!-- -->* foo-bar-error.c: *<!-- -->/
 * static const GDBusErrorEntry foo_bar_error_entries[] =
 * {
 * {FOO_BAR_ERROR_FAILED,           "org.project.Foo.Bar.Error.Failed"},
 * {FOO_BAR_ERROR_ANOTHER_ERROR,    "org.project.Foo.Bar.Error.AnotherError"},
 * {FOO_BAR_ERROR_SOME_THIRD_ERROR, "org.project.Foo.Bar.Error.SomeThirdError"},
 * };
 * GQuark
 * foo_bar_error_quark (void)
 * {
 * static volatile gsize quark_volatile = 0;
 * g_dbus_error_register_error_domain ("foo-bar-error-quark",
 * &quark_volatile,
 * foo_bar_error_entries,
 * G_N_ELEMENTS (foo_bar_error_entries));
 * G_STATIC_ASSERT (G_N_ELEMENTS (foo_bar_error_entries) - 1 == FOO_BAR_ERROR_SOME_THIRD_ERROR);
 * return (GQuark) quark_volatile;
 * }
 * </programlisting></example>
 * With this setup, a D-Bus peer can transparently pass e.g. %FOO_BAR_ERROR_ANOTHER_ERROR and
 * other peers will see the D-Bus error name <literal>org.project.Foo.Bar.Error.AnotherError</literal>.
 * If the other peer is using GDBus, the peer will see also %FOO_BAR_ERROR_ANOTHER_ERROR instead
 * of %G_IO_ERROR_DBUS_ERROR. Note that GDBus clients can still recover
 * <literal>org.project.Foo.Bar.Error.AnotherError</literal> using g_dbus_error_get_remote_error().
 * Note that errors in the %G_DBUS_ERROR error domain is intended only
 * for returning errors from a remote message bus process. Errors
 * generated locally in-process by e.g. #GDBusConnection is from the
 * %G_IO_ERROR domain.
 */


/**
 * g_seekable_truncate:
 * @seekable: a #GSeekable.
 * @offset: a #goffset.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError location to store the error occuring, or %NULL to ignore.
 *
 * Truncates a stream with a given #offset.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned. If an
 * operation was partially finished when the operation was cancelled the
 * partial result will be returned, without an error.
 * has occurred, this function will return %FALSE and set @error
 * appropriately if present.
 *
 * Virtual: truncate_fn
 * Returns: %TRUE if successful. If an error
 */


/**
 * g_dbus_message_new_method_error:
 * @method_call_message: A message of type %G_DBUS_MESSAGE_TYPE_METHOD_CALL to create a reply message to.
 * @error_name: A valid D-Bus error name.
 * @error_message_format: The D-Bus error message in a printf() format.
 * @...: Arguments for @error_message_format.
 *
 * Creates a new #GDBusMessage that is an error reply to @method_call_message.
 *
 * Returns: (transfer full): A #GDBusMessage. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * g_volume_eject_with_operation:
 * @volume: a #GVolume.
 * @flags: flags affecting the unmount if required for eject
 * @mount_operation: a #GMountOperation or %NULL to avoid user interaction.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback, or %NULL.
 * @user_data: user data passed to @callback.
 *
 * Ejects a volume. This is an asynchronous operation, and is
 * finished by calling g_volume_eject_with_operation_finish() with the @volume
 * and #GAsyncResult data returned in the @callback.
 *
 * Since: 2.22
 */


/**
 * g_settings_bind:
 * @settings: a #GSettings object
 * @key: the key to bind
 * @object: a #GObject
 * @property: the name of the property to bind
 * @flags: flags for the binding
 *
 * Create a binding between the @key in the @settings object
 * and the property @property of @object.
 * The binding uses the default GIO mapping functions to map
 * between the settings and property values. These functions
 * handle booleans, numeric types and string types in a
 * straightforward way. Use g_settings_bind_with_mapping() if
 * you need a custom mapping, or map between types that are not
 * supported by the default mapping functions.
 * Unless the @flags include %G_SETTINGS_BIND_NO_SENSITIVITY, this
 * function also establishes a binding between the writability of
 * a boolean property by that name). See g_settings_bind_writable()
 * for more details about writable bindings.
 * Note that the lifecycle of the binding is tied to the object,
 * and that you can have only one binding per object property.
 * If you bind the same property twice on the same object, the second
 * binding overrides the first one.
 *
 * Since: 2.26
 */


/**
 * g_socket_client_connect_to_host_async:
 * @client: a #GTcpClient
 * @host_and_port: the name and optionally the port of the host to connect to
 * @default_port: the default port to connect to
 * @cancellable: a #GCancellable, or %NULL
 * @callback: a #GAsyncReadyCallback
 * @user_data: user data for the callback
 *
 * This is the asynchronous version of g_socket_client_connect_to_host().
 * When the operation is finished @callback will be
 * called. You can then call g_socket_client_connect_to_host_finish() to get
 * the result of the operation.
 *
 * Since: 2.22
 */


/**
 * g_file_info_set_content_type:
 * @info: a #GFileInfo.
 * @content_type: a content type. See #GContentType.
 *
 * Sets the content type attribute for a given #GFileInfo.
 * See %G_FILE_ATTRIBUTE_STANDARD_CONTENT_TYPE.
 */


/**
 * g_loadable_icon_load_async:
 * @icon: a #GLoadableIcon.
 * @size: an integer.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: the data to pass to callback function
 *
 * Loads an icon asynchronously. To finish this function, see
 * g_loadable_icon_load_finish(). For the synchronous, blocking
 * version of this function, see g_loadable_icon_load().
 */


/**
 * g_dbus_message_new_from_blob:
 * @blob: A blob represent a binary D-Bus message.
 * @blob_len: The length of @blob.
 * @capabilities: A #GDBusCapabilityFlags describing what protocol features are supported.
 * @error: Return location for error or %NULL.
 *
 * Creates a new #GDBusMessage from the data stored at @blob. The byte
 * order that the message was in can be retrieved using
 * g_dbus_message_get_byte_order().
 * g_object_unref().
 *
 * Returns: A new #GDBusMessage or %NULL if @error is set. Free with
 * Since: 2.26
 */


/**
 * g_dbus_error_set_dbus_error:
 * @error: A pointer to a #GError or %NULL.
 * @dbus_error_name: D-Bus error name.
 * @dbus_error_message: D-Bus error message.
 * @format: printf()-style format to prepend to @dbus_error_message or %NULL.
 * @...: Arguments for @format.
 *
 * Does nothing if @error is %NULL. Otherwise sets *@error to
 * a new #GError created with g_dbus_error_new_for_dbus_error()
 * with @dbus_error_message prepend with @format (unless %NULL).
 *
 * Since: 2.26
 */


/**
 * g_file_query_info_finish:
 * @file: input #GFile.
 * @res: a #GAsyncResult.
 * @error: a #GError.
 *
 * Finishes an asynchronous file info query.
 * See g_file_query_info_async().
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): #GFileInfo for given @file or %NULL on error.
 */


/**
 * GDBusConnection:unique-name:
 *
 * The unique name as assigned by the message bus or %NULL if the
 * connection is not open or not a message bus connection.
 *
 * Since: 2.26
 */


/**
 * g_file_attribute_info_list_lookup:
 * @list: a #GFileAttributeInfoList.
 * @name: the name of the attribute to lookup.
 *
 * Gets the file attribute with the name @name from @list.
 * attribute isn't found.
 *
 * Returns: a #GFileAttributeInfo for the @name, or %NULL if an
 */


/**
 * g_file_enumerator_close_finish:
 * @enumerator: a #GFileEnumerator.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occuring, or %NULL to ignore.
 *
 * Finishes closing a file enumerator, started from g_file_enumerator_close_async().
 * If the file enumerator was already closed when g_file_enumerator_close_async()
 * was called, then this function will report %G_IO_ERROR_CLOSED in @error, and
 * return %FALSE. If the file enumerator had pending operation when the close
 * operation was started, then this function will report %G_IO_ERROR_PENDING, and
 * return %FALSE.  If @cancellable was not %NULL, then the operation may have been
 * cancelled by triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be set, and %FALSE will be
 * returned.
 *
 * Returns: %TRUE if the close operation has finished successfully.
 */


/**
 * GSimpleAction:name:
 *
 * The name of the action.  This is mostly meaningful for identifying
 * the action once it has been added to a #GSimpleActionGroup.
 *
 * Since: 2.28
 */


/**
 * g_app_info_set_as_default_for_type:
 * @appinfo: a #GAppInfo.
 * @content_type: the content type.
 * @error: a #GError.
 *
 * Sets the application as the default handler for a given type.
 *
 * Returns: %TRUE on success, %FALSE on error.
 */


/**
 * g_filter_input_stream_get_close_base_stream:
 * @stream: a #GFilterInputStream.
 *
 * Returns whether the base stream will be closed when @stream is
 * closed.
 *
 * Returns: %TRUE if the base stream will be closed.
 */


/**
 * GPeriodic:
 *
 * #GPeriodic is an opaque structure type.
 *
 * Since: 2.28
 */


/**
 * g_io_stream_clear_pending:
 * @stream: a #GIOStream
 *
 * Clears the pending flag on @stream.
 *
 * Since: 2.22
 */


/**
 * g_permission_release_async:
 * @permission: a #GPermission instance
 * @cancellable: a #GCancellable, or %NULL
 * @callback: the #GAsyncReadyCallback to call when done
 * @user_data: the user data to pass to @callback
 *
 * Attempts to release the permission represented by @permission.
 * This is the first half of the asynchronous version of
 * g_permission_release().
 *
 * Since: 2.26
 */


/**
 * g_unix_mount_guess_name:
 * @mount_entry: a #GUnixMountEntry
 *
 * Guesses the name of a Unix mount.
 * The result is a translated string.
 * be freed with g_free()
 *
 * Returns: A newly allocated string that must
 */


/**
 * GDBusConnection:exit-on-close:
 *
 * A boolean specifying whether the process will be terminated (by
 * calling <literal>raise(SIGTERM)</literal>) if the connection
 * is closed by the remote peer.
 *
 * Since: 2.26
 */


/**
 * g_simple_async_result_get_source_tag: (skip)
 * @simple: a #GSimpleAsyncResult.
 *
 * Gets the source tag for the #GSimpleAsyncResult.
 *
 * Returns: a #gpointer to the source object for the #GSimpleAsyncResult.
 */


/**
 * SECTION:gemble:
 * @short_description: An object for emblems
 * @include: gio/gio.h
 * @see_also: #GIcon, #GEmblemedIcon, #GLoadableIcon, #GThemedIcon
 *
 * #GEmblem is an implementation of #GIcon that supports
 * having an emblem, which is an icon with additional properties.
 * It can than be added to a #GEmblemedIcon.
 * Currently, only metainformation about the emblem's origin is
 * supported. More may be added in the future.
 */


/**
 * g_threaded_socket_service_new:
 * @max_threads: the maximal number of threads to execute concurrently handling incoming clients, -1 means no limit
 *
 * Creates a new #GThreadedSocketService with no listeners. Listeners
 * must be added with g_socket_service_add_listeners().
 *
 * Returns: a new #GSocketService.
 * Since: 2.22
 */


/**
 * g_file_monitor_cancel:
 * @monitor: a #GFileMonitor.
 *
 * Cancels a file monitor.
 *
 * Returns: %TRUE if monitor was cancelled.
 */


/**
 * SECTION:gfileiostrea:
 * @short_description: File read and write streaming operations
 * @include: gio/gio.h
 * @see_also: #GIOStream, #GFileInputStream, #GFileOutputStream, #GSeekable
 *
 * GFileIOStream provides io streams that both read and write to the same
 * file handle.
 * GFileIOStream implements #GSeekable, which allows the io
 * stream to jump to arbitrary positions in the file and to truncate
 * the file, provided the filesystem of the file supports these
 * operations.
 * To find the position of a file io stream, use
 * g_seekable_tell().
 * To find out if a file io stream supports seeking, use g_seekable_can_seek().
 * To position a file io stream, use g_seekable_seek().
 * To find out if a file io stream supports truncating, use
 * g_seekable_can_truncate(). To truncate a file io
 * stream, use g_seekable_truncate().
 * The default implementation of all the #GFileIOStream operations
 * and the implementation of #GSeekable just call into the same operations
 * on the output stream.
 *
 * Since: 2.22
 */


/**
 * g_mount_get_root:
 * @mount: a #GMount.
 *
 * Gets the root directory on @mount.
 * The returned object should be unreffed with
 * g_object_unref() when no longer needed.
 *
 * Returns: (transfer full): a #GFile.
 */


/**
 * SECTION:gunixmount:
 * @include: gio/gunixmounts.h
 * @short_description: UNIX mounts
 *
 * Routines for managing mounted UNIX mount points and paths.
 * Note that <filename>&lt;gio/gunixmounts.h&gt;</filename> belongs to the
 * UNIX-specific GIO interfaces, thus you have to use the
 * <filename>gio-unix-2.0.pc</filename> pkg-config file when using it.
 */


/**
 * g_mount_unmount_with_operation_finish:
 * @mount: a #GMount.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occuring, or %NULL to ignore.
 *
 * Finishes unmounting a mount. If any errors occurred during the operation,
 *
 * Returns: %TRUE if the mount was successfully unmounted. %FALSE otherwise.
 * Since: 2.22
 */


/**
 * g_app_info_launch:
 * @appinfo: a #GAppInfo
 * @files: (element-type GFile): a #GList of #GFile objects
 * @launch_context: (allow-none): a #GAppLaunchContext or %NULL
 * @error: a #GError
 *
 * Launches the application. Passes @files to the launched application
 * as arguments, using the optional @launch_context to get information
 * about the details of the launcher (like what screen it is on).
 * On error, @error will be set accordingly.
 * To launch the application without arguments pass a %NULL @files list.
 * Note that even if the launch is successful the application launched
 * can fail to start if it runs into problems during startup. There is
 * no way to detect this.
 * Some URIs can be changed when passed through a GFile (for instance
 * unsupported uris with strange formats like mailto:), so if you have
 * a textual uri you want to pass in as argument, consider using
 * g_app_info_launch_uris() instead.
 * On UNIX, this function sets the <envar>GIO_LAUNCHED_DESKTOP_FILE</envar>
 * environment variable with the path of the launched desktop file and
 * <envar>GIO_LAUNCHED_DESKTOP_FILE_PID</envar> to the process
 * id of the launched process. This can be used to ignore
 * <envar>GIO_LAUNCHED_DESKTOP_FILE</envar>, should it be inherited
 * by further processes. The <envar>DISPLAY</envar> and
 * <envar>DESKTOP_STARTUP_ID</envar> environment variables are also
 * set, based on information provided in @launch_context.
 *
 * Returns: %TRUE on successful launch, %FALSE otherwise.
 */


/**
 * GVolumeMonitor::drive-disconnected:
 * @volume_monitor: The volume monitor emitting the signal.
 * @drive: a #GDrive that was disconnected.
 *
 * Emitted when a drive is disconnected from the system.
 */


/**
 * g_bus_watch_name:
 * @bus_type: The type of bus to watch a name on.
 * @name: The name (well-known or unique) to watch.
 * @flags: Flags from the #GBusNameWatcherFlags enumeration.
 * @name_appeared_handler: Handler to invoke when @name is known to exist or %NULL.
 * @name_vanished_handler: Handler to invoke when @name is known to not exist or %NULL.
 * @user_data: User data to pass to handlers.
 * @user_data_free_func: Function for freeing @user_data or %NULL.
 *
 * Starts watching @name on the bus specified by @bus_type and calls
 * known to have a owner respectively known to lose its
 * owner. Callbacks will be invoked in the <link
 * linkend="g-main-context-push-thread-default">thread-default main
 * loop</link> of the thread you are calling this function from.
 * You are guaranteed that one of the handlers will be invoked after
 * calling this function. When you are done watching the name, just
 * call g_bus_unwatch_name() with the watcher id this function
 * returns.
 * If the name vanishes or appears (for example the application owning
 * the name could restart), the handlers are also invoked. If the
 * #GDBusConnection that is used for watching the name disconnects, then
 * possible to access the name.
 * Another guarantee is that invocations of @name_appeared_handler
 * and @name_vanished_handler are guaranteed to alternate; that
 * is, if @name_appeared_handler is invoked then you are
 * guaranteed that the next time one of the handlers is invoked, it
 * will be @name_vanished_handler. The reverse is also true.
 * This behavior makes it very simple to write applications that wants
 * to take action when a certain name exists, see <xref
 * linkend="gdbus-watching-names"/>. Basically, the application
 * should create object proxies in @name_appeared_handler and destroy
 * them again (if any) in @name_vanished_handler.
 * g_bus_unwatch_name() to stop watching the name.
 *
 * Returns: An identifier (never 0) that an be used with
 * Since: 2.26
 */


/**
 * g_desktop_app_info_new_from_filename:
 * @filename: the path of a desktop file, in the GLib filename encoding
 *
 * Creates a new #GDesktopAppInfo.
 *
 * Returns: a new #GDesktopAppInfo or %NULL on error.
 */


/**
 * g_io_extension_point_get_extension_by_name:
 * @extension_point: a #GIOExtensionPoint
 * @name: the name of the extension to get
 *
 * Finds a #GIOExtension for an extension point by name.
 * given name, or %NULL if there is no extension with that name
 *
 * Returns: (transfer none): the #GIOExtension for @extension_point that has the
 */


/**
 * g_dbus_server_stop:
 * @server: A #GDBusServer.
 *
 * Stops @server.
 *
 * Since: 2.26
 */


/**
 * g_volume_can_eject:
 * @volume: a #GVolume.
 *
 * Checks if a volume can be ejected.
 *
 * Returns: %TRUE if the @volume can be ejected. %FALSE otherwise.
 */


/**
 * g_app_info_create_from_commandline:
 * @commandline: the commandline to use
 * @application_name: (allow-none): the application name, or %NULL to use @commandline
 * @flags: flags that can specify details of the created #GAppInfo
 * @error: a #GError location to store the error occuring, %NULL to ignore.
 *
 * Creates a new #GAppInfo from the given information.
 *
 * Returns: (transfer full): new #GAppInfo for given command.
 */


/**
 * g_socket_client_get_protocol:
 * @client: a #GSocketClient
 *
 * Gets the protocol name type of the socket client.
 * See g_socket_client_set_protocol() for details.
 *
 * Returns: a #GSocketProtocol
 * Since: 2.22
 */


/**
 * g_dbus_message_get_body:
 * @message: A #GDBusMessage.
 *
 * Gets the body of a message.
 *
 * Returns: A #GVariant or %NULL if the body is empty. Do not free, it is owned by @message.
 * Since: 2.26
 */


/**
 * g_permission_get_can_acquire:
 * @permission: a #GPermission instance
 * @returns: the value of the 'can-acquire' property
 *
 * Gets the value of the 'can-acquire' property.  This property is %TRUE
 * if it is generally possible to acquire the permission by calling
 * g_permission_acquire().
 *
 * Since: 2.26
 */


/**
 * g_desktop_app_info_new:
 * @desktop_id: the desktop file id
 *
 * Creates a new #GDesktopAppInfo based on a desktop file id.
 * A desktop file id is the basename of the desktop file, including the
 * .desktop extension. GIO is looking for a desktop file with this name
 * in the <filename>applications</filename> subdirectories of the XDG data
 * directories (i.e. the directories specified in the
 * <envar>XDG_DATA_HOME</envar> and <envar>XDG_DATA_DIRS</envar> environment
 * variables). GIO also supports the prefix-to-subdirectory mapping that is
 * described in the <ulink url="http://standards.freedesktop.org/menu-spec/latest/">Menu Spec</ulink>
 * (i.e. a desktop id of kde-foo.desktop will match
 * <filename>/usr/share/applications/kde/foo.desktop</filename>).
 *
 * Returns: a new #GDesktopAppInfo, or %NULL if no desktop file with that id
 */


/**
 * g_io_scheduler_job_send_to_mainloop_async:
 * @job: a #GIOSchedulerJob
 * @func: a #GSourceFunc callback that will be called in the original thread
 * @user_data: data to pass to @func
 * @notify: a #GDestroyNotify for @user_data, or %NULL
 *
 * Used from an I/O job to send a callback to be run asynchronously in
 * the thread that the job was started from. The callback will be run
 * when the main loop is available, but at that time the I/O job might
 * have finished. The return value from the callback is ignored.
 * Note that if you are passing the @user_data from g_io_scheduler_push_job()
 * on to this function you have to ensure that it is not freed before
 * g_io_scheduler_push_job() or by using refcounting for @user_data.
 */


/**
 * g_application_command_line_getenv:
 * @cmdline: a #GApplicationCommandLine
 * @name: the environment variable to get
 *
 * Gets the value of a particular environment variable of the command
 * line invocation, as would be returned by g_getenv().  The strings may
 * contain non-utf8 data.
 * The remote application usually does not send an environment.  Use
 * %G_APPLICATION_SEND_ENVIRONMENT to affect that.  Even with this flag
 * set it is possible that the environment is still not available (due
 * to invocation messages from other applications).
 * The return value should not be modified or freed and is valid for as
 * long as @cmdline exists.
 *
 * Returns: the value of the variable, or %NULL if unset or unsent
 * Since: 2.28
 */


/**
 * g_simple_async_result_set_from_error:
 * @simple: a #GSimpleAsyncResult.
 * @error: #GError.
 *
 * Sets the result from a #GError.
 */


/**
 * g_file_info_set_attribute_int64:
 * @info: a #GFileInfo.
 * @attribute: attribute name to set.
 * @attr_value: int64 value to set attribute to.
 *
 * Sets the @attribute to contain the given @attr_value,
 * if possible.
 */


/**
 * g_data_input_stream_read_uint16:
 * @stream: a given #GDataInputStream.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: #GError for error reporting.
 *
 * Reads an unsigned 16-bit/2-byte value from @stream.
 * In order to get the correct byte order for this read operation,
 * see g_data_input_stream_get_byte_order() and g_data_input_stream_set_byte_order().
 * an error occurred.
 *
 * Returns: an unsigned 16-bit/2-byte value read from the @stream or %0 if
 */


/**
 * g_socket_client_set_socket_type:
 * @client: a #GSocketClient.
 * @type: a #GSocketType
 *
 * Sets the socket type of the socket client.
 * The sockets created by this object will be of the specified
 * type.
 * It doesn't make sense to specify a type of %G_SOCKET_TYPE_DATAGRAM,
 * as GSocketClient is used for connection oriented services.
 *
 * Since: 2.22
 */


/**
 * GDBusAuthMechanism:credentials:
 *
 * If authenticating as a server, this property contains the
 * received credentials, if any.
 * If authenticating as a client, the property contains the
 * credentials that were sent, if any.
 */


/**
 * g_io_extension_point_set_required_type:
 * @extension_point: a #GIOExtensionPoint
 * @type: the #GType to require
 *
 * Sets the required type for @extension_point to @type.
 * All implementations must henceforth have this type.
 */


/**
 * g_converter_reset:
 * @converter: a #GConverter.
 *
 * Resets all internal state in the converter, making it behave
 * as if it was just created. If the converter has any internal
 * state that would produce output then that output is lost.
 *
 * Since: 2.24
 */


/**
 * g_buffered_output_stream_new_sized:
 * @base_stream: a #GOutputStream.
 * @size: a #gsize.
 *
 * Creates a new buffered output stream with a given buffer size.
 *
 * Returns: a #GOutputStream with an internal buffer set to @size.
 */


/**
 * GDBusServer:active:
 *
 * Whether the server is currently active.
 *
 * Since: 2.26
 */


/**
 * g_file_set_attribute_byte_string:
 * @file: input #GFile.
 * @attribute: a string containing the attribute's name.
 * @value: a string containing the attribute's new value.
 * @flags: a #GFileQueryInfoFlags.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Sets @attribute of type %G_FILE_ATTRIBUTE_TYPE_BYTE_STRING to @value.
 * If @attribute is of a different type, this operation will fail,
 * returning %FALSE.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * in the @file, %FALSE otherwise.
 *
 * Returns: %TRUE if the @attribute was successfully set to @value
 */


/**
 * g_socket_listen:
 * @socket: a #GSocket.
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Marks the socket as a server socket, i.e. a socket that is used
 * to accept incoming requests using g_socket_accept().
 * Before calling this the socket must be bound to a local address using
 * g_socket_bind().
 * To set the maximum amount of outstanding clients, use
 * g_socket_set_listen_backlog().
 *
 * Returns: %TRUE on success, %FALSE on error.
 * Since: 2.22
 */


/**
 * g_simple_async_result_complete_in_idle:
 * @simple: a #GSimpleAsyncResult.
 *
 * Completes an asynchronous function in an idle handler in the <link
 * linkend="g-main-context-push-thread-default">thread-default main
 * loop</link> of the thread that @simple was initially created in.
 * Calling this function takes a reference to @simple for as long as
 * is needed to complete the call.
 */


/**
 * g_file_info_set_attribute_byte_string:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 * @attr_value: a byte string.
 *
 * Sets the @attribute to contain the given @attr_value,
 * if possible.
 */


/**
 * g_data_output_stream_put_uint64:
 * @stream: a #GDataOutputStream.
 * @data: a #guint64.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, %NULL to ignore.
 *
 * Puts an unsigned 64-bit integer into the stream.
 *
 * Returns: %TRUE if @data was successfully added to the @stream.
 */


/**
 * SECTION:gdbusprox:
 * @short_description: Client-side proxies
 * @include: gio/gio.h
 *
 * #GDBusProxy is a base class used for proxies to access a D-Bus
 * interface on a remote object. A #GDBusProxy can be constructed for
 * both well-known and unique names.
 * By default, #GDBusProxy will cache all properties (and listen to
 * changes) of the remote object, and proxy all signals that gets
 * emitted. This behaviour can be changed by passing suitable
 * #GDBusProxyFlags when the proxy is created. If the proxy is for a
 * well-known name, the property cache is flushed when the name owner
 * vanishes and reloaded when a name owner appears.
 * If a #GDBusProxy is used for a well-known name, the owner of the
 * name is tracked and can be read from
 * #GDBusProxy:g-name-owner. Connect to the #GObject::notify signal to
 * get notified of changes. Additionally, only signals and property
 * changes emitted from the current name owner are considered and
 * calls are always sent to the current name owner. This avoids a
 * number of race conditions when the name is lost by one owner and
 * claimed by another. However, if no name owner currently exists,
 * then calls will be sent to the well-known name which may result in
 * the message bus launching an owner (unless
 * %G_DBUS_PROXY_FLAGS_DO_NOT_AUTO_START is set).
 * The generic #GDBusProxy::g-properties-changed and #GDBusProxy::g-signal
 * signals are not very convenient to work with. Therefore, the recommended
 * way of working with proxies is to subclass #GDBusProxy, and have
 * more natural properties and signals in your derived class.
 * See <xref linkend="gdbus-example-proxy-subclass"/> for an example.
 * <example id="gdbus-wellknown-proxy"><title>GDBusProxy for a well-known-name</title><programlisting><xi:include xmlns:xi="http://www.w3.org/2001/XInclude" parse="text" href="../../../../gio/tests/gdbus-example-watch-proxy.c"><xi:fallback>FIXME: MISSING XINCLUDE CONTENT</xi:fallback></xi:include></programlisting></example>
 */


/**
 * g_socket_get_local_address:
 * @socket: a #GSocket.
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Try to get the local address of a bound socket. This is only
 * useful if the socket has been bound to a local address,
 * either explicitly or implicitly when connecting.
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): a #GSocketAddress or %NULL on error.
 * Since: 2.22
 */


/**
 * g_unix_output_stream_get_fd:
 * @stream: a #GUnixOutputStream
 *
 * Return the UNIX file descriptor that the stream writes to.
 *
 * Returns: The file descriptor of @stream
 * Since: 2.20
 */


/**
 * g_dbus_is_unique_name:
 * @string: The string to check.
 *
 * Checks if @string is a valid D-Bus unique bus name.
 *
 * Returns: %TRUE if valid, %FALSE otherwise.
 * Since: 2.26
 */


/**
 * g_inet_address_get_native_size:
 * @address: a #GInetAddress
 *
 * Gets the size of the native raw binary address for @address. This
 * is the size of the data that you get from g_inet_address_to_bytes().
 *
 * Returns: the number of bytes used for the native version of @address.
 * Since: 2.22
 */


/**
 * g_file_query_info:
 * @file: input #GFile.
 * @attributes: an attribute query string.
 * @flags: a set of #GFileQueryInfoFlags.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError.
 *
 * Gets the requested information about specified @file. The result
 * is a #GFileInfo object that contains key-value attributes (such as
 * the type or size of the file).
 * The @attributes value is a string that specifies the file attributes that
 * should be gathered. It is not an error if it's not possible to read a particular
 * requested attribute from a file - it just won't be set. @attributes should
 * be a comma-separated list of attributes or attribute wildcards. The wildcard "*"
 * means all attributes, and a wildcard like "standard::*" means all attributes in the standard
 * namespace. An example attribute query be "standard::*,owner::user".
 * The standard attributes are available as defines, like #G_FILE_ATTRIBUTE_STANDARD_NAME.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * For symlinks, normally the information about the target of the
 * symlink is returned, rather than information about the symlink itself.
 * However if you pass #G_FILE_QUERY_INFO_NOFOLLOW_SYMLINKS in @flags the
 * information about the symlink itself will be returned. Also, for symlinks
 * that point to non-existing files the information about the symlink itself
 * will be returned.
 * If the file does not exist, the G_IO_ERROR_NOT_FOUND error will be returned.
 * Other errors are possible too, and depend on what kind of filesystem the file is on.
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): a #GFileInfo for the given @file, or %NULL on error.
 */


/**
 * g_io_extension_point_implement:
 * @extension_point_name: the name of the extension point
 * @type: the #GType to register as extension
 * @extension_name: the name for the extension
 * @priority: the priority for the extension
 *
 * Registers @type as extension for the extension point with name
 * If @type has already been registered as an extension for this
 * extension point, the existing #GIOExtension object is returned.
 *
 * Returns: a #GIOExtension object for #GType
 */


/**
 * g_mount_eject_finish:
 * @mount: a #GMount.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occuring, or %NULL to ignore.
 *
 * Finishes ejecting a mount. If any errors occurred during the operation,
 *
 * Returns: %TRUE if the mount was successfully ejected. %FALSE otherwise.
 * Deprecated: 2.22: Use g_mount_eject_with_operation_finish() instead.
 */


/**
 * GUnixSocketAddress:
 *
 * A UNIX-domain (local) socket address, corresponding to a
 * <type>struct sockaddr_un</type>.
 */


/**
 * g_file_info_get_attribute_status:
 * @info: a #GFileInfo
 * @attribute: a file attribute key
 *
 * Gets the attribute status for an attribute key.
 * %G_FILE_ATTRIBUTE_STATUS_UNSET if the key is invalid.
 *
 * Returns: a #GFileAttributeStatus for the given @attribute, or
 */


/**
 * g_cancellable_get_fd:
 * @cancellable: a #GCancellable.
 *
 * Gets the file descriptor for a cancellable job. This can be used to
 * implement cancellable operations on Unix systems. The returned fd will
 * turn readable when @cancellable is cancelled.
 * You are not supposed to read from the fd yourself, just check for
 * readable status. Reading to unset the readable status is done
 * with g_cancellable_reset().
 * After a successful return from this function, you should use
 * g_cancellable_release_fd() to free up resources allocated for
 * the returned file descriptor.
 * See also g_cancellable_make_pollfd().
 * is not supported, or on errors.
 *
 * Returns: A valid file descriptor. %-1 if the file descriptor
 */


/**
 * GNetworkService:
 *
 * A #GSocketConnectable for resolving a SRV record and connecting to
 * that service.
 */


/**
 * g_dbus_message_get_path:
 * @message: A #GDBusMessage.
 *
 * Convenience getter for the %G_DBUS_MESSAGE_HEADER_FIELD_PATH header field.
 *
 * Returns: The value.
 * Since: 2.26
 */


/**
 * g_file_attribute_matcher_matches_only:
 * @matcher: a #GFileAttributeMatcher.
 * @attribute: a file attribute key.
 *
 * Checks if a attribute matcher only matches a given attribute. Always
 * returns %FALSE if "*" was used when creating the matcher.
 *
 * Returns: %TRUE if the matcher only matches @attribute. %FALSE otherwise.
 */


/**
 * g_drive_can_eject:
 * @drive: a #GDrive.
 *
 * Checks if a drive can be ejected.
 *
 * Returns: %TRUE if the @drive can be ejected, %FALSE otherwise.
 */


/**
 * SECTION:ginetaddres:
 * @short_description: An IPv4/IPv6 address
 *
 * #GInetAddress represents an IPv4 or IPv6 internet address. Use
 * g_resolver_lookup_by_name() or g_resolver_lookup_by_name_async() to
 * look up the #GInetAddress for a hostname. Use
 * g_resolver_lookup_by_address() or
 * g_resolver_lookup_by_address_async() to look up the hostname for a
 * #GInetAddress.
 * To actually connect to a remote host, you will need a
 * #GInetSocketAddress (which includes a #GInetAddress as well as a
 * port number).
 */


/**
 * g_output_stream_close_finish:
 * @stream: a #GOutputStream.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occuring, or %NULL to ignore.
 *
 * Closes an output stream.
 *
 * Returns: %TRUE if stream was successfully closed, %FALSE otherwise.
 */


/**
 * g_dbus_message_bytes_needed:
 * @blob: A blob represent a binary D-Bus message.
 * @blob_len: The length of @blob (must be at least 16).
 * @error: Return location for error or %NULL.
 *
 * Utility function to calculate how many bytes are needed to
 * completely deserialize the D-Bus message stored at @blob.
 * determine the size).
 *
 * Returns: Number of bytes needed or -1 if @error is set (e.g. if
 * Since: 2.26
 */


/**
 * g_socket_listener_accept_socket_async:
 * @listener: a #GSocketListener
 * @cancellable: a #GCancellable, or %NULL
 * @callback: a #GAsyncReadyCallback
 * @user_data: user data for the callback
 *
 * This is the asynchronous version of g_socket_listener_accept_socket().
 * When the operation is finished @callback will be
 * called. You can then call g_socket_listener_accept_socket_finish()
 * to get the result of the operation.
 *
 * Since: 2.22
 */


/**
 * g_unix_credentials_message_new:
 *
 * Creates a new #GUnixCredentialsMessage with credentials matching the current processes.
 *
 * Returns: a new #GUnixCredentialsMessage
 * Since: 2.26
 */


/**
 * get_all_desktop_entries_for_mime_type:
 * @mime_type: a mime type.
 * @except: NULL or a strv list
 *
 * Returns all the desktop ids for @mime_type. The desktop files
 * are listed in an order so that default applications are listed before
 * non-default ones, and handlers for inherited mimetypes are listed
 * after the base ones.
 * Optionally doesn't list the desktop ids given in the @except
 * to handle @mime_type.
 *
 * Returns: a #GList containing the desktop ids which claim
 */


/**
 * GPermission:allowed:
 *
 * %TRUE if the caller currently has permission to perform the action that
 */


/**
 * g_application_command_line_get_platform_data:
 * @cmdline: #GApplicationCommandLine
 *
 * Gets the platform data associated with the invocation of @cmdline.
 * This is a #GVariant dictionary containing information about the
 * context in which the invocation occured.  It typically contains
 * information like the current working directory and the startup
 * notification ID.
 * For local invocation, it will be %NULL.
 *
 * Returns: the platform data, or %NULL
 * Since: 2.28
 */


/**
 * g_file_info_set_symlink_target:
 * @info: a #GFileInfo.
 * @symlink_target: a static string containing a path to a symlink target.
 *
 * Sets the %G_FILE_ATTRIBUTE_STANDARD_SYMLINK_TARGET attribute in the file info
 * to the given symlink target.
 */


/**
 * g_unix_mount_point_compare:
 * @mount1: a #GUnixMount.
 * @mount2: a #GUnixMount.
 *
 * Compares two unix mount points.
 * or less than @mount2, respectively.
 *
 * Returns: 1, 0 or -1 if @mount1 is greater than, equal to,
 */


/**
 * g_file_info_get_attribute_int32:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 *
 * Gets a signed 32-bit integer contained within the attribute. If the
 * attribute does not contain a signed 32-bit integer, or is invalid,
 * 0 will be returned.
 *
 * Returns: a signed 32-bit integer from the attribute.
 */


/**
 * g_unix_fd_list_steal_fds:
 * @list: a #GUnixFDList
 * @length: pointer to the length of the returned array, or %NULL
 *
 * Returns the array of file descriptors that is contained in this
 * object.
 * After this call, the descriptors are no longer contained in
 * descriptors have been added).
 * The return result of this function must be freed with g_free().
 * The caller is also responsible for closing all of the file
 * descriptors.  The file descriptors in the array are set to
 * close-on-exec.
 * If @length is non-%NULL then it is set to the number of file
 * descriptors in the returned array. The returned array is also
 * terminated with -1.
 * This function never returns %NULL. In case there are no file
 * descriptors contained in @list, an empty array is returned.
 *
 * Returns: an array of file descriptors
 * Since: 2.24
 */


/**
 * g_dbus_message_set_byte_order:
 * @message: A #GDBusMessage.
 * @byte_order: The byte order.
 *
 * Sets the byte order of @message.
 */


/**
 * GDrive::disconnected:
 * @drive: a #GDrive.
 *
 * This signal is emitted when the #GDrive have been
 * disconnected. If the recipient is holding references to the
 * object they should release them so the object can be
 * finalized.
 */


/**
 * g_file_set_attribute_uint32:
 * @file: input #GFile.
 * @attribute: a string containing the attribute's name.
 * @value: a #guint32 containing the attribute's new value.
 * @flags: a #GFileQueryInfoFlags.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Sets @attribute of type %G_FILE_ATTRIBUTE_TYPE_UINT32 to @value.
 * If @attribute is of a different type, this operation will fail.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * in the @file, %FALSE otherwise.
 *
 * Returns: %TRUE if the @attribute was successfully set to @value
 */


/**
 * g_file_has_prefix:
 * @file: input #GFile.
 * @prefix: input #GFile.
 *
 * Checks whether @file has the prefix specified by @prefix. In other word,
 * if the names of inital elements of @file<!-- -->s pathname match @prefix.
 * Only full pathname elements are matched, so a path like /foo is not
 * considered a prefix of /foobar, only of /foo/bar.
 * This call does no i/o, as it works purely on names. As such it can
 * sometimes return %FALSE even if @file is inside a @prefix (from a
 * filesystem point of view), because the prefix of @file is an alias
 * of @prefix.
 * %FALSE otherwise.
 *
 * Virtual: prefix_matches
 * Returns: %TRUE if the @files's parent, grandparent, etc is @prefix.
 */


/**
 * SECTION:gfileattribut:
 * @short_description: Key-Value Paired File Attributes
 * @include: gio/gio.h
 * @see_also: #GFile, #GFileInfo
 *
 * File attributes in GIO consist of a list of key-value pairs.
 * Keys are strings that contain a key namespace and a key name, separated
 * by a colon, e.g. "namespace:keyname". Namespaces are included to sort
 * key-value pairs by namespaces for relevance. Keys can be retrived
 * using wildcards, e.g. "standard::*" will return all of the keys in the
 * "standard" namespace.
 * Values are stored within the list in #GFileAttributeValue structures.
 * Values can store different types, listed in the enum #GFileAttributeType.
 * Upon creation of a #GFileAttributeValue, the type will be set to
 * %G_FILE_ATTRIBUTE_TYPE_INVALID.
 * The list of possible attributes for a filesystem (pointed to by a #GFile) is
 * availible as a #GFileAttributeInfoList. This list is queryable by key names
 * as indicated earlier.
 * Classes that implement #GFileIface will create a #GFileAttributeInfoList and
 * install default keys and values for their given file system, architecture,
 * and other possible implementation details (e.g., on a UNIX system, a file
 * attribute key will be registered for the user id for a given file).
 * <para>
 * <table>
 * <title>GFileAttributes Default Namespaces</title>
 * <tgroup cols='2' align='left'><thead>
 * <row><entry>Namspace</entry><entry>Description</entry></row>
 * </thead>
 * <tbody>
 * <row><entry>"standard"</entry><entry>The "Standard" namespace. General file
 * information that any application may need should be put in this namespace.
 * Examples include the file's name, type, and size.</entry></row>
 * <row><entry>"etag"</entry><entry>The <link linkend="gfile-etag">"Entity Tag"</link>
 * namespace. Currently, the only key in this namespace is "value", which contains
 * the value of the current entity tag.</entry></row>
 * <row><entry>"id"</entry><entry>The "Identification" namespace. This
 * namespace is used by file managers and applications that list directories
 * to check for loops and to uniquely identify files.</entry></row>
 * <row><entry>"access"</entry><entry>The "Access" namespace. Used to check
 * if a user has the proper privilidges to access files and perform
 * file operations. Keys in this namespace are made to be generic
 * and easily understood, e.g. the "can_read" key is %TRUE if
 * the current user has permission to read the file. UNIX permissions and
 * NTFS ACLs in Windows should be mapped to these values.</entry></row>
 * <row><entry>"mountable"</entry><entry>The "Mountable" namespace. Includes
 * simple boolean keys for checking if a file or path supports mount operations, e.g.
 * mount, unmount, eject. These are used for files of type %G_FILE_TYPE_MOUNTABLE.</entry></row>
 * <row><entry>"time"</entry><entry>The "Time" namespace. Includes file
 * access, changed, created times. </entry></row>
 * <row><entry>"unix"</entry><entry>The "Unix" namespace. Includes UNIX-specific
 * information and may not be available for all files. Examples include
 * the UNIX "UID", "GID", etc.</entry></row>
 * <row><entry>"dos"</entry><entry>The "DOS" namespace. Includes DOS-specific
 * information and may not be available for all files. Examples include
 * "is_system" for checking if a file is marked as a system file, and "is_archive"
 * for checking if a file is marked as an archive file.</entry></row>
 * <row><entry>"owner"</entry><entry>The "Owner" namespace. Includes information
 * about who owns a file. May not be available for all file systems. Examples include
 * "user" for getting the user name of the file owner. This information is often mapped from
 * some backend specific data such as a unix UID.</entry></row>
 * <row><entry>"thumbnail"</entry><entry>The "Thumbnail" namespace. Includes
 * information about file thumbnails and their location within the file system. Exaples of
 * keys in this namespace include "path" to get the location of a thumbnail, and "failed"
 * to check if thumbnailing of the file failed.</entry></row>
 * <row><entry>"filesystem"</entry><entry>The "Filesystem" namespace. Gets information
 * about the file system where a file is located, such as its type, how much
 * space is left available, and the overall size of the file system.</entry></row>
 * <row><entry>"gvfs"</entry><entry>The "GVFS" namespace. Keys in this namespace
 * contain information about the current GVFS backend in use. </entry></row>
 * <row><entry>"xattr"</entry><entry>The "xattr" namespace. Gets information
 * about extended user attributes. See attr(5). The "user." prefix of the
 * extended user attribute name is stripped away when constructing keys in
 * this namespace, e.g. "xattr::mime_type" for the extended attribute with
 * the name "user.mime_type". Note that this information is only available
 * if GLib has been built with extended attribute support.</entry></row>
 * <row><entry>"xattr-sys"</entry><entry>The "xattr-sys" namespace.
 * Gets information about extended attributes which are not user-specific.
 * See attr(5). Note that this information is only available if GLib
 * has been built with extended attribute support.</entry></row>
 * <row><entry>"selinux"</entry><entry>The "SELinux" namespace. Includes
 * information about the SELinux context of files. Note that this information
 * is only available if GLib has been built with SELinux support.</entry></row>
 * </tbody>
 * </tgroup>
 * </table>
 * </para>
 * Please note that these are not all of the possible namespaces.
 * More namespaces can be added from GIO modules or by individual applications.
 * For more information about writing GIO modules, see #GIOModule.
 * <!-- TODO: Implementation note about using extended attributes on supported
 * file systems -->
 * <para><table>
 * <title>GFileAttributes Built-in Keys and Value Types</title>
 * <tgroup cols='3' align='left'><thead>
 * <row><entry>Enum Value</entry><entry>Namespace:Key</entry><entry>Value Type</entry></row>
 * </thead><tbody>
 * <row><entry>%G_FILE_ATTRIBUTE_STANDARD_TYPE</entry><entry>standard::type</entry><entry>uint32 (#GFileType)</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_STANDARD_IS_HIDDEN</entry><entry>standard::is-hidden</entry><entry>boolean</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_STANDARD_IS_BACKUP</entry><entry>standard::is-backup</entry><entry>boolean</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_STANDARD_IS_SYMLINK</entry><entry>standard::is-symlink</entry><entry>boolean</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_STANDARD_IS_VIRTUAL</entry><entry>standard::is-virtual</entry><entry>boolean</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_STANDARD_NAME</entry><entry>standard::name</entry><entry>byte string</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_STANDARD_DISPLAY_NAME</entry><entry>standard::display-name</entry><entry>string</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_STANDARD_EDIT_NAME</entry><entry>standard::edit-name</entry><entry>string</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_STANDARD_ICON</entry><entry>standard::icon</entry><entry>object (#GIcon)</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_STANDARD_CONTENT_TYPE</entry><entry>standard::content-type</entry><entry>string</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_STANDARD_FAST_CONTENT_TYPE</entry><entry>standard::fast-content-type</entry><entry>string</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_STANDARD_SIZE</entry><entry>standard::size</entry><entry>uint64</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_STANDARD_ALLOCATED_SIZE</entry><entry>standard::allocated-size</entry><entry>uint64</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_STANDARD_SYMLINK_TARGET</entry><entry>standard::symlink-target</entry><entry>byte string</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_STANDARD_TARGET_URI</entry><entry>standard::target-uri</entry><entry>string</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_STANDARD_SORT_ORDER</entry><entry>standard::sort-order</entry><entry>int32</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_ETAG_VALUE</entry><entry>etag::value</entry><entry>string</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_ID_FILE</entry><entry>id::file</entry><entry>string</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_ID_FILESYSTEM</entry><entry>id::filesystem</entry><entry>string</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_ACCESS_CAN_READ</entry><entry>access::can-read</entry><entry>boolean</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_ACCESS_CAN_WRITE</entry><entry>access::can-write</entry><entry>boolean</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_ACCESS_CAN_EXECUTE</entry><entry>access::can-execute</entry><entry>boolean</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_ACCESS_CAN_DELETE</entry><entry>access::can-delete</entry><entry>boolean</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_ACCESS_CAN_TRASH</entry><entry>access::can-trash</entry><entry>boolean</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_ACCESS_CAN_RENAME</entry><entry>access::can-rename</entry><entry>boolean</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_MOUNTABLE_CAN_MOUNT</entry><entry>mountable::can-mount</entry><entry>boolean</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_MOUNTABLE_CAN_UNMOUNT</entry><entry>mountable::can-unmount</entry><entry>boolean</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_MOUNTABLE_CAN_EJECT</entry><entry>mountable::can-eject</entry><entry>boolean</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_MOUNTABLE_UNIX_DEVICE</entry><entry>mountable::unix-device</entry><entry>uint32</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_MOUNTABLE_UNIX_DEVICE_FILE</entry><entry>mountable::unix-device-file</entry><entry>string</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_MOUNTABLE_HAL_UDI</entry><entry>mountable::hal-udi</entry><entry>string</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_TIME_MODIFIED</entry><entry>time::modified</entry><entry>uint64</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_TIME_MODIFIED_USEC</entry><entry>time::modified-usec</entry><entry>uint32</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_TIME_ACCESS</entry><entry>time::access</entry><entry>uint64</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_TIME_ACCESS_USEC</entry><entry>time::access-usec</entry><entry>uint32</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_TIME_CHANGED</entry><entry>time::changed</entry><entry>uint64</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_TIME_CHANGED_USEC</entry><entry>time::changed-usec</entry><entry>uint32</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_TIME_CREATED</entry><entry>time::created</entry><entry>uint64</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_TIME_CREATED_USEC</entry><entry>time::created-usec</entry><entry>uint32</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_UNIX_DEVICE</entry><entry>unix::device</entry><entry>uint32</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_UNIX_INODE</entry><entry>unix::inode</entry><entry>uint64</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_UNIX_MODE</entry><entry>unix::mode</entry><entry>uint32</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_UNIX_NLINK</entry><entry>unix::nlink</entry><entry>uint32</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_UNIX_UID</entry><entry>unix::uid</entry><entry>uint32</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_UNIX_GID</entry><entry>unix::gid</entry><entry>uint32</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_UNIX_RDEV</entry><entry>unix::rdev</entry><entry>uint32</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_UNIX_BLOCK_SIZE</entry><entry>unix::block-size</entry><entry>uint32</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_UNIX_BLOCKS</entry><entry>unix::blocks</entry><entry>uint64</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_UNIX_IS_MOUNTPOINT</entry><entry>unix::is-mountpoint</entry><entry>boolean</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_DOS_IS_ARCHIVE</entry><entry>dos::is-archive</entry><entry>boolean</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_DOS_IS_SYSTEM</entry><entry>dos::is-system</entry><entry>boolean</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_OWNER_USER</entry><entry>owner::user</entry><entry>string</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_OWNER_USER_REAL</entry><entry>owner::user-real</entry><entry>string</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_OWNER_GROUP</entry><entry>owner::group</entry><entry>string</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_THUMBNAIL_PATH</entry><entry>thumbnail::path</entry><entry>bytestring</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_THUMBNAILING_FAILED</entry><entry>thumbnail::failed</entry><entry>boolean</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_PREVIEW_ICON</entry><entry>preview::icon</entry><entry>object (#GIcon)</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_FILESYSTEM_SIZE</entry><entry>filesystem::size</entry><entry>uint64</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_FILESYSTEM_FREE</entry><entry>filesystem::free</entry><entry>uint64</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_FILESYSTEM_TYPE</entry><entry>filesystem::type</entry><entry>string</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_FILESYSTEM_READONLY</entry><entry>filesystem::readonly</entry><entry>boolean</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_GVFS_BACKEND</entry><entry>gvfs::backend</entry><entry>string</entry></row>
 * <row><entry>%G_FILE_ATTRIBUTE_SELINUX_CONTEXT</entry><entry>selinux::context</entry><entry>string</entry></row>
 * </tbody></tgroup></table></para>
 * Note that there are no predefined keys in the "xattr" and "xattr-sys"
 * namespaces. Keys for the "xattr" namespace are constructed by stripping
 * away the "user." prefix from the extended user attribute, and prepending
 * "xattr::". Keys for the "xattr-sys" namespace are constructed by
 * concatenating "xattr-sys::" with the extended attribute name. All extended
 * attribute values are returned as hex-encoded strings in which bytes outside
 * the ASCII range are encoded as hexadecimal escape sequences of the form
 * \x<replaceable>nn</replaceable>.
 */


/**
 * g_drive_eject:
 * @drive: a #GDrive.
 * @flags: flags affecting the unmount if required for eject
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback, or %NULL.
 * @user_data: user data to pass to @callback
 *
 * Asynchronously ejects a drive.
 * When the operation is finished, @callback will be called.
 * You can then call g_drive_eject_finish() to obtain the
 * result of the operation.
 *
 * Deprecated: 2.22: Use g_drive_eject_with_operation() instead.
 */


/**
 * GVolumeMonitor::drive-stop-button:
 * @volume_monitor: The volume monitor emitting the signal.
 * @drive: the drive where the stop button was pressed
 *
 * Emitted when the stop button is pressed on @drive.
 *
 * Since: 2.22
 */


/**
 * SECTION:gasynchelpe:
 * @short_description: Asynchronous Helper Functions
 * @include: gio/gio.h
 * @see_also: #GAsyncReady
 *
 * Provides helper functions for asynchronous operations.
 */


/**
 * g_drive_get_start_stop_type:
 * @drive: a #GDrive.
 *
 * Gets a hint about how a drive can be started/stopped.
 *
 * Returns: A value from the #GDriveStartStopType enumeration.
 * Since: 2.22
 */


/**
 * g_dbus_connection_new_finish:
 * @res: A #GAsyncResult obtained from the #GAsyncReadyCallback passed to g_dbus_connection_new().
 * @error: Return location for error or %NULL.
 *
 * Finishes an operation started with g_dbus_connection_new().
 *
 * Returns: A #GDBusConnection or %NULL if @error is set. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * g_bus_own_name:
 * @bus_type: The type of bus to own a name on.
 * @name: The well-known name to own.
 * @flags: A set of flags from the #GBusNameOwnerFlags enumeration.
 * @bus_acquired_handler: Handler to invoke when connected to the bus of type @bus_type or %NULL.
 * @name_acquired_handler: Handler to invoke when @name is acquired or %NULL.
 * @name_lost_handler: Handler to invoke when @name is lost or %NULL.
 * @user_data: User data to pass to handlers.
 * @user_data_free_func: Function for freeing @user_data or %NULL.
 *
 * Starts acquiring @name on the bus specified by @bus_type and calls
 * acquired respectively lost. Callbacks will be invoked in the <link
 * linkend="g-main-context-push-thread-default">thread-default main
 * loop</link> of the thread you are calling this function from.
 * You are guaranteed that one of the @name_acquired_handler and @name_lost_handler
 * callbacks will be invoked after calling this function - there are three
 * possible cases:
 * <itemizedlist>
 * <listitem><para>
 * </para></listitem>
 * <listitem><para>
 * </para></listitem>
 * <listitem><para>
 * </para></listitem>
 * </itemizedlist>
 * When you are done owning the name, just call g_bus_unown_name()
 * with the owner id this function returns.
 * If the name is acquired or lost (for example another application
 * could acquire the name if you allow replacement or the application
 * currently owning the name exits), the handlers are also invoked. If the
 * #GDBusConnection that is used for attempting to own the name
 * closes, then @name_lost_handler is invoked since it is no
 * longer possible for other processes to access the process.
 * You cannot use g_bus_own_name() several times for the same name (unless
 * interleaved with calls to g_bus_unown_name()) - only the first call
 * will work.
 * Another guarantee is that invocations of @name_acquired_handler
 * and @name_lost_handler are guaranteed to alternate; that
 * is, if @name_acquired_handler is invoked then you are
 * guaranteed that the next time one of the handlers is invoked, it
 * will be @name_lost_handler. The reverse is also true.
 * If you plan on exporting objects (using e.g.
 * g_dbus_connection_register_object()), note that it is generally too late
 * to export the objects in @name_acquired_handler. Instead, you can do this
 * in @bus_acquired_handler since you are guaranteed that this will run
 * before @name is requested from the bus.
 * This behavior makes it very simple to write applications that wants
 * to own names and export objects, see <xref linkend="gdbus-owning-names"/>.
 * Simply register objects to be exported in @bus_acquired_handler and
 * unregister the objects (if any) in @name_lost_handler.
 * g_bus_unown_name() to stop owning the name.
 *
 * Returns: An identifier (never 0) that an be used with
 * Since: 2.26
 */


/**
 * g_dbus_message_get_error_name:
 * @message: A #GDBusMessage.
 *
 * Convenience getter for the %G_DBUS_MESSAGE_HEADER_FIELD_ERROR_NAME header field.
 *
 * Returns: The value.
 * Since: 2.26
 */


/**
 * GDBusProxy:g-name-owner:
 *
 * The unique name that owns #GDBusProxy:name or %NULL if no-one
 * currently owns that name. You may connect to #GObject::notify signal to
 * track changes to this property.
 *
 * Since: 2.26
 */


/**
 * g_socket_close:
 * @socket: a #GSocket
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Closes the socket, shutting down any active connection.
 * Closing a socket does not wait for all outstanding I/O operations
 * to finish, so the caller should not rely on them to be guaranteed
 * to complete even if the close returns with no error.
 * Once the socket is closed, all other operations will return
 * %G_IO_ERROR_CLOSED. Closing a socket multiple times will not
 * return an error.
 * Sockets will be automatically closed when the last reference
 * is dropped, but you might want to call this function to make sure
 * resources are released as early as possible.
 * Beware that due to the way that TCP works, it is possible for
 * recently-sent data to be lost if either you close a socket while the
 * %G_IO_IN condition is set, or else if the remote connection tries to
 * send something to you after you close the socket but before it has
 * finished reading all of the data you sent. There is no easy generic
 * way to avoid this problem; the easiest fix is to design the network
 * protocol such that the client will never send data "out of turn".
 * Another solution is for the server to half-close the connection by
 * calling g_socket_shutdown() with only the @shutdown_write flag set,
 * and then wait for the client to notice this and close its side of the
 * connection, after which the server can safely call g_socket_close().
 * (This is what #GTcpConnection does if you call
 * g_tcp_connection_set_graceful_disconnect(). But of course, this
 * only works if the client will close its connection after the server
 * does.)
 *
 * Returns: %TRUE on success, %FALSE on error
 * Since: 2.22
 */


/**
 * g_dbus_proxy_new_for_bus:
 * @bus_type: A #GBusType.
 * @flags: Flags used when constructing the proxy.
 * @info: A #GDBusInterfaceInfo specifying the minimal interface that @proxy conforms to or %NULL.
 * @name: A bus name (well-known or unique).
 * @object_path: An object path.
 * @interface_name: A D-Bus interface name.
 * @cancellable: A #GCancellable or %NULL.
 * @callback: Callback function to invoke when the proxy is ready.
 * @user_data: User data to pass to @callback.
 *
 * Like g_dbus_proxy_new() but takes a #GBusType instead of a #GDBusConnection.
 * See <xref linkend="gdbus-wellknown-proxy"/> for an example of how #GDBusProxy can be used.
 *
 * Since: 2.26
 */


/**
 * g_dbus_message_print:
 * @message: A #GDBusMessage.
 * @indent: Indentation level.
 *
 * Produces a human-readable multi-line description of @message.
 * The contents of the description has no ABI guarantees, the contents
 * and formatting is subject to change at any time. Typical output
 * looks something like this:
 * <programlisting>
 * Headers:
 * path -> objectpath '/org/gtk/GDBus/TestObject'
 * interface -> 'org.gtk.GDBus.TestInterface'
 * member -> 'GimmeStdout'
 * destination -> ':1.146'
 * UNIX File Descriptors:
 * (none)
 * </programlisting>
 * or
 * <programlisting>
 * Headers:
 * reply-serial -> uint32 4
 * destination -> ':1.159'
 * sender -> ':1.146'
 * num-unix-fds -> uint32 1
 * UNIX File Descriptors:
 * </programlisting>
 *
 * Type:    method-return
 * Flags:   no-reply-expected
 * Version: 0
 * Serial:  477
 * Body: ()
 * Fd 12: dev=0:10,mode=020620,ino=5,uid=500,gid=5,rdev=136:2,size=0,atime=1273085037,mtime=1273085851,ctime=1272982635
 * Returns: A string that should be freed with g_free().
 * Since: 2.26
 */


/**
 * g_simple_async_result_set_error_va:
 * @simple: a #GSimpleAsyncResult.
 * @domain: a #GQuark (usually #G_IO_ERROR).
 * @code: an error code.
 * @format: a formatted error reporting string.
 * @args: va_list of arguments.
 *
 * Sets an error within the asynchronous result without a #GError.
 * Unless writing a binding, see g_simple_async_result_set_error().
 */


/**
 * g_permission_get_allowed:
 * @permission: a #GPermission instance
 * @returns: the value of the 'allowed' property
 *
 * Gets the value of the 'allowed' property.  This property is %TRUE if
 * the caller currently has permission to perform the action that
 *
 * Since: 2.26
 */


/**
 * g_settings_get_mapped:
 * @settings: a #GSettings object
 * @key: the key to get the value for
 * @mapping: the function to map the value in the settings database to the value used by the application
 * @user_data: user data for @mapping
 * @returns: (transfer full): the result, which may be %NULL
 *
 * Gets the value that is stored at @key in @settings, subject to
 * application-level validation/mapping.
 * You should use this function when the application needs to perform
 * some processing on the value of the key (for example, parsing).  The
 * indicates that the processing was unsuccessful (due to a parse error,
 * for example) then the mapping is tried again with another value.
 * This allows a robust 'fall back to defaults' behaviour to be
 * implemented somewhat automatically.
 * The first value that is tried is the user's setting for the key.  If
 * the mapping function fails to map this value, other values may be
 * tried in an unspecified order (system or site defaults, translated
 * schema default values, untranslated schema default values, etc).
 * If the mapping function fails for all possible values, one additional
 * If the mapping function still indicates failure at this point then
 * the application will be aborted.
 * The result parameter for the @mapping function is pointed to a
 * #gpointer which is initially set to %NULL.  The same pointer is given
 * to each invocation of @mapping.  The final value of that #gpointer is
 * what is returned by this function.  %NULL is valid; it is returned
 * just as any other value would be.
 *
 * Attempt is made: the mapping function is called with a %NULL value.
 */


/**
 * g_srv_target_get_priority:
 * @target: a #GSrvTarget
 *
 * Gets @target's priority. You should not need to look at this;
 * #GResolver already sorts the targets according to the algorithm in
 * RFC 2782.
 *
 * Returns: @target's priority
 * Since: 2.22
 */


/**
 * GActionGroup::action-state-changed:
 * @action_group: the #GActionGroup that changed
 * @action_name: the name of the action in @action_group
 * @value: the new value of the state
 *
 * Signals that the state of the named action has changed.
 *
 * Since: 2.28
 */


/**
 * g_mount_operation_get_choice:
 * @op: a #GMountOperation.
 *
 * Gets a choice from the mount operation.
 * the choice's list, or %0.
 *
 * Returns: an integer containing an index of the user's choice from
 */


/**
 * g_zlib_decompressor_new:
 * @format: The format to use for the compressed data
 *
 * Creates a new #GZlibDecompressor.
 *
 * Returns: a new #GZlibDecompressor
 * Since: 2.24
 */


/**
 * g_network_service_get_scheme:
 * @srv: a #GNetworkService
 *
 * Get's the URI scheme used to resolve proxies. By default, the service name
 * is used as scheme.
 *
 * Returns: @srv's scheme name
 * Since: 2.26
 */


/**
 * g_dbus_proxy_set_cached_property:
 * @proxy: A #GDBusProxy
 * @property_name: Property name.
 * @value: Value for the property or %NULL to remove it from the cache.
 *
 * If @value is not %NULL, sets the cached value for the property with
 * name @property_name to the value in @value.
 * If @value is %NULL, then the cached value is removed from the
 * property cache.
 * If @proxy has an expected interface (see
 * #GDBusProxy:g-interface-info), then @property_name (for existence)
 * and @value (for the type) is checked against it.
 * If the @value #GVariant is floating, it is consumed. This allows
 * convenient 'inline' use of g_variant_new(), e.g.
 * |[
 * g_dbus_proxy_set_cached_property (proxy,
 * "SomeProperty",
 * g_variant_new ("(si)",
 * "A String",
 * 42));
 * ]|
 * Normally you will not need to use this method since @proxy is
 * tracking changes using the
 * <literal>org.freedesktop.DBus.Properties.PropertiesChanged</literal>
 * D-Bus signal. However, for performance reasons an object may decide
 * to not use this signal for some properties and instead use a
 * proprietary out-of-band mechanism to transmit changes.
 * As a concrete example, consider an object with a property
 * <literal>ChatroomParticipants</literal> which is an array of
 * strings. Instead of transmitting the same (long) array every time
 * the property changes, it is more efficient to only transmit the
 * delta using e.g. signals <literal>ChatroomParticipantJoined(String
 * name)</literal> and <literal>ChatroomParticipantParted(String
 * name)</literal>.
 *
 * Since: 2.26
 */


/**
 * g_unix_fd_message_append_fd:
 * @message: a #GUnixFDMessage
 * @fd: a valid open file descriptor
 * @error: a #GError pointer
 *
 * Adds a file descriptor to @message.
 * The file descriptor is duplicated using dup(). You keep your copy
 * of the descriptor and the copy contained in @message will be closed
 * when @message is finalized.
 * A possible cause of failure is exceeding the per-process or
 * system-wide file descriptor limit.
 *
 * Returns: %TRUE in case of success, else %FALSE (and @error is set)
 * Since: 2.22
 */


/**
 * g_file_unmount_mountable_with_operation_finish:
 * @file: input #GFile.
 * @result: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes an unmount operation, see g_file_unmount_mountable_with_operation() for details.
 * Finish an asynchronous unmount operation that was started
 * with g_file_unmount_mountable_with_operation().
 * otherwise.
 *
 * Returns: %TRUE if the operation finished successfully. %FALSE
 * Since: 2.22
 */


/**
 * g_simple_async_result_set_handle_cancellation:
 * @simple: a #GSimpleAsyncResult.
 * @handle_cancellation: a #gboolean.
 *
 * Sets whether to handle cancellation within the asynchronous operation.
 */


/**
 * g_dbus_method_invocation_return_value:
 * @invocation: A #GDBusMethodInvocation.
 * @parameters: A #GVariant tuple with out parameters for the method or %NULL if not passing any parameters.
 *
 * Finishes handling a D-Bus method call by returning @parameters.
 * If the @parameters GVariant is floating, it is consumed.
 * It is an error if @parameters is not of the right format.
 * This method will free @invocation, you cannot use it afterwards.
 *
 * Since: 2.26
 */


/**
 * GSocketAddress:
 *
 * A socket endpoint address, corresponding to <type>struct sockaddr</type>
 * or one of its subtypes.
 */


/**
 * g_io_stream_close_finish:
 * @stream: a #GIOStream
 * @result: a #GAsyncResult
 * @error: a #GError location to store the error occuring, or %NULL to ignore
 *
 * Closes a stream.
 *
 * Returns: %TRUE if stream was successfully closed, %FALSE otherwise.
 * Since: 2.22
 */


/**
 * g_socket_connection_factory_lookup_type:
 * @family: a #GSocketFamily
 * @type: a #GSocketType
 * @protocol_id: a protocol id
 *
 * Looks up the #GType to be used when creating socket connections on
 * sockets with the specified @family,@type and @protocol_id.
 * If no type is registered, the #GSocketConnection base type is returned.
 *
 * Returns: a #GType
 * Since: 2.22
 */


/**
 * g_file_load_partial_contents_async:
 * @file: input #GFile.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @read_more_callback: a #GFileReadMoreCallback to receive partial data and to specify whether further data should be read.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: the data to pass to the callback functions.
 *
 * Reads the partial contents of a file. A #GFileReadMoreCallback should be
 * used to stop reading from the file when appropriate, else this function
 * will behave exactly as g_file_load_contents_async(). This operation
 * can be finished by g_file_load_partial_contents_finish().
 * Users of this function should be aware that @user_data is passed to
 * both the @read_more_callback and the @callback.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 */


/**
 * g_io_stream_is_closed:
 * @stream: a #GIOStream
 *
 * Checks if a stream is closed.
 *
 * Returns: %TRUE if the stream is closed.
 * Since: 2.22
 */


/**
 * g_inet_address_get_is_loopback:
 * @address: a #GInetAddress
 *
 * Tests whether @address is the loopback address for its family.
 *
 * Returns: %TRUE if @address is the loopback address for its family.
 * Since: 2.22
 */


/**
 * g_file_get_parent:
 * @file: input #GFile.
 *
 * Gets the parent directory for the @file.
 * If the @file represents the root directory of the
 * file system, then %NULL will be returned.
 * This call does no blocking i/o.
 * #GFile or %NULL if there is no parent.
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): a #GFile structure to the parent of the given
 */


/**
 * g_application_get_is_registered:
 * @application: a #GApplication
 * @returns: %TRUE if @application is registered
 *
 * Checks if @application is registered.
 * An application is registered if g_application_register() has been
 * successfully called.
 *
 * Since: 2.28
 */


/**
 * g_periodic_new:
 * @hz: the frequency of the new clock in Hz (between 1 and 120)
 * @priority: the #GSource priority to run at
 *
 * Creates a new #GPeriodic clock.
 * The created clock is attached to the thread-default main context in
 * effect at the time of the call to this function.  See
 * g_main_context_push_thread_default() for more information.
 * Due to the fact that #GMainContext is only accurate to the nearest
 * millisecond, the frequency can not meaningfully get too close to
 * 1000.  For this reason, it is arbitrarily bounded at 120.
 *
 * Returns: a new #GPeriodic
 * Since: 2.28
 */


/**
 * g_file_parse_name:
 * @parse_name: a file name or path to be parsed.
 *
 * Constructs a #GFile with the given @parse_name (i.e. something given by g_file_get_parse_name()).
 * This operation never fails, but the returned object might not support any I/O
 * operation if the @parse_name cannot be parsed.
 *
 * Returns: (transfer full): a new #GFile.
 */


/**
 * g_simple_async_result_is_valid:
 * @result: the #GAsyncResult passed to the _finish function.
 * @source: the #GObject passed to the _finish function.
 * @source_tag: the asynchronous function.
 *
 * Ensures that the data passed to the _finish function of an async
 * operation is consistent.  Three checks are performed.
 * First, @result is checked to ensure that it is really a
 * #GSimpleAsyncResult.  Second, @source is checked to ensure that it
 * matches the source object of @result.  Third, @source_tag is
 * checked to ensure that it is either %NULL (as it is when the result was
 * created by g_simple_async_report_error_in_idle() or
 * g_simple_async_report_gerror_in_idle()) or equal to the
 * convention, is a pointer to the _async function corresponding to the
 * _finish function from which this function is called).
 *
 * Returns: #TRUE if all checks passed or #FALSE if any failed.
 */


/**
 * g_action_get_parameter_type:
 * @action: a #GAction
 *
 * Queries the type of the parameter that must be given when activating
 * When activating the action using g_action_activate(), the #GVariant
 * given to that function must be of the type returned by this function.
 * In the case that this function returns %NULL, you must not give any
 * #GVariant, but %NULL instead.
 *
 * Returns: (allow-none): the parameter type
 * Since: 2.28
 */


/**
 * g_dbus_connection_get_exit_on_close:
 * @connection: A #GDBusConnection.
 *
 * Gets whether the process is terminated when @connection is
 * closed by the remote peer. See
 * #GDBusConnection:exit-on-close for more details.
 * closed by the remote peer.
 *
 * Returns: Whether the process is terminated when @connection is
 * Since: 2.26
 */


/**
 * g_vfs_get_local:
 *
 * Gets the local #GVfs for the system.
 *
 * Returns: (transfer none): a #GVfs.
 */


/**
 * g_dbus_message_get_signature:
 * @message: A #GDBusMessage.
 *
 * Convenience getter for the %G_DBUS_MESSAGE_HEADER_FIELD_SIGNATURE header field.
 *
 * Returns: The value.
 * Since: 2.26
 */


/**
 * g_file_info_get_attribute_data:
 * @info: a #GFileInfo
 * @attribute: a file attribute key
 * @type: (out) (allow-none): return location for the attribute type, or %NULL
 * @value_pp: (out) (allow-none): return location for the attribute value, or %NULL
 * @status: (out) (allow-none): return location for the attribute status, or %NULL
 *
 * Gets the attribute type, value and status for an attribute key.
 * %FALSE otherwise.
 *
 * Returns: (transfer none): %TRUE if @info has an attribute named @attribute,
 */


/**
 * SECTION:gsrvtarge:
 * @short_description: DNS SRV record target
 * @include: gio/gio.h
 *
 * SRV (service) records are used by some network protocols to provide
 * service-specific aliasing and load-balancing. For example, XMPP
 * (Jabber) uses SRV records to locate the XMPP server for a domain;
 * rather than connecting directly to "example.com" or assuming a
 * specific server hostname like "xmpp.example.com", an XMPP client
 * would look up the "xmpp-client" SRV record for "example.com", and
 * then connect to whatever host was pointed to by that record.
 * You can use g_resolver_lookup_service() or
 * g_resolver_lookup_service_async() to find the #GSrvTarget<!-- -->s
 * for a given service. However, if you are simply planning to connect
 * to the remote service, you can use #GNetworkService's
 * #GSocketConnectable interface and not need to worry about
 * #GSrvTarget at all.
 */


/**
 * g_proxy_resolver_is_supported:
 * @resolver: a #GProxyResolver
 *
 * Checks if @resolver can be used on this system. (This is used
 * internally; g_proxy_resolver_get_default() will only return a proxy
 * resolver that returns %TRUE for this method.)
 *
 * Returns: %TRUE if @resolver is supported.
 * Since: 2.26
 */


/**
 * GSettings::writable-change-event:
 * @settings: the object on which the signal was emitted
 * @key: the quark of the key, or 0
 * @returns: %TRUE to stop other handlers from being invoked for the event. FALSE to propagate the event further.
 *
 * The "writable-change-event" signal is emitted once per writability
 * change event that affects this settings object.  You should connect
 * to this signal if you are interested in viewing groups of changes
 * before they are split out into multiple emissions of the
 * "writable-changed" signal.  For most use cases it is more
 * appropriate to use the "writable-changed" signal.
 * In the event that the writability change applies only to a single
 * key, @key will be set to the #GQuark for that key.  In the event
 * that the writability change affects the entire settings object,
 * The default handler for this signal invokes the "writable-changed"
 * and "changed" signals for each affected key.  This is done because
 * changes in writability might also imply changes in value (if for
 * example, a new mandatory setting is introduced).  If any other
 * connected handler returns %TRUE then this default functionality
 * will be supressed.
 */


/**
 * g_socket_get_keepalive:
 * @socket: a #GSocket.
 *
 * Gets the keepalive mode of the socket. For details on this,
 * see g_socket_set_keepalive().
 *
 * Returns: %TRUE if keepalive is active, %FALSE otherwise.
 * Since: 2.22
 */


/**
 * g_dbus_generate_guid:
 *
 * Generate a D-Bus GUID that can be used with
 * e.g. g_dbus_connection_new().
 * See the D-Bus specification regarding what strings are valid D-Bus
 * GUID (for example, D-Bus GUIDs are not RFC-4122 compliant).
 *
 * Returns: A valid D-Bus GUID. Free with g_free().
 * Since: 2.26
 */


/**
 * SECTION:gico:
 * @short_description: Interface for icons
 * @include: gio/gio.h
 *
 * #GIcon is a very minimal interface for icons. It provides functions
 * for checking the equality of two icons, hashing of icons and
 * serializing an icon to and from strings.
 * #GIcon does not provide the actual pixmap for the icon as this is out
 * of GIO's scope, however implementations of #GIcon may contain the name
 * of an icon (see #GThemedIcon), or the path to an icon (see #GLoadableIcon).
 * To obtain a hash of a #GIcon, see g_icon_hash().
 * To check if two #GIcons are equal, see g_icon_equal().
 * For serializing a #GIcon, use g_icon_to_string() and
 * g_icon_new_for_string().
 * If your application or library provides one or more #GIcon
 * implementations you need to ensure that each #GType is registered
 * with the type system prior to calling g_icon_new_for_string().
 */


/**
 * g_socket_receive:
 * @socket: a #GSocket
 * @buffer: a buffer to read data into (which should be at least @size bytes long).
 * @size: the number of bytes you want to read from the socket
 * @cancellable: a %GCancellable or %NULL
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Receive data (up to @size bytes) from a socket. This is mainly used by
 * connection-oriented sockets; it is identical to g_socket_receive_from()
 * with @address set to %NULL.
 * For %G_SOCKET_TYPE_DATAGRAM and %G_SOCKET_TYPE_SEQPACKET sockets,
 * g_socket_receive() will always read either 0 or 1 complete messages from
 * the socket. If the received message is too large to fit in @buffer, then
 * the data beyond @size bytes will be discarded, without any explicit
 * indication that this has occurred.
 * For %G_SOCKET_TYPE_STREAM sockets, g_socket_receive() can return any
 * number of bytes, up to @size. If more than @size bytes have been
 * received, the additional data will be returned in future calls to
 * g_socket_receive().
 * If the socket is in blocking mode the call will block until there is
 * some data to receive or there is an error. If there is no data available
 * and the socket is in non-blocking mode, a %G_IO_ERROR_WOULD_BLOCK error
 * will be returned. To be notified when data is available, wait for the
 * %G_IO_IN condition.
 * On error -1 is returned and @error is set accordingly.
 *
 * Returns: Number of bytes read, or -1 on error
 * Since: 2.22
 */


/**
 * g_dbus_message_set_unix_fd_list:
 * @message: A #GDBusMessage.
 * @fd_list: (allow-none): A #GUnixFDList or %NULL.
 *
 * Sets the UNIX file descriptors associated with @message. As a
 * side-effect the %G_DBUS_MESSAGE_HEADER_FIELD_NUM_UNIX_FDS header
 * field is set to the number of fds in @fd_list (or cleared if
 * This method is only available on UNIX.
 *
 * Since: 2.26
 */


/**
 * g_socket_connect:
 * @socket: a #GSocket.
 * @address: a #GSocketAddress specifying the remote address.
 * @cancellable: a %GCancellable or %NULL
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Connect the socket to the specified remote address.
 * For connection oriented socket this generally means we attempt to make
 * a connection to the @address. For a connection-less socket it sets
 * the default address for g_socket_send() and discards all incoming datagrams
 * from other sources.
 * Generally connection oriented sockets can only connect once, but
 * connection-less sockets can connect multiple times to change the
 * default address.
 * If the connect call needs to do network I/O it will block, unless
 * non-blocking I/O is enabled. Then %G_IO_ERROR_PENDING is returned
 * and the user can be notified of the connection finishing by waiting
 * for the G_IO_OUT condition. The result of the connection can then be
 * checked with g_socket_check_connect_result().
 *
 * Returns: %TRUE if connected, %FALSE on error.
 * Since: 2.22
 */


/**
 * g_file_read_async:
 * @file: input #GFile
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: the data to pass to callback function
 *
 * Asynchronously opens @file for reading.
 * For more details, see g_file_read() which is
 * the synchronous version of this call.
 * When the operation is finished, @callback will be called. You can then call
 * g_file_read_finish() to get the result of the operation.
 */


/**
 * g_dbus_server_get_flags:
 * @server: A #GDBusServer.
 *
 * Gets the flags for @server.
 *
 * Returns: A set of flags from the #GDBusServerFlags enumeration.
 * Since: 2.26
 */


/**
 * GMemoryOutputStream:data:
 *
 * Pointer to buffer where data will be written.
 *
 * Since: 2.24
 */


/**
 * g_settings_list_relocatable_schemas:
 *
 * Gets a list of the relocatable #GSettings schemas installed on the
 * system.  These are schemas that do not provide their own path.  It is
 * usual to instantiate these schemas directly, but if you want to you
 * can use g_settings_new_with_path() to specify the path.
 * The output of this function, tTaken together with the output of
 * g_settings_list_schemas() represents the complete list of all
 * installed schemas.
 * #GSettings schemas that are available.  The list must not be
 * modified or freed.
 *
 * Returns: (element-type utf8) (transfer none): a list of relocatable
 * Since: 2.28
 */


/**
 * SECTION:gmoun:
 * @short_description: Mount management
 * @include: gio/gio.h
 * @see_also: GVolume, GUnixMount
 *
 * The #GMount interface represents user-visible mounts. Note, when
 * porting from GnomeVFS, #GMount is the moral equivalent of #GnomeVFSVolume.
 * #GMount is a "mounted" filesystem that you can access. Mounted is in
 * quotes because it's not the same as a unix mount, it might be a gvfs
 * mount, but you can still access the files on it if you use GIO. Might or
 * might not be related to a volume object.
 * Unmounting a #GMount instance is an asynchronous operation. For
 * more information about asynchronous operations, see #GAsyncReady
 * and #GSimpleAsyncReady. To unmount a #GMount instance, first call
 * g_mount_unmount_with_operation() with (at least) the #GMount instance and a
 * #GAsyncReadyCallback.  The callback will be fired when the
 * operation has resolved (either with success or failure), and a
 * #GAsyncReady structure will be passed to the callback.  That
 * callback should then call g_mount_unmount_with_operation_finish() with the #GMount
 * and the #GAsyncReady data to see if the operation was completed
 * successfully.  If an @error is present when g_mount_unmount_with_operation_finish()
 * is called, then it will be filled with any error information.
 */


/**
 * g_drive_eject_with_operation:
 * @drive: a #GDrive.
 * @flags: flags affecting the unmount if required for eject
 * @mount_operation: a #GMountOperation or %NULL to avoid user interaction.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback, or %NULL.
 * @user_data: user data passed to @callback.
 *
 * Ejects a drive. This is an asynchronous operation, and is
 * finished by calling g_drive_eject_with_operation_finish() with the @drive
 * and #GAsyncResult data returned in the @callback.
 *
 * Since: 2.22
 */


/**
 * g_mount_can_unmount:
 * @mount: a #GMount.
 *
 * Checks if @mount can be mounted.
 *
 * Returns: %TRUE if the @mount can be unmounted.
 */


/**
 * g_io_error_from_win32_error:
 * @error_code: Windows error number.
 *
 * Converts some common error codes into GIO error codes. The
 * fallback value G_IO_ERROR_FAILED is returned for error codes not
 * handled.
 *
 * Returns: #GIOErrorEnum value for the given error number.
 * Since: 2.26
 */


/**
 * g_icon_hash:
 * @icon: #gconstpointer to an icon object.
 *
 * Gets a hash for an icon.
 * use in a #GHashTable or similar data structure.
 *
 * Virtual: hash
 * Returns: a #guint containing a hash for the @icon, suitable for
 */


/**
 * g_application_command_line_get_exit_status:
 * @cmdline: a #GApplicationCommandLine
 *
 * Gets the exit status of @cmdline.  See
 * g_application_command_line_set_exit_status() for more information.
 *
 * Returns: the exit status
 * Since: 2.28
 */


/**
 * g_socket_get_listen_backlog:
 * @socket: a #GSocket.
 *
 * Gets the listen backlog setting of the socket. For details on this,
 * see g_socket_set_listen_backlog().
 *
 * Returns: the maximum number of pending connections.
 * Since: 2.22
 */


/**
 * g_async_initable_new_valist_async:
 * @object_type: a #GType supporting #GAsyncInitable.
 * @first_property_name: the name of the first property, followed by the value, and other property value pairs, and ended by %NULL.
 * @var_args: The var args list generated from @first_property_name.
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the operation.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback to call when the initialization is finished
 * @user_data: the data to pass to callback function
 *
 * Helper function for constructing #GAsyncInitiable object. This is
 * similar to g_object_new_valist() but also initializes the object
 * asynchronously.
 * When the initialization is finished, @callback will be called. You can
 * then call g_async_initable_new_finish() to get the new object and check
 * for any errors.
 *
 * Since: 2.22
 */


/**
 * g_network_service_get_protocol:
 * @srv: a #GNetworkService
 *
 * Gets @srv's protocol name (eg, "tcp").
 *
 * Returns: @srv's protocol name
 * Since: 2.22
 */


/**
 * g_unix_fd_message_new:
 *
 * Creates a new #GUnixFDMessage containing an empty file descriptor
 * list.
 *
 * Returns: a new #GUnixFDMessage
 * Since: 2.22
 */


/**
 * g_settings_get_child:
 * @settings: a #GSettings object
 * @name: the name of the 'child' schema
 * @returns: (transfer full): a 'child' settings object
 *
 * Creates a 'child' settings object which has a base path of
 * <replaceable>base-path</replaceable>/@name", where
 * <replaceable>base-path</replaceable> is the base path of @settings.
 * The schema for the child settings object must have been declared
 * in the schema of @settings using a <tag class="starttag">child</tag> element.
 *
 * Since: 2.26
 */


/**
 * g_simple_action_group_new:
 *
 * Creates a new, empty, #GSimpleActionGroup.
 *
 * Returns: a new #GSimpleActionGroup
 * Since: 2.28
 */


/**
 * g_resolver_lookup_by_address_async:
 * @resolver: a #GResolver
 * @address: the address to reverse-resolve
 * @cancellable: a #GCancellable, or %NULL
 * @callback: callback to call after resolution completes
 * @user_data: data for @callback
 *
 * Begins asynchronously reverse-resolving @address to determine its
 * associated hostname, and eventually calls @callback, which must
 * call g_resolver_lookup_by_address_finish() to get the final result.
 *
 * Since: 2.22
 */


/**
 * g_dbus_method_info_ref:
 * @info: A #GDBusMethodInfo
 *
 * If @info is statically allocated does nothing. Otherwise increases
 * the reference count.
 *
 * Returns: The same @info.
 * Since: 2.26
 */


/**
 * g_dbus_connection_signal_subscribe:
 * @connection: A #GDBusConnection.
 * @sender: Sender name to match on (unique or well-known name) or %NULL to listen from all senders.
 * @interface_name: D-Bus interface name to match on or %NULL to match on all interfaces.
 * @member: D-Bus signal name to match on or %NULL to match on all signals.
 * @object_path: Object path to match on or %NULL to match on all object paths.
 * @arg0: Contents of first string argument to match on or %NULL to match on all kinds of arguments.
 * @flags: Flags describing how to subscribe to the signal (currently unused).
 * @callback: Callback to invoke when there is a signal matching the requested data.
 * @user_data: User data to pass to @callback.
 * @user_data_free_func: Function to free @user_data with when subscription is removed or %NULL.
 *
 * Subscribes to signals on @connection and invokes @callback with a
 * whenever the signal is received. Note that @callback
 * will be invoked in the <link
 * linkend="g-main-context-push-thread-default">thread-default main
 * loop</link> of the thread you are calling this method from.
 * If @connection is not a message bus connection, @sender must be
 * %NULL.
 * If @sender is a well-known name note that @callback is invoked with
 * the unique name for the owner of @sender, not the well-known name
 * as one would expect. This is because the message bus rewrites the
 * name. As such, to avoid certain race conditions, users should be
 * tracking the name owner of the well-known name and use that when
 * processing the received signal.
 *
 * Returns: A subscription identifier that can be used with g_dbus_connection_signal_unsubscribe().
 * Since: 2.26
 */


/**
 * g_themed_icon_append_name:
 * @icon: a #GThemedIcon
 * @iconname: name of icon to append to list of icons from within @icon.
 *
 * Append a name to the list of icons from within @icon.
 * <note><para>
 * Note that doing so invalidates the hash computed by prior calls
 * to g_icon_hash().
 * </para></note>
 */


/**
 * g_socket_listener_add_socket:
 * @listener: a #GSocketListener
 * @socket: a listening #GSocket
 * @source_object: Optional #GObject identifying this source
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Adds @socket to the set of sockets that we try to accept
 * new clients from. The socket must be bound to a local
 * address and listened to.
 * to accept to identify this particular source, which is
 * useful if you're listening on multiple addresses and do
 * different things depending on what address is connected to.
 *
 * Returns: %TRUE on success, %FALSE on error.
 * Since: 2.22
 */


/**
 * g_file_info_set_is_hidden:
 * @info: a #GFileInfo.
 * @is_hidden: a #gboolean.
 *
 * Sets the "is_hidden" attribute in a #GFileInfo according to @is_symlink.
 * See %G_FILE_ATTRIBUTE_STANDARD_IS_HIDDEN.
 */


/**
 * GUnixSocketAddress:abstract:
 *
 * Whether or not this is an abstract address
 * distinguishes between zero-padded and non-zero-padded
 * abstract addresses.
 *
 * Deprecated: Use #GUnixSocketAddress:address-type, which
 */


/**
 * g_io_extension_get_type:
 * @extension: a #GIOExtension
 *
 * Gets the type associated with @extension.
 *
 * Returns: the type of @extension
 */


/**
 * g_data_output_stream_put_int32:
 * @stream: a #GDataOutputStream.
 * @data: a #gint32.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, %NULL to ignore.
 *
 * Puts a signed 32-bit integer into the output stream.
 *
 * Returns: %TRUE if @data was successfully added to the @stream.
 */


/**
 * g_buffered_input_stream_new_sized:
 * @base_stream: a #GInputStream
 * @size: a #gsize
 *
 * Creates a new #GBufferedInputStream from the given @base_stream,
 * with a buffer set to @size.
 *
 * Returns: a #GInputStream.
 */


/**
 * g_socket_is_closed:
 * @socket: a #GSocket
 *
 * Checks whether a socket is closed.
 *
 * Returns: %TRUE if socket is closed, %FALSE otherwise
 * Since: 2.22
 */


/**
 * g_filter_output_stream_get_close_base_stream:
 * @stream: a #GFilterOutputStream.
 *
 * Returns whether the base stream will be closed when @stream is
 * closed.
 *
 * Returns: %TRUE if the base stream will be closed.
 */


/**
 * GDBusMessageClass:
 *
 * Class structure for #GDBusMessage.
 *
 * Since: 2.26
 */


/**
 * g_dbus_auth_observer_new:
 *
 * Creates a new #GDBusAuthObserver object.
 *
 * Returns: A #GDBusAuthObserver. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * g_file_info_copy_into:
 * @src_info: source to copy attributes from.
 * @dest_info: destination to copy attributes to.
 *
 * Copies all of the #GFileAttribute<!-- -->s from @src_info to @dest_info.
 */


/**
 * GVolumeMonitor::drive-connected:
 * @volume_monitor: The volume monitor emitting the signal.
 * @drive: a #GDrive that was connected.
 *
 * Emitted when a drive is connected to the system.
 */


/**
 * g_settings_bind_with_mapping:
 * @settings: a #GSettings object
 * @key: the key to bind
 * @object: a #GObject
 * @property: the name of the property to bind
 * @flags: flags for the binding
 * @get_mapping: a function that gets called to convert values from @settings to @object, or %NULL to use the default GIO mapping
 * @set_mapping: a function that gets called to convert values from @object to @settings, or %NULL to use the default GIO mapping
 * @user_data: data that gets passed to @get_mapping and @set_mapping
 * @destroy: #GDestroyNotify function for @user_data
 *
 * Create a binding between the @key in the @settings object
 * and the property @property of @object.
 * The binding uses the provided mapping functions to map between
 * settings and property values.
 * Note that the lifecycle of the binding is tied to the object,
 * and that you can have only one binding per object property.
 * If you bind the same property twice on the same object, the second
 * binding overrides the first one.
 *
 * Since: 2.26
 */


/**
 * g_socket_client_get_socket_type:
 * @client: a #GSocketClient.
 *
 * Gets the socket type of the socket client.
 * See g_socket_client_set_socket_type() for details.
 *
 * Returns: a #GSocketFamily
 * Since: 2.22
 */


/**
 * SECTION:gfil:
 * @short_description: File and Directory Handling
 * @include: gio/gio.h
 * @see_also: #GFileInfo, #GFileEnumerator
 *
 * #GFile is a high level abstraction for manipulating files on a
 * virtual file system. #GFile<!-- -->s are lightweight, immutable
 * objects that do no I/O upon creation. It is necessary to understand that
 * #GFile objects do not represent files, merely an identifier for a file. All
 * file content I/O is implemented as streaming operations (see #GInputStream and
 * #GOutputStream).
 * g_file_new_for_path() if you have a path.
 * g_file_new_for_uri() if you have a URI.
 * g_file_new_for_commandline_arg() for a command line argument.
 * g_file_parse_name() from a utf8 string gotten from g_file_get_parse_name().
 * One way to think of a #GFile is as an abstraction of a pathname. For normal
 * files the system pathname is what is stored internally, but as #GFile<!-- -->s
 * are extensible it could also be something else that corresponds to a pathname
 * in a userspace implementation of a filesystem.
 * #GFile<!-- -->s make up hierarchies of directories and files that correspond to the
 * files on a filesystem. You can move through the file system with #GFile using
 * g_file_get_parent() to get an identifier for the parent directory, g_file_get_child()
 * to get a child within a directory, g_file_resolve_relative_path() to resolve a relative
 * path between two #GFile<!-- -->s. There can be multiple hierarchies, so you may not
 * end up at the same root if you repeatedly call g_file_get_parent() on two different
 * files.
 * All #GFile<!-- -->s have a basename (get with g_file_get_basename()). These names
 * are byte strings that are used to identify the file on the filesystem (relative to
 * its parent directory) and there is no guarantees that they have any particular charset
 * encoding or even make any sense at all. If you want to use filenames in a user
 * interface you should use the display name that you can get by requesting the
 * %G_FILE_ATTRIBUTE_STANDARD_DISPLAY_NAME attribute with g_file_query_info().
 * This is guaranteed to be in utf8 and can be used in a user interface. But always
 * store the real basename or the #GFile to use to actually access the file, because
 * there is no way to go from a display name to the actual name.
 * Using #GFile as an identifier has the same weaknesses as using a path in that
 * there may be multiple aliases for the same file. For instance, hard or
 * soft links may cause two different #GFile<!-- -->s to refer to the same file.
 * and long names on Fat/NTFS, or bind mounts in Linux. If you want to check if
 * two #GFile<!-- -->s point to the same file you can query for the
 * %G_FILE_ATTRIBUTE_ID_FILE attribute. Note that #GFile does some trivial
 * canonicalization of pathnames passed in, so that trivial differences in the
 * path string used at creation (duplicated slashes, slash at end of path, "."
 * or ".." path segments, etc) does not create different #GFile<!-- -->s.
 * Many #GFile operations have both synchronous and asynchronous versions
 * to suit your application. Asynchronous versions of synchronous functions
 * simply have _async() appended to their function names. The asynchronous
 * I/O functions call a #GAsyncReadyCallback which is then used to finalize
 * the operation, producing a GAsyncResult which is then passed to the
 * function's matching _finish() operation.
 * Some #GFile operations do not have synchronous analogs, as they may
 * take a very long time to finish, and blocking may leave an application
 * unusable. Notable cases include:
 * g_file_mount_mountable() to mount a mountable file.
 * g_file_unmount_mountable_with_operation() to unmount a mountable file.
 * g_file_eject_mountable_with_operation() to eject a mountable file.
 * <para id="gfile-etag"><indexterm><primary>entity tag</primary></indexterm>
 * One notable feature of #GFile<!-- -->s are entity tags, or "etags" for
 * short. Entity tags are somewhat like a more abstract version of the
 * traditional mtime, and can be used to quickly determine if the file has
 * been modified from the version on the file system. See the HTTP 1.1
 * <ulink url="http://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html">specification</ulink>
 * for HTTP Etag headers, which are a very similar concept.
 * </para>
 *
 * To construct a #gfile, you can use:
 * Other possible causes for aliases are: case insensitive filesystems, short
 */


/**
 * g_desktop_app_info_get_filename:
 * @info: a #GDesktopAppInfo
 *
 * When @info was created from a known filename, return it.  In some
 * situations such as the #GDesktopAppInfo returned from
 * g_desktop_app_info_new_from_keyfile(), this function will return %NULL.
 *
 * Returns: The full path to the file for @info, or %NULL if not known.
 * Since: 2.24
 */


/**
 * g_settings_backend_path_writable_changed:
 * @backend: a #GSettingsBackend implementation
 * @path: the name of the path
 *
 * Signals that the writability of all keys below a given path may have
 * changed.
 * Since GSettings performs no locking operations for itself, this call
 * will always be made in response to external events.
 *
 * Since: 2.26
 */


/**
 * g_file_replace_contents_async:
 * @file: input #GFile.
 * @contents: string of contents to replace the file with.
 * @length: the length of @contents in bytes.
 * @etag: (allow-none): a new <link linkend="gfile-etag">entity tag</link> for the @file, or %NULL
 * @make_backup: %TRUE if a backup should be created.
 * @flags: a set of #GFileCreateFlags.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: the data to pass to callback function
 *
 * Starts an asynchronous replacement of @file with the given
 * current entity tag.
 * When this operation has completed, @callback will be called with
 * g_file_replace_contents_finish().
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * If @make_backup is %TRUE, this function will attempt to
 * make a backup of @file.
 */


/**
 * GActionGroup::action-removed:
 * @action_group: the #GActionGroup that changed
 * @action_name: the name of the action in @action_group
 *
 * Signals that an action is just about to be removed from the group.
 * This signal is emitted before the action is removed, so the action
 * is still visible and can be queried from the signal handler.
 *
 * Since: 2.28
 */


/**
 * g_socket_set_timeout:
 * @socket: a #GSocket.
 * @timeout: the timeout for @socket, in seconds, or 0 for none
 *
 * Sets the time in seconds after which I/O operations on @socket will
 * time out if they have not yet completed.
 * On a blocking socket, this means that any blocking #GSocket
 * operation will time out after @timeout seconds of inactivity,
 * returning %G_IO_ERROR_TIMED_OUT.
 * On a non-blocking socket, calls to g_socket_condition_wait() will
 * also fail with %G_IO_ERROR_TIMED_OUT after the given time. Sources
 * created with g_socket_create_source() will trigger after
 * set, at which point calling g_socket_receive(), g_socket_send(),
 * g_socket_check_connect_result(), etc, will fail with
 * %G_IO_ERROR_TIMED_OUT.
 * If @timeout is 0 (the default), operations will never time out
 * on their own.
 * Note that if an I/O operation is interrupted by a signal, this may
 * cause the timeout to be reset.
 *
 * Since: 2.26
 */


/**
 * g_app_info_set_as_default_for_extension:
 * @appinfo: a #GAppInfo.
 * @extension: a string containing the file extension (without the dot).
 * @error: a #GError.
 *
 * Sets the application as the default handler for the given file extension.
 *
 * Returns: %TRUE on success, %FALSE on error.
 */


/**
 * g_unix_connection_send_fd:
 * @connection: a #GUnixConnection
 * @fd: a file descriptor
 * @cancellable: (allow-none): optional #GCancellable object, %NULL to ignore.
 * @error: (allow-none): #GError for error reporting, or %NULL to ignore.
 *
 * Passes a file descriptor to the recieving side of the
 * connection. The recieving end has to call g_unix_connection_receive_fd()
 * to accept the file descriptor.
 * As well as sending the fd this also writes a single byte to the
 * stream, as this is required for fd passing to work on some
 * implementations.
 *
 * Returns: a %TRUE on success, %NULL on error.
 * Since: 2.22
 */


/**
 * g_content_type_is_unknown:
 * @type: a content type string
 *
 * Checks if the content type is the generic "unknown" type.
 * On UNIX this is the "application/octet-stream" mimetype,
 * while on win32 it is "*".
 *
 * Returns: %TRUE if the type is the unknown type.
 */


/**
 * GZlibCompressor:file-info:
 *
 * If set to a non-%NULL #GFileInfo object, and #GZlibCompressor:format is
 * %G_ZLIB_COMPRESSOR_FORMAT_GZIP, the compressor will write the file name
 * and modification time from the file info to the the GZIP header.
 *
 * Since: 2.26
 */


/**
 * g_async_result_get_source_object:
 * @res: a #GAsyncResult
 *
 * Gets the source object from a #GAsyncResult.
 * or %NULL if there is none.
 *
 * Returns: (transfer full): a new reference to the source object for the @res,
 */


/**
 * g_file_replace_async:
 * @file: input #GFile.
 * @etag: (allow-none): an <link linkend="gfile-etag">entity tag</link> for the current #GFile, or NULL to ignore.
 * @make_backup: %TRUE if a backup should be created.
 * @flags: a set of #GFileCreateFlags.
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: the data to pass to callback function
 *
 * Asynchronously overwrites the file, replacing the contents, possibly
 * creating a backup copy of the file first.
 * For more details, see g_file_replace() which is
 * the synchronous version of this call.
 * When the operation is finished, @callback will be called. You can then call
 * g_file_replace_finish() to get the result of the operation.
 */


/**
 * g_file_set_display_name_finish:
 * @file: input #GFile.
 * @res: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes setting a display name started with
 * g_file_set_display_name_async().
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): a #GFile or %NULL on error.
 */


/**
 * g_unix_mount_point_get_mount_path:
 * @mount_point: a #GUnixMountPoint.
 *
 * Gets the mount path for a unix mount point.
 *
 * Returns: a string containing the mount path.
 */


/**
 * g_mount_get_uuid:
 * @mount: a #GMount.
 *
 * Gets the UUID for the @mount. The reference is typically based on
 * the file system UUID for the mount in question and should be
 * considered an opaque string. Returns %NULL if there is no UUID
 * available.
 * The returned string should be freed with g_free()
 * when no longer needed.
 *
 * Returns: the UUID for @mount or %NULL if no UUID can be computed.
 */


/**
 * g_settings_revert:
 * @settings: a #GSettings instance
 *
 * Reverts all non-applied changes to the settings.  This function
 * does nothing unless @settings is in 'delay-apply' mode; see
 * g_settings_delay().  In the normal case settings are always applied
 * immediately.
 * Change notifications will be emitted for affected keys.
 */


/**
 * g_file_resolve_relative_path:
 * @file: input #GFile.
 * @relative_path: a given relative path string.
 *
 * Resolves a relative path for @file to an absolute path.
 * This call does no blocking i/o.
 * is %NULL or if @file is invalid.
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): #GFile to the resolved path. %NULL if @relative_path
 */


/**
 * g_application_get_flags:
 * @application: a #GApplication
 * @returns: the flags for @application
 *
 * Gets the flags for @application.
 * See #GApplicationFlags.
 *
 * Since: 2.28
 */


/**
 * g_file_info_set_display_name:
 * @info: a #GFileInfo.
 * @display_name: a string containing a display name.
 *
 * Sets the display name for the current #GFileInfo.
 * See %G_FILE_ATTRIBUTE_STANDARD_DISPLAY_NAME.
 */


/**
 * SECTION:gloadableico:
 * @short_description: Loadable Icons
 * @include: gio/gio.h
 * @see_also: #GIcon, #GThemedIcon
 *
 * Extends the #GIcon interface and adds the ability to
 * load icons from streams.
 */


/**
 * g_file_replace:
 * @file: input #GFile.
 * @etag: (allow-none): an optional <link linkend="gfile-etag">entity tag</link> for the current #GFile, or #NULL to ignore.
 * @make_backup: %TRUE if a backup should be created.
 * @flags: a set of #GFileCreateFlags.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Returns an output stream for overwriting the file, possibly
 * creating a backup copy of the file first. If the file doesn't exist,
 * it will be created.
 * This will try to replace the file in the safest way possible so
 * that any errors during the writing will not affect an already
 * existing copy of the file. For instance, for local files it
 * may write to a temporary file and then atomically rename over
 * the destination when the stream is closed.
 * By default files created are generally readable by everyone,
 * but if you pass #G_FILE_CREATE_PRIVATE in @flags the file
 * will be made readable only to the current user, to the level that
 * is supported on the target filesystem.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * If you pass in a non-#NULL @etag value, then this value is
 * compared to the current entity tag of the file, and if they differ
 * an G_IO_ERROR_WRONG_ETAG error is returned. This generally means
 * that the file has been changed since you last read it. You can get
 * the new etag from g_file_output_stream_get_etag() after you've
 * finished writing and closed the #GFileOutputStream. When you load
 * a new file you can use g_file_input_stream_query_info() to get
 * the etag of the file.
 * If @make_backup is %TRUE, this function will attempt to make a backup
 * of the current file before overwriting it. If this fails a G_IO_ERROR_CANT_CREATE_BACKUP
 * error will be returned. If you want to replace anyway, try again with
 * If the file is a directory the G_IO_ERROR_IS_DIRECTORY error will be returned,
 * and if the file is some other form of non-regular file then a
 * G_IO_ERROR_NOT_REGULAR_FILE error will be returned.
 * Some file systems don't allow all file names, and may
 * return an G_IO_ERROR_INVALID_FILENAME error, and if the name
 * is to long G_IO_ERROR_FILENAME_TOO_LONG will be returned.
 * Other errors are possible too, and depend on what kind of
 * filesystem the file is on.
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): a #GFileOutputStream or %NULL on error.
 */


/**
 * g_dbus_message_copy:
 * @message: A #GDBusMessage.
 * @error: Return location for error or %NULL.
 *
 * Copies @message. The copy is a deep copy and the returned
 * #GDBusMessage is completely identical except that it is guaranteed
 * to not be locked.
 * This operation can fail if e.g. @message contains file descriptors
 * and the per-process or system-wide open files limit is reached.
 * g_object_unref().
 *
 * Returns: (transfer full): A new #GDBusMessage or %NULL if @error is set. Free with
 * Since: 2.26
 */


/**
 * g_dbus_connection_new_for_address_sync:
 * @address: A D-Bus address.
 * @flags: Flags describing how to make the connection.
 * @observer: A #GDBusAuthObserver or %NULL.
 * @cancellable: A #GCancellable or %NULL.
 * @error: Return location for error or %NULL.
 *
 * Synchronously connects and sets up a D-Bus client connection for
 * exchanging D-Bus messages with an endpoint specified by @address
 * which must be in the D-Bus address format.
 * This constructor can only be used to initiate client-side
 * connections - use g_dbus_connection_new_sync() if you need to act
 * as the server. In particular, @flags cannot contain the
 * %G_DBUS_CONNECTION_FLAGS_AUTHENTICATION_SERVER or
 * %G_DBUS_CONNECTION_FLAGS_AUTHENTICATION_ALLOW_ANONYMOUS flags.
 * This is a synchronous failable constructor. See
 * g_dbus_connection_new_for_address() for the asynchronous version.
 * If @observer is not %NULL it may be used to control the
 * authentication process.
 *
 * Returns: A #GDBusConnection or %NULL if @error is set. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * GMountOperation:anonymous:
 *
 * Whether to use an anonymous user when authenticating.
 */


/**
 * g_socket_condition_check:
 * @socket: a #GSocket
 * @condition: a #GIOCondition mask to check
 *
 * Checks on the readiness of @socket to perform operations.
 * The operations specified in @condition are checked for and masked
 * against the currently-satisfied conditions on @socket. The result
 * is returned.
 * Note that on Windows, it is possible for an operation to return
 * %G_IO_ERROR_WOULD_BLOCK even immediately after
 * g_socket_condition_check() has claimed that the socket is ready for
 * writing. Rather than calling g_socket_condition_check() and then
 * writing to the socket if it succeeds, it is generally better to
 * simply try writing to the socket right away, and try again later if
 * the initial attempt returns %G_IO_ERROR_WOULD_BLOCK.
 * It is meaningless to specify %G_IO_ERR or %G_IO_HUP in condition;
 * these conditions will always be set in the output if they are true.
 * This call never blocks.
 *
 * Returns: the @GIOCondition mask of the current state
 * Since: 2.22
 */


/**
 * g_bus_unown_name:
 * @owner_id: An identifier obtained from g_bus_own_name()
 *
 * Stops owning a name.
 *
 * Since: 2.26
 */


/**
 * g_dbus_proxy_get_interface_info:
 * @proxy: A #GDBusProxy
 *
 * Returns the #GDBusInterfaceInfo, if any, specifying the minimal
 * interface that @proxy conforms to.
 * See the #GDBusProxy:g-interface-info property for more details.
 * object, it is owned by @proxy.
 *
 * Returns: A #GDBusInterfaceInfo or %NULL. Do not unref the returned
 * Since: 2.26
 */


/**
 * g_proxy_address_get_destination_hostnam:
 * @proxy: a #GProxyAddress
 *
 * Gets @proxy's destination hostname.
 *
 * Returns: the @proxy's destination hostname
 * Since: 2.26
 */


/**
 * g_dbus_method_invocation_get_connection:
 * @invocation: A #GDBusMethodInvocation.
 *
 * Gets the #GDBusConnection the method was invoked on.
 *
 * Returns: (transfer none): A #GDBusConnection. Do not free, it is owned by @invocation.
 * Since: 2.26
 */


/**
 * g_srv_target_get_hostname:
 * @target: a #GSrvTarget
 *
 * Gets @target's hostname (in ASCII form; if you are going to present
 * this to the user, you should use g_hostname_is_ascii_encoded() to
 * check if it contains encoded Unicode segments, and use
 * g_hostname_to_unicode() to convert it if it does.)
 *
 * Returns: @target's hostname
 * Since: 2.22
 */


/**
 * g_io_extension_point_get_extensions:
 * @extension_point: a #GIOExtensionPoint
 *
 * Gets a list of all extensions that implement this extension point.
 * The list is sorted by priority, beginning with the highest priority.
 * #GIOExtension<!-- -->s. The list is owned by GIO and should not be
 * modified.
 *
 * Returns: (element-type GIOExtension) (transfer none): a #GList of
 */


/**
 * GSettings:has-unapplied:
 *
 * If this property is %TRUE, the #GSettings object has outstanding
 * changes that will be applied when g_settings_apply() is called.
 */


/**
 * g_dbus_proxy_set_interface_info:
 * @proxy: A #GDBusProxy
 * @info: Minimum interface this proxy conforms to or %NULL to unset.
 *
 * Ensure that interactions with @proxy conform to the given
 * interface.  For example, when completing a method call, if the type
 * signature of the message isn't what's expected, the given #GError
 * is set.  Signals that have a type signature mismatch are simply
 * dropped.
 * See the #GDBusProxy:g-interface-info property for more details.
 *
 * Since: 2.26
 */


/**
 * g_memory_input_stream_add_data:
 * @stream: a #GMemoryInputStream
 * @data: input data
 * @len: length of the data, may be -1 if @data is a nul-terminated string
 * @destroy: function that is called to free @data, or %NULL
 *
 * Appends @data to data that can be read from the input stream
 */


/**
 * g_content_type_get_description:
 * @type: a content type string
 *
 * Gets the human readable description of the content type.
 * returned string with g_free()
 *
 * Returns: a short description of the content type @type. Free the
 */


/**
 * g_permission_release_finish:
 * @permission: a #GPermission instance
 * @result: the #GAsyncResult given to the #GAsyncReadyCallback
 * @error: a pointer to a %NULL #GError, or %NULL
 * @returns: %TRUE if the permission was successfully released
 *
 * Collects the result of attempting to release the permission
 * represented by @permission.
 * This is the second half of the asynchronous version of
 * g_permission_release().
 *
 * Since: 2.26
 */


/**
 * g_dbus_message_get_num_unix_fds:
 * @message: A #GDBusMessage.
 *
 * Convenience getter for the %G_DBUS_MESSAGE_HEADER_FIELD_NUM_UNIX_FDS header field.
 *
 * Returns: The value.
 * Since: 2.26
 */


/**
 * g_dbus_connection_unregister_object:
 * @connection: A #GDBusConnection.
 * @registration_id: A registration id obtained from g_dbus_connection_register_object().
 *
 * Unregisters an object.
 *
 * Returns: %TRUE if the object was unregistered, %FALSE otherwise.
 * Since: 2.26
 */


/**
 * SECTION:gmemoryoutputstrea:
 * @short_description: Streaming output operations on memory chunks
 * @include: gio/gio.h
 * @see_also: #GMemoryInputStream
 *
 * #GMemoryOutputStream is a class for using arbitrary
 * memory chunks as output for GIO streaming output operations.
 */


/**
 * g_network_address_get_scheme:
 * @addr: a #GNetworkAddress
 *
 * Gets @addr's scheme
 *
 * Returns: @addr's scheme (%NULL if not built from URI)
 * Since: 2.26
 */


/**
 * g_unix_mount_guess_icon:
 * @mount_entry: a #GUnixMountEntry
 *
 * Guesses the icon of a Unix mount.
 *
 * Returns: (transfer full): a #GIcon
 */


/**
 * GDrive::changed:
 * @drive: a #GDrive.
 *
 * Emitted when the drive's state has changed.
 */


/**
 * g_file_info_unset_attribute_mask:
 * @info: #GFileInfo.
 *
 * Unsets a mask set by g_file_info_set_attribute_mask(), if one
 * is set.
 */


/**
 * GAction:parameter-type:
 *
 * The type of the parameter that must be given when activating the
 * action.
 *
 * Since: 2.28
 */


/**
 * g_file_monitor:
 * @file: input #GFile
 * @flags: a set of #GFileMonitorFlags
 * @cancellable: optional #GCancellable object, %NULL to ignore
 * @error: a #GError, or %NULL
 *
 * Obtains a file or directory monitor for the given file, depending
 * on the type of the file.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): a #GFileMonitor for the given @file, or %NULL on error.
 * Since: 2.18
 */


/**
 * g_credentials_set_unix_user:
 * @credentials: A #GCredentials.
 * @uid: The UNIX user identifier to set.
 * @error: Return location for error or %NULL.
 *
 * Tries to set the UNIX user identifier on @credentials. This method
 * is only available on UNIX platforms.
 * This operation can fail if #GCredentials is not supported on the
 * OS or if the native credentials type does not contain information
 * about the UNIX user.
 *
 * Returns: %TRUE if @uid was set, %FALSE if error is set.
 * Since: 2.26
 */


/**
 * SECTION:gsocketaddres:
 * @short_description: Abstract base class representing endpoints for socket communication
 *
 * #GSocketAddress is the equivalent of <type>struct sockaddr</type>
 * in the BSD sockets API. This is an abstract class; use
 * #GInetSocketAddress for internet sockets, or #GUnixSocketAddress
 * for UNIX domain sockets.
 */


/**
 * g_drive_can_start_degraded:
 * @drive: a #GDrive.
 *
 * Checks if a drive can be started degraded.
 *
 * Returns: %TRUE if the @drive can be started degraded, %FALSE otherwise.
 * Since: 2.22
 */


/**
 * g_content_type_can_be_executable:
 * @type: a content type string
 *
 * Checks if a content type can be executable. Note that for instance
 * things like text files can be executables (i.e. scripts and batch files).
 * can be executable, %FALSE otherwise.
 *
 * Returns: %TRUE if the file type corresponds to a type that
 */


/**
 * g_file_info_get_attribute_as_string:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 *
 * Gets the value of a attribute, formated as a string.
 * This escapes things as needed to make the string valid
 * utf8.
 * When you're done with the string it must be freed with g_free().
 *
 * Returns: a UTF-8 string associated with the given @attribute.
 */


/**
 * GResolver::reload:
 * @resolver: a #GResolver
 *
 * Emitted when the resolver notices that the system resolver
 * configuration has changed.
 */


/**
 * g_settings_get_range:
 * @settings: a #GSettings
 * @key: the key to query the range of
 * @returns: a #GVariant describing the range
 *
 * Queries the range of a key.
 * This function will return a #GVariant that fully describes the range
 * of values that are valid for @key.
 * The type of #GVariant returned is <literal>(sv)</literal>.  The
 * string describes the type of range restriction in effect.  The type
 * and meaning of the value contained in the variant depends on the
 * string.
 * If the string is <literal>'type'</literal> then the variant contains
 * an empty array.  The element type of that empty array is the expected
 * type of value and all values of that type are valid.
 * If the string is <literal>'enum'</literal> then the variant contains
 * an array enumerating the possible values.  Each item in the array is
 * a possible valid value and no other values are valid.
 * If the string is <literal>'flags'</literal> then the variant contains
 * an array.  Each item in the array is a value that may appear zero or
 * one times in an array to be used as the value for this key.  For
 * example, if the variant contained the array <literal>['x',
 * 'y']</literal> then the valid values for the key would be
 * <literal>[]</literal>, <literal>['x']</literal>,
 * <literal>['y']</literal>, <literal>['x', 'y']</literal> and
 * <literal>['y', 'x']</literal>.
 * Finally, if the string is <literal>'range'</literal> then the variant
 * contains a pair of like-typed values -- the minimum and maximum
 * permissible values for this key.
 * This information should not be used by normal programs.  It is
 * considered to be a hint for introspection purposes.  Normal programs
 * should already know what is permitted by their own schema.  The
 * format may change in any way in the future -- but particularly, new
 * forms may be added to the possibilities described above.
 * It is a programmer error to give a @key that isn't contained in the
 * schema for @settings.
 * You should free the returned value with g_variant_unref() when it is
 * no longer needed.
 *
 * Since: 2.28
 */


/**
 * g_socket_client_set_protocol:
 * @client: a #GSocketClient.
 * @protocol: a #GSocketProtocol
 *
 * Sets the protocol of the socket client.
 * The sockets created by this object will use of the specified
 * protocol.
 * If @protocol is %0 that means to use the default
 * protocol for the socket family and type.
 *
 * Since: 2.22
 */


/**
 * g_mount_unmount:
 * @mount: a #GMount.
 * @flags: flags affecting the operation
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback, or %NULL.
 * @user_data: user data passed to @callback.
 *
 * Unmounts a mount. This is an asynchronous operation, and is
 * finished by calling g_mount_unmount_finish() with the @mount
 * and #GAsyncResult data returned in the @callback.
 *
 * Deprecated: 2.22: Use g_mount_unmount_with_operation() instead.
 */


/**
 * g_unix_mount_point_is_user_mountable:
 * @mount_point: a #GUnixMountPoint.
 *
 * Checks if a unix mount point is mountable by the user.
 *
 * Returns: %TRUE if the mount point is user mountable.
 */


/**
 * g_app_info_supports_uris:
 * @appinfo: a #GAppInfo.
 *
 * Checks if the application supports reading files and directories from URIs.
 *
 * Returns: %TRUE if the @appinfo supports URIs.
 */


/**
 * g_seekable_can_truncate:
 * @seekable: a #GSeekable.
 *
 * Tests if the stream can be truncated.
 *
 * Returns: %TRUE if the stream can be truncated, %FALSE otherwise.
 */


/**
 * g_dbus_interface_info_lookup_property:
 * @info: A #GDBusInterfaceInfo.
 * @name: A D-Bus property name (typically in CamelCase).
 *
 * Looks up information about a property.
 * This cost of this function is O(n) in number of properties.
 *
 * Returns: A #GDBusPropertyInfo or %NULL if not found. Do not free, it is owned by @info.
 * Since: 2.26
 */


/**
 * g_mount_can_eject:
 * @mount: a #GMount.
 *
 * Checks if @mount can be eject.
 *
 * Returns: %TRUE if the @mount can be ejected.
 */


/**
 * SECTION:gmountoperatio:
 * @short_description: Object used for authentication and user interaction
 * @include: gio/gio.h
 *
 * #GMountOperation provides a mechanism for interacting with the user.
 * It can be used for authenticating mountable operations, such as loop
 * mounting files, hard drive partitions or server locations. It can
 * also be used to ask the user questions or show a list of applications
 * preventing unmount or eject operations from completing.
 * Note that #GMountOperation is used for more than just #GMount
 * objects – for example it is also used in g_drive_start() and
 * g_drive_stop().
 * Users should instantiate a subclass of this that implements all the
 * various callbacks to show the required dialogs, such as
 * #GtkMountOperation. If no user interaction is desired (for example
 * when automounting filesystems at login time), usually %NULL can be
 * passed, see each method taking a #GMountOperation for details.
 */


/**
 * g_data_input_stream_read_int64:
 * @stream: a given #GDataInputStream.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: #GError for error reporting.
 *
 * Reads a 64-bit/8-byte value from @stream.
 * In order to get the correct byte order for this read operation,
 * see g_data_input_stream_get_byte_order() and g_data_input_stream_set_byte_order().
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * an error occurred.
 *
 * Returns: a signed 64-bit/8-byte value read from @stream or %0 if
 */


/**
 * SECTION:gunixoutputstrea:
 * @short_description: Streaming output operations for UNIX file descriptors
 * @include: gio/gunixoutputstream.h
 * @see_also: #GOutputStream
 *
 * #GUnixOutputStream implements #GOutputStream for writing to a
 * UNIX file descriptor, including asynchronous operations. The file
 * descriptor must be selectable, so it doesn't work with opened files.
 * Note that <filename>&lt;gio/gunixoutputstream.h&gt;</filename> belongs
 * to the UNIX-specific GIO interfaces, thus you have to use the
 * <filename>gio-unix-2.0.pc</filename> pkg-config file when using it.
 */


/**
 * g_simple_async_result_get_op_res_gpointer: (skip)
 * @simple: a #GSimpleAsyncResult.
 *
 * Gets a pointer result as returned by the asynchronous function.
 *
 * Returns: a pointer from the result.
 */


/**
 * g_memory_output_stream_steal_data:
 * @ostream: a #GMemoryOutputStream
 *
 * Gets any loaded data from the @ostream. Ownership of the data
 * is transferred to the caller; when no longer needed it must be
 * freed using the free function set in @ostream's
 * #GMemoryOutputStream:destroy-function property.
 *
 * Returns: (transfer full): the stream's data
 * Since: 2.26
 */


/**
 * g_unix_mount_get_fs_type:
 * @mount_entry: a #GUnixMount.
 *
 * Gets the filesystem type for the unix mount.
 *
 * Returns: a string containing the file system type.
 */


/**
 * g_data_input_stream_read_uint32:
 * @stream: a given #GDataInputStream.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: #GError for error reporting.
 *
 * Reads an unsigned 32-bit/4-byte value from @stream.
 * In order to get the correct byte order for this read operation,
 * see g_data_input_stream_get_byte_order() and g_data_input_stream_set_byte_order().
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * an error occurred.
 *
 * Returns: an unsigned 32-bit/4-byte value read from the @stream or %0 if
 */


/**
 * GInetAddress:is-any:
 *
 * Whether this is the "any" address for its family.
 * See g_inet_address_get_is_any().
 *
 * Since: 2.22
 */


/**
 * g_volume_get_uuid:
 * @volume: a #GVolume.
 *
 * Gets the UUID for the @volume. The reference is typically based on
 * the file system UUID for the volume in question and should be
 * considered an opaque string. Returns %NULL if there is no UUID
 * available.
 * The returned string should be freed with g_free()
 * when no longer needed.
 *
 * Returns: the UUID for @volume or %NULL if no UUID can be computed.
 */


/**
 * GDataStream:byte-order:
 *
 * The ::byte-order property determines the byte ordering that
 * is used when reading multi-byte entities (such as integers)
 * from the stream.
 */


/**
 * g_resolver_error_quark:
 *
 * Gets the #GResolver Error Quark.
 *
 * Returns: a #GQuark.
 * Since: 2.22
 */


/**
 * g_input_stream_clear_pending:
 * @stream: input stream
 *
 * Clears the pending flag on @stream.
 */


/**
 * g_file_copy_finish:
 * @file: input #GFile.
 * @res: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes copying the file started with
 * g_file_copy_async().
 *
 * Returns: a %TRUE on success, %FALSE on error.
 */


/**
 * g_file_get_uri_scheme:
 * @file: input #GFile.
 *
 * Gets the URI scheme for a #GFile.
 * RFC 3986 decodes the scheme as:
 * <programlisting>
 * URI = scheme ":" hier-part [ "?" query ] [ "#" fragment ]
 * </programlisting>
 * Common schemes include "file", "http", "ftp", etc.
 * This call does no blocking i/o.
 * #GFile. The returned string should be freed with g_free()
 * when no longer needed.
 *
 * Returns: a string containing the URI scheme for the given
 */


/**
 * g_settings_set_boolean:
 * @settings: a #GSettings object
 * @key: the name of the key to set
 * @value: the value to set it to
 * @returns: %TRUE if setting the key succeeded, %FALSE if the key was not writable
 *
 * Sets @key in @settings to @value.
 * A convenience variant of g_settings_set() for booleans.
 * It is a programmer error to give a @key that isn't specified as
 * having a boolean type in the schema for @settings.
 *
 * Since: 2.26
 */


/**
 * SECTION:gsocketclien:
 * @short_description: Helper for connecting to a network service
 * @include: gio/gio.h
 * @see_also: #GSocketConnection, #GSocketListener
 *
 * #GSocketClient is a high-level utility class for connecting to a
 * network host using a connection oriented socket type.
 * You create a #GSocketClient object, set any options you want, then
 * call a sync or async connect operation, which returns a #GSocketConnection
 * subclass on success.
 * The type of the #GSocketConnection object returned depends on the type of
 * the underlying socket that is in use. For instance, for a TCP/IP connection
 * it will be a #GTcpConnection.
 *
 * Since: 2.22
 */


/**
 * g_app_info_get_all:
 *
 * Gets a list of all of the applications currently registered
 * on this system.
 * For desktop files, this includes applications that have
 * <literal>NoDisplay=true</literal> set or are excluded from
 * display by means of <literal>OnlyShowIn</literal> or
 * <literal>NotShowIn</literal>. See g_app_info_should_show().
 * The returned list does not include applications which have
 * the <literal>Hidden</literal> key set.
 *
 * Returns: (element-type GAppInfo) (transfer full): a newly allocated #GList of references to #GAppInfo<!---->s.
 */


/**
 * g_socket_send:
 * @socket: a #GSocket
 * @buffer: the buffer containing the data to send.
 * @size: the number of bytes to send
 * @cancellable: a %GCancellable or %NULL
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Tries to send @size bytes from @buffer on the socket. This is
 * mainly used by connection-oriented sockets; it is identical to
 * g_socket_send_to() with @address set to %NULL.
 * If the socket is in blocking mode the call will block until there is
 * space for the data in the socket queue. If there is no space available
 * and the socket is in non-blocking mode a %G_IO_ERROR_WOULD_BLOCK error
 * will be returned. To be notified when space is available, wait for the
 * %G_IO_OUT condition. Note though that you may still receive
 * %G_IO_ERROR_WOULD_BLOCK from g_socket_send() even if you were previously
 * notified of a %G_IO_OUT condition. (On Windows in particular, this is
 * very common due to the way the underlying APIs work.)
 * On error -1 is returned and @error is set accordingly.
 * on error
 *
 * Returns: Number of bytes written (which may be less than @size), or -1
 * Since: 2.22
 */


/**
 * g_socket_client_set_timeout:
 * @client: a #GSocketClient.
 * @timeout: the timeout
 *
 * Sets the I/O timeout for sockets created by @client. @timeout is a
 * time in seconds, or 0 for no timeout (the default).
 * The timeout value affects the initial connection attempt as well,
 * so setting this may cause calls to g_socket_client_connect(), etc,
 * to fail with %G_IO_ERROR_TIMED_OUT.
 *
 * Since: 2.26
 */


/**
 * g_file_open_readwrite_finish:
 * @file: input #GFile.
 * @res: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes an asynchronous file read operation started with
 * g_file_open_readwrite_async().
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): a #GFileIOStream or %NULL on error.
 * Since: 2.22
 */


/**
 * GMountOperation:choice:
 *
 * The index of the user's choice when a question is asked during the
 * mount operation. See the #GMountOperation::ask-question signal.
 */


/**
 * g_buffered_output_stream_get_auto_grow:
 * @stream: a #GBufferedOutputStream.
 *
 * Checks if the buffer automatically grows as data is added.
 * %FALSE otherwise.
 *
 * Returns: %TRUE if the @stream's buffer automatically grows,
 */


/**
 * g_socket_new:
 * @family: the socket family to use, e.g. %G_SOCKET_FAMILY_IPV4.
 * @type: the socket type to use.
 * @protocol: the id of the protocol to use, or 0 for default.
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Creates a new #GSocket with the defined family, type and protocol.
 * If @protocol is 0 (%G_SOCKET_PROTOCOL_DEFAULT) the default protocol type
 * for the family and type is used.
 * The @protocol is a family and type specific int that specifies what
 * kind of protocol to use. #GSocketProtocol lists several common ones.
 * Many families only support one protocol, and use 0 for this, others
 * support several and using 0 means to use the default protocol for
 * the family and type.
 * The protocol id is passed directly to the operating
 * system, so you can use protocols not listed in #GSocketProtocol if you
 * know the protocol number used for it.
 * Free the returned object with g_object_unref().
 *
 * Returns: a #GSocket or %NULL on error.
 * Since: 2.22
 */


/**
 * g_converter_input_stream_get_converter:
 * @converter_stream: a #GConverterInputStream
 *
 * Gets the #GConverter that is used by @converter_stream.
 *
 * Returns: (transfer none): the converter of the converter input stream
 * Since: 2.24
 */


/**
 * g_file_info_set_attribute_stringv:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 * @attr_value: a %NULL terminated string array
 *
 * Sets the @attribute to contain the given @attr_value,
 * if possible.
 *
 * Sinze: 2.22
 */


/**
 * g_themed_icon_get_names:
 * @icon: a #GThemedIcon.
 *
 * Gets the names of icons from within @icon.
 *
 * Returns: (transfer none): a list of icon names.
 */


/**
 * g_file_mount_mountable:
 * @file: input #GFile.
 * @flags: flags affecting the operation
 * @mount_operation: a #GMountOperation, or %NULL to avoid user interaction.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied, or %NULL.
 * @user_data: the data to pass to callback function
 *
 * Mounts a file of type G_FILE_TYPE_MOUNTABLE.
 * Using @mount_operation, you can request callbacks when, for instance,
 * passwords are needed during authentication.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * When the operation is finished, @callback will be called. You can then call
 * g_file_mount_mountable_finish() to get the result of the operation.
 */


/**
 * GCredentials:
 *
 * The #GCredentials structure contains only private data and
 * should only be accessed using the provided API.
 *
 * Since: 2.26
 */


/**
 * g_desktop_app_info_lookup_get_default_for_uri_scheme:
 * @lookup: a #GDesktopAppInfoLookup
 * @uri_scheme: a string containing a URI scheme.
 *
 * Gets the default application for launching applications
 * using this URI scheme for a particular GDesktopAppInfoLookup
 * implementation.
 * The GDesktopAppInfoLookup interface and this function is used
 * to implement g_app_info_get_default_for_uri_scheme() backends
 * in a GIO module. There is no reason for applications to use it
 * directly. Applications should use g_app_info_get_default_for_uri_scheme().
 *
 * Returns: (transfer full): #GAppInfo for given @uri_scheme or %NULL on error.
 * Deprecated: The #GDesktopAppInfoLookup interface is deprecated and unused by gio.
 */


/**
 * g_application_get_inactivity_timeout:
 * @application: a #GApplication
 *
 * Gets the current inactivity timeout for the application.
 * This is the amount of time (in milliseconds) after the last call to
 * g_application_release() before the application stops running.
 *
 * Returns: the timeout, in milliseconds
 * Since: 2.28
 */


/**
 * g_periodic_get_hz:
 * @periodic: a #GPeriodic clock
 *
 * Gets the frequency of the clock.
 *
 * Returns: the frquency of the clock, in Hz
 * Since: 2.28
 */


/**
 * g_unix_mount_get_mount_path:
 * @mount_entry: input #GUnixMountEntry to get the mount path for.
 *
 * Gets the mount path for a unix mount.
 *
 * Returns: the mount path for @mount_entry.
 */


/**
 * g_app_info_get_all_for_type:
 * @content_type: the content type to find a #GAppInfo for
 *
 * Gets a list of all #GAppInfo<!-- -->s for a given content type.
 * or %NULL on error.
 *
 * Returns: (element-type GAppInfo) (transfer full): #GList of #GAppInfo<!-- -->s for given @content_type
 */


/**
 * g_win32_input_stream_get_handle:
 * @stream: a #GWin32InputStream
 *
 * Return the Windows file handle that the stream reads from.
 *
 * Returns: The file handle of @stream
 * Since: 2.26
 */


/**
 * GDataOutputStream:byte-order:
 *
 * Determines the byte ordering that is used when writing
 * multi-byte entities (such as integers) to the stream.
 */


/**
 * g_dbus_method_invocation_get_method_info:
 * @invocation: A #GDBusMethodInvocation.
 *
 * Gets information about the method call, if any.
 *
 * Returns: A #GDBusMethodInfo or %NULL. Do not free, it is owned by @invocation.
 * Since: 2.26
 */


/**
 * g_inet_address_new_from_bytes:
 * @bytes: raw address data
 * @family: the address family of @bytes
 *
 * Creates a new #GInetAddress from the given @family and @bytes.
 * %G_INET_ADDRESS_IPV6.
 *
 * Returns: a new #GInetAddress corresponding to @family and @bytes.
 * Since: 2.22
 */


/**
 * g_file_attribute_info_list_unref:
 * @list: The #GFileAttributeInfoList to unreference.
 *
 * Removes a reference from the given @list. If the reference count
 * falls to zero, the @list is deleted.
 */


/**
 * g_bus_own_name_on_connection:
 * @connection: A #GDBusConnection.
 * @name: The well-known name to own.
 * @flags: A set of flags from the #GBusNameOwnerFlags enumeration.
 * @name_acquired_handler: Handler to invoke when @name is acquired or %NULL.
 * @name_lost_handler: Handler to invoke when @name is lost or %NULL.
 * @user_data: User data to pass to handlers.
 * @user_data_free_func: Function for freeing @user_data or %NULL.
 *
 * Like g_bus_own_name() but takes a #GDBusConnection instead of a
 * #GBusType.
 * g_bus_unown_name() to stop owning the name.
 *
 * Returns: An identifier (never 0) that an be used with
 * Since: 2.26
 */


/**
 * g_unix_input_stream_set_close_fd:
 * @stream: a #GUnixInputStream
 * @close_fd: %TRUE to close the file descriptor when done
 *
 * Sets whether the file descriptor of @stream shall be closed
 * when the stream is closed.
 *
 * Since: 2.20
 */


/**
 * GMountOperation::ask-password:
 * @op: a #GMountOperation requesting a password.
 * @message: string containing a message to display to the user.
 * @default_user: string containing the default user name.
 * @default_domain: string containing the default domain.
 * @flags: a set of #GAskPasswordFlags.
 *
 * Emitted when a mount operation asks the user for a password.
 * If the message contains a line break, the first line should be
 * presented as a heading. For example, it may be used as the
 * primary text in a #GtkMessageDialog.
 */


/**
 * g_file_query_filesystem_info:
 * @file: input #GFile.
 * @attributes: an attribute query string.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError.
 *
 * Similar to g_file_query_info(), but obtains information
 * about the filesystem the @file is on, rather than the file itself.
 * For instance the amount of space available and the type of
 * the filesystem.
 * The @attributes value is a string that specifies the file attributes that
 * should be gathered. It is not an error if it's not possible to read a particular
 * requested attribute from a file - it just won't be set. @attributes should
 * be a comma-separated list of attributes or attribute wildcards. The wildcard "*"
 * means all attributes, and a wildcard like "fs:*" means all attributes in the fs
 * namespace. The standard namespace for filesystem attributes is "fs".
 * Common attributes of interest are #G_FILE_ATTRIBUTE_FILESYSTEM_SIZE
 * (the total size of the filesystem in bytes), #G_FILE_ATTRIBUTE_FILESYSTEM_FREE (number of
 * bytes available), and #G_FILE_ATTRIBUTE_FILESYSTEM_TYPE (type of the filesystem).
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * If the file does not exist, the G_IO_ERROR_NOT_FOUND error will be returned.
 * Other errors are possible too, and depend on what kind of filesystem the file is on.
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): a #GFileInfo or %NULL if there was an error.
 */


/**
 * g_socket_control_message_serialize:
 * @message: a #GSocketControlMessage
 * @data: A buffer to write data to
 *
 * Converts the data in the message to bytes placed in the
 * message.
 * returned by g_socket_control_message_get_size() on this
 * object.
 *
 * Since: 2.22
 */


/**
 * g_dbus_connection_get_unique_name:
 * @connection: A #GDBusConnection.
 *
 * Gets the unique name of @connection as assigned by the message
 * bus. This can also be used to figure out if @connection is a
 * message bus connection.
 * bus connection. Do not free this string, it is owned by
 *
 * Returns: The unique name or %NULL if @connection is not a message
 * Since: 2.26
 */


/**
 * g_unix_input_stream_new:
 * @fd: a UNIX file descriptor
 * @close_fd: %TRUE to close the file descriptor when done
 *
 * Creates a new #GUnixInputStream for the given @fd.
 * If @close_fd is %TRUE, the file descriptor will be closed
 * when the stream is closed.
 *
 * Returns: a new #GUnixInputStream
 */


/**
 * g_simple_async_result_run_in_thread:
 * @simple: a #GSimpleAsyncResult.
 * @func: a #GSimpleAsyncThreadFunc.
 * @io_priority: the io priority of the request.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 *
 * Runs the asynchronous job in a separate thread and then calls
 * g_simple_async_result_complete_in_idle() on @simple to return
 * the result to the appropriate main loop.
 * Calling this function takes a reference to @simple for as long as
 * is needed to run the job and report its completion.
 */


/**
 * g_dbus_proxy_get_cached_property:
 * @proxy: A #GDBusProxy.
 * @property_name: Property name.
 *
 * Looks up the value for a property from the cache. This call does no
 * blocking IO.
 * If @proxy has an expected interface (see
 * #GDBusProxy:g-interface-info), then @property_name (for existence)
 * is checked against it.
 * for @property_name or %NULL if the value is not in the cache. The
 * returned reference must be freed with g_variant_unref().
 *
 * Returns: A reference to the #GVariant instance that holds the value
 * Since: 2.26
 */


/**
 * g_file_io_stream_query_info:
 * @stream: a #GFileIOStream.
 * @attributes: a file attribute query string.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, %NULL to ignore.
 *
 * Queries a file io stream for the given @attributes.
 * This function blocks while querying the stream. For the asynchronous
 * version of this function, see g_file_io_stream_query_info_async().
 * While the stream is blocked, the stream will set the pending flag
 * internally, and any other operations on the stream will fail with
 * %G_IO_ERROR_PENDING.
 * Can fail if the stream was already closed (with @error being set to
 * %G_IO_ERROR_CLOSED), the stream has pending operations (with @error being
 * set to %G_IO_ERROR_PENDING), or if querying info is not supported for
 * the stream's interface (with @error being set to %G_IO_ERROR_NOT_SUPPORTED). I
 * all cases of failure, %NULL will be returned.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be set, and %NULL will
 * be returned.
 *
 * Returns: (transfer full): a #GFileInfo for the @stream, or %NULL on error.
 * Since: 2.22
 */


/**
 * g_mount_operation_get_usernam:
 * @op: a #GMountOperation.
 *
 * Get the user name from the mount operation.
 *
 * Returns: a string containing the user name.
 */


/**
 * SECTION:gproxyaddres:
 * @short_description: An internet address with proxy information
 *
 * Support for proxied #GInetSocketAddress.
 */


/**
 * GWin32InputStream:handle:
 *
 * The handle that the stream reads from.
 *
 * Since: 2.26
 */


/**
 * GDBusServer:
 *
 * The #GDBusServer structure contains only private data and
 * should only be accessed using the provided API.
 *
 * Since: 2.26
 */


/**
 * g_win32_output_stream_get_close_handle:
 * @stream: a #GWin32OutputStream
 *
 * Returns whether the handle of @stream will be closed when the
 * stream is closed.
 *
 * Returns: %TRUE if the handle is closed when done
 * Since: 2.26
 */


/**
 * g_file_eject_mountable_with_operation_finish:
 * @file: input #GFile.
 * @result: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes an asynchronous eject operation started by
 * g_file_eject_mountable_with_operation().
 * otherwise.
 *
 * Returns: %TRUE if the @file was ejected successfully. %FALSE
 * Since: 2.22
 */


/**
 * g_socket_client_set_family:
 * @client: a #GSocketClient.
 * @family: a #GSocketFamily
 *
 * Sets the socket family of the socket client.
 * If this is set to something other than %G_SOCKET_FAMILY_INVALID
 * then the sockets created by this object will be of the specified
 * family.
 * This might be useful for instance if you want to force the local
 * connection to be an ipv4 socket, even though the address might
 * be an ipv6 mapped to ipv4 address.
 *
 * Since: 2.22
 */


/**
 * g_vfs_parse_name:
 * @vfs: a #GVfs.
 * @parse_name: a string to be parsed by the VFS module.
 *
 * This operation never fails, but the returned object might
 * not support any I/O operations if the @parse_name cannot
 * be parsed by the #GVfs module.
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): a #GFile for the given @parse_name.
 */


/**
 * g_application_command_line_get_environ:
 * @cmdline: a #GApplicationCommandLine
 *
 * Gets the contents of the 'environ' variable of the command line
 * invocation, as would be returned by g_get_environ().  The strings may
 * contain non-utf8 data.
 * The remote application usually does not send an environment.  Use
 * %G_APPLICATION_SEND_ENVIRONMENT to affect that.  Even with this flag
 * set it is possible that the environment is still not available (due
 * to invocation messages from other applications).
 * The return value should not be modified or freed and is valid for as
 * long as @cmdline exists.
 *
 * Returns: the environment strings, or %NULL if they were not sent
 * Since: 2.28
 */


/**
 * g_srv_target_free:
 * @target: a #GSrvTarget
 *
 * Frees @target
 *
 * Since: 2.22
 */


/**
 * g_content_type_guess_for_tree:
 * @root: the root of the tree to guess a type for
 *
 * Tries to guess the type of the tree with root @root, by
 * looking at the files it contains. The result is an array
 * of content types, with the best guess coming first.
 * The types returned all have the form x-content/foo, e.g.
 * x-content/audio-cdda (for audio CDs) or x-content/image-dcf
 * (for a camera memory card). See the <ulink url="http://www.freedesktop.org/wiki/Specifications/shared-mime-info-spec">shared-mime-info</ulink>
 * specification for more on x-content types.
 * This function is useful in the implementation of
 * g_mount_guess_content_type().
 * or %NULL. Free with g_strfreev()
 *
 * Returns: (transfer full): an %NULL-terminated array of zero or more content types,
 * Since: 2.18
 */


/**
 * g_drive_eject_with_operation_finish:
 * @drive: a #GDrive.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occuring, or %NULL to ignore.
 *
 * Finishes ejecting a drive. If any errors occurred during the operation,
 *
 * Returns: %TRUE if the drive was successfully ejected. %FALSE otherwise.
 * Since: 2.22
 */


/**
 * g_file_load_contents_finish:
 * @file: input #GFile.
 * @res: a #GAsyncResult.
 * @contents: (out) (transfer full): a location to place the contents of the file.
 * @length: (out) (allow-none): a location to place the length of the contents of the file, or %NULL if the length is not needed
 * @etag_out: (out) (allow-none): a location to place the current entity tag for the file, or %NULL if the entity tag is not needed
 * @error: a #GError, or %NULL
 *
 * Finishes an asynchronous load of the @file's contents.
 * The contents are placed in @contents, and @length is set to the
 * size of the @contents string. The @content should be freed with
 * g_free() when no longer needed. If @etag_out is present, it will be
 * set to the new entity tag for the @file.
 * present, it will be set appropriately.
 *
 * Returns: %TRUE if the load was successful. If %FALSE and @error is
 */


/**
 * g_dbus_address_get_stream_sync:
 * @address: A valid D-Bus address.
 * @out_guid: %NULL or return location to store the GUID extracted from @address, if any.
 * @cancellable: A #GCancellable or %NULL.
 * @error: Return location for error or %NULL.
 *
 * Synchronously connects to an endpoint specified by @address and
 * sets up the connection so it is in a state to run the client-side
 * of the D-Bus authentication conversation.
 * This is a synchronous failable function. See
 * g_dbus_address_get_stream() for the asynchronous version.
 *
 * Returns: (transfer full): A #GIOStream or %NULL if @error is set.
 * Since: 2.26
 */


/**
 * g_application_command_line_set_exit_status:
 * @cmdline: a #GApplicationCommandLine
 * @exit_status: the exit status
 *
 * Sets the exit status that will be used when the invoking process
 * exits.
 * The return value of the #GApplication::command-line signal is
 * passed to this function when the handler returns.  This is the usual
 * way of setting the exit status.
 * In the event that you want the remote invocation to continue running
 * and want to decide on the exit status in the future, you can use this
 * call.  For the case of a remote invocation, the remote process will
 * typically exit when the last reference is dropped on @cmdline.  The
 * exit status of the remote process will be equal to the last value
 * that was set with this function.
 * In the case that the commandline invocation is local, the situation
 * is slightly more complicated.  If the commandline invocation results
 * increased to a non-zero value) then the application is considered to
 * have been 'successful' in a certain sense, and the exit status is
 * always zero.  If the application use count is zero, though, the exit
 * status of the local #GApplicationCommandLine is used.
 *
 * In the mainloop running (ie: because the use-count of the application
 * Since: 2.28
 */


/**
 * GDBusConnection:authentication-observer:
 *
 * A #GDBusAuthObserver object to assist in the authentication process or %NULL.
 *
 * Since: 2.26
 */


/**
 * g_zlib_compressor_get_file_info:
 * @compressor: a #GZlibCompressor
 *
 * Returns the #GZlibCompressor:file-info property.
 *
 * Returns: (transfer none): a #GFileInfo, or %NULL
 * Since: 2.26
 */


/**
 * GMemoryOutputStream:size:
 *
 * Current size of the data buffer.
 *
 * Since: 2.24
 */


/**
 * GApplication::command-line:
 * @application: the application
 * @command_line: a #GApplicationCommandLine representing the passed commandline
 *
 * The ::command-line signal is emitted on the primary instance when
 * a commandline is not handled locally. See g_application_run() for
 * more information.
 */


/**
 * g_socket_client_connect_finish:
 * @client: a #GSocketClient.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occuring, or %NULL to ignore.
 *
 * Finishes an async connect operation. See g_socket_client_connect_async()
 *
 * Returns: (transfer full): a #GSocketConnection on success, %NULL on error.
 * Since: 2.22
 */


/**
 * g_socket_address_enumerator_next:
 * @enumerator: a #GSocketAddressEnumerator
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError.
 *
 * Retrieves the next #GSocketAddress from @enumerator. Note that this
 * may block for some amount of time. (Eg, a #GNetworkAddress may need
 * to do a DNS lookup before it can return an address.) Use
 * g_socket_address_enumerator_next_async() if you need to avoid
 * blocking.
 * If @enumerator is expected to yield addresses, but for some reason
 * is unable to (eg, because of a DNS error), then the first call to
 * g_socket_address_enumerator_next() will return an appropriate error
 * in *@error. However, if the first call to
 * g_socket_address_enumerator_next() succeeds, then any further
 * internal errors (other than @cancellable being triggered) will be
 * ignored.
 * error (in which case *@error will be set) or if there are no
 * more addresses.
 *
 * Returns: (transfer full): a #GSocketAddress (owned by the caller), or %NULL on
 */


/**
 * g_app_info_launch_uris:
 * @appinfo: a #GAppInfo
 * @uris: (element-type char*): a #GList containing URIs to launch.
 * @launch_context: (allow-none): a #GAppLaunchContext or %NULL
 * @error: a #GError
 *
 * Launches the application. Passes @uris to the launched application
 * as arguments, using the optional @launch_context to get information
 * about the details of the launcher (like what screen it is on).
 * On error, @error will be set accordingly.
 * To lauch the application without arguments pass a %NULL @uris list.
 * Note that even if the launch is successful the application launched
 * can fail to start if it runs into problems during startup. There is
 * no way to detect this.
 *
 * Returns: %TRUE on successful launch, %FALSE otherwise.
 */


/**
 * GDBusProxy:g-interface-info:
 *
 * Ensure that interactions with this proxy conform to the given
 * interface.  For example, when completing a method call, if the
 * type signature of the message isn't what's expected, the given
 * #GError is set.  Signals that have a type signature mismatch are
 * simply dropped.
 *
 * Since: 2.26
 */


/**
 * g_win32_input_stream_new:
 * @handle: a Win32 file handle
 * @close_fd: %TRUE to close the handle when done
 *
 * Creates a new #GWin32InputStream for the given @fd.
 * If @close_handle is %TRUE, the handle will be closed
 * when the stream is closed.
 * Note that "handle" here means a Win32 HANDLE, not a "file descriptor"
 * as used in the Windows C libraries.
 *
 * Returns: a new #GWin32InputStream
 */


/**
 * g_themed_icon_new_from_names:
 * @iconnames: an array of strings containing icon names.
 * @len: the length of the @iconnames array, or -1 if @iconnames is %NULL-terminated
 *
 * Creates a new themed icon for @iconnames.
 *
 * Returns: (transfer full): a new #GThemedIcon
 */


/**
 * GMountOperation::reply:
 * @op: a #GMountOperation.
 * @result: a #GMountOperationResult indicating how the request was handled
 *
 * Emitted when the user has replied to the mount operation.
 */


/**
 * g_dbus_method_info_unref:
 * @info: A #GDBusMethodInfo.
 *
 * If @info is statically allocated, does nothing. Otherwise decreases
 * the reference count of @info. When its reference count drops to 0,
 * the memory used is freed.
 *
 * Since: 2.26
 */


/**
 * g_initable_new_valist:
 * @object_type: a #GType supporting #GInitable.
 * @first_property_name: the name of the first property, followed by the value, and other property value pairs, and ended by %NULL.
 * @var_args: The var args list generated from @first_property_name.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError location to store the error occuring, or %NULL to ignore.
 *
 * Helper function for constructing #GInitiable object. This is
 * similar to g_object_new_valist() but also initializes the object
 * and returns %NULL, setting an error on failure.
 *
 * Returns: (transfer full): a newly allocated #GObject, or %NULL on error
 * Since: 2.22
 */


/**
 * g_socket_accept:
 * @socket: a #GSocket.
 * @cancellable: a %GCancellable or %NULL
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Accept incoming connections on a connection-based socket. This removes
 * the first outstanding connection request from the listening socket and
 * creates a #GSocket object for it.
 * The @socket must be bound to a local address with g_socket_bind() and
 * must be listening for incoming connections (g_socket_listen()).
 * If there are no outstanding connections then the operation will block
 * or return %G_IO_ERROR_WOULD_BLOCK if non-blocking I/O is enabled.
 * To be notified of an incoming connection, wait for the %G_IO_IN condition.
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): a new #GSocket, or %NULL on error.
 * Since: 2.22
 */


/**
 * g_socket_address_get_native_size:
 * @address: a #GSocketAddress
 *
 * Gets the size of @address's native <type>struct sockaddr</type>.
 * You can use this to allocate memory to pass to
 * g_socket_address_to_native().
 *
 * Returns: the size of the native <type>struct sockaddr</type> that
 * Since: 2.22
 */


/**
 * g_file_stop_mountable:
 * @file: input #GFile.
 * @flags: flags affecting the operation
 * @mount_operation: a #GMountOperation, or %NULL to avoid user interaction.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied, or %NULL.
 * @user_data: the data to pass to callback function
 *
 * Stops a file of type G_FILE_TYPE_MOUNTABLE.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * When the operation is finished, @callback will be called. You can then call
 * g_file_stop_mountable_finish() to get the result of the operation.
 *
 * Since: 2.22
 */


/**
 * g_dbus_signal_info_unref:
 * @info: A #GDBusSignalInfo.
 *
 * If @info is statically allocated, does nothing. Otherwise decreases
 * the reference count of @info. When its reference count drops to 0,
 * the memory used is freed.
 *
 * Since: 2.26
 */


/**
 * g_file_info_get_modification_time:
 * @info: a #GFileInfo.
 * @result: a #GTimeVal.
 *
 * Gets the modification time of the current @info and sets it
 * in @result.
 */


/**
 * g_dbus_proxy_get_name_owner:
 * @proxy: A #GDBusProxy.
 *
 * The unique name that owns the name that @proxy is for or %NULL if
 * no-one currently owns that name. You may connect to the
 * #GObject::notify signal to track changes to the
 * #GDBusProxy:g-name-owner property.
 *
 * Returns: The name owner or %NULL if no name owner exists. Free with g_free().
 * Since: 2.26
 */


/**
 * GInetAddress:is-link-local:
 *
 * Whether this is a link-local address.
 * See g_inet_address_get_is_link_local().
 *
 * Since: 2.22
 */


/**
 * g_io_stream_close_async:
 * @stream: a #GIOStream
 * @io_priority: the io priority of the request
 * @callback: callback to call when the request is satisfied
 * @user_data: the data to pass to callback function
 * @cancellable: optional cancellable object
 *
 * Requests an asynchronous close of the stream, releasing resources
 * related to it. When the operation is finished @callback will be
 * called. You can then call g_io_stream_close_finish() to get
 * the result of the operation.
 * For behaviour details see g_io_stream_close().
 * The asynchronous methods have a default fallback that uses threads
 * to implement asynchronicity, so they are optional for inheriting
 * classes. However, if you override one you must override all.
 *
 * Since: 2.22
 */


/**
 * GVolumeMonitor::drive-eject-button:
 * @volume_monitor: The volume monitor emitting the signal.
 * @drive: the drive where the eject button was pressed
 *
 * Emitted when the eject button is pressed on @drive.
 *
 * Since: 2.18
 */


/**
 * SECTION:gresolve:
 * @short_description: Asynchronous and cancellable DNS resolver
 * @include: gio/gio.h
 *
 * #GResolver provides cancellable synchronous and asynchronous DNS
 * resolution, for hostnames (g_resolver_lookup_by_address(),
 * g_resolver_lookup_by_name() and their async variants) and SRV
 * (service) records (g_resolver_lookup_service()).
 * #GNetworkAddress and #GNetworkService provide wrappers around
 * #GResolver functionality that also implement #GSocketConnectable,
 * making it easy to connect to a remote host/service.
 */


/**
 * g_action_activate:
 * @action: a #GAction
 * @parameter: (allow-none): the parameter to the activation
 *
 * Activates the action.
 * the parameter type given at construction time).  If the parameter
 * type was %NULL then @parameter must also be %NULL.
 *
 * Since: 2.28
 */


/**
 * g_dbus_proxy_get_interface_name:
 * @proxy: A #GDBusProxy.
 *
 * Gets the D-Bus interface name @proxy is for.
 *
 * Returns: A string owned by @proxy. Do not free.
 * Since: 2.26
 */


/**
 * g_file_info_set_attribute_string:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 * @attr_value: a string.
 *
 * Sets the @attribute to contain the given @attr_value,
 * if possible.
 */


/**
 * g_dbus_proxy_set_default_timeout:
 * @proxy: A #GDBusProxy.
 * @timeout_msec: Timeout in milliseconds.
 *
 * Sets the timeout to use if -1 (specifying default timeout) is
 * passed as @timeout_msec in the g_dbus_proxy_call() and
 * g_dbus_proxy_call_sync() functions.
 * See the #GDBusProxy:g-default-timeout property for more details.
 *
 * Since: 2.26
 */


/**
 * GSettings::writable-changed:
 * @settings: the object on which the signal was emitted
 * @key: the key
 *
 * The "writable-changed" signal is emitted when the writability of a
 * key has potentially changed.  You should call
 * g_settings_is_writable() in order to determine the new status.
 * This signal supports detailed connections.  You can connect to the
 * detailed signal "writable-changed::x" in order to only receive
 * callbacks when the writability of "x" changes.
 */


/**
 * g_cancellable_reset:
 * @cancellable: a #GCancellable object.
 *
 * Resets @cancellable to its uncancelled state.
 */


/**
 * g_unix_mount_monitor_new:
 *
 * Gets a new #GUnixMountMonitor. The default rate limit for which the
 * monitor will report consecutive changes for the mount and mount
 * point entry files is the default for a #GFileMonitor. Use
 * g_unix_mount_monitor_set_rate_limit() to change this.
 *
 * Returns: a #GUnixMountMonitor.
 */


/**
 * g_unix_fd_list_new_from_array:
 * @fds: the initial list of file descriptors
 * @n_fds: the length of #fds, or -1
 *
 * Creates a new #GUnixFDList containing the file descriptors given in
 * may no longer be used by the caller.  The array itself is owned by
 * the caller.
 * Each file descriptor in the array should be set to close-on-exec.
 * If @n_fds is -1 then @fds must be terminated with -1.
 *
 * Returns: a new #GUnixFDList
 * Since: 2.24
 */


/**
 * GMountOperation:username:
 *
 * The user name that is used for authentication when carrying out
 * the mount operation.
 */


/**
 * g_dbus_annotation_info_ref:
 * @info: A #GDBusNodeInfo
 *
 * If @info is statically allocated does nothing. Otherwise increases
 * the reference count.
 *
 * Returns: The same @info.
 * Since: 2.26
 */


/**
 * g_file_info_set_attribute:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 * @type: a #GFileAttributeType
 * @value_p: pointer to the value
 *
 * Sets the @attribute to contain the given value, if possible.
 */


/**
 * SECTION:gpermissio:
 * @title: GPermission
 * @short_description: an object representing the permission to perform a certain action
 *
 * A #GPermission represents the status of the caller's permission to
 * perform a certain action.
 * You can query if the action is currently allowed and if it is
 * possible to acquire the permission so that the action will be allowed
 * in the future.
 * There is also an API to actually acquire the permission and one to
 * release it.
 * As an example, a #GPermission might represent the ability for the
 * user to write to a #GSettings object.  This #GPermission object could
 * then be used to decide if it is appropriate to show a "Click here to
 * unlock" button in a dialog and to provide the mechanism to invoke
 * when that button is clicked.
 */


/**
 * g_permission_acquire:
 * @permission: a #GPermission instance
 * @cancellable: a #GCancellable, or %NULL
 * @error: a pointer to a %NULL #GError, or %NULL
 * @returns: %TRUE if the permission was successfully acquired
 *
 * Attempts to acquire the permission represented by @permission.
 * The precise method by which this happens depends on the permission
 * and the underlying authentication mechanism.  A simple example is
 * that a dialog may appear asking the user to enter their password.
 * You should check with g_permission_get_can_acquire() before calling
 * this function.
 * If the permission is acquired then %TRUE is returned.  Otherwise,
 * %FALSE is returned and @error is set appropriately.
 * This call is blocking, likely for a very long time (in the case that
 * user interaction is required).  See g_permission_acquire_async() for
 * the non-blocking version.
 *
 * Since: 2.26
 */


/**
 * g_file_enumerator_next_files_async:
 * @enumerator: a #GFileEnumerator.
 * @num_files: the number of file info objects to request
 * @io_priority: the <link linkend="gioscheduler">io priority</link> of the request.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: the data to pass to callback function
 *
 * Request information for a number of files from the enumerator asynchronously.
 * When all i/o for the operation is finished the @callback will be called with
 * the requested information.
 * The callback can be called with less than @num_files files in case of error
 * or at the end of the enumerator. In case of a partial error the callback will
 * be called with any succeeding items and no error, and on the next request the
 * error will be reported. If a request is cancelled the callback will be called
 * with %G_IO_ERROR_CANCELLED.
 * During an async request no other sync and async calls are allowed, and will
 * result in %G_IO_ERROR_PENDING errors.
 * Any outstanding i/o request with higher priority (lower numerical value) will
 * be executed before an outstanding request with lower priority. Default
 * priority is %G_PRIORITY_DEFAULT.
 */


/**
 * g_file_enumerate_children_async:
 * @file: input #GFile.
 * @attributes: an attribute query string.
 * @flags: a set of #GFileQueryInfoFlags.
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: the data to pass to callback function
 *
 * Asynchronously gets the requested information about the files in a directory. The result
 * is a #GFileEnumerator object that will give out #GFileInfo objects for
 * all the files in the directory.
 * For more details, see g_file_enumerate_children() which is
 * the synchronous version of this call.
 * When the operation is finished, @callback will be called. You can then call
 * g_file_enumerate_children_finish() to get the result of the operation.
 */


/**
 * g_action_group_action_removed:
 * @action_group: a #GActionGroup
 * @action_name: the name of an action in the group
 *
 * Emits the #GActionGroup::action-removed signal on @action_group.
 * This function should only be called by #GActionGroup implementations.
 *
 * Since: 2.28
 */


/**
 * g_file_info_set_file_type:
 * @info: a #GFileInfo.
 * @type: a #GFileType.
 *
 * Sets the file type in a #GFileInfo to @type.
 * See %G_FILE_ATTRIBUTE_STANDARD_TYPE.
 */


/**
 * g_data_input_stream_read_int16:
 * @stream: a given #GDataInputStream.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: #GError for error reporting.
 *
 * Reads a 16-bit/2-byte value from @stream.
 * In order to get the correct byte order for this read operation,
 * see g_data_input_stream_get_byte_order() and g_data_input_stream_set_byte_order().
 * an error occurred.
 *
 * Returns: a signed 16-bit/2-byte value read from @stream or %0 if
 */


/**
 * SECTION:gdbusintrospectio:
 * @title: D-Bus Introspection Data
 * @short_description: Node and interface description data structures
 * @include: gio/gio.h
 *
 * Various data structures and convenience routines to parse and
 * generate D-Bus introspection XML. Introspection information is
 * used when registering objects with g_dbus_connection_register_object().
 * The format of D-Bus introspection XML is specified in the
 * <link linkend="http://dbus.freedesktop.org/doc/dbus-specification.html&num;introspection-format">D-Bus specification</link>.
 */


/**
 * g_srv_target_list_sort: (skip)
 * @targets: a #GList of #GSrvTarget
 *
 * Sorts @targets in place according to the algorithm in RFC 2782.
 *
 * Returns: (transfer full): the head of the sorted list.
 * Since: 2.22
 */


/**
 * g_credentials_set_native:
 * @credentials: A #GCredentials.
 * @native_type: The type of native credentials to set.
 * @native: A pointer to native credentials.
 *
 * Copies the native credentials of type @native_type from @native
 * into @credentials.
 * It is a programming error (which will cause an warning to be
 * logged) to use this method if there is no #GCredentials support for
 * the OS or if @native_type isn't supported by the OS.
 *
 * Since: 2.26
 */


/**
 * g_dbus_connection_get_stream:
 * @connection: a #GDBusConnection
 *
 * Gets the underlying stream used for IO.
 *
 * Returns: (transfer none): the stream used for IO
 * Since: 2.26
 */


/**
 * g_network_service_new:
 * @service: the service type to look up (eg, "ldap")
 * @protocol: the networking protocol to use for @service (eg, "tcp")
 * @domain: the DNS domain to look up the service in
 *
 * Creates a new #GNetworkService representing the given @service,
 * #GSocketConnectable interface to resolve it.
 *
 * Returns: (transfer full): a new #GNetworkService
 * Since: 2.22
 */


/**
 * g_credentials_new:
 *
 * Creates a new #GCredentials object with credentials matching the
 * the current process.
 *
 * Returns: A #GCredentials. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * SECTION:ginitabl:
 * @short_description: Failable object initialization interface
 * @include: gio/gio.h
 * @see_also: #GAsyncInitable
 *
 * #GInitable is implemented by objects that can fail during
 * initialization. If an object implements this interface the
 * g_initable_init() function must be called as the first thing
 * after construction. If g_initable_init() is not called, or if
 * it returns an error, all further operations on the object
 * should fail, generally with a %G_IO_ERROR_NOT_INITIALIZED error.
 * Users of objects implementing this are not intended to use
 * the interface method directly, instead it will be used automatically
 * in various ways. For C applications you generally just call
 * g_initable_new() directly, or indirectly via a foo_thing_new() wrapper.
 * This will call g_initable_init() under the cover, returning %NULL and
 * setting a %GError on failure.
 * For bindings in languages where the native constructor supports
 * exceptions the binding could check for objects implemention %GInitable
 * during normal construction and automatically initialize them, throwing
 * an exception on failure.
 */


/**
 * g_file_info_get_file_type:
 * @info: a #GFileInfo.
 *
 * Gets a file's type (whether it is a regular file, symlink, etc).
 * This is different from the file's content type, see g_file_info_get_content_type().
 *
 * Returns: a #GFileType for the given file.
 */


/**
 * g_dbus_node_info_generate_xml:
 * @info: A #GDBusNodeInfo.
 * @indent: Indentation level.
 * @string_builder: A #GString to to append XML data to.
 *
 * Appends an XML representation of @info (and its children) to @string_builder.
 * This function is typically used for generating introspection XML documents at run-time for
 * handling the <literal>org.freedesktop.DBus.Introspectable.Introspect</literal> method.
 *
 * Since: 2.26
 */


/**
 * g_dbus_is_interface_name:
 * @string: The string to check.
 *
 * Checks if @string is a valid D-Bus interface name.
 *
 * Returns: %TRUE if valid, %FALSE otherwise.
 * Since: 2.26
 */


/**
 * GUnixMountMonitor::mounts-changed:
 * @monitor: the object on which the signal is emitted
 *
 * Emitted when the unix mounts have changed.
 */


/**
 * g_dbus_address_get_for_bus_sync:
 * @bus_type: A #GBusType.
 * @cancellable: A #GCancellable or %NULL.
 * @error: Return location for error or %NULL.
 *
 * Synchronously looks up the D-Bus address for the well-known message
 * bus instance specified by @bus_type. This may involve using various
 * platform specific mechanisms.
 *
 * Returns: A valid D-Bus address string for @bus_type or %NULL if @error is set.
 * Since: 2.26
 */


/**
 * GInetAddress:is-multicast:
 *
 * Whether this is a multicast address.
 * See g_inet_address_get_is_multicast().
 *
 * Since: 2.22
 */


/**
 * GPermission:
 *
 * #GPermission is an opaque data structure and can only be accessed
 * using the following functions.
 */


/**
 * g_filename_completer_new:
 *
 * Creates a new filename completer.
 *
 * Returns: a #GFilenameCompleter.
 */


/**
 * g_data_output_stream_put_int16:
 * @stream: a #GDataOutputStream.
 * @data: a #gint16.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, %NULL to ignore.
 *
 * Puts a signed 16-bit integer into the output stream.
 *
 * Returns: %TRUE if @data was successfully added to the @stream.
 */


/**
 * g_io_extension_point_lookup:
 * @name: the name of the extension point
 *
 * Looks up an existing extension point.
 * registered extension point with the given name
 *
 * Returns: the #GIOExtensionPoint, or %NULL if there is no
 */


/**
 * g_dbus_connection_send_message_with_reply_sync:
 * @connection: A #GDBusConnection.
 * @message: A #GDBusMessage.
 * @flags: Flags affecting how the message is sent.
 * @timeout_msec: The timeout in milliseconds, -1 to use the default timeout or %G_MAXINT for no timeout.
 * @out_serial: Return location for serial number assigned to @message when sending it or %NULL.
 * @cancellable: A #GCancellable or %NULL.
 * @error: Return location for error or %NULL.
 *
 * Synchronously sends @message to the peer represented by @connection
 * and blocks the calling thread until a reply is received or the
 * timeout is reached. See g_dbus_connection_send_message_with_reply()
 * for the asynchronous version of this method.
 * Unless @flags contain the
 * %G_DBUS_SEND_MESSAGE_FLAGS_PRESERVE_SERIAL flag, the serial number
 * will be assigned by @connection and set on @message via
 * g_dbus_message_set_serial(). If @out_serial is not %NULL, then the
 * serial number used will be written to this location prior to
 * submitting the message to the underlying transport.
 * If @connection is closed then the operation will fail with
 * %G_IO_ERROR_CLOSED. If @cancellable is canceled, the operation will
 * fail with %G_IO_ERROR_CANCELLED. If @message is not well-formed,
 * the operation fails with %G_IO_ERROR_INVALID_ARGUMENT.
 * Note that @error is only set if a local in-process error
 * occured. That is to say that the returned #GDBusMessage object may
 * be of type %G_DBUS_MESSAGE_TYPE_ERROR. Use
 * g_dbus_message_to_gerror() to transcode this to a #GError.
 * See <xref linkend="gdbus-server"/> and <xref
 * linkend="gdbus-unix-fd-client"/> for an example of how to use this
 * low-level API to send and receive UNIX file descriptors.
 * Note that @message must be unlocked, unless @flags contain the
 * %G_DBUS_SEND_MESSAGE_FLAGS_PRESERVE_SERIAL flag.
 *
 * Returns: (transfer full): A locked #GDBusMessage that is the reply to @message or %NULL if @error is set.
 * Since: 2.26
 */


/**
 * GDesktopAppInfo:
 *
 * Information about an installed application from a desktop file.
 */


/**
 * g_credentials_to_string:
 * @credentials: A #GCredentials object.
 *
 * Creates a human-readable textual representation of @credentials
 * that can be used in logging and debug messages. The format of the
 * returned string may change in future GLib release.
 *
 * Returns: A string that should be freed with g_free().
 * Since: 2.26
 */


/**
 * g_data_input_stream_set_byte_order:
 * @stream: a given #GDataInputStream.
 * @order: a #GDataStreamByteOrder to set.
 *
 * This function sets the byte order for the given @stream. All subsequent
 * reads from the @stream will be read in the given @order.
 */


/**
 * g_dbus_message_get_locked:
 * @message: A #GDBusMessage.
 *
 * Checks whether @message is locked. To monitor changes to this
 * value, conncet to the #GObject::notify signal to listen for changes
 * on the #GDBusMessage:locked property.
 *
 * Returns: %TRUE if @message is locked, %FALSE otherwise.
 * Since: 2.26
 */


/**
 * GAction:state-type:
 *
 * The #GVariantType of the state that the action has, or %NULL if the
 * action is stateless.
 *
 * Since: 2.28
 */


/**
 * g_socket_send_with_blocking:
 * @socket: a #GSocket
 * @buffer: the buffer containing the data to send.
 * @size: the number of bytes to send
 * @blocking: whether to do blocking or non-blocking I/O
 * @cancellable: a %GCancellable or %NULL
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * This behaves exactly the same as g_socket_send(), except that
 * the choice of blocking or non-blocking behavior is determined by
 * the @blocking argument rather than by @socket's properties.
 * on error
 *
 * Returns: Number of bytes written (which may be less than @size), or -1
 * Since: 2.26
 */


/**
 * g_unix_socket_address_abstract_names_supported:
 *
 * Checks if abstract unix domain socket names are supported.
 *
 * Returns: %TRUE if supported, %FALSE otherwise
 * Since: 2.22
 */


/**
 * g_bus_unwatch_name:
 * @watcher_id: An identifier obtained from g_bus_watch_name()
 *
 * Stops watching a name.
 *
 * Since: 2.26
 */


/**
 * g_socket_connectable_proxy_enumerate:
 * @connectable: a #GSocketConnectable
 *
 * Creates a #GSocketAddressEnumerator for @connectable that will
 * return #GProxyAddress<!-- -->es for addresses that you must connect
 * to via a proxy.
 * If @connectable does not implement
 * g_socket_connectable_proxy_enumerate(), this will fall back to
 * calling g_socket_connectable_enumerate().
 *
 * Returns: (transfer full): a new #GSocketAddressEnumerator.
 * Since: 2.26
 */


/**
 * g_dbus_method_invocation_get_interface_name:
 * @invocation: A #GDBusMethodInvocation.
 *
 * Gets the name of the D-Bus interface the method was invoked on.
 *
 * Returns: A string. Do not free, it is owned by @invocation.
 * Since: 2.26
 */


/**
 * g_memory_input_stream_new:
 *
 * Creates a new empty #GMemoryInputStream.
 *
 * Returns: a new #GInputStream
 */


/**
 * g_resolver_free_targets: (skip)
 * @targets: a #GList of #GSrvTarget
 *
 * Frees @targets (which should be the return value from
 * g_resolver_lookup_service() or g_resolver_lookup_service_finish()).
 * (This is a convenience method; you can also simply free the
 * results by hand.)
 *
 * Since: 2.22
 */


/**
 * g_cancellable_is_cancelled:
 * @cancellable: a #GCancellable or NULL.
 *
 * Checks if a cancellable job has been cancelled.
 * FALSE if called with %NULL or if item is not cancelled.
 *
 * Returns: %TRUE if @cancellable is cancelled,
 */


/**
 * g_file_info_get_is_hidden:
 * @info: a #GFileInfo.
 *
 * Checks if a file is hidden.
 *
 * Returns: %TRUE if the file is a hidden file, %FALSE otherwise.
 */


/**
 * g_dbus_server_start:
 * @server: A #GDBusServer.
 *
 * Starts @server.
 *
 * Since: 2.26
 */


/**
 * SECTION:gsocketconnectabl:
 * @short_description: Interface for potential socket endpoints
 *
 * Objects that describe one or more potential socket endpoints
 * implement #GSocketConnectable. Callers can then use
 * g_socket_connectable_enumerate() to get a #GSocketAddressEnumerator
 * to try out each socket address in turn until one succeeds, as shown
 * in the sample code below.
 * |[
 * MyConnectionType *
 * connect_to_host (const char    *hostname,
 * guint16        port,
 * GCancellable  *cancellable,
 * GError       **error)
 * {
 * MyConnection *conn = NULL;
 * GSocketConnectable *addr;
 * GSocketAddressEnumerator *enumerator;
 * GSocketAddress *sockaddr;
 * GError *conn_error = NULL;
 * addr = g_network_address_new ("www.gnome.org", 80);
 * enumerator = g_socket_connectable_enumerate (addr);
 * g_object_unref (addr);
 * /<!-- -->* Try each sockaddr until we succeed. Record the first
 * * connection error, but not any further ones (since they'll probably
 * * be basically the same as the first).
 * *<!-- -->/
 * while (!conn && (sockaddr = g_socket_address_enumerator_next (enumerator, cancellable, error))
 * {
 * g_object_unref (sockaddr);
 * }
 * g_object_unref (enumerator);
 * if (conn)
 * {
 * if (conn_error)
 * {
 * /<!-- -->* We couldn't connect to the first address, but we succeeded
 * * in connecting to a later address.
 * *<!-- -->/
 * g_error_free (conn_error);
 * }
 * return conn;
 * }
 * else if (error)
 * {
 * /<!-- -->* Either the initial lookup failed, or else the caller
 * * cancelled us.
 * *<!-- -->/
 * if (conn_error)
 * g_error_free (conn_error);
 * return NULL;
 * }
 * else
 * {
 * g_error_propagate (error, conn_error);
 * return NULL;
 * }
 * }
 * ]|
 *
 * Conn = connect_to_sockaddr (sockaddr, conn_error ? null : &conn_error);
 */


/**
 * g_dbus_connection_close_sync:
 * @connection: A #GDBusConnection.
 * @cancellable: A #GCancellable or %NULL.
 * @error: Return location for error or %NULL.
 *
 * Synchronously closees @connection. The calling thread is blocked
 * until this is done. See g_dbus_connection_close() for the
 * asynchronous version of this method and more details about what it
 * does.
 *
 * Returns: %TRUE if the operation succeeded, %FALSE if @error is set.
 * Since: 2.26
 */


/**
 * g_settings_get_double:
 * @settings: a #GSettings object
 * @key: the key to get the value for
 * @returns: a double
 *
 * Gets the value that is stored at @key in @settings.
 * A convenience variant of g_settings_get() for doubles.
 * It is a programmer error to give a @key that isn't specified as
 * having a 'double' type in the schema for @settings.
 *
 * Since: 2.26
 */


/**
 * g_app_info_equal:
 * @appinfo1: the first #GAppInfo.
 * @appinfo2: the second #GAppInfo.
 *
 * Checks if two #GAppInfo<!-- -->s are equal.
 *
 * Returns: %TRUE if @appinfo1 is equal to @appinfo2. %FALSE otherwise.
 */


/**
 * g_mount_remount:
 * @mount: a #GMount.
 * @flags: flags affecting the operation
 * @mount_operation: a #GMountOperation or %NULL to avoid user interaction.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback, or %NULL.
 * @user_data: user data passed to @callback.
 *
 * Remounts a mount. This is an asynchronous operation, and is
 * finished by calling g_mount_remount_finish() with the @mount
 * and #GAsyncResults data returned in the @callback.
 * Remounting is useful when some setting affecting the operation
 * of the volume has been changed, as these may need a remount to
 * take affect. While this is semantically equivalent with unmounting
 * and then remounting not all backends might need to actually be
 * unmounted.
 */


/**
 * g_volume_can_mount:
 * @volume: a #GVolume.
 *
 * Checks if a volume can be mounted.
 *
 * Returns: %TRUE if the @volume can be mounted. %FALSE otherwise.
 */


/**
 * g_volume_monitor_get:
 *
 * Gets the volume monitor used by gio.
 * g_object_unref() when done with it.
 *
 * Returns: (transfer full): a reference to the #GVolumeMonitor used by gio. Call
 */


/**
 * g_file_make_directory_with_parents:
 * @file: input #GFile.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Creates a directory and any parent directories that may not exist similar to
 * 'mkdir -p'. If the file system does not support creating directories, this
 * function will fail, setting @error to %G_IO_ERROR_NOT_SUPPORTED.
 * For a local #GFile the newly created directories will have the default
 * (current) ownership and permissions of the current process.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * otherwise.
 *
 * Returns: %TRUE if all directories have been successfully created, %FALSE
 * Since: 2.18
 */


/**
 * g_buffered_input_stream_peek_buffer:
 * @stream: a #GBufferedInputStream
 * @count: a #gsize to get the number of bytes available in the buffer
 *
 * Returns the buffer with the currently available bytes. The returned
 * buffer must not be modified and will become invalid when reading from
 * the stream or filling the buffer.
 *
 * Returns: read-only buffer
 */


/**
 * g_file_query_file_type:
 * @file: input #GFile.
 * @flags: a set of #GFileQueryInfoFlags passed to g_file_query_info().
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 *
 * Utility function to inspect the #GFileType of a file. This is
 * implemented using g_file_query_info() and as such does blocking I/O.
 * The primary use case of this method is to check if a file is a regular file,
 * directory, or symlink.
 * does not exist
 *
 * Returns: The #GFileType of the file and #G_FILE_TYPE_UNKNOWN if the file
 * Since: 2.18
 */


/**
 * SECTION:gasyncinitabl:
 * @short_description: Asynchronously failable object initialization interface
 * @include: gio/gio.h
 * @see_also: #GInitable
 *
 * This is the asynchronous version of #GInitable; it behaves the same
 * in all ways except that initialization is asynchronous. For more details
 * see the descriptions on #GInitable.
 * A class may implement both the #GInitable and #GAsyncInitable interfaces.
 * Users of objects implementing this are not intended to use the interface
 * method directly; instead it will be used automatically in various ways.
 * For C applications you generally just call g_async_initable_new_async()
 * directly, or indirectly via a foo_thing_new_async() wrapper. This will call
 * g_async_initable_init_async() under the cover, calling back with %NULL and
 * a set %GError on failure.
 * A typical implementation might look something like this:
 * |[
 * enum {
 * NOT_INITIALIZED,
 * INITIALIZING,
 * INITIALIZED
 * };
 * static void
 * _foo_ready_cb (Foo *self)
 * {
 * GList *l;
 * self->priv->state = INITIALIZED;
 * for (l = self->priv->init_results; l != NULL; l = l->next)
 * {
 * GSimpleAsyncResult *simple = l->data;
 * if (!self->priv->success)
 * g_simple_async_result_set_error (simple, ...);
 * g_simple_async_result_complete (simple);
 * g_object_unref (simple);
 * }
 * g_list_free (self->priv->init_results);
 * self->priv->init_results = NULL;
 * }
 * static void
 * foo_init_async (GAsyncInitable       *initable,
 * int                   io_priority,
 * GCancellable         *cancellable,
 * GAsyncReadyCallback   callback,
 * gpointer              user_data)
 * {
 * Foo *self = FOO (initable);
 * GSimpleAsyncResult *simple;
 * simple = g_simple_async_result_new (G_OBJECT (initable)
 * callback,
 * user_data,
 * foo_init_async);
 * switch (self->priv->state)
 * {
 * case NOT_INITIALIZED:
 * _foo_get_ready (self);
 * self->priv->init_results = g_list_append (self->priv->init_results,
 * simple);
 * self->priv->state = INITIALIZING;
 * break;
 * case INITIALIZING:
 * self->priv->init_results = g_list_append (self->priv->init_results,
 * simple);
 * break;
 * case INITIALIZED:
 * if (!self->priv->success)
 * g_simple_async_result_set_error (simple, ...);
 * g_simple_async_result_complete_in_idle (simple);
 * g_object_unref (simple);
 * break;
 * }
 * }
 * static gboolean
 * foo_init_finish (GAsyncInitable       *initable,
 * GAsyncResult         *result,
 * GError              **error)
 * {
 * g_return_val_if_fail (g_simple_async_result_is_valid (result,
 * G_OBJECT (initable), foo_init_async), FALSE);
 * if (g_simple_async_result_propagate_error (G_SIMPLE_ASYNC_RESULT (result),
 * error))
 * return FALSE;
 * return TRUE;
 * }
 * static void
 * foo_async_initable_iface_init (gpointer g_iface,
 * gpointer data)
 * {
 * GAsyncInitableIface *iface = g_iface;
 * iface->init_async = foo_init_async;
 * iface->init_finish = foo_init_finish;
 * }
 * ]|
 */


/**
 * g_file_attribute_info_list_new:
 *
 * Creates a new file attribute info list.
 *
 * Returns: a #GFileAttributeInfoList.
 */


/**
 * g_resolver_lookup_by_name_finish:
 * @resolver: a #GResolver
 * @result: the result passed to your #GAsyncReadyCallback
 * @error: return location for a #GError, or %NULL
 *
 * Retrieves the result of a call to
 * g_resolver_lookup_by_name_async().
 * If the DNS resolution failed, @error (if non-%NULL) will be set to
 * a value from #GResolverError. If the operation was cancelled,
 * of #GInetAddress, or %NULL on error. See g_resolver_lookup_by_name()
 * for more details.
 *
 * Returns: (element-type GInetAddress) (transfer full): a #GList
 * Since: 2.22
 */


/**
 * g_data_input_stream_get_newline_type:
 * @stream: a given #GDataInputStream.
 *
 * Gets the current newline type for the @stream.
 *
 * Returns: #GDataStreamNewlineType for the given @stream.
 */


/**
 * g_volume_eject_with_operation_finish:
 * @volume: a #GVolume.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occuring, or %NULL to ignore.
 *
 * Finishes ejecting a volume. If any errors occurred during the operation,
 *
 * Returns: %TRUE if the volume was successfully ejected. %FALSE otherwise.
 * Since: 2.22
 */


/**
 * g_drive_can_poll_for_media:
 * @drive: a #GDrive.
 *
 * Checks if a drive can be polled for media changes.
 * %FALSE otherwise.
 *
 * Returns: %TRUE if the @drive can be polled for media changes,
 */


/**
 * g_dbus_error_register_error_domain:
 * @error_domain_quark_name: The error domain name.
 * @quark_volatile: A pointer where to store the #GQuark.
 * @entries: A pointer to @num_entries #GDBusErrorEntry struct items.
 * @num_entries: Number of items to register.
 *
 * Helper function for associating a #GError error domain with D-Bus error names.
 *
 * Since: 2.26
 */


/**
 * g_cancellable_release_fd:
 * @cancellable: a #GCancellable
 *
 * Releases a resources previously allocated by g_cancellable_get_fd()
 * or g_cancellable_make_pollfd().
 * For compatibility reasons with older releases, calling this function
 * is not strictly required, the resources will be automatically freed
 * when the @cancellable is finalized. However, the @cancellable will
 * block scarce file descriptors until it is finalized if this function
 * is not called. This can cause the application to run out of file
 * descriptors when many #GCancellables are used at the same time.
 *
 * Since: 2.22
 */


/**
 * g_data_input_stream_read_upto:
 * @stream: a #GDataInputStream
 * @stop_chars: characters to terminate the read
 * @stop_chars_len: length of @stop_chars. May be -1 if @stop_chars is nul-terminated
 * @length: a #gsize to get the length of the data read in
 * @cancellable: optional #GCancellable object, %NULL to ignore
 * @error: #GError for error reporting
 *
 * Reads a string from the data input stream, up to the first
 * occurrence of any of the stop characters.
 * In contrast to g_data_input_stream_read_until(), this function
 * does <emphasis>not</emphasis> consume the stop character. You have
 * to use g_data_input_stream_read_byte() to get it before calling
 * g_data_input_stream_read_upto() again.
 * Note that @stop_chars may contain '\0' if @stop_chars_len is
 * specified.
 * any of the stop characters. Set @length to a #gsize to get the length
 * of the string. This function will return %NULL on an error
 *
 * Returns: a string with the data that was read before encountering
 * Since: 2.24
 */


/**
 * g_inet_address_get_family:
 * @address: a #GInetAddress
 *
 * Gets @address's family
 *
 * Returns: @address's family
 * Since: 2.22
 */


/**
 * g_filename_completer_get_completions:
 * @completer: the filename completer.
 * @initial_text: text to be completed.
 *
 * Gets an array of completion strings for a given initial text.
 * This array must be freed by g_strfreev() when finished.
 *
 * Returns: (array zero-terminated=1) (transfer full): array of strings with possible completions for @initial_text.
 */


/**
 * g_data_output_stream_get_byte_order:
 * @stream: a #GDataOutputStream.
 *
 * Gets the byte order for the stream.
 *
 * Returns: the #GDataStreamByteOrder for the @stream.
 */


/**
 * g_file_info_get_icon:
 * @info: a #GFileInfo.
 *
 * Gets the icon for a file.
 *
 * Returns: (transfer none): #GIcon for the given @info.
 */


/**
 * g_filter_output_stream_set_close_base_stream:
 * @stream: a #GFilterOutputStream.
 * @close_base: %TRUE to close the base stream.
 *
 * Sets whether the base stream will be closed when @stream is closed.
 */


/**
 * g_file_set_display_name:
 * @file: input #GFile.
 * @display_name: a string.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Renames @file to the specified display name.
 * The display name is converted from UTF8 to the correct encoding for the target
 * filesystem if possible and the @file is renamed to this.
 * If you want to implement a rename operation in the user interface the edit name
 * (#G_FILE_ATTRIBUTE_STANDARD_EDIT_NAME) should be used as the initial value in the rename
 * widget, and then the result after editing should be passed to g_file_set_display_name().
 * On success the resulting converted filename is returned.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * if there was an error.
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): a #GFile specifying what @file was renamed to, or %NULL
 */


/**
 * g_settings_get_has_unapplied:
 * @settings: a #GSettings object
 * @returns: %TRUE if @settings has unapplied changes
 *
 * Returns whether the #GSettings object has any unapplied
 * changes.  This can only be the case if it is in 'delayed-apply' mode.
 *
 * Since: 2.26
 */


/**
 * SECTION:gconverteroutputstrea:
 * @short_description: Converter Output Stream
 * @include: gio/gio.h
 * @see_also: #GOutputStream, #GConverter
 *
 * Converter output stream implements #GOutputStream and allows
 * conversion of data of various types during reading.
 */


/**
 * g_file_poll_mountable_finish:
 * @file: input #GFile.
 * @result: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes a poll operation. See g_file_poll_mountable() for details.
 * Finish an asynchronous poll operation that was polled
 * with g_file_poll_mountable().
 * otherwise.
 *
 * Returns: %TRUE if the operation finished successfully. %FALSE
 * Since: 2.22
 */


/**
 * g_io_error_quark:
 *
 * Gets the GIO Error Quark.
 *
 * Returns: a #GQuark.
 */


/**
 * g_network_service_get_domain:
 * @srv: a #GNetworkService
 *
 * Gets the domain that @srv serves. This might be either UTF-8 or
 * ASCII-encoded, depending on what @srv was created with.
 *
 * Returns: @srv's domain name
 * Since: 2.22
 */


/**
 * g_file_get_child_for_display_name:
 * @file: input #GFile.
 * @display_name: string to a possible child.
 * @error: #GError.
 *
 * Gets the child of @file for a given @display_name (i.e. a UTF8
 * version of the name). If this function fails, it returns %NULL and @error will be
 * set. This is very useful when constructing a GFile for a new file
 * and the user entered the filename in the user interface, for instance
 * when you select a directory and type a filename in the file selector.
 * This call does no blocking i/o.
 * %NULL if the display name couldn't be converted.
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): a #GFile to the specified child, or
 */


/**
 * g_file_info_set_modification_tim:
 * @info: a #GFileInfo.
 * @mtime: a #GTimeVal.
 *
 * Sets the %G_FILE_ATTRIBUTE_TIME_MODIFIED attribute in the file
 * info to the given time value.
 */


/**
 * g_socket_get_protocol:
 * @socket: a #GSocket.
 *
 * Gets the socket protocol id the socket was created with.
 * In case the protocol is unknown, -1 is returned.
 *
 * Returns: a protocol id, or -1 if unknown
 * Since: 2.22
 */


/**
 * g_file_query_info_async:
 * @file: input #GFile.
 * @attributes: an attribute query string.
 * @flags: a set of #GFileQueryInfoFlags.
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: the data to pass to callback function
 *
 * Asynchronously gets the requested information about specified @file. The result
 * is a #GFileInfo object that contains key-value attributes (such as type or size
 * for the file).
 * For more details, see g_file_query_info() which is
 * the synchronous version of this call.
 * When the operation is finished, @callback will be called. You can then call
 * g_file_query_info_finish() to get the result of the operation.
 */


/**
 * g_app_info_remove_supports_type:
 * @appinfo: a #GAppInfo.
 * @content_type: a string.
 * @error: a #GError.
 *
 * Removes a supported type from an application, if possible.
 *
 * Returns: %TRUE on success, %FALSE on error.
 */


/**
 * g_initable_newv:
 * @object_type: a #GType supporting #GInitable.
 * @n_parameters: the number of parameters in @parameters
 * @parameters: the parameters to use to construct the object
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError location to store the error occuring, or %NULL to ignore.
 *
 * Helper function for constructing #GInitiable object. This is
 * similar to g_object_newv() but also initializes the object
 * and returns %NULL, setting an error on failure.
 *
 * Returns: (transfer full): a newly allocated #GObject, or %NULL on error
 * Since: 2.22
 */


/**
 * g_unix_output_stream_get_close_fd:
 * @stream: a #GUnixOutputStream
 *
 * Returns whether the file descriptor of @stream will be
 * closed when the stream is closed.
 *
 * Returns: %TRUE if the file descriptor is closed when done
 * Since: 2.20
 */


/**
 * g_settings_get_int:
 * @settings: a #GSettings object
 * @key: the key to get the value for
 * @returns: an integer
 *
 * Gets the value that is stored at @key in @settings.
 * A convenience variant of g_settings_get() for 32-bit integers.
 * It is a programmer error to give a @key that isn't specified as
 * having a int32 type in the schema for @settings.
 *
 * Since: 2.26
 */


/**
 * g_data_input_stream_set_newline_type:
 * @stream: a #GDataInputStream.
 * @type: the type of new line return as #GDataStreamNewlineType.
 *
 * Sets the newline type for the @stream.
 * Note that using G_DATA_STREAM_NEWLINE_TYPE_ANY is slightly unsafe. If a read
 * chunk ends in "CR" we must read an additional byte to know if this is "CR" or
 * "CR LF", and this might block if there is no more data availible.
 */


/**
 * g_inet_socket_address_new:
 * @address: a #GInetAddress
 * @port: a port number
 *
 * Creates a new #GInetSocketAddress for @address and @port.
 *
 * Returns: a new #GInetSocketAddress
 * Since: 2.22
 */


/**
 * g_dbus_connection_new_for_address_finish:
 * @res: A #GAsyncResult obtained from the #GAsyncReadyCallback passed to g_dbus_connection_new().
 * @error: Return location for error or %NULL.
 *
 * Finishes an operation started with g_dbus_connection_new_for_address().
 *
 * Returns: A #GDBusConnection or %NULL if @error is set. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * g_srv_target_get_weight:
 * @target: a #GSrvTarget
 *
 * Gets @target's weight. You should not need to look at this;
 * #GResolver already sorts the targets according to the algorithm in
 * RFC 2782.
 *
 * Returns: @target's weight
 * Since: 2.22
 */


/**
 * g_application_command_line_get_cwd:
 * @cmdline: a #GApplicationCommandLine
 *
 * Gets the working directory of the command line invocation.  The
 * string may contain non-utf8 data.
 * It is possible that the remote application did not send a working
 * directory, so this may be %NULL.
 * The return value should not be modified or freed and is valid for as
 * long as @cmdline exists.
 *
 * Returns: the current directory, or %NULL
 * Since: 2.28
 */


/**
 * g_mount_operation_set_password:
 * @op: a #GMountOperation.
 * @password: password to set.
 *
 * Sets the mount operation's password to @password.
 */


/**
 * g_initable_new:
 * @object_type: a #GType supporting #GInitable.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError location to store the error occuring, or %NULL to ignore.
 * @first_property_name: the name of the first property, or %NULL if no properties
 * @...: the value if the first property, followed by and other property value pairs, and ended by %NULL.
 *
 * Helper function for constructing #GInitiable object. This is
 * similar to g_object_new() but also initializes the object
 * and returns %NULL, setting an error on failure.
 *
 * Returns: (transfer full): a newly allocated #GObject, or %NULL on error
 * Since: 2.22
 */


/**
 * g_file_info_set_attribute_uint32:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 * @attr_value: an unsigned 32-bit integer.
 *
 * Sets the @attribute to contain the given @attr_value,
 * if possible.
 */


/**
 * g_volume_get_name:
 * @volume: a #GVolume.
 *
 * Gets the name of @volume.
 * be freed with g_free() when no longer needed.
 *
 * Returns: the name for the given @volume. The returned string should
 */


/**
 * g_converter_input_stream_new:
 * @base_stream: a #GInputStream
 * @converter: a #GConverter
 *
 * Creates a new converter input stream for the @base_stream.
 *
 * Returns: a new #GInputStream.
 */


/**
 * SECTION:gsocke:
 * @short_description: Low-level socket object
 * @include: gio/gio.h
 * @see_also: #GInitable
 *
 * A #GSocket is a low-level networking primitive. It is a more or less
 * direct mapping of the BSD socket API in a portable GObject based API.
 * It supports both the UNIX socket implementations and winsock2 on Windows.
 * #GSocket is the platform independent base upon which the higher level
 * network primitives are based. Applications are not typically meant to
 * use it directly, but rather through classes like #GSocketClient,
 * #GSocketService and #GSocketConnection. However there may be cases where
 * direct use of #GSocket is useful.
 * #GSocket implements the #GInitable interface, so if it is manually constructed
 * by e.g. g_object_new() you must call g_initable_init() and check the
 * results before using the object. This is done automatically in
 * g_socket_new() and g_socket_new_from_fd(), so these functions can return
 * %NULL.
 * Sockets operate in two general modes, blocking or non-blocking. When
 * in blocking mode all operations block until the requested operation
 * is finished or there is an error. In non-blocking mode all calls that
 * would block return immediately with a %G_IO_ERROR_WOULD_BLOCK error.
 * To know when a call would successfully run you can call g_socket_condition_check(),
 * or g_socket_condition_wait(). You can also use g_socket_create_source() and
 * attach it to a #GMainContext to get callbacks when I/O is possible.
 * Note that all sockets are always set to non blocking mode in the system, and
 * blocking mode is emulated in GSocket.
 * When working in non-blocking mode applications should always be able to
 * handle getting a %G_IO_ERROR_WOULD_BLOCK error even when some other
 * function said that I/O was possible. This can easily happen in case
 * of a race condition in the application, but it can also happen for other
 * reasons. For instance, on Windows a socket is always seen as writable
 * until a write returns %G_IO_ERROR_WOULD_BLOCK.
 * #GSocket<!-- -->s can be either connection oriented or datagram based.
 * For connection oriented types you must first establish a connection by
 * either connecting to an address or accepting a connection from another
 * address. For connectionless socket types the target/source address is
 * specified or received in each I/O operation.
 * All socket file descriptors are set to be close-on-exec.
 * Note that creating a #GSocket causes the signal %SIGPIPE to be
 * ignored for the remainder of the program. If you are writing a
 * command-line utility that uses #GSocket, you may need to take into
 * account the fact that your program will not automatically be killed
 * if it tries to write to %stdout after it has been closed.
 *
 * Since: 2.22
 */


/**
 * GFileIcon:file:
 *
 * The file containing the icon.
 */


/**
 * g_emblem_new_with_origin:
 * @icon: a GIcon containing the icon.
 * @origin: a GEmblemOrigin enum defining the emblem's origin
 *
 * Creates a new emblem for @icon.
 *
 * Returns: a new #GEmblem.
 * Since: 2.18
 */


/**
 * GDBusServer:client-address:
 *
 * The D-Bus address that clients can use.
 *
 * Since: 2.26
 */


/**
 * g_dbus_node_info_new_for_xml:
 * @xml_data: Valid D-Bus introspection XML.
 * @error: Return location for error.
 *
 * Parses @xml_data and returns a #GDBusNodeInfo representing the data.
 * with g_dbus_node_info_unref().
 *
 * Returns: A #GDBusNodeInfo structure or %NULL if @error is set. Free
 * Since: 2.26
 */


/**
 * GMemoryOutputStream:data-size:
 *
 * Size of data written to the buffer.
 *
 * Since: 2.24
 */


/**
 * GDBusConnection:stream:
 *
 * The underlying #GIOStream used for I/O.
 *
 * Since: 2.26
 */


/**
 * g_output_stream_set_pending:
 * @stream: a #GOutputStream.
 * @error: a #GError location to store the error occuring, or %NULL to ignore.
 *
 * Sets @stream to have actions pending. If the pending flag is
 * already set or @stream is closed, it will return %FALSE and set
 *
 * Returns: %TRUE if pending was previously unset and is now set.
 */


/**
 * SECTION:gconverterinputstrea:
 * @short_description: Converter Input Stream
 * @include: gio/gio.h
 * @see_also: #GInputStream, #GConverter
 *
 * Converter input stream implements #GInputStream and allows
 * conversion of data of various types during reading.
 */


/**
 * g_input_stream_skip:
 * @stream: a #GInputStream.
 * @count: the number of bytes that will be skipped from the stream
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: location to store the error occuring, or %NULL to ignore
 *
 * Tries to skip @count bytes from the stream. Will block during the operation.
 * This is identical to g_input_stream_read(), from a behaviour standpoint,
 * but the bytes that are skipped are not returned to the user. Some
 * streams have an implementation that is more efficient than reading the data.
 * This function is optional for inherited classes, as the default implementation
 * emulates it using read.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned. If an
 * operation was partially finished when the operation was cancelled the
 * partial result will be returned, without an error.
 *
 * Returns: Number of bytes skipped, or -1 on error
 */


/**
 * g_mount_operation_set_password_save:
 * @op: a #GMountOperation.
 * @save: a set of #GPasswordSave flags.
 *
 * Sets the state of saving passwords for the mount operation.
 */


/**
 * g_app_info_launch_default_for_uri:
 * @uri: the uri to show
 * @launch_context: an optional #GAppLaunchContext.
 * @error: a #GError.
 *
 * Utility function that launches the default application
 * registered to handle the specified uri. Synchronous I/O
 * is done on the uri to detect the type of the file if
 * required.
 *
 * Returns: %TRUE on success, %FALSE on error.
 */


/**
 * g_buffered_input_stream_fill_finish:
 * @stream: a #GBufferedInputStream
 * @result: a #GAsyncResult
 * @error: a #GError
 *
 * Finishes an asynchronous read.
 *
 * Returns: a #gssize of the read stream, or %-1 on an error.
 */


/**
 * g_file_info_set_name:
 * @info: a #GFileInfo.
 * @name: a string containing a name.
 *
 * Sets the name attribute for the current #GFileInfo.
 * See %G_FILE_ATTRIBUTE_STANDARD_NAME.
 */


/**
 * g_socket_address_new_from_native:
 * @native: a pointer to a <type>struct sockaddr</type>
 * @len: the size of the memory location pointed to by @native
 *
 * Creates a #GSocketAddress subclass corresponding to the native
 * <type>struct sockaddr</type> @native.
 * otherwise %NULL.
 *
 * Returns: a new #GSocketAddress if @native could successfully be converted,
 * Since: 2.22
 */


/**
 * g_drive_start_finish:
 * @drive: a #GDrive.
 * @result: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes starting a drive.
 * %FALSE otherwise.
 *
 * Returns: %TRUE if the drive has been started successfully,
 * Since: 2.22
 */


/**
 * g_settings_range_check:
 * @settings: a #GSettings
 * @key: the key to check
 * @value: the value to check
 * @returns: %TRUE if @value is valid for @key
 *
 * Checks if the given @value is of the correct type and within the
 * permitted range for @key.
 * This API is not intended to be used by normal programs -- they should
 * already know what is permitted by their own schemas.  This API is
 * meant to be used by programs such as editors or commandline tools.
 * It is a programmer error to give a @key that isn't contained in the
 * schema for @settings.
 *
 * Since: 2.28
 */


/**
 * g_socket_set_keepalive:
 * @socket: a #GSocket.
 * @keepalive: Value for the keepalive flag
 *
 * Sets or unsets the %SO_KEEPALIVE flag on the underlying socket. When
 * this flag is set on a socket, the system will attempt to verify that the
 * remote socket endpoint is still present if a sufficiently long period of
 * time passes with no data being exchanged. If the system is unable to
 * verify the presence of the remote endpoint, it will automatically close
 * the connection.
 * This option is only functional on certain kinds of sockets. (Notably,
 * %G_SOCKET_PROTOCOL_TCP sockets.)
 * The exact time between pings is system- and protocol-dependent, but will
 * normally be at least two hours. Most commonly, you would set this flag
 * on a server socket if you want to allow clients to remain idle for long
 * periods of time, but also want to ensure that connections are eventually
 * garbage-collected if clients crash or become unreachable.
 *
 * Since: 2.22
 */


/**
 * SECTION:gprox:
 * @short_description: Interface for proxy handling
 *
 * A #GProxy handles connecting to a remote host via a given type of
 * proxy server. It is implemented by the 'gio-proxy' extension point.
 * The extensions are named after their proxy protocol name. As an
 * example, a SOCKS5 proxy implementation can be retrieved with the
 * name 'socks5' using the function
 * g_io_extension_point_get_extension_by_name().
 *
 * Since: 2.26
 */


/**
 * g_unix_fd_message_steal_fds:
 * @message: a #GUnixFDMessage
 * @length: pointer to the length of the returned array, or %NULL
 *
 * Returns the array of file descriptors that is contained in this
 * object.
 * After this call, the descriptors are no longer contained in
 * descriptors have been added).
 * The return result of this function must be freed with g_free().
 * The caller is also responsible for closing all of the file
 * descriptors.
 * If @length is non-%NULL then it is set to the number of file
 * descriptors in the returned array. The returned array is also
 * terminated with -1.
 * This function never returns %NULL. In case there are no file
 * descriptors contained in @message, an empty array is returned.
 *
 * Returns: an array of file descriptors
 * Since: 2.22
 */


/**
 * g_file_enumerator_next_file:
 * @enumerator: a #GFileEnumerator.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: location to store the error occuring, or %NULL to ignore
 *
 * Returns information for the next file in the enumerated object.
 * Will block until the information is available. The #GFileInfo
 * returned from this function will contain attributes that match the
 * attribute string that was passed when the #GFileEnumerator was created.
 * On error, returns %NULL and sets @error to the error. If the
 * enumerator is at the end, %NULL will be returned and @error will
 * be unset.
 * Free the returned object with g_object_unref() when no longer needed.
 *
 * Returns: (transfer full): A #GFileInfo or %NULL on error or end of enumerator.
 */


/**
 * g_unix_fd_list_get_length:
 * @list: a #GUnixFDList
 *
 * contained within).
 *
 * Gets the length of @list (ie: the number of file descriptors
 * Returns: the length of @list
 * Since: 2.24
 */


/**
 * GDBusServerClass:
 * @new_connection: Signal class handler for the #GDBusServer::new-connection signal.
 *
 * Class structure for #GDBusServer.
 *
 * Since: 2.26
 */


/**
 * g_socket_speaks_ipv4:
 * @socket: a #GSocket
 *
 * Checks if a socket is capable of speaking IPv4.
 * IPv4 sockets are capable of speaking IPv4.  On some operating systems
 * and under some combinations of circumstances IPv6 sockets are also
 * capable of speaking IPv4.  See RFC 3493 section 3.7 for more
 * information.
 * No other types of sockets are currently considered as being capable
 * of speaking IPv4.
 *
 * Returns: %TRUE if this socket can be used with IPv4.
 * Since: 2.22
 */


/**
 * g_dbus_message_set_message_type:
 * @message: A #GDBusMessage.
 * @type: A 8-bit unsigned integer (typically a value from the #GDBusMessageType enumeration).
 *
 * Sets @message to be of @type.
 *
 * Since: 2.26
 */


/**
 * GAction:enabled:
 *
 * If @action is currently enabled.
 * If the action is disabled then calls to g_action_activate() and
 * g_action_set_state() have no effect.
 *
 * Since: 2.28
 */


/**
 * GAction:name:
 *
 * The name of the action.  This is mostly meaningful for identifying
 * the action once it has been added to a #GActionGroup.
 *
 * Since: 2.28
 */


/**
 * g_unix_mount_guess_should_display:
 * @mount_entry: a #GUnixMountEntry
 *
 * Guesses whether a Unix mount should be displayed in the UI.
 *
 * Returns: %TRUE if @mount_entry is deemed to be displayable.
 */


/**
 * g_volume_monitor_get_mount_for_uuid:
 * @volume_monitor: a #GVolumeMonitor.
 * @uuid: the UUID to look for
 *
 * Finds a #GMount object by its UUID (see g_mount_get_uuid())
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): a #GMount or %NULL if no such mount is available.
 */


/**
 * GFileMonitor::changed:
 * @monitor: a #GFileMonitor.
 * @file: a #GFile.
 * @other_file: a #GFile.
 * @event_type: a #GFileMonitorEvent.
 *
 * Emitted when a file has been changed.
 */


/**
 * g_file_create_readwrite_finish:
 * @file: input #GFile
 * @res: a #GAsyncResult
 * @error: a #GError, or %NULL
 *
 * Finishes an asynchronous file create operation started with
 * g_file_create_readwrite_async().
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): a #GFileIOStream or %NULL on error.
 * Since: 2.22
 */


/**
 * g_converter_output_stream_get_converter:
 * @converter_stream: a #GConverterOutputStream
 *
 * Gets the #GConverter that is used by @converter_stream.
 *
 * Returns: (transfer none): the converter of the converter output stream
 * Since: 2.24
 */


/**
 * g_file_monitor_set_rate_limit:
 * @monitor: a #GFileMonitor.
 * @limit_msecs: a integer with the limit in milliseconds to poll for changes.
 *
 * Sets the rate limit to which the @monitor will report
 * consecutive change events to the same file.
 */


/**
 * g_cancellable_set_error_if_cancelled:
 * @cancellable: a #GCancellable object.
 * @error: #GError to append error state to.
 *
 * If the @cancellable is cancelled, sets the error to notify
 * that the operation was cancelled.
 *
 * Returns: %TRUE if @cancellable was cancelled, %FALSE if it was not.
 */


/**
 * g_file_create_finish:
 * @file: input #GFile.
 * @res: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes an asynchronous file create operation started with
 * g_file_create_async().
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): a #GFileOutputStream or %NULL on error.
 */


/**
 * g_mount_operation_get_password_save:
 * @op: a #GMountOperation.
 *
 * Gets the state of saving passwords for the mount operation.
 *
 * Returns: a #GPasswordSave flag.
 */


/**
 * SECTION:gzcompresso:
 * @short_description: Zlib compressor
 * @include: gio/gio.h
 *
 * #GZlibCompressor is an implementation of #GConverter that
 * compresses data using zlib.
 */


/**
 * g_buffered_input_stream_new:
 * @base_stream: a #GInputStream
 *
 * Creates a new #GInputStream from the given @base_stream, with
 * a buffer set to the default size (4 kilobytes).
 *
 * Returns: a #GInputStream for the given @base_stream.
 */


/**
 * g_unix_connection_send_credentials:
 * @connection: A #GUnixConnection.
 * @cancellable: A #GCancellable or %NULL.
 * @error: Return location for error or %NULL.
 *
 * Passes the credentials of the current user the receiving side
 * of the connection. The recieving end has to call
 * g_unix_connection_receive_credentials() (or similar) to accept the
 * credentials.
 * As well as sending the credentials this also writes a single NUL
 * byte to the stream, as this is required for credentials passing to
 * work on some implementations.
 * Other ways to exchange credentials with a foreign peer includes the
 * #GUnixCredentialsMessage type and g_socket_get_credentials() function.
 *
 * Returns: %TRUE on success, %FALSE if @error is set.
 * Since: 2.26
 */


/**
 * g_settings_backend_changed:
 * @backend: a #GSettingsBackend implementation
 * @key: the name of the key
 * @origin_tag: the origin tag
 *
 * Signals that a single key has possibly changed.  Backend
 * implementations should call this if a key has possibly changed its
 * value.
 * '//', and not ending with a slash).
 * The implementation must call this function during any call to
 * g_settings_backend_write(), before the call returns (except in the
 * case that no keys are actually changed and it cares to detect this
 * fact).  It may not rely on the existence of a mainloop for
 * dispatching the signal later.
 * The implementation may call this function at any other time it likes
 * in response to other events (such as changes occuring outside of the
 * program).  These calls may originate from a mainloop or may originate
 * in response to any other action (including from calls to
 * g_settings_backend_write()).
 * In the case that this call is in response to a call to
 * g_settings_backend_write() then @origin_tag must be set to the same
 * value that was passed to that call.
 *
 * Since: 2.26
 */


/**
 * g_data_input_stream_read_line_finish:
 * @stream: a given #GDataInputStream.
 * @result: the #GAsyncResult that was provided to the callback.
 * @length: a #gsize to get the length of the data read in.
 * @error: #GError for error reporting.
 *
 * Finish an asynchronous call started by
 * g_data_input_stream_read_line_async().
 * Set @length to a #gsize to get the length of the read line.
 * On an error, it will return %NULL and @error will be set. If there's no
 * content to read, it will still return %NULL, but @error won't be set.
 *
 * Returns: a string with the line that was read in (without the newlines).
 * Since: 2.20
 */


/**
 * g_content_type_get_icon:
 * @type: a content type string
 *
 * Gets the icon for a content type.
 * object with g_object_unref()
 *
 * Returns: (transfer full): #GIcon corresponding to the content type. Free the returned
 */


/**
 * GInetAddress:is-mc-node-local:
 *
 * Whether this is a node-local multicast address.
 * See g_inet_address_get_is_mc_node_local().
 *
 * Since: 2.22
 */


/**
 * GInetAddress:is-site-local:
 *
 * Whether this is a site-local address.
 * See g_inet_address_get_is_loopback().
 *
 * Since: 2.22
 */


/**
 * g_periodic_remove:
 * @periodic: a #GPeriodic clock
 * @tag: the ID of the callback to remove
 *
 * Reverse the effect of a previous call to g_periodic_start().
 * This function may not be called from a handler of the repair signal,
 * but it is perfectly reasonable to call it from a handler of the tick
 * signal.
 *
 * Since: 2.28
 */


/**
 * g_io_scheduler_cancel_all_jobs:
 *
 * Cancels all cancellable I/O jobs.
 * A job is cancellable if a #GCancellable was passed into
 * g_io_scheduler_push_job().
 */


/**
 * g_unix_fd_list_new:
 *
 * Creates a new #GUnixFDList containing no file descriptors.
 *
 * Returns: a new #GUnixFDList
 * Since: 2.24
 */


/**
 * g_network_address_get_hostname:
 * @addr: a #GNetworkAddress
 *
 * Gets @addr's hostname. This might be either UTF-8 or ASCII-encoded,
 * depending on what @addr was created with.
 *
 * Returns: @addr's hostname
 * Since: 2.22
 */


/**
 * SECTION:ginetsocketaddres:
 * @short_description: Internet GSocketAddress
 *
 * An IPv4 or IPv6 socket address; that is, the combination of a
 * #GInetAddress and a port number.
 */


/**
 * GDrive::stop-button:
 * @drive: a #GDrive.
 *
 * Emitted when the physical stop button (if any) of a drive has
 * been pressed.
 *
 * Since: 2.22
 */


/**
 * SECTION:gsimplepermissio:
 * @title: GSimplePermission
 * @short_description: a GPermission that doesn't change value
 *
 * #GSimplePermission is a trivial implementation of #GPermission that
 * represents a permission that is either always or never allowed.  The
 * value is given at constuction and doesn't change.
 * Calling request or release will result in errors.
 */


/**
 * g_bus_get_finish:
 * @res: A #GAsyncResult obtained from the #GAsyncReadyCallback passed to g_bus_get().
 * @error: Return location for error or %NULL.
 *
 * Finishes an operation started with g_bus_get().
 * The returned object is a singleton, that is, shared with other
 * callers of g_bus_get() and g_bus_get_sync() for @bus_type. In the
 * event that you need a private message bus connection, use
 * g_dbus_address_get_for_bus() and
 * g_dbus_connection_new_for_address().
 * Note that the returned #GDBusConnection object will (usually) have
 * the #GDBusConnection:exit-on-close property set to %TRUE.
 *
 * Returns: (transfer full): A #GDBusConnection or %NULL if @error is set. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * g_action_group_get_action_state_hint:
 * @action_group: a #GActionGroup
 * @action_name: the name of the action to query
 *
 * Requests a hint about the valid range of values for the state of the
 * named action within @action_group.
 * If %NULL is returned it either means that the action is not stateful
 * or that there is no hint about the valid range of values for the
 * state of the action.
 * If a #GVariant array is returned then each item in the array is a
 * returned then the tuple specifies the inclusive lower and upper bound
 * of valid values for the state.
 * In any case, the information is merely a hint.  It may be possible to
 * have a state value outside of the hinted range and setting a value
 * within the range may fail.
 * The return value (if non-%NULL) should be freed with
 * g_variant_unref() when it is no longer required.
 *
 * Possible value for the state.  if a #gvariant pair (ie: two-tuple) is
 * Returns: (transfer full): the state range hint
 * Since: 2.28
 */


/**
 * g_app_info_get_name:
 * @appinfo: a #GAppInfo.
 *
 * Gets the installed name of the application.
 *
 * Returns: the name of the application for @appinfo.
 */


/**
 * g_file_info_set_attribute_status:
 * @info: a #GFileInfo
 * @attribute: a file attribute key
 * @status: a #GFileAttributeStatus
 *
 * Sets the attribute status for an attribute key. This is only
 * needed by external code that implement g_file_set_attributes_from_info()
 * or similar functions.
 * The attribute must exist in @info for this to work. Otherwise %FALSE
 * is returned and @info is unchanged.
 *
 * Returns: %TRUE if the status was changed, %FALSE if the key was not set.
 * Since: 2.22
 */


/**
 * g_file_info_get_etag:
 * @info: a #GFileInfo.
 *
 * Gets the <link linkend="gfile-etag">entity tag</link> for a given
 * #GFileInfo. See %G_FILE_ATTRIBUTE_ETAG_VALUE.
 *
 * Returns: a string containing the value of the "etag:value" attribute.
 */


/**
 * g_app_info_get_icon:
 * @appinfo: a #GAppInfo.
 *
 * Gets the icon for the application.
 *
 * Returns: (transfer none): the default #GIcon for @appinfo.
 */


/**
 * g_volume_get_activation_root:
 * @volume: a #GVolume
 *
 * Gets the activation root for a #GVolume if it is known ahead of
 * mount time. Returns %NULL otherwise. If not %NULL and if @volume
 * is mounted, then the result of g_mount_get_root() on the
 * #GMount object obtained from g_volume_get_mount() will always
 * either be equal or a prefix of what this function returns. In
 * other words, in code
 * <programlisting>
 * GMount *mount;
 * GFile *mount_root
 * GFile *volume_activation_root;
 * mount = g_volume_get_mount (volume); /&ast; mounted, so never NULL &ast;/
 * mount_root = g_mount_get_root (mount);
 * volume_activation_root = g_volume_get_activation_root(volume); /&ast; assume not NULL &ast;/
 * </programlisting>
 * then the expression
 * <programlisting>
 * (g_file_has_prefix (volume_activation_root, mount_root) ||
 * </programlisting>
 * will always be %TRUE.
 * Activation roots are typically used in #GVolumeMonitor
 * implementations to find the underlying mount to shadow, see
 * g_mount_is_shadowed() for more details.
 * g_object_unref() to free.
 *
 * Returns: (transfer full): the activation root of @volume or %NULL. Use
 * Since: 2.18
 */


/**
 * g_dbus_message_set_destination:
 * @message: A #GDBusMessage.
 * @value: The value to set.
 *
 * Convenience setter for the %G_DBUS_MESSAGE_HEADER_FIELD_DESTINATION header field.
 *
 * Since: 2.26
 */


/**
 * g_volume_eject:
 * @volume: a #GVolume.
 * @flags: flags affecting the unmount if required for eject
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback, or %NULL.
 * @user_data: user data that gets passed to @callback
 *
 * Ejects a volume. This is an asynchronous operation, and is
 * finished by calling g_volume_eject_finish() with the @volume
 * and #GAsyncResult returned in the @callback.
 *
 * Deprecated: 2.22: Use g_volume_eject_with_operation() instead.
 */


/**
 * g_dbus_message_new:
 *
 * Creates a new empty #GDBusMessage.
 *
 * Returns: A #GDBusMessage. Free with g_object_unref().
 * Since: 2.26
 */


/**
 * g_dbus_message_get_arg0:
 * @message: A #GDBusMessage.
 *
 * Convenience to get the first item in the body of @message.
 *
 * Returns: The string item or %NULL if the first item in the body of
 * Since: 2.26
 */


/**
 * g_drive_is_media_removable:
 * @drive: a #GDrive.
 *
 * Checks if the @drive supports removable media.
 *
 * Returns: %TRUE if @drive supports removable media, %FALSE otherwise.
 */


/**
 * g_unix_socket_address_get_address_type:
 * @address: a #GInetSocketAddress
 *
 * Gets @address's type.
 *
 * Returns: a #GUnixSocketAddressType
 * Since: 2.26
 */


/**
 * g_data_output_stream_put_byte:
 * @stream: a #GDataOutputStream.
 * @data: a #guchar.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, %NULL to ignore.
 *
 * Puts a byte into the output stream.
 *
 * Returns: %TRUE if @data was successfully added to the @stream.
 */


/**
 * g_drive_eject_finish:
 * @drive: a #GDrive.
 * @result: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes ejecting a drive.
 * %FALSE otherwise.
 *
 * Returns: %TRUE if the drive has been ejected successfully,
 * Deprecated: 2.22: Use g_drive_eject_with_operation_finish() instead.
 */


/**
 * g_app_info_can_delete:
 * @appinfo: a #GAppInfo
 *
 * Obtains the information whether the #GAppInfo can be deleted.
 * See g_app_info_delete().
 *
 * Returns: %TRUE if @appinfo can be deleted
 * Since: 2.20
 */


/**
 * g_dbus_interface_info_generate_xml:
 * @info: A #GDBusNodeInfo
 * @indent: Indentation level.
 * @string_builder: A #GString to to append XML data to.
 *
 * Appends an XML representation of @info (and its children) to @string_builder.
 * This function is typically used for generating introspection XML
 * documents at run-time for handling the
 * <literal>org.freedesktop.DBus.Introspectable.Introspect</literal>
 * method.
 *
 * Since: 2.26
 */


/**
 * g_settings_new:
 * @schema: the name of the schema
 * @returns: a new #GSettings object
 *
 * Creates a new #GSettings object with a given schema.
 * Signals on the newly created #GSettings object will be dispatched
 * via the thread-default #GMainContext in effect at the time of the
 * call to g_settings_new().  The new #GSettings will hold a reference
 * on the context.  See g_main_context_push_thread_default().
 *
 * Since: 2.26
 */


/**
 * g_network_service_get_service:
 * @srv: a #GNetworkService
 *
 * Gets @srv's service name (eg, "ldap").
 *
 * Returns: @srv's service name
 * Since: 2.22
 */


/**
 * GPeriodicTickFunc:
 * @periodic: the #GPeriodic clock that is ticking
 * @timestamp: the timestamp at the time of the tick
 * @user_data: the user data given to g_periodic_add()
 *
 * The signature of the callback function that is called when the
 * #GPeriodic clock ticks.
 * The @timestamp parameter is equal for all callbacks called during a
 * particular tick on a given clock.
 *
 * Since: 2.28
 */


/**
 * g_vfs_get_file_for_path:
 * @vfs: a #GVfs.
 * @path: a string containing a VFS path.
 *
 * Gets a #GFile for @path.
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): a #GFile.
 */


/**
 * GInetAddress:is-mc-global:
 *
 * Whether this is a global multicast address.
 * See g_inet_address_get_is_mc_global().
 *
 * Since: 2.22
 */


/**
 * g_unix_fd_list_append:
 * @list: a #GUnixFDList
 * @fd: a valid open file descriptor
 * @error: a #GError pointer
 *
 * Adds a file descriptor to @list.
 * The file descriptor is duplicated using dup(). You keep your copy
 * of the descriptor and the copy contained in @list will be closed
 * when @list is finalized.
 * A possible cause of failure is exceeding the per-process or
 * system-wide file descriptor limit.
 * The index of the file descriptor in the list is returned.  If you use
 * this index with g_unix_fd_list_get() then you will receive back a
 * duplicated copy of the same file descriptor.
 * (and @error is set)
 *
 * Returns: the index of the appended fd in case of success, else -1
 * Since: 2.24
 */


/**
 * g_unix_mount_point_guess_name:
 * @mount_point: a #GUnixMountPoint
 *
 * Guesses the name of a Unix mount point.
 * The result is a translated string.
 * be freed with g_free()
 *
 * Returns: A newly allocated string that must
 */


/**
 * g_dbus_message_lock:
 * @message: A #GDBusMessage.
 *
 * If @message is locked, does nothing. Otherwise locks the message.
 *
 * Since: 2.26
 */


/**
 * g_filter_input_stream_set_close_base_stream:
 * @stream: a #GFilterInputStream.
 * @close_base: %TRUE to close the base stream.
 *
 * Sets whether the base stream will be closed when @stream is closed.
 */


/**
 * g_simple_async_result_complete:
 * @simple: a #GSimpleAsyncResult.
 *
 * Completes an asynchronous I/O job immediately. Must be called in
 * the thread where the asynchronous result was to be delivered, as it
 * invokes the callback directly. If you are in a different thread use
 * g_simple_async_result_complete_in_idle().
 * Calling this function takes a reference to @simple for as long as
 * is needed to complete the call.
 */


/**
 * g_drive_get_icon:
 * @drive: a #GDrive.
 *
 * Gets the icon for @drive.
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): #GIcon for the @drive.
 */


/**
 * g_unix_mount_free:
 * @mount_entry: a #GUnixMount.
 *
 * Frees a unix mount.
 */


/**
 * g_socket_listener_add_any_inet_port:
 * @listener: a #GSocketListener
 * @source_object: Optional #GObject identifying this source
 * @error: a #GError location to store the error occuring, or %NULL to ignore.
 *
 * Listens for TCP connections on any available port number for both
 * IPv6 and IPv4 (if each are available).
 * This is useful if you need to have a socket for incoming connections
 * but don't care about the specific port number.
 * to accept to identify this particular source, which is
 * useful if you're listening on multiple addresses and do
 * different things depending on what address is connected to.
 *
 * Returns: the port number, or 0 in case of failure.
 * Since: 2.24
 */


/**
 * g_unix_mount_point_get_fs_type:
 * @mount_point: a #GUnixMountPoint.
 *
 * Gets the file system type for the mount point.
 *
 * Returns: a string containing the file system type.
 */


/**
 * g_file_output_stream_query_info:
 * @stream: a #GFileOutputStream.
 * @attributes: a file attribute query string.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, %NULL to ignore.
 *
 * Queries a file output stream for the given @attributes.
 * This function blocks while querying the stream. For the asynchronous
 * version of this function, see g_file_output_stream_query_info_async().
 * While the stream is blocked, the stream will set the pending flag
 * internally, and any other operations on the stream will fail with
 * %G_IO_ERROR_PENDING.
 * Can fail if the stream was already closed (with @error being set to
 * %G_IO_ERROR_CLOSED), the stream has pending operations (with @error being
 * set to %G_IO_ERROR_PENDING), or if querying info is not supported for
 * the stream's interface (with @error being set to %G_IO_ERROR_NOT_SUPPORTED). In
 * all cases of failure, %NULL will be returned.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be set, and %NULL will
 * be returned.
 *
 * Returns: (transfer full): a #GFileInfo for the @stream, or %NULL on error.
 */


/**
 * g_data_input_stream_read_until_async:
 * @stream: a given #GDataInputStream.
 * @stop_chars: characters to terminate the read.
 * @io_priority: the <link linkend="io-priority">I/O priority</link> of the request.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: callback to call when the request is satisfied.
 * @user_data: the data to pass to callback function.
 *
 * The asynchronous version of g_data_input_stream_read_until().
 * It is an error to have two outstanding calls to this function.
 * Note that, in contrast to g_data_input_stream_read_until(),
 * this function does not consume the stop character that it finds.  You
 * must read it for yourself.
 * When the operation is finished, @callback will be called. You
 * can then call g_data_input_stream_read_until_finish() to get
 * the result of the operation.
 * Don't use this function in new code.  Its functionality is
 * inconsistent with g_data_input_stream_read_until().  Both functions
 * will be marked as deprecated in a future release.  Use
 * g_data_input_stream_read_upto_async() instead.
 *
 * Since: 2.20
 */


/**
 * g_dbus_error_register_error:
 * @error_domain: A #GQuark for a error domain.
 * @error_code: An error code.
 * @dbus_error_name: A D-Bus error name.
 *
 * Creates an association to map between @dbus_error_name and
 * #GError<!-- -->s specified by @error_domain and @error_code.
 * This is typically done in the routine that returns the #GQuark for
 * an error domain.
 * exists.
 *
 * Returns: %TRUE if the association was created, %FALSE if it already
 * Since: 2.26
 */


/**
 * GDBusProxy::g-signal:
 * @proxy: The #GDBusProxy emitting the signal.
 * @sender_name: The sender of the signal or %NULL if the connection is not a bus connection.
 * @signal_name: The name of the signal.
 * @parameters: A #GVariant tuple with parameters for the signal.
 *
 * Emitted when a signal from the remote object and interface that @proxy is for, has been received.
 *
 * Since: 2.26
 */


/**
 * g_filename_completer_set_dirs_only:
 * @completer: the filename completer.
 * @dirs_only: a #gboolean.
 *
 * If @dirs_only is %TRUE, @completer will only
 * complete directory names, and not file names.
 */


/**
 * g_simple_async_report_gerror_in_idle:
 * @object: a #GObject.
 * @callback: a #GAsyncReadyCallback.
 * @user_data: user data passed to @callback.
 * @error: the #GError to report
 *
 * Reports an error in an idle function. Similar to
 * g_simple_async_report_error_in_idle(), but takes a #GError rather
 * than building a new one.
 */


/**
 * g_volume_monitor_get_mounts:
 * @volume_monitor: a #GVolumeMonitor.
 *
 * Gets a list of the mounts on the system.
 * The returned list should be freed with g_list_free(), after
 * its elements have been unreffed with g_object_unref().
 *
 * Returns: (element-type GMount) (transfer full): a #GList of #GMount objects.
 */


/**
 * g_dbus_proxy_get_connection:
 * @proxy: A #GDBusProxy.
 *
 * Gets the connection @proxy is for.
 *
 * Returns: (transfer none): A #GDBusConnection owned by @proxy. Do not free.
 * Since: 2.26
 */


/**
 * g_win32_input_stream_get_close_handle:
 * @stream: a #GWin32InputStream
 *
 * Returns whether the handle of @stream will be
 * closed when the stream is closed.
 *
 * Returns: %TRUE if the handle is closed when done
 * Since: 2.26
 */


/**
 * g_periodic_block:
 * @periodic: a #GPeriodic clock
 *
 * Temporarily blocks @periodic from running in order to bring it in
 * synch with an external time source.
 * This function must be called from a handler of the "repair" signal.
 * If this function is called, emission of the tick signal will be
 * suspended until g_periodic_unblock() is called an equal number of
 * times.  Once that happens, the "tick" signal will run immediately and
 * future "tick" signals will be emitted relative to the time at which
 * the last call to g_periodic_unblock() occured.
 *
 * Since: 2.28
 */


/**
 * g_unix_mount_is_system_internal:
 * @mount_entry: a #GUnixMount.
 *
 * Checks if a unix mount is a system path.
 *
 * Returns: %TRUE if the unix mount is for a system path.
 */


/**
 * g_settings_list_keys:
 * @settings: a #GSettings object
 * @returns: (transfer full) (element-type utf8): a list of the keys on @settings
 *
 * Introspects the list of keys on @settings.
 * You should probably not be calling this function from "normal" code
 * (since you should already know what keys are in your schema).  This
 * function is intended for introspection reasons.
 * You should free the return value with g_strfreev() when you are done
 * with it.
 */


/**
 * g_file_info_get_content_type:
 * @info: a #GFileInfo.
 *
 * Gets the file's content type.
 *
 * Returns: a string containing the file's content type.
 */


/**
 * g_socket_address_enumerator_next_finish:
 * @enumerator: a #GSocketAddressEnumerator
 * @result: a #GAsyncResult
 * @error: a #GError
 *
 * Retrieves the result of a completed call to
 * g_socket_address_enumerator_next_async(). See
 * g_socket_address_enumerator_next() for more information about
 * error handling.
 * error (in which case *@error will be set) or if there are no
 * more addresses.
 *
 * Returns: (transfer full): a #GSocketAddress (owned by the caller), or %NULL on
 */


/**
 * g_unix_socket_address_new_abstract:
 * @path: the abstract name
 * @path_len: the length of @path, or -1
 *
 * Creates a new %G_UNIX_SOCKET_ADDRESS_ABSTRACT_PADDED
 * #GUnixSocketAddress for @path.
 *
 * Returns: a new #GUnixSocketAddress
 * Deprecated: Use g_unix_socket_address_new_with_type().
 */


/**
 * g_file_get_child:
 * @file: input #GFile.
 * @name: string containing the child's basename.
 *
 * Gets a child of @file with basename equal to @name.
 * Note that the file with that specific name might not exist, but
 * you can still have a #GFile that points to it. You can use this
 * for instance to create that file.
 * This call does no blocking i/o.
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): a #GFile to a child specified by @name.
 */


/**
 * g_settings_set:
 * @settings: a #GSettings object
 * @key: the name of the key to set
 * @format: a #GVariant format string
 * @...: arguments as per @format
 * @returns: %TRUE if setting the key succeeded, %FALSE if the key was not writable
 *
 * Sets @key in @settings to @value.
 * A convenience function that combines g_settings_set_value() with
 * g_variant_new().
 * It is a programmer error to give a @key that isn't contained in the
 * schema for @settings or for the #GVariantType of @format to mismatch
 * the type given in the schema.
 *
 * Since: 2.26
 */


/**
 * g_application_set_action_group:
 * @application: a #GApplication
 * @action_group: a #GActionGroup, or %NULL
 *
 * Sets or unsets the group of actions associated with the application.
 * These actions are the actions that can be remotely invoked.
 * It is an error to call this function after the application has been
 * registered.
 *
 * Since: 2.28
 */


/**
 * g_volume_mount_finish:
 * @volume: a #GVolume
 * @result: a #GAsyncResult
 * @error: a #GError location to store an error, or %NULL to ignore
 *
 * Finishes mounting a volume. If any errors occured during the operation,
 * If the mount operation succeeded, g_volume_get_mount() on @volume
 * is guaranteed to return the mount right after calling this
 * function; there's no need to listen for the 'mount-added' signal on
 * #GVolumeMonitor.
 *
 * Returns: %TRUE, %FALSE if operation failed.
 */


/**
 * g_file_find_enclosing_mount:
 * @file: input #GFile.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError.
 *
 * Gets a #GMount for the #GFile.
 * If the #GFileIface for @file does not have a mount (e.g. possibly a
 * remote share), @error will be set to %G_IO_ERROR_NOT_FOUND and %NULL
 * will be returned.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): a #GMount where the @file is located or %NULL on error.
 */


/**
 * g_settings_set_double:
 * @settings: a #GSettings object
 * @key: the name of the key to set
 * @value: the value to set it to
 * @returns: %TRUE if setting the key succeeded, %FALSE if the key was not writable
 *
 * Sets @key in @settings to @value.
 * A convenience variant of g_settings_set() for doubles.
 * It is a programmer error to give a @key that isn't specified as
 * having a 'double' type in the schema for @settings.
 *
 * Since: 2.26
 */


/**
 * GThemedIcon:name:
 *
 * The icon name.
 */


/**
 * g_data_output_stream_set_byte_order:
 * @stream: a #GDataOutputStream.
 * @order: a %GDataStreamByteOrder.
 *
 * Sets the byte order of the data output stream to @order.
 */


/**
 * g_inet_address_to_string:
 * @address: a #GInetAddress
 *
 * Converts @address to string form.
 * freed after use.
 *
 * Returns: a representation of @address as a string, which should be
 * Since: 2.22
 */


/**
 * g_settings_set_strv:
 * @settings: a #GSettings object
 * @key: the name of the key to set
 * @value: (allow-none) (array zero-terminated=1): the value to set it to, or %NULL
 * @returns: %TRUE if setting the key succeeded, %FALSE if the key was not writable
 *
 * Sets @key in @settings to @value.
 * A convenience variant of g_settings_set() for string arrays.  If
 * It is a programmer error to give a @key that isn't specified as
 * having an array of strings type in the schema for @settings.
 *
 * Since: 2.26
 */


/**
 * g_dbus_method_invocation_return_error_valist:
 * @invocation: A #GDBusMethodInvocation.
 * @domain: A #GQuark for the #GError error domain.
 * @code: The error code.
 * @format: printf()-style format.
 * @var_args: #va_list of parameters for @format.
 *
 * Like g_dbus_method_invocation_return_error() but intended for
 * language bindings.
 * This method will free @invocation, you cannot use it afterwards.
 *
 * Since: 2.26
 */


/**
 * g_action_group_action_state_changed:
 * @action_group: a #GActionGroup
 * @action_name: the name of an action in the group
 * @state: the new state of the named action
 *
 * Emits the #GActionGroup::action-state-changed signal on @action_group.
 * This function should only be called by #GActionGroup implementations.
 *
 * Since: 2.28
 */


/**
 * SECTION:gfileoutputstrea:
 * @short_description: File output streaming operations
 * @include: gio/gio.h
 * @see_also: #GOutputStream, #GDataOutputStream, #GSeekable
 *
 * GFileOutputStream provides output streams that write their
 * content to a file.
 * GFileOutputStream implements #GSeekable, which allows the output
 * stream to jump to arbitrary positions in the file and to truncate
 * the file, provided the filesystem of the file supports these
 * operations.
 * To find the position of a file output stream, use g_seekable_tell().
 * To find out if a file output stream supports seeking, use
 * g_seekable_can_seek().To position a file output stream, use
 * g_seekable_seek(). To find out if a file output stream supports
 * truncating, use g_seekable_can_truncate(). To truncate a file output
 * stream, use g_seekable_truncate().
 */


/**
 * g_file_output_stream_query_info_finish:
 * @stream: a #GFileOutputStream.
 * @result: a #GAsyncResult.
 * @error: a #GError, %NULL to ignore.
 *
 * Finalizes the asynchronous query started
 * by g_file_output_stream_query_info_async().
 *
 * Returns: (transfer full): A #GFileInfo for the finished query.
 */


/**
 * g_simple_action_group_insert:
 * @simple: a #GSimpleActionGroup
 * @action: a #GAction
 *
 * Adds an action to the action group.
 * If the action group already contains an action with the same name as
 * The action group takes its own reference on @action.
 *
 * Since: 2.28
 */


/**
 * GUnixOutputStream:fd:
 *
 * The file descriptor that the stream writes to.
 *
 * Since: 2.20
 */


/**
 * GDBusAuthObserverClass:
 * @authorize_authenticated_peer: Signal class handler for the #GDBusAuthObserver::authorize-authenticated-peer signal.
 *
 * Class structure for #GDBusAuthObserverClass.
 *
 * Since: 2.26
 */


/**
 * g_application_command_line_printerr:
 * @cmdline: a #GApplicationCommandLine
 * @format: a printf-style format string
 * @...: arguments, as per @format
 *
 * Formats a message and prints it using the stderr print handler in the
 * invoking process.
 * If @cmdline is a local invocation then this is exactly equivalent to
 * g_printerr().  If @cmdline is remote then this is equivalent to
 * calling g_printerr() in the invoking process.
 *
 * Since: 2.28
 */


/**
 * g_data_input_stream_read_int32:
 * @stream: a given #GDataInputStream.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: #GError for error reporting.
 *
 * Reads a signed 32-bit/4-byte value from @stream.
 * In order to get the correct byte order for this read operation,
 * see g_data_input_stream_get_byte_order() and g_data_input_stream_set_byte_order().
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * an error occurred.
 *
 * Returns: a signed 32-bit/4-byte value read from the @stream or %0 if
 */


/**
 * SECTION:gioschedule:
 * @short_description: I/O Scheduler
 * @include: gio/gio.h
 *
 * Schedules asynchronous I/O operations. #GIOScheduler integrates
 * into the main event loop (#GMainLoop) and may use threads if they
 * are available.
 * <para id="io-priority"><indexterm><primary>I/O priority</primary></indexterm>
 * Each I/O operation has a priority, and the scheduler uses the priorities
 * to determine the order in which operations are executed. They are
 * <emphasis>not</emphasis> used to determine system-wide I/O scheduling.
 * Priorities are integers, with lower numbers indicating higher priority.
 * It is recommended to choose priorities between %G_PRIORITY_LOW and
 * %G_PRIORITY_HIGH, with %G_PRIORITY_DEFAULT as a default.
 * </para>
 */


/**
 * SECTION:gsocketconnectio:
 * @short_description: A socket connection
 * @include: gio/gio.h
 * @see_also: #GIOStream, #GSocketClient, #GSocketListener
 *
 * #GSocketConnection is a #GIOStream for a connected socket. They
 * can be created either by #GSocketClient when connecting to a host,
 * or by #GSocketListener when accepting a new client.
 * The type of the #GSocketConnection object returned from these calls
 * depends on the type of the underlying socket that is in use. For
 * instance, for a TCP/IP connection it will be a #GTcpConnection.
 * Chosing what type of object to construct is done with the socket
 * connection factory, and it is possible for 3rd parties to register
 * custom socket connection types for specific combination of socket
 * family/type/protocol using g_socket_connection_factory_register_type().
 *
 * Since: 2.22
 */


/**
 * g_file_monitor_directory:
 * @file: input #GFile.
 * @flags: a set of #GFileMonitorFlags.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL.
 *
 * Obtains a directory monitor for the given file.
 * This may fail if directory monitoring is not supported.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * Free the returned object with g_object_unref().
 *
 * Virtual: monitor_dir
 * Returns: (transfer full): a #GFileMonitor for the given @file, or %NULL on error.
 */


/**
 * GCharsetConverter:
 *
 * Conversions between character sets.
 */


/**
 * g_settings_new_with_backend:
 * @schema: the name of the schema
 * @backend: the #GSettingsBackend to use
 * @returns: a new #GSettings object
 *
 * Creates a new #GSettings object with a given schema and backend.
 * Creating settings objects with an different backend allows accessing settings
 * from a database other than the usual one.  For example, it may make
 * sense to pass a backend corresponding to the "defaults" settings database on
 * the system to get a settings object that modifies the system default
 * settings instead of the settings for this user.
 *
 * Since: 2.26
 */


/**
 * g_file_dup:
 * @file: input #GFile.
 *
 * Duplicates a #GFile handle. This operation does not duplicate
 * the actual file or directory represented by the #GFile; see
 * g_file_copy() if attempting to copy a file.
 * This call does no blocking i/o.
 *
 * Returns: (transfer full): a new #GFile that is a duplicate of the given #GFile.
 */


/**
 * g_unix_mount_is_readonly:
 * @mount_entry: a #GUnixMount.
 *
 * Checks if a unix mount is mounted read only.
 *
 * Returns: %TRUE if @mount_entry is read only.
 */


/**
 * g_dbus_method_invocation_return_error:
 * @invocation: A #GDBusMethodInvocation.
 * @domain: A #GQuark for the #GError error domain.
 * @code: The error code.
 * @format: printf()-style format.
 * @...: Parameters for @format.
 *
 * Finishes handling a D-Bus method call by returning an error.
 * See g_dbus_error_encode_gerror() for details about what error name
 * will be returned on the wire. In a nutshell, if the given error is
 * registered using g_dbus_error_register_error() the name given
 * during registration is used. Otherwise, a name of the form
 * <literal>org.gtk.GDBus.UnmappedGError.Quark...</literal> is
 * used. This provides transparent mapping of #GError between
 * applications using GDBus.
 * If you are writing an application intended to be portable,
 * <emphasis>always</emphasis> register errors with g_dbus_error_register_error()
 * or use g_dbus_method_invocation_return_dbus_error().
 * This method will free @invocation, you cannot use it afterwards.
 *
 * Since: 2.26
 */


/**
 * GSimpleAction:state:
 *
 * The state of the action, or %NULL if the action is stateless.
 *
 * Since: 2.28
 */


/**
 * g_mount_eject_with_operation:
 * @mount: a #GMount.
 * @flags: flags affecting the unmount if required for eject
 * @mount_operation: a #GMountOperation or %NULL to avoid user interaction.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback, or %NULL.
 * @user_data: user data passed to @callback.
 *
 * Ejects a mount. This is an asynchronous operation, and is
 * finished by calling g_mount_eject_with_operation_finish() with the @mount
 * and #GAsyncResult data returned in the @callback.
 *
 * Since: 2.22
 */


/**
 * g_simple_action_set_enabled:
 * @simple: a #GSimpleAction
 * @enabled: whether the action is enabled
 *
 * Sets the action as enabled or not.
 * An action must be enabled in order to be activated or in order to
 * have its state changed from outside callers.
 *
 * Since: 2.28
 */


/**
 * GDBusConnection::closed:
 * @connection: The #GDBusConnection emitting the signal.
 * @remote_peer_vanished: %TRUE if @connection is closed because the remote peer closed its end of the connection.
 * @error: A #GError with more details about the event or %NULL.
 *
 * Emitted when the connection is closed.
 * The cause of this event can be
 * <itemizedlist>
 * <listitem><para>
 * If g_dbus_connection_close() is called. In this case
 * </para></listitem>
 * <listitem><para>
 * If the remote peer closes the connection. In this case
 * </para></listitem>
 * <listitem><para>
 * If the remote peer sends invalid or malformed data. In this
 * case @remote_peer_vanished is set to %FALSE and @error
 * is set.
 * </para></listitem>
 * </itemizedlist>
 * Upon receiving this signal, you should give up your reference to
 * once.
 *
 * Since: 2.26
 */


/**
 * g_inet_socket_address_get_address:
 * @address: a #GInetSocketAddress
 *
 * Gets @address's #GInetAddress.
 * g_object_ref()'d if it will be stored
 *
 * Returns: (transfer full): the #GInetAddress for @address, which must be
 * Since: 2.22
 */


/**
 * SECTION:gcredential:
 * @short_description: An object containing credentials
 * @include: gio/gio.h
 *
 * The #GCredentials type is a reference-counted wrapper for native
 * credentials. This information is typically used for identifying,
 * authenticating and authorizing other processes.
 * Some operating systems supports looking up the credentials of the
 * remote peer of a communication endpoint - see e.g.
 * g_socket_get_credentials().
 * Some operating systems supports securely sending and receiving
 * credentials over a Unix Domain Socket, see
 * #GUnixCredentialsMessage, g_unix_connection_send_credentials() and
 * g_unix_connection_receive_credentials() for details.
 * On Linux, the native credential type is a <type>struct ucred</type>
 * - see the
 * <citerefentry><refentrytitle>unix</refentrytitle><manvolnum>7</manvolnum></citerefentry>
 * man page for details. This corresponds to
 * %G_CREDENTIALS_TYPE_LINUX_UCRED.
 * On FreeBSD, the native credential type is a <type>struct cmsgcred</type>.
 * This corresponds to %G_CREDENTIALS_TYPE_FREEBSD_CMSGCRED.
 */


/**
 * GWin32OutputStream:close-handle:
 *
 * Whether to close the file handle when the stream is closed.
 *
 * Since: 2.26
 */


/**
 * g_file_open_readwrite:
 * @file: #GFile to open
 * @cancellable: a #GCancellable
 * @error: a #GError, or %NULL
 *
 * Opens an existing file for reading and writing. The result is
 * a #GFileIOStream that can be used to read and write the contents of the file.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * If the file does not exist, the G_IO_ERROR_NOT_FOUND error will be returned.
 * If the file is a directory, the G_IO_ERROR_IS_DIRECTORY error will be returned.
 * Other errors are possible too, and depend on what kind of filesystem the file is on.
 * Note that in many non-local file cases read and write streams are not supported,
 * so make sure you really need to do read and write streaming, rather than
 * just opening for reading or writing.
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): #GFileIOStream or %NULL on error.
 * Since: 2.22
 */


/**
 * GVolumeMonitor::volume-removed:
 * @volume_monitor: The volume monitor emitting the signal.
 * @volume: a #GVolume that was removed.
 *
 * Emitted when a mountable volume is removed from the system.
 */


/**
 * g_dbus_error_encode_gerror:
 * @error: A #GError.
 *
 * Creates a D-Bus error name to use for @error. If @error matches
 * a registered error (cf. g_dbus_error_register_error()), the corresponding
 * D-Bus error name will be returned.
 * Otherwise the a name of the form
 * <literal>org.gtk.GDBus.UnmappedGError.Quark._ESCAPED_QUARK_NAME.Code_ERROR_CODE</literal>
 * will be used. This allows other GDBus applications to map the error
 * on the wire back to a #GError using g_dbus_error_new_for_dbus_error().
 * This function is typically only used in object mappings to put a
 * #GError on the wire. Regular applications should not use it.
 *
 * Returns: A D-Bus error name (never %NULL). Free with g_free().
 * Since: 2.26
 */


/**
 * g_file_set_attribute_int32:
 * @file: input #GFile.
 * @attribute: a string containing the attribute's name.
 * @value: a #gint32 containing the attribute's new value.
 * @flags: a #GFileQueryInfoFlags.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Sets @attribute of type %G_FILE_ATTRIBUTE_TYPE_INT32 to @value.
 * If @attribute is of a different type, this operation will fail.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * in the @file, %FALSE otherwise.
 *
 * Returns: %TRUE if the @attribute was successfully set to @value
 */


/**
 * GDBusServer:guid:
 *
 * The guid of the server.
 *
 * Since: 2.26
 */


/**
 * SECTION:gdesktopappinf:
 * @short_description: Application information from desktop files
 * @include: gio/gdesktopappinfo.h
 *
 * #GDesktopAppInfo is an implementation of #GAppInfo based on
 * desktop files.
 * Note that <filename>&lt;gio/gdesktopappinfo.h&gt;</filename> belongs to
 * the UNIX-specific GIO interfaces, thus you have to use the
 * <filename>gio-unix-2.0.pc</filename> pkg-config file when using it.
 */


/**
 * g_unix_socket_address_new_with_type:
 * @path: the name
 * @path_len: the length of @path, or -1
 * @type: a #GUnixSocketAddressType
 *
 * Creates a new #GUnixSocketAddress of type @type with name @path.
 * If @type is %G_UNIX_SOCKET_ADDRESS_PATH, this is equivalent to
 * calling g_unix_socket_address_new().
 * If @path_type is %G_UNIX_SOCKET_ADDRESS_ABSTRACT, then @path_len
 * bytes of @path will be copied to the socket's path, and only those
 * bytes will be considered part of the name. (If @path_len is -1,
 * then @path is assumed to be NUL-terminated.) For example, if @path
 * was "test", then calling g_socket_address_get_native_size() on the
 * returned socket would return 7 (2 bytes of overhead, 1 byte for the
 * abstract-socket indicator byte, and 4 bytes for the name "test").
 * If @path_type is %G_UNIX_SOCKET_ADDRESS_ABSTRACT_PADDED, then
 * rest of the path will be padded with 0 bytes, and the entire
 * zero-padded buffer will be considered the name. (As above, if
 * this case, g_socket_address_get_native_size() will always return
 * the full size of a <literal>struct sockaddr_un</literal>, although
 * g_unix_socket_address_get_path_len() will still return just the
 * length of @path.
 * %G_UNIX_SOCKET_ADDRESS_ABSTRACT is preferred over
 * %G_UNIX_SOCKET_ADDRESS_ABSTRACT_PADDED for new programs. Of course,
 * when connecting to a server created by another process, you must
 * use the appropriate type corresponding to how that process created
 * its listening socket.
 *
 * Returns: a new #GUnixSocketAddress
 * Since: 2.26
 */


/**
 * g_application_command_line_get_arguments:
 * @cmdline: a #GApplicationCommandLine
 * @argc: the length of the arguments array, or %NULL
 *
 * Gets the list of arguments that was passed on the command line.
 * The strings in the array may contain non-utf8 data.
 * The return value is %NULL-terminated and should be freed using
 * g_strfreev().
 *
 * Returns: the string array containing the arguments (the argv)
 * Since: 2.28
 */


/**
 * g_io_stream_get_input_stream:
 * @stream: a #GIOStream
 *
 * Gets the input stream for this object. This is used
 * for reading.
 * Do not free.
 *
 * Returns: (transfer none): a #GInputStream, owned by the #GIOStream.
 * Since: 2.22
 */


/**
 * GDBusServer:address:
 *
 * The D-Bus address to listen on.
 *
 * Since: 2.26
 */


/**
 * g_unix_socket_address_get_path_len:
 * @address: a #GInetSocketAddress
 *
 * Gets the length of @address's path.
 * For details, see g_unix_socket_address_get_path().
 *
 * Returns: the length of the path
 * Since: 2.22
 */


/**
 * SECTION:gfileico:
 * @short_description: Icons pointing to an image file
 * @include: gio/gio.h
 * @see_also: #GIcon, #GLoadableIcon
 *
 * #GFileIcon specifies an icon by pointing to an image file
 * to be used as icon.
 */


/**
 * g_socket_listener_close:
 * @listener: a #GSocketListener
 *
 * Closes all the sockets in the listener.
 *
 * Since: 2.22
 */


/**
 * g_data_input_stream_read_line:
 * @stream: a given #GDataInputStream.
 * @length: a #gsize to get the length of the data read in.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: #GError for error reporting.
 *
 * Reads a line from the data input stream.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * Set @length to a #gsize to get the length of the read line.
 * On an error, it will return %NULL and @error will be set. If there's no
 * content to read, it will still return %NULL, but @error won't be set.
 *
 * Returns: a string with the line that was read in (without the newlines).
 */


/**
 * SECTION:gvolumemonito:
 * @short_description: Volume Monitor
 * @include: gio/gio.h
 * @see_also: #GFileMonitor
 *
 * #GVolumeMonitor is for listing the user interesting devices and volumes
 * on the computer. In other words, what a file selector or file manager
 * would show in a sidebar.
 * #GVolumeMonitor is not <link
 * linkend="g-main-context-push-thread-default">thread-default-context
 * aware</link>, and so should not be used other than from the main
 * thread, with no thread-default-context active.
 */


/**
 * g_dbus_connection_is_closed:
 * @connection: A #GDBusConnection.
 *
 * Gets whether @connection is closed.
 *
 * Returns: %TRUE if the connection is closed, %FALSE otherwise.
 * Since: 2.26
 */


/**
 * GCancellable::cancelled:
 * @cancellable: a #GCancellable.
 *
 * Emitted when the operation has been cancelled.
 * Can be used by implementations of cancellable operations. If the
 * operation is cancelled from another thread, the signal will be
 * emitted in the thread that cancelled the operation, not the
 * thread that is running the operation.
 * Note that disconnecting from this signal (or any signal) in a
 * multi-threaded program is prone to race conditions. For instance
 * it is possible that a signal handler may be invoked even
 * <emphasis>after</emphasis> a call to
 * g_signal_handler_disconnect() for that handler has already
 * returned.
 * There is also a problem when cancellation happen
 * right before connecting to the signal. If this happens the
 * signal will unexpectedly not be emitted, and checking before
 * connecting to the signal leaves a race condition where this is
 * still happening.
 * In order to make it safe and easy to connect handlers there
 * g_cancellable_disconnect() which protect against problems
 * like this.
 * An example of how to us this:
 * |[
 * /<!-- -->* Make sure we don't do any unnecessary work if already cancelled *<!-- -->/
 * if (g_cancellable_set_error_if_cancelled (cancellable))
 * return;
 * /<!-- -->* Set up all the data needed to be able to
 * * handle cancellation of the operation *<!-- -->/
 * my_data = my_data_new (...);
 * id = 0;
 * if (cancellable)
 * id = g_cancellable_connect (cancellable,
 * G_CALLBACK (cancelled_handler)
 * data, NULL);
 * /<!-- -->* cancellable operation here... *<!-- -->/
 * g_cancellable_disconnect (cancellable, id);
 * /<!-- -->* cancelled_handler is never called after this, it
 * * is now safe to free the data *<!-- -->/
 * my_data_free (my_data);
 * ]|
 * Note that the cancelled signal is emitted in the thread that
 * the user cancelled from, which may be the main thread. So, the
 * cancellable signal should not do something that can block.
 *
 * Are two helper functions: g_cancellable_connect() and
 */


/**
 * g_file_attribute_info_list_dup:
 * @list: a #GFileAttributeInfoList to duplicate.
 *
 * Makes a duplicate of a file attribute info list.
 *
 * Returns: a copy of the given @list.
 */


/**
 * g_app_info_get_commandline:
 * @appinfo: a #GAppInfo
 *
 * Gets the commandline with which the application will be
 * started.
 * or %NULL if this information is not available
 *
 * Returns: a string containing the @appinfo's commandline,
 * Since: 2.20
 */


/**
 * g_dbus_interface_info_unref:
 * @info: A #GDBusInterfaceInfo.
 *
 * If @info is statically allocated, does nothing. Otherwise decreases
 * the reference count of @info. When its reference count drops to 0,
 * the memory used is freed.
 *
 * Since: 2.26
 */


/**
 * g_charset_converter_get_num_fallbacks:
 * @converter: a #GCharsetConverter
 *
 * Gets the number of fallbacks that @converter has applied so far.
 *
 * Returns: the number of fallbacks that @converter has applied
 * Since: 2.24
 */


/**
 * g_file_enumerator_is_closed:
 * @enumerator: a #GFileEnumerator.
 *
 * Checks if the file enumerator has been closed.
 *
 * Returns: %TRUE if the @enumerator is closed.
 */


/**
 * g_emblem_new:
 * @icon: a GIcon containing the icon.
 *
 * Creates a new emblem for @icon.
 *
 * Returns: a new #GEmblem.
 * Since: 2.18
 */


/**
 * g_file_has_uri_scheme:
 * @file: input #GFile.
 * @uri_scheme: a string containing a URI scheme.
 *
 * Checks to see if a #GFile has a given URI scheme.
 * This call does no blocking i/o.
 * given URI scheme, %FALSE if URI scheme is %NULL,
 * not supported, or #GFile is invalid.
 *
 * Returns: %TRUE if #GFile's backend supports the
 */


/**
 * g_simple_async_result_new_take_error:
 * @source_object: (allow-none): a #GObject, or %NULL
 * @callback: a #GAsyncReadyCallback
 * @user_data: (allow-none): user data passed to @callback
 * @error: a #GError
 *
 * Creates a #GSimpleAsyncResult from an error condition, and takes over the
 * caller's ownership of @error, so the caller does not need to free it anymore.
 *
 * Returns: a #GSimpleAsyncResult
 * Since: 2.28
 */


/**
 * SECTION:gsimpleactiongrou:
 * @title: GSimpleActionGroup
 * @short_description: a simple GActionGroup implementation
 *
 * #GSimpleActionGroup is a hash table filled with #GAction objects,
 * implementing the #GActionGroup interface.
 */


/**
 * GPermission:can-release:
 *
 * %TRUE if it is generally possible to release the permission by calling
 * g_permission_release().
 */


/**
 * SECTION:gwin32inputstrea:
 * @short_description: Streaming input operations for Windows file handles
 * @include: gio/gwin32inputstream.h
 * @see_also: #GInputStream
 *
 * #GWin32InputStream implements #GInputStream for reading from a
 * Windows file handle.
 * Note that <filename>&lt;gio/gwin32inputstream.h&gt;</filename> belongs
 * to the Windows-specific GIO interfaces, thus you have to use the
 * <filename>gio-windows-2.0.pc</filename> pkg-config file when using it.
 */


/**
 * g_bus_watch_name_on_connection_with_closures:
 * @connection: A #GDBusConnection.
 * @name: The name (well-known or unique) to watch.
 * @flags: Flags from the #GBusNameWatcherFlags enumeration.
 * @name_appeared_closure: (allow-none): #GClosure to invoke when @name is known to exist or %NULL.
 * @name_vanished_closure: (allow-none): #GClosure to invoke when @name is known to not exist or %NULL.
 *
 * Version of g_bus_watch_name_on_connection() using closures instead of callbacks for
 * easier binding in other languages.
 * g_bus_unwatch_name() to stop watching the name.
 *
 * Returns: An identifier (never 0) that an be used with
 * Rename to: g_bus_watch_name_on_connection
 * Since: 2.26
 */


/**
 * g_file_mount_enclosing_volume:
 * @location: input #GFile.
 * @flags: flags affecting the operation
 * @mount_operation: a #GMountOperation or %NULL to avoid user interaction.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied, or %NULL.
 * @user_data: the data to pass to callback function
 *
 * Starts a @mount_operation, mounting the volume that contains the file @location.
 * When this operation has completed, @callback will be called with
 * g_file_mount_enclosing_volume_finish().
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 */


/**
 * GVolumeMonitor::mount-added:
 * @volume_monitor: The volume monitor emitting the signal.
 * @mount: a #GMount that was added.
 *
 * Emitted when a mount is added.
 */


/**
 * g_settings_get_flags:
 * @settings: a #GSettings object
 * @key: the key to get the value for
 * @returns: the flags value
 *
 * Gets the value that is stored in @settings for @key and converts it
 * to the flags value that it represents.
 * In order to use this function the type of the value must be an array
 * of strings and it must be marked in the schema file as an flags type.
 * It is a programmer error to give a @key that isn't contained in the
 * schema for @settings or is not marked as a flags type.
 * If the value stored in the configuration database is not a valid
 * value for the flags type then this function will return the default
 * value.
 *
 * Since: 2.26
 */


/**
 * g_file_info_get_attribute_stringv:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 *
 * Gets the value of a stringv attribute. If the attribute does
 * not contain a stringv, %NULL will be returned.
 * %NULL otherwise. Do not free.
 *
 * Returns: (transfer none): the contents of the @attribute value as a stringv, or
 * Since: 2.22
 */


/**
 * g_file_attribute_matcher_unref:
 * @matcher: a #GFileAttributeMatcher.
 *
 * Unreferences @matcher. If the reference count falls below 1,
 * the @matcher is automatically freed.
 */


/**
 * g_proxy_address_new:
 * @inetaddr: The proxy server #GInetAddress.
 * @port: The proxy server port.
 * @protocol: The proxy protocol to support, in lower case (e.g. socks, http).
 * @dest_hostname: The destination hostname the the proxy should tunnel to.
 * @dest_port: The destination port to tunnel to.
 * @username: The username to authenticate to the proxy server (or %NULL).
 * @password: The password to authenticate to the proxy server (or %NULL).
 *
 * Creates a new #GProxyAddress for @inetaddr with @protocol that should
 * tunnel through @dest_hostname and @dest_port.
 *
 * Returns: a new #GProxyAddress
 * Since: 2.26
 */


/**
 * g_file_monitor_emit_event:
 * @monitor: a #GFileMonitor.
 * @child: a #GFile.
 * @other_file: a #GFile.
 * @event_type: a set of #GFileMonitorEvent flags.
 *
 * Emits the #GFileMonitor::changed signal if a change
 * has taken place. Should be called from file monitor
 * implementations only.
 * The signal will be emitted from an idle handler (in the <link
 * linkend="g-main-context-push-thread-default">thread-default main
 * context</link>).
 */


/**
 * g_charset_converter_set_use_fallback:
 * @converter: a #GCharsetConverter
 * @use_fallback: %TRUE to use fallbacks
 *
 * Sets the #GCharsetConverter:use-fallback property.
 *
 * Since: 2.24
 */


/**
 * g_socket_receive_with_blocking:
 * @socket: a #GSocket
 * @buffer: a buffer to read data into (which should be at least @size bytes long).
 * @size: the number of bytes you want to read from the socket
 * @blocking: whether to do blocking or non-blocking I/O
 * @cancellable: a %GCancellable or %NULL
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * This behaves exactly the same as g_socket_receive(), except that
 * the choice of blocking or non-blocking behavior is determined by
 * the @blocking argument rather than by @socket's properties.
 *
 * Returns: Number of bytes read, or -1 on error
 * Since: 2.26
 */


/**
 * g_win32_input_stream_set_close_handle:
 * @stream: a #GWin32InputStream
 * @close_handle: %TRUE to close the handle when done
 *
 * Sets whether the handle of @stream shall be closed
 * when the stream is closed.
 *
 * Since: 2.26
 */


/**
 * g_mount_get_name:
 * @mount: a #GMount.
 *
 * Gets the name of @mount.
 * The returned string should be freed with g_free()
 * when no longer needed.
 *
 * Returns: the name for the given @mount.
 */


/**
 * g_file_info_set_attribute_boolean:
 * @info: a #GFileInfo.
 * @attribute: a file attribute key.
 * @attr_value: a boolean value.
 *
 * Sets the @attribute to contain the given @attr_value,
 * if possible.
 */


/**
 * g_mount_eject_with_operation_finish:
 * @mount: a #GMount.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occuring, or %NULL to ignore.
 *
 * Finishes ejecting a mount. If any errors occurred during the operation,
 *
 * Returns: %TRUE if the mount was successfully ejected. %FALSE otherwise.
 * Since: 2.22
 */


/**
 * SECTION:giomodul:
 * @short_description: Loadable GIO Modules
 * @include: gio/gio.h
 *
 * Provides an interface and default functions for loading and unloading
 * modules. This is used internally to make GIO extensible, but can also
 * be used by others to implement module loading.
 */


/**
 * g_bus_get:
 * @bus_type: A #GBusType.
 * @cancellable: A #GCancellable or %NULL.
 * @callback: A #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: The data to pass to @callback.
 *
 * Asynchronously connects to the message bus specified by @bus_type.
 * When the operation is finished, @callback will be invoked. You can
 * then call g_bus_get_finish() to get the result of the operation.
 * This is a asynchronous failable function. See g_bus_get_sync() for
 * the synchronous version.
 *
 * Since: 2.26
 */


/**
 * GInetAddress:is-mc-site-local:
 *
 * Whether this is a site-local multicast address.
 * See g_inet_address_get_is_mc_site_local().
 *
 * Since: 2.22
 */


/**
 * g_dbus_method_invocation_get_sender:
 * @invocation: A #GDBusMethodInvocation.
 *
 * Gets the bus name that invoked the method.
 *
 * Returns: A string. Do not free, it is owned by @invocation.
 * Since: 2.26
 */


/**
 * g_credentials_is_same_user:
 * @credentials: A #GCredentials.
 * @other_credentials: A #GCredentials.
 * @error: Return location for error or %NULL.
 *
 * Checks if @credentials and @other_credentials is the same user.
 * This operation can fail if #GCredentials is not supported on the
 * the OS.
 * user, %FALSE otherwise or if @error is set.
 *
 * Returns: %TRUE if @credentials and @other_credentials has the same
 * Since: 2.26
 */


/**
 * g_data_output_stream_put_uint16:
 * @stream: a #GDataOutputStream.
 * @data: a #guint16.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, %NULL to ignore.
 *
 * Puts an unsigned 16-bit integer into the output stream.
 *
 * Returns: %TRUE if @data was successfully added to the @stream.
 */


/**
 * g_dbus_connection_send_message:
 * @connection: A #GDBusConnection.
 * @message: A #GDBusMessage
 * @flags: Flags affecting how the message is sent.
 * @out_serial: Return location for serial number assigned to @message when sending it or %NULL.
 * @error: Return location for error or %NULL.
 *
 * Asynchronously sends @message to the peer represented by @connection.
 * Unless @flags contain the
 * %G_DBUS_SEND_MESSAGE_FLAGS_PRESERVE_SERIAL flag, the serial number
 * will be assigned by @connection and set on @message via
 * g_dbus_message_set_serial(). If @out_serial is not %NULL, then the
 * serial number used will be written to this location prior to
 * submitting the message to the underlying transport.
 * If @connection is closed then the operation will fail with
 * %G_IO_ERROR_CLOSED. If @message is not well-formed,
 * the operation fails with %G_IO_ERROR_INVALID_ARGUMENT.
 * See <xref linkend="gdbus-server"/> and <xref
 * linkend="gdbus-unix-fd-client"/> for an example of how to use this
 * low-level API to send and receive UNIX file descriptors.
 * Note that @message must be unlocked, unless @flags contain the
 * %G_DBUS_SEND_MESSAGE_FLAGS_PRESERVE_SERIAL flag.
 * transmission, %FALSE if @error is set.
 *
 * Returns: %TRUE if the message was well-formed and queued for
 * Since: 2.26
 */


/**
 * g_icon_equal:
 * @icon1: pointer to the first #GIcon.
 * @icon2: pointer to the second #GIcon.
 *
 * Checks if two icons are equal.
 *
 * Returns: %TRUE if @icon1 is equal to @icon2. %FALSE otherwise.
 */


/**
 * g_volume_should_automount:
 * @volume: a #GVolume
 *
 * Returns whether the volume should be automatically mounted.
 *
 * Returns: %TRUE if the volume should be automatically mounted.
 */


/**
 * g_seekable_tell:
 * @seekable: a #GSeekable.
 *
 * Tells the current position within the stream.
 *
 * Returns: the offset from the beginning of the buffer.
 */


/**
 * SECTION:gsimpleactio:
 * @title: GSimpleAction
 * @short_description: a simple GSimpleAction
 *
 * A #GSimpleAction is the obvious simple implementation of the #GSimpleAction
 * interface.  This is the easiest way to create an action for purposes of
 * adding it to a #GSimpleActionGroup.
 * See also #GtkAction.
 */


/**
 * g_socket_listener_add_inet_port:
 * @listener: a #GSocketListener
 * @port: an IP port number (non-zero)
 * @source_object: Optional #GObject identifying this source
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Helper function for g_socket_listener_add_address() that
 * creates a TCP/IP socket listening on IPv4 and IPv6 (if
 * supported) on the specified port on all interfaces.
 * to accept to identify this particular source, which is
 * useful if you're listening on multiple addresses and do
 * different things depending on what address is connected to.
 *
 * Returns: %TRUE on success, %FALSE on error.
 * Since: 2.22
 */


/**
 * g_dbus_connection_call_finish:
 * @connection: A #GDBusConnection.
 * @res: A #GAsyncResult obtained from the #GAsyncReadyCallback passed to g_dbus_connection_call().
 * @error: Return location for error or %NULL.
 *
 * Finishes an operation started with g_dbus_connection_call().
 * return values. Free with g_variant_unref().
 *
 * Returns: %NULL if @error is set. Otherwise a #GVariant tuple with
 * Since: 2.26
 */


/**
 * g_proxy_resolver_lookup_async:
 * @resolver: a #GProxyResolver
 * @uri: a URI representing the destination to connect to
 * @cancellable: a #GCancellable, or %NULL
 * @callback: callback to call after resolution completes
 * @user_data: data for @callback
 *
 * Asynchronous lookup of proxy. See g_proxy_resolver_lookup() for more
 * details.
 *
 * Since: 2.26
 */


/**
 * SECTION:gsetting:
 * @short_description: a high-level API for application settings
 *
 * The #GSettings class provides a convenient API for storing and retrieving
 * application settings.
 * When creating a GSettings instance, you have to specify a schema
 * that describes the keys in your settings and their types and default
 * values, as well as some other information.
 * Normally, a schema has as fixed path that determines where the settings
 * are stored in the conceptual global tree of settings. However, schemas
 * can also be 'relocatable', i.e. not equipped with a fixed path. This is
 * useful e.g. when the schema describes an 'account', and you want to be
 * able to store a arbitrary number of accounts.
 * Unlike other configuration systems (like GConf), GSettings does not
 * restrict keys to basic types like strings and numbers. GSettings stores
 * values as #GVariant, and allows any #GVariantType for keys. Key names
 * are restricted to lowercase characters, numbers and '-'. Furthermore,
 * the names must begin with a lowercase character, must not end
 * with a '-', and must not contain consecutive dashes. Key names can
 * be up to 32 characters long.
 * Similar to GConf, the default values in GSettings schemas can be
 * localized, but the localized values are stored in gettext catalogs
 * and looked up with the domain that is specified in the
 * <tag class="attribute">gettext-domain</tag> attribute of the
 * <tag class="starttag">schemalist</tag> or <tag class="starttag">schema</tag>
 * elements and the category that is specified in the l10n attribute of the
 * <tag class="starttag">key</tag> element.
 * GSettings uses schemas in a compact binary form that is created
 * by the <link linkend="glib-compile-schemas">glib-compile-schemas</link>
 * utility. The input is a schema description in an XML format that can be
 * described by the following DTD:
 * |[<xi:include xmlns:xi="http://www.w3.org/2001/XInclude" parse="text" href="../../../../gio/gschema.dtd"><xi:fallback>FIXME: MISSING XINCLUDE CONTENT</xi:fallback></xi:include>]|
 * At runtime, schemas are identified by their id (as specified
 * in the <tag class="attribute">id</tag> attribute of the
 * <tag class="starttag">schema</tag> element). The
 * convention for schema ids is to use a dotted name, similar in
 * style to a DBus bus name, e.g. "org.gnome.font-rendering".
 * In addition to #GVariant types, keys can have types that have enumerated
 * types. These can be described by a <tag class="starttag">choice</tag>,
 * <tag class="starttag">enum</tag> or <tag class="starttag">flags</tag> element, see
 * <xref linkend="schema-enumerated"/>. The underlying type of
 * such a key is string, but you can use g_settings_get_enum(),
 * g_settings_set_enum(), g_settings_get_flags(), g_settings_set_flags()
 * access the numeric values corresponding to the string value of enum
 * and flags keys.
 * <example id="schema-default-values"><title>Default values</title>
 * <programlisting><![CDATA[
 * <schemalist>
 * <schema id="org.gtk.test" path="/tests/" gettext-domain="test">
 * <key name="greeting" type="s">
 * <default l10n="messages">"Hello, earthlings"</default>
 * <summary>A greeting</summary>
 * <description>
 * Greeting of the invading martians
 * </description>
 * </key>
 * <key name="box" type="(ii)">
 * <default>(20,30)</default>
 * </key>
 * </schema>
 * </schemalist>
 * ]]></programlisting></example>
 * <example id="schema-enumerated"><title>Ranges, choices and enumerated types</title>
 * <programlisting><![CDATA[
 * <schemalist>
 * <enum id="myenum">
 * <value nick="first" value="1"/>
 * <value nick="second" value="2"/>
 * </enum>
 * <enum id="myflags">
 * <value nick="flag1" value="1"/>
 * <value nick="flag2" value="2"/>
 * <value nick="flag3" value="4"/>
 * </enum>
 * <schema id="org.gtk.test">
 * <key name="key-with-range" type="i">
 * <range min="1" max="100"/>
 * <default>10</default>
 * </key>
 * <key name="key-with-choices" type="s">
 * <choices>
 * <choice value='Elisabeth'/>
 * <choice value='Annabeth'/>
 * <choice value='Joe'/>
 * </choices>
 * <aliases>
 * <alias value='Anna' target='Annabeth'/>
 * <alias value='Beth' target='Elisabeth'/>
 * </aliases>
 * <default>'Joe'</default>
 * </key>
 * <key name='enumerated-key' enum='myenum'>
 * <default>'first'</default>
 * </key>
 * <key name='flags-key' flags='myflags'>
 * <default>["flag1",flag2"]</default>
 * </key>
 * </schema>
 * </schemalist>
 * ]]></programlisting></example>
 * <refsect2>
 * <title>Vendor overrides</title>
 * <para>
 * Default values are defined in the schemas that get installed by
 * an application. Sometimes, it is necessary for a vendor or distributor
 * to adjust these defaults. Since patching the XML source for the schema
 * is inconvenient and error-prone,
 * <link linkend="glib-compile-schemas">glib-compile-schemas</link> reads
 * so-called 'vendor override' files. These are keyfiles in the same
 * directory as the XML schema sources which can override default values.
 * The schema id serves as the group name in the key file, and the values
 * are expected in serialized GVariant form, as in the following example:
 * <informalexample><programlisting>
 * [org.gtk.Example]
 * key1='string'
 * key2=1.5
 * </programlisting></informalexample>
 * </para>
 * </refsect2>
 * <refsect2>
 * <title>Binding</title>
 * <para>
 * A very convenient feature of GSettings lets you bind #GObject properties
 * directly to settings, using g_settings_bind(). Once a GObject property
 * has been bound to a setting, changes on either side are automatically
 * propagated to the other side. GSettings handles details like
 * mapping between GObject and GVariant types, and preventing infinite
 * cycles.
 * </para>
 * <para>
 * This makes it very easy to hook up a preferences dialog to the
 * underlying settings. To make this even more convenient, GSettings
 * looks for a boolean property with the name "sensitivity" and
 * automatically binds it to the writability of the bound setting.
 * If this 'magic' gets in the way, it can be suppressed with the
 * #G_SETTINGS_BIND_NO_SENSITIVITY flag.
 * </para>
 * </refsect2>
 */


/**
 * g_volume_enumerate_identifiers:
 * @volume: a #GVolume
 *
 * Gets the kinds of <link linkend="volume-identifier">identifiers</link>
 * that @volume has. Use g_volume_get_identifer() to obtain
 * the identifiers themselves.
 * of strings containing kinds of identifiers. Use g_strfreev() to free.
 *
 * Returns: (array zero-terminated=1) (transfer full): a %NULL-terminated array
 */


/**
 * g_zlib_decompressor_get_file_info:
 * @decompressor: a #GZlibDecompressor
 *
 * Retrieves the #GFileInfo constructed from the GZIP header data
 * of compressed data processed by @compressor, or %NULL if @decompressor's
 * #GZlibDecompressor:format property is not %G_ZLIB_COMPRESSOR_FORMAT_GZIP,
 * or the header data was not fully processed yet, or it not present in the
 * data stream at all.
 *
 * Returns: (transfer none): a #GFileInfo, or %NULL
 * Since: 2.26
 */


/**
 * SECTION:ginputstrea:
 * @short_description: Base class for implementing streaming input
 * @include: gio/gio.h
 *
 * GInputStream has functions to read from a stream (g_input_stream_read()),
 * to close a stream (g_input_stream_close()) and to skip some content
 * (g_input_stream_skip()).
 * To copy the content of an input stream to an output stream without
 * manually handling the reads and writes, use g_output_stream_splice().
 * All of these functions have async variants too.
 */


/**
 * g_permission_impl_update:
 * @permission: a #GPermission instance
 * @allowed: the new value for the 'allowed' property
 * @can_acquire: the new value for the 'can-acquire' property
 * @can_release: the new value for the 'can-release' property
 *
 * This function is called by the #GPermission implementation to update
 * the properties of the permission.  You should never call this
 * function except from a #GPermission implementation.
 * GObject notify signals are generated, as appropriate.
 *
 * Since: 2.26
 */


/**
 * g_dbus_method_invocation_return_gerror:
 * @invocation: A #GDBusMethodInvocation.
 * @error: A #GError.
 *
 * Like g_dbus_method_invocation_return_error() but takes a #GError
 * instead of the error domain, error code and message.
 * This method will free @invocation, you cannot use it afterwards.
 *
 * Since: 2.26
 */


/**
 * g_settings_list_children:
 * @settings: a #GSettings object
 * @returns: (transfer full) (element-type utf8): a list of the children on @settings
 *
 * Gets the list of children on @settings.
 * The list is exactly the list of strings for which it is not an error
 * to call g_settings_get_child().
 * For GSettings objects that are lists, this value can change at any
 * time and you should connect to the "children-changed" signal to watch
 * request a child after listing it only for it to have been destroyed
 * in the meantime.  For this reason, g_settings_get_chuld() may return
 * %NULL even for a child that was listed by this function.
 * For GSettings objects that are not lists, you should probably not be
 * calling this function from "normal" code (since you should already
 * know what children are in your schema).  This function may still be
 * useful there for introspection reasons, however.
 * You should free the return value with g_strfreev() when you are done
 * with it.
 *
 * For those changes.  note that there is a race condition here: you may
 */


/**
 * g_app_launch_context_get_startup_notify_id:
 * @context: a #GAppLaunchContext
 * @info: a #GAppInfo
 * @files: (element-type GFile): a #GList of of #GFile objects
 *
 * Initiates startup notification for the application and returns the
 * <envvar>DESKTOP_STARTUP_ID</envvar> for the launched operation,
 * if supported.
 * Startup notification IDs are defined in the <ulink
 * url="http://standards.freedesktop.org/startup-notification-spec/startup-notification-latest.txt">
 * FreeDesktop.Org Startup Notifications standard</ulink>.
 * not supported.
 *
 * Returns: a startup notification ID for the application, or %NULL if
 */


/**
 * g_dbus_address_get_stream_finish:
 * @res: A #GAsyncResult obtained from the GAsyncReadyCallback passed to g_dbus_address_get_stream().
 * @out_guid: %NULL or return location to store the GUID extracted from @address, if any.
 * @error: Return location for error or %NULL.
 *
 * Finishes an operation started with g_dbus_address_get_stream().
 *
 * Returns: (transfer full): A #GIOStream or %NULL if @error is set.
 * Since: 2.26
 */


/**
 * g_file_set_attribute_string:
 * @file: input #GFile.
 * @attribute: a string containing the attribute's name.
 * @value: a string containing the attribute's value.
 * @flags: #GFileQueryInfoFlags.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL
 *
 * Sets @attribute of type %G_FILE_ATTRIBUTE_TYPE_STRING to @value.
 * If @attribute is of a different type, this operation will fail.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 *
 * Returns: %TRUE if the @attribute was successfully set, %FALSE otherwise.
 */


/**
 * g_file_read_finish:
 * @file: input #GFile.
 * @res: a #GAsyncResult.
 * @error: a #GError, or %NULL
 *
 * Finishes an asynchronous file read operation started with
 * g_file_read_async().
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): a #GFileInputStream or %NULL on error.
 */


/**
 * g_socket_client_connect_to_uri_finish:
 * @client: a #GSocketClient.
 * @result: a #GAsyncResult.
 * @error: a #GError location to store the error occuring, or %NULL to ignore.
 *
 * Finishes an async connect operation. See g_socket_client_connect_to_uri_async()
 *
 * Returns: (transfer full): a #GSocketConnection on success, %NULL on error.
 * Since: 2.26
 */


/**
 * g_file_load_contents_async:
 * @file: input #GFile.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied
 * @user_data: the data to pass to callback function
 *
 * Starts an asynchronous load of the @file's contents.
 * For more details, see g_file_load_contents() which is
 * the synchronous version of this call.
 * When the load operation has completed, @callback will be called
 * with @user data. To finish the operation, call
 * g_file_load_contents_finish() with the #GAsyncResult returned by
 * the @callback.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 */


/**
 * g_dbus_connection_call_sync:
 * @connection: A #GDBusConnection.
 * @bus_name: A unique or well-known bus name.
 * @object_path: Path of remote object.
 * @interface_name: D-Bus interface to invoke method on.
 * @method_name: The name of the method to invoke.
 * @parameters: A #GVariant tuple with parameters for the method or %NULL if not passing parameters.
 * @reply_type: The expected type of the reply, or %NULL.
 * @flags: Flags from the #GDBusCallFlags enumeration.
 * @timeout_msec: The timeout in milliseconds, -1 to use the default timeout or %G_MAXINT for no timeout.
 * @cancellable: A #GCancellable or %NULL.
 * @error: Return location for error or %NULL.
 *
 * Synchronously invokes the @method_name method on the
 * If @connection is closed then the operation will fail with
 * %G_IO_ERROR_CLOSED. If @cancellable is canceled, the
 * operation will fail with %G_IO_ERROR_CANCELLED. If @parameters
 * contains a value not compatible with the D-Bus protocol, the operation
 * fails with %G_IO_ERROR_INVALID_ARGUMENT.
 * If @reply_type is non-%NULL then the reply will be checked for having
 * this type and an error will be raised if it does not match.  Said
 * another way, if you give a @reply_type then any non-%NULL return
 * value will be of this type.
 * If the @parameters #GVariant is floating, it is consumed.
 * This allows convenient 'inline' use of g_variant_new(), e.g.:
 * |[
 * g_dbus_connection_call_sync (connection,
 * "org.freedesktop.StringThings",
 * "/org/freedesktop/StringThings",
 * "org.freedesktop.StringThings",
 * "TwoStrings",
 * g_variant_new ("(ss)",
 * "Thing One",
 * "Thing Two"),
 * NULL,
 * G_DBUS_CALL_FLAGS_NONE,
 * -1,
 * NULL,
 * &amp;error);
 * ]|
 * The calling thread is blocked until a reply is received. See
 * g_dbus_connection_call() for the asynchronous version of
 * this method.
 * return values. Free with g_variant_unref().
 *
 * Returns: %NULL if @error is set. Otherwise a #GVariant tuple with
 * Since: 2.26
 */


/**
 * g_output_stream_write_all:
 * @stream: a #GOutputStream.
 * @buffer: (array length=count) (element-type guint8): the buffer containing the data to write.
 * @count: the number of bytes to write
 * @bytes_written: location to store the number of bytes that was written to the stream
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: location to store the error occuring, or %NULL to ignore
 *
 * Tries to write @count bytes from @buffer into the stream. Will block
 * during the operation.
 * This function is similar to g_output_stream_write(), except it tries to
 * write as many bytes as requested, only stopping on an error.
 * On a successful write of @count bytes, %TRUE is returned, and @bytes_written
 * is set to @count.
 * If there is an error during the operation FALSE is returned and @error
 * is set to indicate the error status, @bytes_written is updated to contain
 * the number of bytes written into the stream before the error occurred.
 *
 * Returns: %TRUE on success, %FALSE if there was an error
 */


/**
 * g_file_monitor_file:
 * @file: input #GFile.
 * @flags: a set of #GFileMonitorFlags.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, or %NULL.
 *
 * Obtains a file monitor for the given file. If no file notification
 * mechanism exists, then regular polling of the file is used.
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): a #GFileMonitor for the given @file, or %NULL on error.
 */


/**
 * SECTION:gapplicationcommandlin:
 * @title: GApplicationCommandLine
 * @short_description: A class representing a command-line invocation of an application
 * @see_also: #GApplication
 *
 * #GApplicationCommandLine represents a command-line invocation of
 * an application.  It is created by #GApplication and emitted
 * in the #GApplication::command-line signal and virtual function.
 * The class contains the list of arguments that the program was invoked
 * with.  It is also possible to query if the commandline invocation was
 * commandline to this process).
 * The exit status of the originally-invoked process may be set and
 * messages can be printed to stdout or stderr of that process.  The
 * lifecycle of the originally-invoked process is tied to the lifecycle
 * dropped).
 * <example id="gapplication-example-cmdline"><title>Handling commandline arguments with GApplication</title>
 * <programlisting>
 * <xi:include xmlns:xi="http://www.w3.org/2001/XInclude" parse="text" href="../../../../gio/tests/gapplication-example-cmdline.c">
 * <xi:fallback>FIXME: MISSING XINCLUDE CONTENT</xi:fallback>
 * </xi:include>
 * </programlisting>
 * </example>
 * <example id="gapplication-example-cmdline2"><title>Complicated commandline handling</title>
 * <programlisting>
 * <xi:include xmlns:xi="http://www.w3.org/2001/XInclude" parse="text" href="../../../../gio/tests/gapplication-example-cmdline2.c">
 * <xi:fallback>FIXME: MISSING XINCLUDE CONTENT</xi:fallback>
 * </xi:include>
 * </programlisting>
 * </example>
 *
 * Local (ie: the current process is running in direct response to the
 * Invocation) or remote (ie: some other process forwarded the
 * Of this object (ie: the process exits when the last reference is
 */


/**
 * g_async_initable_new_finish:
 * @initable: the #GAsyncInitable from the callback
 * @res: the #GAsyncResult.from the callback
 * @error: a #GError location to store the error occuring, or %NULL to ignore.
 *
 * Finishes the async construction for the various g_async_initable_new calls,
 * returning the created object or %NULL on error.
 * g_object_unref().
 *
 * Returns: (transfer full): a newly created #GObject, or %NULL on error. Free with
 * Since: 2.22
 */


/**
 * g_file_output_stream_get_etag:
 * @stream: a #GFileOutputStream.
 *
 * Gets the entity tag for the file when it has been written.
 * This must be called after the stream has been written
 * and closed, as the etag can change while writing.
 *
 * Returns: the entity tag for the stream.
 */


/**
 * g_file_supports_thread_contexts:
 * @file: a #GFile.
 *
 * Checks if @file supports <link
 * linkend="g-main-context-push-thread-default-context">thread-default
 * contexts</link>. If this returns %FALSE, you cannot perform
 * asynchronous operations on @file in a thread that has a
 * thread-default context.
 *
 * Returns: Whether or not @file supports thread-default contexts.
 * Since: 2.22
 */


/**
 * g_file_move:
 * @source: #GFile pointing to the source location.
 * @destination: #GFile pointing to the destination location.
 * @flags: set of #GFileCopyFlags.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @progress_callback: (scope call): #GFileProgressCallback function for updates.
 * @progress_callback_data: (closure): gpointer to user data for the callback function.
 * @error: #GError for returning error conditions, or %NULL
 *
 * Tries to move the file or directory @source to the location specified by @destination.
 * If native move operations are supported then this is used, otherwise a copy + delete
 * fallback is used. The native implementation may support moving directories (for instance
 * on moves inside the same filesystem), but the fallback code does not.
 * If the flag #G_FILE_COPY_OVERWRITE is specified an already
 * existing @destination file is overwritten.
 * If the flag #G_FILE_COPY_NOFOLLOW_SYMLINKS is specified then symlinks
 * will be copied as symlinks, otherwise the target of the
 * If @cancellable is not %NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * If @progress_callback is not %NULL, then the operation can be monitored by
 * setting this to a #GFileProgressCallback function. @progress_callback_data
 * will be passed to this function. It is guaranteed that this callback will
 * be called after all data has been transferred with the total number of bytes
 * copied during the operation.
 * If the @source file does not exist then the G_IO_ERROR_NOT_FOUND
 * error is returned, independent on the status of the @destination.
 * If #G_FILE_COPY_OVERWRITE is not specified and the target exists, then the
 * error G_IO_ERROR_EXISTS is returned.
 * If trying to overwrite a file over a directory the G_IO_ERROR_IS_DIRECTORY
 * error is returned. If trying to overwrite a directory with a directory the
 * G_IO_ERROR_WOULD_MERGE error is returned.
 * If the source is a directory and the target does not exist, or #G_FILE_COPY_OVERWRITE is
 * specified and the target is a file, then the G_IO_ERROR_WOULD_RECURSE error
 * may be returned (if the native move operation isn't available).
 *
 * Returns: %TRUE on successful move, %FALSE otherwise.
 */


/**
 * g_socket_connection_get_local_address:
 * @connection: a #GSocketConnection
 * @error: #GError for error reporting, or %NULL to ignore.
 *
 * Try to get the local address of a socket connection.
 * Free the returned object with g_object_unref().
 *
 * Returns: (transfer full): a #GSocketAddress or %NULL on error.
 * Since: 2.22
 */


/**
 * g_buffered_output_stream_new:
 * @base_stream: a #GOutputStream.
 *
 * Creates a new buffered output stream for a base stream.
 *
 * Returns: a #GOutputStream for the given @base_stream.
 */


/**
 * g_dbus_proxy_get_object_path:
 * @proxy: A #GDBusProxy.
 *
 * Gets the object path @proxy is for.
 *
 * Returns: A string owned by @proxy. Do not free.
 * Since: 2.26
 */


/**
 * g_unix_mount_point_is_readonly:
 * @mount_point: a #GUnixMountPoint.
 *
 * Checks if a unix mount point is read only.
 *
 * Returns: %TRUE if a mount point is read only.
 */


/**
 * GSocket:timeout:
 *
 * The timeout in seconds on socket I/O
 *
 * Since: 2.26
 */


/**
 * g_dbus_message_get_header:
 * @message: A #GDBusMessage.
 * @header_field: A 8-bit unsigned integer (typically a value from the #GDBusMessageHeaderField enumeration)
 *
 * Gets a header field on @message.
 * otherwise. Do not free, it is owned by @message.
 *
 * Returns: A #GVariant with the value if the header was found, %NULL
 * Since: 2.26
 */


/**
 * g_socket_receive_message:
 * @socket: a #GSocket
 * @address: a pointer to a #GSocketAddress pointer, or %NULL
 * @vectors: an array of #GInputVector structs
 * @num_vectors: the number of elements in @vectors, or -1
 * @messages: a pointer which may be filled with an array of #GSocketControlMessages, or %NULL
 * @num_messages: a pointer which will be filled with the number of elements in @messages, or %NULL
 * @flags: a pointer to an int containing #GSocketMsgFlags flags
 * @cancellable: a %GCancellable or %NULL
 * @error: a #GError pointer, or %NULL
 *
 * Receive data from a socket.  This is the most complicated and
 * fully-featured version of this call. For easier use, see
 * g_socket_receive() and g_socket_receive_from().
 * If @address is non-%NULL then @address will be set equal to the
 * source address of the received packet.
 * describe the buffers that received data will be scattered into.
 * If @num_vectors is -1, then @vectors is assumed to be terminated
 * by a #GInputVector with a %NULL buffer pointer.
 * As a special case, if @num_vectors is 0 (in which case, @vectors
 * may of course be %NULL), then a single byte is received and
 * discarded. This is to facilitate the common practice of sending a
 * single '\0' byte for the purposes of transferring ancillary data.
 * array of #GSocketControlMessage instances or %NULL if no such
 * messages was received. These correspond to the control messages
 * received from the kernel, one #GSocketControlMessage per message
 * from the kernel. This array is %NULL-terminated and must be freed
 * by the caller using g_free() after calling g_object_unref() on each
 * element. If @messages is %NULL, any control messages received will
 * be discarded.
 * messages received.
 * If both @messages and @num_messages are non-%NULL, then
 * for this are available in the #GSocketMsgFlags enum, but the
 * values there are the same as the system values, and the flags
 * are passed in as-is, so you can pass in system-specific flags too
 * (and g_socket_receive_message() may pass system-specific flags out).
 * As with g_socket_receive(), data may be discarded if @socket is
 * %G_SOCKET_TYPE_DATAGRAM or %G_SOCKET_TYPE_SEQPACKET and you do not
 * provide enough buffer space to read a complete message. You can pass
 * %G_SOCKET_MSG_PEEK in @flags to peek at the current message without
 * removing it from the receive queue, but there is no portable way to find
 * out the length of the message other than by reading it into a
 * sufficiently-large buffer.
 * If the socket is in blocking mode the call will block until there
 * is some data to receive or there is an error. If there is no data
 * available and the socket is in non-blocking mode, a
 * %G_IO_ERROR_WOULD_BLOCK error will be returned. To be notified when
 * data is available, wait for the %G_IO_IN condition.
 * On error -1 is returned and @error is set accordingly.
 *
 * In @messages (ie: not including the %NULL terminator).
 * Returns: Number of bytes read, or -1 on error
 * Since: 2.22
 */


/**
 * g_inet_address_get_is_mc_site_local:
 * @address: a #GInetAddress
 *
 * Tests whether @address is a site-local multicast address.
 *
 * Returns: %TRUE if @address is a site-local multicast address.
 * Since: 2.22
 */


/**
 * g_io_modules_scan_all_in_directory:
 * @dirname: pathname for a directory containing modules to scan.
 *
 * Scans all the modules in the specified directory, ensuring that
 * any extension point implemented by a module is registered.
 * This may not actually load and initialize all the types in each
 * module, some modules may be lazily loaded and initialized when
 * an extension point it implementes is used with e.g.
 * g_io_extension_point_get_extensions() or
 * g_io_extension_point_get_extension_by_name().
 * If you need to guarantee that all types are loaded in all the modules,
 * use g_io_modules_scan_all_in_directory().
 *
 * Since: 2.24
 */


/**
 * g_socket_service_stop:
 * @service: a #GSocketService
 *
 * Stops the service, i.e. stops accepting connections
 * from the added sockets when the mainloop runs.
 * This call is threadsafe, so it may be called from a thread
 * handling an incomming client request.
 *
 * Since: 2.22
 */


/**
 * g_settings_new_with_backend_and_path:
 * @schema: the name of the schema
 * @backend: the #GSettingsBackend to use
 * @path: the path to use
 * @returns: a new #GSettings object
 *
 * Creates a new #GSettings object with a given schema, backend and
 * path.
 * This is a mix of g_settings_new_with_backend() and
 * g_settings_new_with_path().
 *
 * Since: 2.26
 */


/**
 * g_bus_own_name_with_closures:
 * @bus_type: The type of bus to own a name on.
 * @name: The well-known name to own.
 * @flags: A set of flags from the #GBusNameOwnerFlags enumeration.
 * @bus_acquired_closure: (allow-none): #GClosure to invoke when connected to the bus of type @bus_type or %NULL.
 * @name_acquired_closure: (allow-none): #GClosure to invoke when @name is acquired or %NULL.
 * @name_lost_closure: (allow-none): #GClosure to invoke when @name is lost or %NULL.
 *
 * Version of g_bus_own_name() using closures instead of callbacks for
 * easier binding in other languages.
 * g_bus_unown_name() to stop owning the name.
 *
 * Returns: An identifier (never 0) that an be used with
 * Rename to: g_bus_own_name
 * Since: 2.26
 */


/**
 * g_vfs_is_active:
 * @vfs: a #GVfs.
 *
 * Checks if the VFS is active.
 *
 * Returns: %TRUE if construction of the @vfs was successful and it is now active.
 */


/**
 * g_settings_set_int:
 * @settings: a #GSettings object
 * @key: the name of the key to set
 * @value: the value to set it to
 * @returns: %TRUE if setting the key succeeded, %FALSE if the key was not writable
 *
 * Sets @key in @settings to @value.
 * A convenience variant of g_settings_set() for 32-bit integers.
 * It is a programmer error to give a @key that isn't specified as
 * having a int32 type in the schema for @settings.
 *
 * Since: 2.26
 */


/**
 * g_file_replace_contents_finish:
 * @file: input #GFile.
 * @res: a #GAsyncResult.
 * @new_etag: (out) (allow-none): a location of a new <link linkend="gfile-etag">entity tag</link> for the document. This should be freed with g_free() when it is no longer needed, or %NULL
 * @error: a #GError, or %NULL
 *
 * Finishes an asynchronous replace of the given @file. See
 * g_file_replace_contents_async(). Sets @new_etag to the new entity
 * tag for the document, if present.
 *
 * Returns: %TRUE on success, %FALSE on failure.
 */


/**
 * GDBusConnectionClass:
 * @closed: Signal class handler for the #GDBusConnection::closed signal.
 *
 * Class structure for #GDBusConnection.
 *
 * Since: 2.26
 */


/**
 * g_network_address_parse_uri:
 * @uri: the hostname and optionally a port
 * @default_port: The default port if none is found in the URI
 * @error: a pointer to a #GError, or %NULL
 *
 * Creates a new #GSocketConnectable for connecting to the given
 * Using this rather than g_network_address_new() or
 * g_network_address_parse_host() allows #GSocketClient to determine
 * when to use application-specific proxy protocols.
 *
 * Returns: (transfer full): the new #GNetworkAddress, or %NULL on error
 * Since: 2.26
 */


/**
 * g_inet_address_get_is_mc_org_local:
 * @address: a #GInetAddress
 *
 * Tests whether @address is an organization-local multicast address.
 *
 * Returns: %TRUE if @address is an organization-local multicast address.
 * Since: 2.22
 */


/**
 * g_keyfile_settings_backend_new:
 * @filename: the filename of the keyfile
 * @root_path: the path under which all settings keys appear
 * @root_group: (allow-none): the group name corresponding to
 * @returns: (transfer full): a keyfile-backed #GSettingsBackend
 *
 * Creates a keyfile-backed #GSettingsBackend.
 * The filename of the keyfile to use is given by @filename.
 * All settings read to or written from the backend must fall under the
 * path given in @root_path (which must start and end with a slash and
 * not contain two consecutive slashes).  @root_path may be "/".
 * If @root_group is non-%NULL then it specifies the name of the keyfile
 * group used for keys that are written directly below @root_path.  For
 * example, if @root_path is "/apps/example/" and @root_group is
 * "toplevel", then settings the key "/apps/example/enabled" to a value
 * of %TRUE will cause the following to appear in the keyfile:
 * |[
 * [toplevel]
 * enabled=true
 * ]|
 * If @root_group is %NULL then it is not permitted to store keys
 * directly below the @root_path.
 * the name of the subpath (with the final slash stripped) is used as
 * the name of the keyfile group.  To continue the example, if
 * "/apps/example/profiles/default/font-size" were set to
 * 12 then the following would appear in the keyfile:
 * |[
 * [profiles/default]
 * font-size=12
 * ]|
 * The backend will refuse writes (and return writability as being
 * %FALSE) for keys outside of @root_path and, in the event that
 * Writes will also be refused if the backend detects that it has the
 * writable).
 * There is no checking done for your key namespace clashing with the
 * syntax of the key file format.  For example, if you have '[' or ']'
 * characters in your path names or '=' in your key names you may be in
 * trouble.
 *
 * For keys not stored directly below @root_path (ie: in a sub-path),
 * Inability to rewrite the keyfile (ie: the containing directory is not
 */


/**
 * g_socket_client_add_application_proxy:
 * @client: a #GSocketClient
 * @protocol: The proxy protocol
 *
 * Enable proxy protocols to be handled by the application. When the
 * indicated proxy protocol is returned by the #GProxyResolver,
 * #GSocketClient will consider this protocol as supported but will
 * not try find a #GProxy instance to handle handshaking. The
 * application must check for this case by calling
 * g_socket_connection_get_remote_address() on the returned
 * #GSocketConnection, and seeing if it's a #GProxyAddress of the
 * appropriate type, to determine whether or not it needs to handle
 * the proxy handshaking itself.
 * This should be used for proxy protocols that are dialects of
 * another protocol such as HTTP proxy. It also allows cohabitation of
 * proxy protocols that are reused between protocols. A good example
 * is HTTP. It can be used to proxy HTTP, FTP and Gopher and can also
 * be use as generic socket proxy through the HTTP CONNECT method.
 */


/**
 * g_drive_stop:
 * @drive: a #GDrive.
 * @flags: flags affecting the unmount if required for stopping.
 * @mount_operation: a #GMountOperation or %NULL to avoid user interaction.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @callback: a #GAsyncReadyCallback, or %NULL.
 * @user_data: user data to pass to @callback
 *
 * Asynchronously stops a drive.
 * When the operation is finished, @callback will be called.
 * You can then call g_drive_stop_finish() to obtain the
 * result of the operation.
 *
 * Since: 2.22
 */


/**
 * g_memory_output_stream_get_data_size:
 * @ostream: a #GMemoryOutputStream
 *
 * Returns the number of bytes from the start up
 * to including the last byte written in the stream
 * that has not been truncated away.
 *
 * Returns: the number of bytes written to the stream
 * Since: 2.18
 */


/**
 * g_file_info_get_is_symlink:
 * @info: a #GFileInfo.
 *
 * Checks if a file is a symlink.
 *
 * Returns: %TRUE if the given @info is a symlink.
 */


/**
 * g_dbus_message_set_path:
 * @message: A #GDBusMessage.
 * @value: The value to set.
 *
 * Convenience setter for the %G_DBUS_MESSAGE_HEADER_FIELD_PATH header field.
 *
 * Since: 2.26
 */


/**
 * g_io_stream_set_pending:
 * @stream: a #GIOStream
 * @error: a #GError location to store the error occuring, or %NULL to ignore
 *
 * Sets @stream to have actions pending. If the pending flag is
 * already set or @stream is closed, it will return %FALSE and set
 *
 * Returns: %TRUE if pending was previously unset and is now set.
 * Since: 2.22
 */


/**
 * g_socket_service_start:
 * @service: a #GSocketService
 *
 * Starts the service, i.e. start accepting connections
 * from the added sockets when the mainloop runs.
 * This call is threadsafe, so it may be called from a thread
 * handling an incomming client request.
 *
 * Since: 2.22
 */


/**
 * g_socket_client_get_enable_proxy:
 * @client: a #GSocketClient.
 *
 * Gets the proxy enable state; see g_socket_client_set_enable_proxy()
 *
 * Returns: whether proxying is enabled
 * Since: 2.26
 */


/**
 * g_io_stream_close:
 * @stream: a #GIOStream
 * @cancellable: optional #GCancellable object, %NULL to ignore
 * @error: location to store the error occuring, or %NULL to ignore
 *
 * Closes the stream, releasing resources related to it. This will also
 * closes the individual input and output streams, if they are not already
 * closed.
 * Once the stream is closed, all other operations will return
 * %G_IO_ERROR_CLOSED. Closing a stream multiple times will not
 * return an error.
 * Closing a stream will automatically flush any outstanding buffers
 * in the stream.
 * Streams will be automatically closed when the last reference
 * is dropped, but you might want to call this function to make sure
 * resources are released as early as possible.
 * Some streams might keep the backing store of the stream (e.g. a file
 * descriptor) open after the stream is closed. See the documentation for
 * the individual stream for details.
 * On failure the first error that happened will be reported, but the
 * close operation will finish as much as possible. A stream that failed
 * to close will still return %G_IO_ERROR_CLOSED for all operations.
 * Still, it is important to check and report the error to the user,
 * otherwise there might be a loss of data as all data might not be written.
 * If @cancellable is not NULL, then the operation can be cancelled by
 * triggering the cancellable object from another thread. If the operation
 * was cancelled, the error %G_IO_ERROR_CANCELLED will be returned.
 * Cancelling a close will still leave the stream closed, but some streams
 * can use a faster close that doesn't block to e.g. check errors.
 * The default implementation of this method just calls close on the
 * individual input/output streams.
 *
 * Returns: %TRUE on success, %FALSE on failure
 * Since: 2.22
 */


/**
 * g_tcp_connection_set_graceful_disconnect:
 * @connection: a #GTcpConnection
 * @graceful_disconnect: Whether to do graceful disconnects or not
 *
 * This enabled graceful disconnects on close. A graceful disconnect
 * means that we signal the recieving end that the connection is terminated
 * and wait for it to close the connection before closing the connection.
 * A graceful disconnect means that we can be sure that we successfully sent
 * all the outstanding data to the other end, or get an error reported.
 * However, it also means we have to wait for all the data to reach the
 * other side and for it to acknowledge this by closing the socket, which may
 * take a while. For this reason it is disabled by default.
 *
 * Since: 2.22
 */


/**
 * g_data_output_stream_put_string:
 * @stream: a #GDataOutputStream.
 * @str: a string.
 * @cancellable: optional #GCancellable object, %NULL to ignore.
 * @error: a #GError, %NULL to ignore.
 *
 * Puts a string into the output stream.
 *
 * Returns: %TRUE if @string was successfully added to the @stream.
 */


/**
 * SECTION:gioerro:
 * @short_description: Error helper functions
 * @include: gio/gio.h
 *
 * Contains helper functions for reporting errors to the user.
 */


/**
 * g_unix_credentials_message_is_supported:
 *
 * Checks if passing a #GCredential on a #GSocket is supported on this platform.
 *
 * Returns: %TRUE if supported, %FALSE otherwise
 * Since: 2.26
 */


/**
 * g_content_type_is_a:
 * @type: a content type string
 * @supertype: a content type string
 *
 * Determines if @type is a subset of @supertype.
 * %FALSE otherwise.
 *
 * Returns: %TRUE if @type is a kind of @supertype,
 */



/************************************************************/
/* THIS FILE IS GENERATED DO NOT EDIT */
/************************************************************/
