// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from lex_common_msgs:srv/AudioTextConversation.idl
// generated code does not contain a copyright notice
#include "lex_common_msgs/srv/detail/audio_text_conversation__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "lex_common_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "lex_common_msgs/srv/detail/audio_text_conversation__struct.h"
#include "lex_common_msgs/srv/detail/audio_text_conversation__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // audio_request
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // audio_request
#include "rosidl_runtime_c/string.h"  // accept_type, content_type, text_request
#include "rosidl_runtime_c/string_functions.h"  // accept_type, content_type, text_request

// forward declare type support functions


using _AudioTextConversation_Request__ros_msg_type = lex_common_msgs__srv__AudioTextConversation_Request;

static bool _AudioTextConversation_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AudioTextConversation_Request__ros_msg_type * ros_message = static_cast<const _AudioTextConversation_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: content_type
  {
    const rosidl_runtime_c__String * str = &ros_message->content_type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: accept_type
  {
    const rosidl_runtime_c__String * str = &ros_message->accept_type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: text_request
  {
    const rosidl_runtime_c__String * str = &ros_message->text_request;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: audio_request
  {
    size_t size = ros_message->audio_request.size;
    auto array_ptr = ros_message->audio_request.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _AudioTextConversation_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AudioTextConversation_Request__ros_msg_type * ros_message = static_cast<_AudioTextConversation_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: content_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->content_type.data) {
      rosidl_runtime_c__String__init(&ros_message->content_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->content_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'content_type'\n");
      return false;
    }
  }

  // Field name: accept_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->accept_type.data) {
      rosidl_runtime_c__String__init(&ros_message->accept_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->accept_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'accept_type'\n");
      return false;
    }
  }

  // Field name: text_request
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->text_request.data) {
      rosidl_runtime_c__String__init(&ros_message->text_request);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->text_request,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'text_request'\n");
      return false;
    }
  }

  // Field name: audio_request
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->audio_request.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->audio_request);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->audio_request, size)) {
      fprintf(stderr, "failed to create array for field 'audio_request'");
      return false;
    }
    auto array_ptr = ros_message->audio_request.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lex_common_msgs
size_t get_serialized_size_lex_common_msgs__srv__AudioTextConversation_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AudioTextConversation_Request__ros_msg_type * ros_message = static_cast<const _AudioTextConversation_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name content_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->content_type.size + 1);
  // field.name accept_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->accept_type.size + 1);
  // field.name text_request
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->text_request.size + 1);
  // field.name audio_request
  {
    size_t array_size = ros_message->audio_request.size;
    auto array_ptr = ros_message->audio_request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AudioTextConversation_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_lex_common_msgs__srv__AudioTextConversation_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lex_common_msgs
size_t max_serialized_size_lex_common_msgs__srv__AudioTextConversation_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: content_type
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: accept_type
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: text_request
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: audio_request
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _AudioTextConversation_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_lex_common_msgs__srv__AudioTextConversation_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AudioTextConversation_Request = {
  "lex_common_msgs::srv",
  "AudioTextConversation_Request",
  _AudioTextConversation_Request__cdr_serialize,
  _AudioTextConversation_Request__cdr_deserialize,
  _AudioTextConversation_Request__get_serialized_size,
  _AudioTextConversation_Request__max_serialized_size
};

static rosidl_message_type_support_t _AudioTextConversation_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AudioTextConversation_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lex_common_msgs, srv, AudioTextConversation_Request)() {
  return &_AudioTextConversation_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "lex_common_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "lex_common_msgs/srv/detail/audio_text_conversation__struct.h"
// already included above
// #include "lex_common_msgs/srv/detail/audio_text_conversation__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "lex_common_msgs/msg/detail/key_value__functions.h"  // slots
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"  // audio_response
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"  // audio_response
// already included above
// #include "rosidl_runtime_c/string.h"  // dialog_state, error_message, intent_name, message_format_type, text_response
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // dialog_state, error_message, intent_name, message_format_type, text_response

// forward declare type support functions
size_t get_serialized_size_lex_common_msgs__msg__KeyValue(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_lex_common_msgs__msg__KeyValue(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lex_common_msgs, msg, KeyValue)();


using _AudioTextConversation_Response__ros_msg_type = lex_common_msgs__srv__AudioTextConversation_Response;

static bool _AudioTextConversation_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AudioTextConversation_Response__ros_msg_type * ros_message = static_cast<const _AudioTextConversation_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: text_response
  {
    const rosidl_runtime_c__String * str = &ros_message->text_response;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: audio_response
  {
    size_t size = ros_message->audio_response.size;
    auto array_ptr = ros_message->audio_response.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: slots
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, lex_common_msgs, msg, KeyValue
      )()->data);
    size_t size = ros_message->slots.size;
    auto array_ptr = ros_message->slots.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: intent_name
  {
    const rosidl_runtime_c__String * str = &ros_message->intent_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: message_format_type
  {
    const rosidl_runtime_c__String * str = &ros_message->message_format_type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: dialog_state
  {
    const rosidl_runtime_c__String * str = &ros_message->dialog_state;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: error_code
  {
    cdr << ros_message->error_code;
  }

  // Field name: error_message
  {
    const rosidl_runtime_c__String * str = &ros_message->error_message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _AudioTextConversation_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AudioTextConversation_Response__ros_msg_type * ros_message = static_cast<_AudioTextConversation_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: text_response
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->text_response.data) {
      rosidl_runtime_c__String__init(&ros_message->text_response);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->text_response,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'text_response'\n");
      return false;
    }
  }

  // Field name: audio_response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->audio_response.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->audio_response);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->audio_response, size)) {
      fprintf(stderr, "failed to create array for field 'audio_response'");
      return false;
    }
    auto array_ptr = ros_message->audio_response.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: slots
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, lex_common_msgs, msg, KeyValue
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->slots.data) {
      lex_common_msgs__msg__KeyValue__Sequence__fini(&ros_message->slots);
    }
    if (!lex_common_msgs__msg__KeyValue__Sequence__init(&ros_message->slots, size)) {
      fprintf(stderr, "failed to create array for field 'slots'");
      return false;
    }
    auto array_ptr = ros_message->slots.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: intent_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->intent_name.data) {
      rosidl_runtime_c__String__init(&ros_message->intent_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->intent_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'intent_name'\n");
      return false;
    }
  }

  // Field name: message_format_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message_format_type.data) {
      rosidl_runtime_c__String__init(&ros_message->message_format_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message_format_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message_format_type'\n");
      return false;
    }
  }

  // Field name: dialog_state
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->dialog_state.data) {
      rosidl_runtime_c__String__init(&ros_message->dialog_state);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->dialog_state,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'dialog_state'\n");
      return false;
    }
  }

  // Field name: error_code
  {
    cdr >> ros_message->error_code;
  }

  // Field name: error_message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->error_message.data) {
      rosidl_runtime_c__String__init(&ros_message->error_message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->error_message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'error_message'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lex_common_msgs
size_t get_serialized_size_lex_common_msgs__srv__AudioTextConversation_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AudioTextConversation_Response__ros_msg_type * ros_message = static_cast<const _AudioTextConversation_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name text_response
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->text_response.size + 1);
  // field.name audio_response
  {
    size_t array_size = ros_message->audio_response.size;
    auto array_ptr = ros_message->audio_response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name slots
  {
    size_t array_size = ros_message->slots.size;
    auto array_ptr = ros_message->slots.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_lex_common_msgs__msg__KeyValue(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name intent_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->intent_name.size + 1);
  // field.name message_format_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message_format_type.size + 1);
  // field.name dialog_state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->dialog_state.size + 1);
  // field.name error_code
  {
    size_t item_size = sizeof(ros_message->error_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error_message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->error_message.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _AudioTextConversation_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_lex_common_msgs__srv__AudioTextConversation_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lex_common_msgs
size_t max_serialized_size_lex_common_msgs__srv__AudioTextConversation_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: text_response
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: audio_response
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: slots
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_lex_common_msgs__msg__KeyValue(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: intent_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: message_format_type
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: dialog_state
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: error_code
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: error_message
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _AudioTextConversation_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_lex_common_msgs__srv__AudioTextConversation_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AudioTextConversation_Response = {
  "lex_common_msgs::srv",
  "AudioTextConversation_Response",
  _AudioTextConversation_Response__cdr_serialize,
  _AudioTextConversation_Response__cdr_deserialize,
  _AudioTextConversation_Response__get_serialized_size,
  _AudioTextConversation_Response__max_serialized_size
};

static rosidl_message_type_support_t _AudioTextConversation_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AudioTextConversation_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lex_common_msgs, srv, AudioTextConversation_Response)() {
  return &_AudioTextConversation_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "lex_common_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "lex_common_msgs/srv/audio_text_conversation.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t AudioTextConversation__callbacks = {
  "lex_common_msgs::srv",
  "AudioTextConversation",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lex_common_msgs, srv, AudioTextConversation_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lex_common_msgs, srv, AudioTextConversation_Response)(),
};

static rosidl_service_type_support_t AudioTextConversation__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &AudioTextConversation__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lex_common_msgs, srv, AudioTextConversation)() {
  return &AudioTextConversation__handle;
}

#if defined(__cplusplus)
}
#endif
