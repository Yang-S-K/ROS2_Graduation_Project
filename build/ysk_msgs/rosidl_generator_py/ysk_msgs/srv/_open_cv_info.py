# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ysk_msgs:srv/OpenCvInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OpenCvInfo_Request(type):
    """Metaclass of message 'OpenCvInfo_Request'."""

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
                'ysk_msgs.srv.OpenCvInfo_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__open_cv_info__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__open_cv_info__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__open_cv_info__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__open_cv_info__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__open_cv_info__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OpenCvInfo_Request(metaclass=Metaclass_OpenCvInfo_Request):
    """Message class 'OpenCvInfo_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

import builtins  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_OpenCvInfo_Response(type):
    """Metaclass of message 'OpenCvInfo_Response'."""

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
                'ysk_msgs.srv.OpenCvInfo_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__open_cv_info__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__open_cv_info__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__open_cv_info__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__open_cv_info__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__open_cv_info__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OpenCvInfo_Response(metaclass=Metaclass_OpenCvInfo_Response):
    """Message class 'OpenCvInfo_Response'."""

    __slots__ = [
        '_order',
        '_already',
    ]

    _fields_and_field_types = {
        'order': 'sequence<string>',
        'already': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.order = kwargs.get('order', [])
        self.already = kwargs.get('already', bool())

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
        if self.order != other.order:
            return False
        if self.already != other.already:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def order(self):
        """Message field 'order'."""
        return self._order

    @order.setter
    def order(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'order' field must be a set or sequence and each value of type 'str'"
        self._order = value

    @builtins.property
    def already(self):
        """Message field 'already'."""
        return self._already

    @already.setter
    def already(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'already' field must be of type 'bool'"
        self._already = value


class Metaclass_OpenCvInfo(type):
    """Metaclass of service 'OpenCvInfo'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ysk_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ysk_msgs.srv.OpenCvInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__open_cv_info

            from ysk_msgs.srv import _open_cv_info
            if _open_cv_info.Metaclass_OpenCvInfo_Request._TYPE_SUPPORT is None:
                _open_cv_info.Metaclass_OpenCvInfo_Request.__import_type_support__()
            if _open_cv_info.Metaclass_OpenCvInfo_Response._TYPE_SUPPORT is None:
                _open_cv_info.Metaclass_OpenCvInfo_Response.__import_type_support__()


class OpenCvInfo(metaclass=Metaclass_OpenCvInfo):
    from ysk_msgs.srv._open_cv_info import OpenCvInfo_Request as Request
    from ysk_msgs.srv._open_cv_info import OpenCvInfo_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
