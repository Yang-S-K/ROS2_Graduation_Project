# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ysk_msgs:msg/YUVValue.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_YUVValue(type):
    """Metaclass of message 'YUVValue'."""

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
            module = import_type_support('ysk_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ysk_msgs.msg.YUVValue')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__yuv_value
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__yuv_value
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__yuv_value
            cls._TYPE_SUPPORT = module.type_support_msg__msg__yuv_value
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__yuv_value

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class YUVValue(metaclass=Metaclass_YUVValue):
    """Message class 'YUVValue'."""

    __slots__ = [
        '_ymin',
        '_ymax',
        '_crmin',
        '_crmax',
        '_cbmin',
        '_cbmax',
    ]

    _fields_and_field_types = {
        'ymin': 'int16',
        'ymax': 'int16',
        'crmin': 'int16',
        'crmax': 'int16',
        'cbmin': 'int16',
        'cbmax': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ymin = kwargs.get('ymin', int())
        self.ymax = kwargs.get('ymax', int())
        self.crmin = kwargs.get('crmin', int())
        self.crmax = kwargs.get('crmax', int())
        self.cbmin = kwargs.get('cbmin', int())
        self.cbmax = kwargs.get('cbmax', int())

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
        if self.ymin != other.ymin:
            return False
        if self.ymax != other.ymax:
            return False
        if self.crmin != other.crmin:
            return False
        if self.crmax != other.crmax:
            return False
        if self.cbmin != other.cbmin:
            return False
        if self.cbmax != other.cbmax:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def ymin(self):
        """Message field 'ymin'."""
        return self._ymin

    @ymin.setter
    def ymin(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ymin' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'ymin' field must be an integer in [-32768, 32767]"
        self._ymin = value

    @builtins.property
    def ymax(self):
        """Message field 'ymax'."""
        return self._ymax

    @ymax.setter
    def ymax(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ymax' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'ymax' field must be an integer in [-32768, 32767]"
        self._ymax = value

    @builtins.property
    def crmin(self):
        """Message field 'crmin'."""
        return self._crmin

    @crmin.setter
    def crmin(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'crmin' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'crmin' field must be an integer in [-32768, 32767]"
        self._crmin = value

    @builtins.property
    def crmax(self):
        """Message field 'crmax'."""
        return self._crmax

    @crmax.setter
    def crmax(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'crmax' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'crmax' field must be an integer in [-32768, 32767]"
        self._crmax = value

    @builtins.property
    def cbmin(self):
        """Message field 'cbmin'."""
        return self._cbmin

    @cbmin.setter
    def cbmin(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cbmin' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'cbmin' field must be an integer in [-32768, 32767]"
        self._cbmin = value

    @builtins.property
    def cbmax(self):
        """Message field 'cbmax'."""
        return self._cbmax

    @cbmax.setter
    def cbmax(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cbmax' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'cbmax' field must be an integer in [-32768, 32767]"
        self._cbmax = value
