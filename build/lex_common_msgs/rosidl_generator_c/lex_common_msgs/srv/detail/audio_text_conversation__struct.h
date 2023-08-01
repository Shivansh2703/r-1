// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lex_common_msgs:srv/AudioTextConversation.idl
// generated code does not contain a copyright notice

#ifndef LEX_COMMON_MSGS__SRV__DETAIL__AUDIO_TEXT_CONVERSATION__STRUCT_H_
#define LEX_COMMON_MSGS__SRV__DETAIL__AUDIO_TEXT_CONVERSATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'content_type'
// Member 'accept_type'
// Member 'text_request'
#include "rosidl_runtime_c/string.h"
// Member 'audio_request'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/AudioTextConversation in the package lex_common_msgs.
typedef struct lex_common_msgs__srv__AudioTextConversation_Request
{
  rosidl_runtime_c__String content_type;
  rosidl_runtime_c__String accept_type;
  rosidl_runtime_c__String text_request;
  /// used audio data for convenience to work with audio_common
  rosidl_runtime_c__uint8__Sequence audio_request;
} lex_common_msgs__srv__AudioTextConversation_Request;

// Struct for a sequence of lex_common_msgs__srv__AudioTextConversation_Request.
typedef struct lex_common_msgs__srv__AudioTextConversation_Request__Sequence
{
  lex_common_msgs__srv__AudioTextConversation_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lex_common_msgs__srv__AudioTextConversation_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'text_response'
// Member 'intent_name'
// Member 'message_format_type'
// Member 'dialog_state'
// Member 'error_message'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'audio_response'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"
// Member 'slots'
#include "lex_common_msgs/msg/detail/key_value__struct.h"

/// Struct defined in srv/AudioTextConversation in the package lex_common_msgs.
typedef struct lex_common_msgs__srv__AudioTextConversation_Response
{
  rosidl_runtime_c__String text_response;
  rosidl_runtime_c__uint8__Sequence audio_response;
  lex_common_msgs__msg__KeyValue__Sequence slots;
  rosidl_runtime_c__String intent_name;
  rosidl_runtime_c__String message_format_type;
  rosidl_runtime_c__String dialog_state;
  uint8_t error_code;
  rosidl_runtime_c__String error_message;
} lex_common_msgs__srv__AudioTextConversation_Response;

// Struct for a sequence of lex_common_msgs__srv__AudioTextConversation_Response.
typedef struct lex_common_msgs__srv__AudioTextConversation_Response__Sequence
{
  lex_common_msgs__srv__AudioTextConversation_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lex_common_msgs__srv__AudioTextConversation_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEX_COMMON_MSGS__SRV__DETAIL__AUDIO_TEXT_CONVERSATION__STRUCT_H_
