# generated from rosidl_generator_py/resource/_idl.py.em
# with input from publisher_and_subscriber:msg/EmployeeSalary.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EmployeeSalary(type):
    """Metaclass of message 'EmployeeSalary'."""

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
            module = import_type_support('publisher_and_subscriber')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'publisher_and_subscriber.msg.EmployeeSalary')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__employee_salary
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__employee_salary
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__employee_salary
            cls._TYPE_SUPPORT = module.type_support_msg__msg__employee_salary
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__employee_salary

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EmployeeSalary(metaclass=Metaclass_EmployeeSalary):
    """Message class 'EmployeeSalary'."""

    __slots__ = [
        '_name',
        '_surname',
        '_tasks',
        '_salary',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'surname': 'string',
        'tasks': 'string[3]',
        'salary': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.UnboundedString(), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.surname = kwargs.get('surname', str())
        self.tasks = kwargs.get(
            'tasks',
            [str() for x in range(3)]
        )
        self.salary = kwargs.get('salary', int())

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
        if self.tasks != other.tasks:
            return False
        if self.salary != other.salary:
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

    @builtins.property
    def tasks(self):
        """Message field 'tasks'."""
        return self._tasks

    @tasks.setter
    def tasks(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 3 and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'tasks' field must be a set or sequence with length 3 and each value of type 'str'"
        self._tasks = value

    @builtins.property
    def salary(self):
        """Message field 'salary'."""
        return self._salary

    @salary.setter
    def salary(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'salary' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'salary' field must be an integer in [-32768, 32767]"
        self._salary = value
