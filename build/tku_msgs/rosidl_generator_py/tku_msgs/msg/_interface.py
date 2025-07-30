# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tku_msgs:msg/Interface.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Interface(type):
    """Metaclass of message 'Interface'."""

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
            module = import_type_support('tku_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tku_msgs.msg.Interface')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__interface
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__interface
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__interface
            cls._TYPE_SUPPORT = module.type_support_msg__msg__interface
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__interface

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Interface(metaclass=Metaclass_Interface):
    """Message class 'Interface'."""

    __slots__ = [
        '_x',
        '_y',
        '_z',
        '_theta',
        '_walking_mode',
        '_walking_state',
        '_sensor_mode',
    ]

    _fields_and_field_types = {
        'x': 'int32',
        'y': 'int32',
        'z': 'int32',
        'theta': 'int32',
        'walking_mode': 'int32',
        'walking_state': 'int32',
        'sensor_mode': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x = kwargs.get('x', int())
        self.y = kwargs.get('y', int())
        self.z = kwargs.get('z', int())
        self.theta = kwargs.get('theta', int())
        self.walking_mode = kwargs.get('walking_mode', int())
        self.walking_state = kwargs.get('walking_state', int())
        self.sensor_mode = kwargs.get('sensor_mode', int())

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
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.z != other.z:
            return False
        if self.theta != other.theta:
            return False
        if self.walking_mode != other.walking_mode:
            return False
        if self.walking_state != other.walking_state:
            return False
        if self.sensor_mode != other.sensor_mode:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'x' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'x' field must be an integer in [-2147483648, 2147483647]"
        self._x = value

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'y' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'y' field must be an integer in [-2147483648, 2147483647]"
        self._y = value

    @builtins.property
    def z(self):
        """Message field 'z'."""
        return self._z

    @z.setter
    def z(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'z' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'z' field must be an integer in [-2147483648, 2147483647]"
        self._z = value

    @builtins.property
    def theta(self):
        """Message field 'theta'."""
        return self._theta

    @theta.setter
    def theta(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'theta' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'theta' field must be an integer in [-2147483648, 2147483647]"
        self._theta = value

    @builtins.property
    def walking_mode(self):
        """Message field 'walking_mode'."""
        return self._walking_mode

    @walking_mode.setter
    def walking_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'walking_mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'walking_mode' field must be an integer in [-2147483648, 2147483647]"
        self._walking_mode = value

    @builtins.property
    def walking_state(self):
        """Message field 'walking_state'."""
        return self._walking_state

    @walking_state.setter
    def walking_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'walking_state' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'walking_state' field must be an integer in [-2147483648, 2147483647]"
        self._walking_state = value

    @builtins.property
    def sensor_mode(self):
        """Message field 'sensor_mode'."""
        return self._sensor_mode

    @sensor_mode.setter
    def sensor_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sensor_mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sensor_mode' field must be an integer in [-2147483648, 2147483647]"
        self._sensor_mode = value
