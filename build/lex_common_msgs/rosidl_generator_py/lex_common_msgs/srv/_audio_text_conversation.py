# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lex_common_msgs:srv/AudioTextConversation.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'audio_request'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AudioTextConversation_Request(type):
    """Metaclass of message 'AudioTextConversation_Request'."""

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
            module = import_type_support('lex_common_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'lex_common_msgs.srv.AudioTextConversation_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__audio_text_conversation__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__audio_text_conversation__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__audio_text_conversation__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__audio_text_conversation__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__audio_text_conversation__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AudioTextConversation_Request(metaclass=Metaclass_AudioTextConversation_Request):
    """Message class 'AudioTextConversation_Request'."""

    __slots__ = [
        '_content_type',
        '_accept_type',
        '_text_request',
        '_audio_request',
    ]

    _fields_and_field_types = {
        'content_type': 'string',
        'accept_type': 'string',
        'text_request': 'string',
        'audio_request': 'sequence<uint8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.content_type = kwargs.get('content_type', str())
        self.accept_type = kwargs.get('accept_type', str())
        self.text_request = kwargs.get('text_request', str())
        self.audio_request = array.array('B', kwargs.get('audio_request', []))

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
        if self.content_type != other.content_type:
            return False
        if self.accept_type != other.accept_type:
            return False
        if self.text_request != other.text_request:
            return False
        if self.audio_request != other.audio_request:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def content_type(self):
        """Message field 'content_type'."""
        return self._content_type

    @content_type.setter
    def content_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'content_type' field must be of type 'str'"
        self._content_type = value

    @builtins.property
    def accept_type(self):
        """Message field 'accept_type'."""
        return self._accept_type

    @accept_type.setter
    def accept_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'accept_type' field must be of type 'str'"
        self._accept_type = value

    @builtins.property
    def text_request(self):
        """Message field 'text_request'."""
        return self._text_request

    @text_request.setter
    def text_request(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'text_request' field must be of type 'str'"
        self._text_request = value

    @builtins.property
    def audio_request(self):
        """Message field 'audio_request'."""
        return self._audio_request

    @audio_request.setter
    def audio_request(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'audio_request' array.array() must have the type code of 'B'"
            self._audio_request = value
            return
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'audio_request' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._audio_request = array.array('B', value)


# Import statements for member types

# Member 'audio_response'
# already imported above
# import array

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_AudioTextConversation_Response(type):
    """Metaclass of message 'AudioTextConversation_Response'."""

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
            module = import_type_support('lex_common_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'lex_common_msgs.srv.AudioTextConversation_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__audio_text_conversation__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__audio_text_conversation__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__audio_text_conversation__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__audio_text_conversation__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__audio_text_conversation__response

            from lex_common_msgs.msg import KeyValue
            if KeyValue.__class__._TYPE_SUPPORT is None:
                KeyValue.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AudioTextConversation_Response(metaclass=Metaclass_AudioTextConversation_Response):
    """Message class 'AudioTextConversation_Response'."""

    __slots__ = [
        '_text_response',
        '_audio_response',
        '_slots',
        '_intent_name',
        '_message_format_type',
        '_dialog_state',
        '_error_code',
        '_error_message',
    ]

    _fields_and_field_types = {
        'text_response': 'string',
        'audio_response': 'sequence<uint8>',
        'slots': 'sequence<lex_common_msgs/KeyValue>',
        'intent_name': 'string',
        'message_format_type': 'string',
        'dialog_state': 'string',
        'error_code': 'uint8',
        'error_message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['lex_common_msgs', 'msg'], 'KeyValue')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.text_response = kwargs.get('text_response', str())
        self.audio_response = array.array('B', kwargs.get('audio_response', []))
        self.slots = kwargs.get('slots', [])
        self.intent_name = kwargs.get('intent_name', str())
        self.message_format_type = kwargs.get('message_format_type', str())
        self.dialog_state = kwargs.get('dialog_state', str())
        self.error_code = kwargs.get('error_code', int())
        self.error_message = kwargs.get('error_message', str())

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
        if self.text_response != other.text_response:
            return False
        if self.audio_response != other.audio_response:
            return False
        if self.slots != other.slots:
            return False
        if self.intent_name != other.intent_name:
            return False
        if self.message_format_type != other.message_format_type:
            return False
        if self.dialog_state != other.dialog_state:
            return False
        if self.error_code != other.error_code:
            return False
        if self.error_message != other.error_message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def text_response(self):
        """Message field 'text_response'."""
        return self._text_response

    @text_response.setter
    def text_response(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'text_response' field must be of type 'str'"
        self._text_response = value

    @builtins.property
    def audio_response(self):
        """Message field 'audio_response'."""
        return self._audio_response

    @audio_response.setter
    def audio_response(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'audio_response' array.array() must have the type code of 'B'"
            self._audio_response = value
            return
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'audio_response' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._audio_response = array.array('B', value)

    @builtins.property
    def slots(self):
        """Message field 'slots'."""
        return self._slots

    @slots.setter
    def slots(self, value):
        if __debug__:
            from lex_common_msgs.msg import KeyValue
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
                 all(isinstance(v, KeyValue) for v in value) and
                 True), \
                "The 'slots' field must be a set or sequence and each value of type 'KeyValue'"
        self._slots = value

    @builtins.property
    def intent_name(self):
        """Message field 'intent_name'."""
        return self._intent_name

    @intent_name.setter
    def intent_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'intent_name' field must be of type 'str'"
        self._intent_name = value

    @builtins.property
    def message_format_type(self):
        """Message field 'message_format_type'."""
        return self._message_format_type

    @message_format_type.setter
    def message_format_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message_format_type' field must be of type 'str'"
        self._message_format_type = value

    @builtins.property
    def dialog_state(self):
        """Message field 'dialog_state'."""
        return self._dialog_state

    @dialog_state.setter
    def dialog_state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'dialog_state' field must be of type 'str'"
        self._dialog_state = value

    @builtins.property
    def error_code(self):
        """Message field 'error_code'."""
        return self._error_code

    @error_code.setter
    def error_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'error_code' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'error_code' field must be an unsigned integer in [0, 255]"
        self._error_code = value

    @builtins.property
    def error_message(self):
        """Message field 'error_message'."""
        return self._error_message

    @error_message.setter
    def error_message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error_message' field must be of type 'str'"
        self._error_message = value


class Metaclass_AudioTextConversation(type):
    """Metaclass of service 'AudioTextConversation'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('lex_common_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'lex_common_msgs.srv.AudioTextConversation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__audio_text_conversation

            from lex_common_msgs.srv import _audio_text_conversation
            if _audio_text_conversation.Metaclass_AudioTextConversation_Request._TYPE_SUPPORT is None:
                _audio_text_conversation.Metaclass_AudioTextConversation_Request.__import_type_support__()
            if _audio_text_conversation.Metaclass_AudioTextConversation_Response._TYPE_SUPPORT is None:
                _audio_text_conversation.Metaclass_AudioTextConversation_Response.__import_type_support__()


class AudioTextConversation(metaclass=Metaclass_AudioTextConversation):
    from lex_common_msgs.srv._audio_text_conversation import AudioTextConversation_Request as Request
    from lex_common_msgs.srv._audio_text_conversation import AudioTextConversation_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
