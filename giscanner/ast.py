# -*- Mode: Python -*-
# GObject-Introspection - a framework for introspecting GObject libraries
# Copyright (C) 2008  Johan Dahlin
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License
# as published by the Free Software Foundation; either version 2
# of the License, or (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
# 02110-1301, USA.
#

"""AST nodes
This file descbribes abstract data type nodes independent on the
implementation language.

These can later on be extended (eg subclassed) with additional information
which is language/library/domain specific.
"""

##
## Types
##

# Basic types
TYPE_INT8 = 'int8'
TYPE_UINT8 = 'uint8'
TYPE_INT16 = 'int16'
TYPE_UINT16 = 'uint16'
TYPE_INT = 'int'
TYPE_UINT = 'uint'
TYPE_INT32 = 'int32'
TYPE_UINT32 = 'uint32'
TYPE_LONG = 'long'
TYPE_ULONG = 'ulong'
TYPE_INT64 = 'int64'
TYPE_UINT64 = 'uint64'

# Floating-point
TYPE_FLOAT = 'float'
TYPE_DOUBLE = 'double'

# Higher-level data types
TYPE_NONE = 'none'
TYPE_ANY = 'any'           # CORBA Any/Variant/GValue, holds anything.
TYPE_BOOLEAN = 'boolean'   # True/False
TYPE_STRING = 'string'     # Sequence of characters
TYPE_SEQUENCE = 'sequence' # Sequence of something
TYPE_CHAR = 'char'         # Character
TYPE_UCHAR = 'uchar'       # Unsigned Character
TYPE_SIZE = 'size'         # Size type (memory, buffer etc)
TYPE_SSIZE = 'ssize'

# Wide/Unicode
TYPE_UCHAR = 'uchar'
TYPE_USTRING = 'ustring'

# Domain specific, but practically useful
TYPE_FILENAME = 'filename'

##
## Parameters
##

PARAM_DIRECTION_IN = 'in'
PARAM_DIRECTION_OUT = 'out'
PARAM_DIRECTION_INOUT = 'inout'

type_names = {}

# C
type_names['char'] = TYPE_CHAR
type_names['unsigned char'] = TYPE_UCHAR
type_names['short'] = TYPE_INT16
type_names['unsigned short'] = TYPE_UINT16
type_names['int'] = TYPE_INT32
type_names['unsigned int'] = TYPE_UINT32
type_names['long'] = TYPE_LONG
type_names['unsigned long'] = TYPE_ULONG
type_names['float'] = TYPE_FLOAT
type_names['double'] = TYPE_DOUBLE
type_names['char*'] = TYPE_STRING
type_names['void*'] = TYPE_ANY
type_names['void'] = TYPE_NONE
type_names['size_t'] = TYPE_SIZE
type_names['ssize_t'] = TYPE_SSIZE

# GIR names
type_names['none'] = TYPE_NONE
type_names['string'] = TYPE_STRING
type_names['int32'] = TYPE_INT32
type_names['uint32'] = TYPE_UINT32
type_names['any'] = TYPE_ANY


def type_name_from_ctype(ctype):
    return type_names.get(ctype, ctype)


class Node(object):

    def __init__(self, name=None):
        self.name = name

    def __repr__(self):
        return '%s(%r)' % (self.__class__.__name__, self.name)


class Namespace(Node):

    def __init__(self, name):
        Node.__init__(self, name)
        self.nodes = []

    def __repr__(self):
        return '%s(%r, %r)' % (self.__class__.__name__, self.name,
                               self.nodes)


class Function(Node):

    def __init__(self, name, retval, parameters, symbol):
        Node.__init__(self, name)
        self.retval = retval
        self.parameters = parameters
        self.symbol = symbol

    def __repr__(self):
        return '%s(%r, %r, %r)' % (self.__class__.__name__,
                                   self.name, self.retval,
                                   self.parameters)


class VFunction(Function):
    pass


class Type(Node):

    def __init__(self, name, ctype=None):
        Node.__init__(self, name)
        self.ctype = ctype


class Alias(Node):

    def __init__(self, name, target, ctype=None):
        Node.__init__(self, name)
        self.target = target
        self.ctype = ctype

    def __repr__(self):
        return 'Alias(%r, %r)' % (self.name, self.target)


class Parameter(Node):

    def __init__(self, name, typenode):
        Node.__init__(self, name)
        self.type = typenode
        self.direction = PARAM_DIRECTION_IN
        self.transfer = False
        self.allow_none = False

    def __repr__(self):
        return 'Parameter(%r, %r)' % (self.name, self.type)


class Enum(Node):

    def __init__(self, name, symbol, members):
        Node.__init__(self, name)
        self.symbol = symbol
        self.members = members

    def __repr__(self):
        return 'Enum(%r, %r)' % (self.name, self.members)


class Member(Node):

    def __init__(self, name, value, symbol):
        Node.__init__(self, name)
        self.value = value
        self.symbol = symbol

    def __repr__(self):
        return 'Member(%r, %r)' % (self.name, self.value)


class Struct(Node):

    def __init__(self, name, symbol):
        Node.__init__(self, name)
        self.fields = []
        self.symbol = symbol


class Field(Node):

    def __init__(self, name, typenode, symbol):
        Node.__init__(self, name)
        self.type = typenode
        self.symbol = symbol

    def __repr__(self):
        return 'Field(%r, %r)' % (self.name, self.type)


class Return(Node):

    def __init__(self, rtype):
        Node.__init__(self)
        self.type = rtype
        self.transfer = False

    def __repr__(self):
        return 'Return(%r)' % (self.type, )


class Class(Node):

    def __init__(self, name, parent):
        Node.__init__(self, name)
        self.ctype = name
        self.parent = parent
        self.methods = []
        self.constructors = []
        self.properties = []
        self.fields = []

    def __repr__(self):
        return '%s(%r, %r, %r)' % (
            self.__class__.__name__,
            self.name, self.parent, self.methods)


class Interface(Node):

    def __init__(self, name, parent):
        Node.__init__(self, name)
        self.parent = parent
        self.methods = []
        self.properties = []
        self.fields = []

    def __repr__(self):
        return '%s(%r, %r)' % (
            self.__class__.__name__,
            self.name, self.methods)


class Constant(Node):

    def __init__(self, name, type_name, value):
        Node.__init__(self, name)
        self.type = Type(type_name)
        self.value = value

    def __repr__(self):
        return 'Constant(%r, %r, %r)' % (
            self.name, self.type, self.value)


class Property(Node):

    def __init__(self, name, type_name, ctype=None):
        Node.__init__(self, name)
        self.type = Type(type_name, ctype)

    def __repr__(self):
        return '%s(%r, %r, %r)' % (
            self.__class__.__name__,
            self.name, self.type, self.value)


# FIXME: Inherit from Function


class Callback(Node):

    def __init__(self, name, retval, parameters, ctype=None):
        Node.__init__(self, name)
        self.retval = retval
        self.parameters = parameters
        self.ctype = ctype

    def __repr__(self):
        return 'Callback(%r, %r, %r)' % (
            self.name, self.retval, self.parameters)


class Sequence(Type):
    # Subclass, because a Sequence is a kind of Type

    def __init__(self, name, ctype, element_type):
        Type.__init__(self, name, ctype)
        self.element_type = element_type
        self.transfer = False
