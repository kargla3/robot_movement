# generated from rosidl_generator_py/resource/_idl.py.em
# with input from movement_info_msgs:msg/MovementInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MovementInfo(type):
    """Metaclass of message 'MovementInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'FORWARD': 'forward',
        'BACKWARD': 'backward',
        'STANDSTILL': 'standstill',
        'LEFT': 'left',
        'RIGHT': 'right',
        'STRAIGHT': 'straight',
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('movement_info_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'movement_info_msgs.msg.MovementInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__movement_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__movement_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__movement_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__movement_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__movement_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'FORWARD': cls.__constants['FORWARD'],
            'BACKWARD': cls.__constants['BACKWARD'],
            'STANDSTILL': cls.__constants['STANDSTILL'],
            'LEFT': cls.__constants['LEFT'],
            'RIGHT': cls.__constants['RIGHT'],
            'STRAIGHT': cls.__constants['STRAIGHT'],
        }

    @property
    def FORWARD(self):
        """Message constant 'FORWARD'."""
        return Metaclass_MovementInfo.__constants['FORWARD']

    @property
    def BACKWARD(self):
        """Message constant 'BACKWARD'."""
        return Metaclass_MovementInfo.__constants['BACKWARD']

    @property
    def STANDSTILL(self):
        """Message constant 'STANDSTILL'."""
        return Metaclass_MovementInfo.__constants['STANDSTILL']

    @property
    def LEFT(self):
        """Message constant 'LEFT'."""
        return Metaclass_MovementInfo.__constants['LEFT']

    @property
    def RIGHT(self):
        """Message constant 'RIGHT'."""
        return Metaclass_MovementInfo.__constants['RIGHT']

    @property
    def STRAIGHT(self):
        """Message constant 'STRAIGHT'."""
        return Metaclass_MovementInfo.__constants['STRAIGHT']


class MovementInfo(metaclass=Metaclass_MovementInfo):
    """
    Message class 'MovementInfo'.

    Constants:
      FORWARD
      BACKWARD
      STANDSTILL
      LEFT
      RIGHT
      STRAIGHT
    """

    __slots__ = [
        '_movement',
        '_heading',
    ]

    _fields_and_field_types = {
        'movement': 'string',
        'heading': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.movement = kwargs.get('movement', str())
        self.heading = kwargs.get('heading', str())

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
        if self.movement != other.movement:
            return False
        if self.heading != other.heading:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def movement(self):
        """Message field 'movement'."""
        return self._movement

    @movement.setter
    def movement(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'movement' field must be of type 'str'"
        self._movement = value

    @builtins.property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'heading' field must be of type 'str'"
        self._heading = value
