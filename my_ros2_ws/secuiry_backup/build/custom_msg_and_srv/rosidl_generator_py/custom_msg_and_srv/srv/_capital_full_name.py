# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msg_and_srv:srv/CapitalFullName.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CapitalFullName_Request(type):
    """Metaclass of message 'CapitalFullName_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('custom_msg_and_srv')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_msg_and_srv.srv.CapitalFullName_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__capital_full_name__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__capital_full_name__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__capital_full_name__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__capital_full_name__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__capital_full_name__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CapitalFullName_Request(metaclass=Metaclass_CapitalFullName_Request):
    """Message class 'CapitalFullName_Request'."""

    __slots__ = [
        '_name',
        '_surname',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'surname': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.surname = kwargs.get('surname', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.name != other.name:
            return False
        if self.surname != other.surname:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def surname(self):
        """Message field 'surname'."""
        return self._surname

    @surname.setter
    def surname(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'surname' field must be of type 'str'"
        self._surname = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_CapitalFullName_Response(type):
    """Metaclass of message 'CapitalFullName_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('custom_msg_and_srv')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_msg_and_srv.srv.CapitalFullName_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__capital_full_name__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__capital_full_name__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__capital_full_name__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__capital_full_name__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__capital_full_name__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CapitalFullName_Response(metaclass=Metaclass_CapitalFullName_Response):
    """Message class 'CapitalFullName_Response'."""

    __slots__ = [
        '_capitalfullname',
    ]

    _fields_and_field_types = {
        'capitalfullname': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.capitalfullname = kwargs.get('capitalfullname', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.capitalfullname != other.capitalfullname:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def capitalfullname(self):
        """Message field 'capitalfullname'."""
        return self._capitalfullname

    @capitalfullname.setter
    def capitalfullname(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'capitalfullname' field must be of type 'str'"
        self._capitalfullname = value


class Metaclass_CapitalFullName(type):
    """Metaclass of service 'CapitalFullName'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('custom_msg_and_srv')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_msg_and_srv.srv.CapitalFullName')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__capital_full_name

            from custom_msg_and_srv.srv import _capital_full_name
            if _capital_full_name.Metaclass_CapitalFullName_Request._TYPE_SUPPORT is None:
                _capital_full_name.Metaclass_CapitalFullName_Request.__import_type_support__()
            if _capital_full_name.Metaclass_CapitalFullName_Response._TYPE_SUPPORT is None:
                _capital_full_name.Metaclass_CapitalFullName_Response.__import_type_support__()


class CapitalFullName(metaclass=Metaclass_CapitalFullName):
    from custom_msg_and_srv.srv._capital_full_name import CapitalFullName_Request as Request
    from custom_msg_and_srv.srv._capital_full_name import CapitalFullName_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
