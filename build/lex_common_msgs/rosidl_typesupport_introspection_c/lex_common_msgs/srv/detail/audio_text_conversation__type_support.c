// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lex_common_msgs:srv/AudioTextConversation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lex_common_msgs/srv/detail/audio_text_conversation__rosidl_typesupport_introspection_c.h"
#include "lex_common_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lex_common_msgs/srv/detail/audio_text_conversation__functions.h"
#include "lex_common_msgs/srv/detail/audio_text_conversation__struct.h"


// Include directives for member types
// Member `content_type`
// Member `accept_type`
// Member `text_request`
#include "rosidl_runtime_c/string_functions.h"
// Member `audio_request`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void lex_common_msgs__srv__AudioTextConversation_Request__rosidl_typesupport_introspection_c__AudioTextConversation_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lex_common_msgs__srv__AudioTextConversation_Request__init(message_memory);
}

void lex_common_msgs__srv__AudioTextConversation_Request__rosidl_typesupport_introspection_c__AudioTextConversation_Request_fini_function(void * message_memory)
{
  lex_common_msgs__srv__AudioTextConversation_Request__fini(message_memory);
}

size_t lex_common_msgs__srv__AudioTextConversation_Request__rosidl_typesupport_introspection_c__size_function__AudioTextConversation_Request__audio_request(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * lex_common_msgs__srv__AudioTextConversation_Request__rosidl_typesupport_introspection_c__get_const_function__AudioTextConversation_Request__audio_request(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lex_common_msgs__srv__AudioTextConversation_Request__rosidl_typesupport_introspection_c__get_function__AudioTextConversation_Request__audio_request(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void lex_common_msgs__srv__AudioTextConversation_Request__rosidl_typesupport_introspection_c__fetch_function__AudioTextConversation_Request__audio_request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    lex_common_msgs__srv__AudioTextConversation_Request__rosidl_typesupport_introspection_c__get_const_function__AudioTextConversation_Request__audio_request(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void lex_common_msgs__srv__AudioTextConversation_Request__rosidl_typesupport_introspection_c__assign_function__AudioTextConversation_Request__audio_request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    lex_common_msgs__srv__AudioTextConversation_Request__rosidl_typesupport_introspection_c__get_function__AudioTextConversation_Request__audio_request(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool lex_common_msgs__srv__AudioTextConversation_Request__rosidl_typesupport_introspection_c__resize_function__AudioTextConversation_Request__audio_request(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember lex_common_msgs__srv__AudioTextConversation_Request__rosidl_typesupport_introspection_c__AudioTextConversation_Request_message_member_array[4] = {
  {
    "content_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lex_common_msgs__srv__AudioTextConversation_Request, content_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accept_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lex_common_msgs__srv__AudioTextConversation_Request, accept_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "text_request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lex_common_msgs__srv__AudioTextConversation_Request, text_request),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "audio_request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lex_common_msgs__srv__AudioTextConversation_Request, audio_request),  // bytes offset in struct
    NULL,  // default value
    lex_common_msgs__srv__AudioTextConversation_Request__rosidl_typesupport_introspection_c__size_function__AudioTextConversation_Request__audio_request,  // size() function pointer
    lex_common_msgs__srv__AudioTextConversation_Request__rosidl_typesupport_introspection_c__get_const_function__AudioTextConversation_Request__audio_request,  // get_const(index) function pointer
    lex_common_msgs__srv__AudioTextConversation_Request__rosidl_typesupport_introspection_c__get_function__AudioTextConversation_Request__audio_request,  // get(index) function pointer
    lex_common_msgs__srv__AudioTextConversation_Request__rosidl_typesupport_introspection_c__fetch_function__AudioTextConversation_Request__audio_request,  // fetch(index, &value) function pointer
    lex_common_msgs__srv__AudioTextConversation_Request__rosidl_typesupport_introspection_c__assign_function__AudioTextConversation_Request__audio_request,  // assign(index, value) function pointer
    lex_common_msgs__srv__AudioTextConversation_Request__rosidl_typesupport_introspection_c__resize_function__AudioTextConversation_Request__audio_request  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lex_common_msgs__srv__AudioTextConversation_Request__rosidl_typesupport_introspection_c__AudioTextConversation_Request_message_members = {
  "lex_common_msgs__srv",  // message namespace
  "AudioTextConversation_Request",  // message name
  4,  // number of fields
  sizeof(lex_common_msgs__srv__AudioTextConversation_Request),
  lex_common_msgs__srv__AudioTextConversation_Request__rosidl_typesupport_introspection_c__AudioTextConversation_Request_message_member_array,  // message members
  lex_common_msgs__srv__AudioTextConversation_Request__rosidl_typesupport_introspection_c__AudioTextConversation_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  lex_common_msgs__srv__AudioTextConversation_Request__rosidl_typesupport_introspection_c__AudioTextConversation_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lex_common_msgs__srv__AudioTextConversation_Request__rosidl_typesupport_introspection_c__AudioTextConversation_Request_message_type_support_handle = {
  0,
  &lex_common_msgs__srv__AudioTextConversation_Request__rosidl_typesupport_introspection_c__AudioTextConversation_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lex_common_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lex_common_msgs, srv, AudioTextConversation_Request)() {
  if (!lex_common_msgs__srv__AudioTextConversation_Request__rosidl_typesupport_introspection_c__AudioTextConversation_Request_message_type_support_handle.typesupport_identifier) {
    lex_common_msgs__srv__AudioTextConversation_Request__rosidl_typesupport_introspection_c__AudioTextConversation_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lex_common_msgs__srv__AudioTextConversation_Request__rosidl_typesupport_introspection_c__AudioTextConversation_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "lex_common_msgs/srv/detail/audio_text_conversation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "lex_common_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "lex_common_msgs/srv/detail/audio_text_conversation__functions.h"
// already included above
// #include "lex_common_msgs/srv/detail/audio_text_conversation__struct.h"


// Include directives for member types
// Member `text_response`
// Member `intent_name`
// Member `message_format_type`
// Member `dialog_state`
// Member `error_message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `audio_response`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `slots`
#include "lex_common_msgs/msg/key_value.h"
// Member `slots`
#include "lex_common_msgs/msg/detail/key_value__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__AudioTextConversation_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lex_common_msgs__srv__AudioTextConversation_Response__init(message_memory);
}

void lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__AudioTextConversation_Response_fini_function(void * message_memory)
{
  lex_common_msgs__srv__AudioTextConversation_Response__fini(message_memory);
}

size_t lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__size_function__AudioTextConversation_Response__audio_response(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__get_const_function__AudioTextConversation_Response__audio_response(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__get_function__AudioTextConversation_Response__audio_response(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__fetch_function__AudioTextConversation_Response__audio_response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__get_const_function__AudioTextConversation_Response__audio_response(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__assign_function__AudioTextConversation_Response__audio_response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__get_function__AudioTextConversation_Response__audio_response(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__resize_function__AudioTextConversation_Response__audio_response(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__size_function__AudioTextConversation_Response__slots(
  const void * untyped_member)
{
  const lex_common_msgs__msg__KeyValue__Sequence * member =
    (const lex_common_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return member->size;
}

const void * lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__get_const_function__AudioTextConversation_Response__slots(
  const void * untyped_member, size_t index)
{
  const lex_common_msgs__msg__KeyValue__Sequence * member =
    (const lex_common_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__get_function__AudioTextConversation_Response__slots(
  void * untyped_member, size_t index)
{
  lex_common_msgs__msg__KeyValue__Sequence * member =
    (lex_common_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

void lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__fetch_function__AudioTextConversation_Response__slots(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const lex_common_msgs__msg__KeyValue * item =
    ((const lex_common_msgs__msg__KeyValue *)
    lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__get_const_function__AudioTextConversation_Response__slots(untyped_member, index));
  lex_common_msgs__msg__KeyValue * value =
    (lex_common_msgs__msg__KeyValue *)(untyped_value);
  *value = *item;
}

void lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__assign_function__AudioTextConversation_Response__slots(
  void * untyped_member, size_t index, const void * untyped_value)
{
  lex_common_msgs__msg__KeyValue * item =
    ((lex_common_msgs__msg__KeyValue *)
    lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__get_function__AudioTextConversation_Response__slots(untyped_member, index));
  const lex_common_msgs__msg__KeyValue * value =
    (const lex_common_msgs__msg__KeyValue *)(untyped_value);
  *item = *value;
}

bool lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__resize_function__AudioTextConversation_Response__slots(
  void * untyped_member, size_t size)
{
  lex_common_msgs__msg__KeyValue__Sequence * member =
    (lex_common_msgs__msg__KeyValue__Sequence *)(untyped_member);
  lex_common_msgs__msg__KeyValue__Sequence__fini(member);
  return lex_common_msgs__msg__KeyValue__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__AudioTextConversation_Response_message_member_array[8] = {
  {
    "text_response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lex_common_msgs__srv__AudioTextConversation_Response, text_response),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "audio_response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lex_common_msgs__srv__AudioTextConversation_Response, audio_response),  // bytes offset in struct
    NULL,  // default value
    lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__size_function__AudioTextConversation_Response__audio_response,  // size() function pointer
    lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__get_const_function__AudioTextConversation_Response__audio_response,  // get_const(index) function pointer
    lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__get_function__AudioTextConversation_Response__audio_response,  // get(index) function pointer
    lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__fetch_function__AudioTextConversation_Response__audio_response,  // fetch(index, &value) function pointer
    lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__assign_function__AudioTextConversation_Response__audio_response,  // assign(index, value) function pointer
    lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__resize_function__AudioTextConversation_Response__audio_response  // resize(index) function pointer
  },
  {
    "slots",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lex_common_msgs__srv__AudioTextConversation_Response, slots),  // bytes offset in struct
    NULL,  // default value
    lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__size_function__AudioTextConversation_Response__slots,  // size() function pointer
    lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__get_const_function__AudioTextConversation_Response__slots,  // get_const(index) function pointer
    lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__get_function__AudioTextConversation_Response__slots,  // get(index) function pointer
    lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__fetch_function__AudioTextConversation_Response__slots,  // fetch(index, &value) function pointer
    lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__assign_function__AudioTextConversation_Response__slots,  // assign(index, value) function pointer
    lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__resize_function__AudioTextConversation_Response__slots  // resize(index) function pointer
  },
  {
    "intent_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lex_common_msgs__srv__AudioTextConversation_Response, intent_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message_format_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lex_common_msgs__srv__AudioTextConversation_Response, message_format_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dialog_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lex_common_msgs__srv__AudioTextConversation_Response, dialog_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lex_common_msgs__srv__AudioTextConversation_Response, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lex_common_msgs__srv__AudioTextConversation_Response, error_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__AudioTextConversation_Response_message_members = {
  "lex_common_msgs__srv",  // message namespace
  "AudioTextConversation_Response",  // message name
  8,  // number of fields
  sizeof(lex_common_msgs__srv__AudioTextConversation_Response),
  lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__AudioTextConversation_Response_message_member_array,  // message members
  lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__AudioTextConversation_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__AudioTextConversation_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__AudioTextConversation_Response_message_type_support_handle = {
  0,
  &lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__AudioTextConversation_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lex_common_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lex_common_msgs, srv, AudioTextConversation_Response)() {
  lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__AudioTextConversation_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lex_common_msgs, msg, KeyValue)();
  if (!lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__AudioTextConversation_Response_message_type_support_handle.typesupport_identifier) {
    lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__AudioTextConversation_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lex_common_msgs__srv__AudioTextConversation_Response__rosidl_typesupport_introspection_c__AudioTextConversation_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "lex_common_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "lex_common_msgs/srv/detail/audio_text_conversation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers lex_common_msgs__srv__detail__audio_text_conversation__rosidl_typesupport_introspection_c__AudioTextConversation_service_members = {
  "lex_common_msgs__srv",  // service namespace
  "AudioTextConversation",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // lex_common_msgs__srv__detail__audio_text_conversation__rosidl_typesupport_introspection_c__AudioTextConversation_Request_message_type_support_handle,
  NULL  // response message
  // lex_common_msgs__srv__detail__audio_text_conversation__rosidl_typesupport_introspection_c__AudioTextConversation_Response_message_type_support_handle
};

static rosidl_service_type_support_t lex_common_msgs__srv__detail__audio_text_conversation__rosidl_typesupport_introspection_c__AudioTextConversation_service_type_support_handle = {
  0,
  &lex_common_msgs__srv__detail__audio_text_conversation__rosidl_typesupport_introspection_c__AudioTextConversation_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lex_common_msgs, srv, AudioTextConversation_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lex_common_msgs, srv, AudioTextConversation_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lex_common_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lex_common_msgs, srv, AudioTextConversation)() {
  if (!lex_common_msgs__srv__detail__audio_text_conversation__rosidl_typesupport_introspection_c__AudioTextConversation_service_type_support_handle.typesupport_identifier) {
    lex_common_msgs__srv__detail__audio_text_conversation__rosidl_typesupport_introspection_c__AudioTextConversation_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)lex_common_msgs__srv__detail__audio_text_conversation__rosidl_typesupport_introspection_c__AudioTextConversation_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lex_common_msgs, srv, AudioTextConversation_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lex_common_msgs, srv, AudioTextConversation_Response)()->data;
  }

  return &lex_common_msgs__srv__detail__audio_text_conversation__rosidl_typesupport_introspection_c__AudioTextConversation_service_type_support_handle;
}
