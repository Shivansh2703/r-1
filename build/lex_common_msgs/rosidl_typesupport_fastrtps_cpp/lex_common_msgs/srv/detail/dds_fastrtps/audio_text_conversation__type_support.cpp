// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from lex_common_msgs:srv/AudioTextConversation.idl
// generated code does not contain a copyright notice
#include "lex_common_msgs/srv/detail/audio_text_conversation__rosidl_typesupport_fastrtps_cpp.hpp"
#include "lex_common_msgs/srv/detail/audio_text_conversation__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace lex_common_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lex_common_msgs
cdr_serialize(
  const lex_common_msgs::srv::AudioTextConversation_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: content_type
  cdr << ros_message.content_type;
  // Member: accept_type
  cdr << ros_message.accept_type;
  // Member: text_request
  cdr << ros_message.text_request;
  // Member: audio_request
  {
    cdr << ros_message.audio_request;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lex_common_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  lex_common_msgs::srv::AudioTextConversation_Request & ros_message)
{
  // Member: content_type
  cdr >> ros_message.content_type;

  // Member: accept_type
  cdr >> ros_message.accept_type;

  // Member: text_request
  cdr >> ros_message.text_request;

  // Member: audio_request
  {
    cdr >> ros_message.audio_request;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lex_common_msgs
get_serialized_size(
  const lex_common_msgs::srv::AudioTextConversation_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: content_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.content_type.size() + 1);
  // Member: accept_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.accept_type.size() + 1);
  // Member: text_request
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.text_request.size() + 1);
  // Member: audio_request
  {
    size_t array_size = ros_message.audio_request.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.audio_request[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lex_common_msgs
max_serialized_size_AudioTextConversation_Request(
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


  // Member: content_type
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

  // Member: accept_type
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

  // Member: text_request
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

  // Member: audio_request
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

static bool _AudioTextConversation_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const lex_common_msgs::srv::AudioTextConversation_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AudioTextConversation_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<lex_common_msgs::srv::AudioTextConversation_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AudioTextConversation_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const lex_common_msgs::srv::AudioTextConversation_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AudioTextConversation_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_AudioTextConversation_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _AudioTextConversation_Request__callbacks = {
  "lex_common_msgs::srv",
  "AudioTextConversation_Request",
  _AudioTextConversation_Request__cdr_serialize,
  _AudioTextConversation_Request__cdr_deserialize,
  _AudioTextConversation_Request__get_serialized_size,
  _AudioTextConversation_Request__max_serialized_size
};

static rosidl_message_type_support_t _AudioTextConversation_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AudioTextConversation_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace lex_common_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_lex_common_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<lex_common_msgs::srv::AudioTextConversation_Request>()
{
  return &lex_common_msgs::srv::typesupport_fastrtps_cpp::_AudioTextConversation_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lex_common_msgs, srv, AudioTextConversation_Request)() {
  return &lex_common_msgs::srv::typesupport_fastrtps_cpp::_AudioTextConversation_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace lex_common_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const lex_common_msgs::msg::KeyValue &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  lex_common_msgs::msg::KeyValue &);
size_t get_serialized_size(
  const lex_common_msgs::msg::KeyValue &,
  size_t current_alignment);
size_t
max_serialized_size_KeyValue(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace lex_common_msgs


namespace lex_common_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lex_common_msgs
cdr_serialize(
  const lex_common_msgs::srv::AudioTextConversation_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: text_response
  cdr << ros_message.text_response;
  // Member: audio_response
  {
    cdr << ros_message.audio_response;
  }
  // Member: slots
  {
    size_t size = ros_message.slots.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      lex_common_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.slots[i],
        cdr);
    }
  }
  // Member: intent_name
  cdr << ros_message.intent_name;
  // Member: message_format_type
  cdr << ros_message.message_format_type;
  // Member: dialog_state
  cdr << ros_message.dialog_state;
  // Member: error_code
  cdr << ros_message.error_code;
  // Member: error_message
  cdr << ros_message.error_message;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lex_common_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  lex_common_msgs::srv::AudioTextConversation_Response & ros_message)
{
  // Member: text_response
  cdr >> ros_message.text_response;

  // Member: audio_response
  {
    cdr >> ros_message.audio_response;
  }

  // Member: slots
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.slots.resize(size);
    for (size_t i = 0; i < size; i++) {
      lex_common_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.slots[i]);
    }
  }

  // Member: intent_name
  cdr >> ros_message.intent_name;

  // Member: message_format_type
  cdr >> ros_message.message_format_type;

  // Member: dialog_state
  cdr >> ros_message.dialog_state;

  // Member: error_code
  cdr >> ros_message.error_code;

  // Member: error_message
  cdr >> ros_message.error_message;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lex_common_msgs
get_serialized_size(
  const lex_common_msgs::srv::AudioTextConversation_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: text_response
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.text_response.size() + 1);
  // Member: audio_response
  {
    size_t array_size = ros_message.audio_response.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.audio_response[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: slots
  {
    size_t array_size = ros_message.slots.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        lex_common_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.slots[index], current_alignment);
    }
  }
  // Member: intent_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.intent_name.size() + 1);
  // Member: message_format_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.message_format_type.size() + 1);
  // Member: dialog_state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.dialog_state.size() + 1);
  // Member: error_code
  {
    size_t item_size = sizeof(ros_message.error_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: error_message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.error_message.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lex_common_msgs
max_serialized_size_AudioTextConversation_Response(
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


  // Member: text_response
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

  // Member: audio_response
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: slots
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
        lex_common_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_KeyValue(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: intent_name
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

  // Member: message_format_type
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

  // Member: dialog_state
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

  // Member: error_code
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: error_message
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

static bool _AudioTextConversation_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const lex_common_msgs::srv::AudioTextConversation_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AudioTextConversation_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<lex_common_msgs::srv::AudioTextConversation_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AudioTextConversation_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const lex_common_msgs::srv::AudioTextConversation_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AudioTextConversation_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_AudioTextConversation_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _AudioTextConversation_Response__callbacks = {
  "lex_common_msgs::srv",
  "AudioTextConversation_Response",
  _AudioTextConversation_Response__cdr_serialize,
  _AudioTextConversation_Response__cdr_deserialize,
  _AudioTextConversation_Response__get_serialized_size,
  _AudioTextConversation_Response__max_serialized_size
};

static rosidl_message_type_support_t _AudioTextConversation_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AudioTextConversation_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace lex_common_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_lex_common_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<lex_common_msgs::srv::AudioTextConversation_Response>()
{
  return &lex_common_msgs::srv::typesupport_fastrtps_cpp::_AudioTextConversation_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lex_common_msgs, srv, AudioTextConversation_Response)() {
  return &lex_common_msgs::srv::typesupport_fastrtps_cpp::_AudioTextConversation_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace lex_common_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _AudioTextConversation__callbacks = {
  "lex_common_msgs::srv",
  "AudioTextConversation",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lex_common_msgs, srv, AudioTextConversation_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lex_common_msgs, srv, AudioTextConversation_Response)(),
};

static rosidl_service_type_support_t _AudioTextConversation__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AudioTextConversation__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace lex_common_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_lex_common_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<lex_common_msgs::srv::AudioTextConversation>()
{
  return &lex_common_msgs::srv::typesupport_fastrtps_cpp::_AudioTextConversation__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lex_common_msgs, srv, AudioTextConversation)() {
  return &lex_common_msgs::srv::typesupport_fastrtps_cpp::_AudioTextConversation__handle;
}

#ifdef __cplusplus
}
#endif
