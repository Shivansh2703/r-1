// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from lex_common_msgs:srv/AudioTextConversation.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "lex_common_msgs/srv/detail/audio_text_conversation__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace lex_common_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void AudioTextConversation_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) lex_common_msgs::srv::AudioTextConversation_Request(_init);
}

void AudioTextConversation_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<lex_common_msgs::srv::AudioTextConversation_Request *>(message_memory);
  typed_message->~AudioTextConversation_Request();
}

size_t size_function__AudioTextConversation_Request__audio_request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AudioTextConversation_Request__audio_request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__AudioTextConversation_Request__audio_request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__AudioTextConversation_Request__audio_request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__AudioTextConversation_Request__audio_request(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__AudioTextConversation_Request__audio_request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__AudioTextConversation_Request__audio_request(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__AudioTextConversation_Request__audio_request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AudioTextConversation_Request_message_member_array[4] = {
  {
    "content_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lex_common_msgs::srv::AudioTextConversation_Request, content_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "accept_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lex_common_msgs::srv::AudioTextConversation_Request, accept_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "text_request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lex_common_msgs::srv::AudioTextConversation_Request, text_request),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "audio_request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lex_common_msgs::srv::AudioTextConversation_Request, audio_request),  // bytes offset in struct
    nullptr,  // default value
    size_function__AudioTextConversation_Request__audio_request,  // size() function pointer
    get_const_function__AudioTextConversation_Request__audio_request,  // get_const(index) function pointer
    get_function__AudioTextConversation_Request__audio_request,  // get(index) function pointer
    fetch_function__AudioTextConversation_Request__audio_request,  // fetch(index, &value) function pointer
    assign_function__AudioTextConversation_Request__audio_request,  // assign(index, value) function pointer
    resize_function__AudioTextConversation_Request__audio_request  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AudioTextConversation_Request_message_members = {
  "lex_common_msgs::srv",  // message namespace
  "AudioTextConversation_Request",  // message name
  4,  // number of fields
  sizeof(lex_common_msgs::srv::AudioTextConversation_Request),
  AudioTextConversation_Request_message_member_array,  // message members
  AudioTextConversation_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  AudioTextConversation_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AudioTextConversation_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AudioTextConversation_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace lex_common_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<lex_common_msgs::srv::AudioTextConversation_Request>()
{
  return &::lex_common_msgs::srv::rosidl_typesupport_introspection_cpp::AudioTextConversation_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lex_common_msgs, srv, AudioTextConversation_Request)() {
  return &::lex_common_msgs::srv::rosidl_typesupport_introspection_cpp::AudioTextConversation_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "lex_common_msgs/srv/detail/audio_text_conversation__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace lex_common_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void AudioTextConversation_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) lex_common_msgs::srv::AudioTextConversation_Response(_init);
}

void AudioTextConversation_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<lex_common_msgs::srv::AudioTextConversation_Response *>(message_memory);
  typed_message->~AudioTextConversation_Response();
}

size_t size_function__AudioTextConversation_Response__audio_response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AudioTextConversation_Response__audio_response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__AudioTextConversation_Response__audio_response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__AudioTextConversation_Response__audio_response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__AudioTextConversation_Response__audio_response(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__AudioTextConversation_Response__audio_response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__AudioTextConversation_Response__audio_response(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__AudioTextConversation_Response__audio_response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AudioTextConversation_Response__slots(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<lex_common_msgs::msg::KeyValue> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AudioTextConversation_Response__slots(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<lex_common_msgs::msg::KeyValue> *>(untyped_member);
  return &member[index];
}

void * get_function__AudioTextConversation_Response__slots(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<lex_common_msgs::msg::KeyValue> *>(untyped_member);
  return &member[index];
}

void fetch_function__AudioTextConversation_Response__slots(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const lex_common_msgs::msg::KeyValue *>(
    get_const_function__AudioTextConversation_Response__slots(untyped_member, index));
  auto & value = *reinterpret_cast<lex_common_msgs::msg::KeyValue *>(untyped_value);
  value = item;
}

void assign_function__AudioTextConversation_Response__slots(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<lex_common_msgs::msg::KeyValue *>(
    get_function__AudioTextConversation_Response__slots(untyped_member, index));
  const auto & value = *reinterpret_cast<const lex_common_msgs::msg::KeyValue *>(untyped_value);
  item = value;
}

void resize_function__AudioTextConversation_Response__slots(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<lex_common_msgs::msg::KeyValue> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AudioTextConversation_Response_message_member_array[8] = {
  {
    "text_response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lex_common_msgs::srv::AudioTextConversation_Response, text_response),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "audio_response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lex_common_msgs::srv::AudioTextConversation_Response, audio_response),  // bytes offset in struct
    nullptr,  // default value
    size_function__AudioTextConversation_Response__audio_response,  // size() function pointer
    get_const_function__AudioTextConversation_Response__audio_response,  // get_const(index) function pointer
    get_function__AudioTextConversation_Response__audio_response,  // get(index) function pointer
    fetch_function__AudioTextConversation_Response__audio_response,  // fetch(index, &value) function pointer
    assign_function__AudioTextConversation_Response__audio_response,  // assign(index, value) function pointer
    resize_function__AudioTextConversation_Response__audio_response  // resize(index) function pointer
  },
  {
    "slots",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<lex_common_msgs::msg::KeyValue>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lex_common_msgs::srv::AudioTextConversation_Response, slots),  // bytes offset in struct
    nullptr,  // default value
    size_function__AudioTextConversation_Response__slots,  // size() function pointer
    get_const_function__AudioTextConversation_Response__slots,  // get_const(index) function pointer
    get_function__AudioTextConversation_Response__slots,  // get(index) function pointer
    fetch_function__AudioTextConversation_Response__slots,  // fetch(index, &value) function pointer
    assign_function__AudioTextConversation_Response__slots,  // assign(index, value) function pointer
    resize_function__AudioTextConversation_Response__slots  // resize(index) function pointer
  },
  {
    "intent_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lex_common_msgs::srv::AudioTextConversation_Response, intent_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message_format_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lex_common_msgs::srv::AudioTextConversation_Response, message_format_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "dialog_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lex_common_msgs::srv::AudioTextConversation_Response, dialog_state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "error_code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lex_common_msgs::srv::AudioTextConversation_Response, error_code),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "error_message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lex_common_msgs::srv::AudioTextConversation_Response, error_message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AudioTextConversation_Response_message_members = {
  "lex_common_msgs::srv",  // message namespace
  "AudioTextConversation_Response",  // message name
  8,  // number of fields
  sizeof(lex_common_msgs::srv::AudioTextConversation_Response),
  AudioTextConversation_Response_message_member_array,  // message members
  AudioTextConversation_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  AudioTextConversation_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AudioTextConversation_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AudioTextConversation_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace lex_common_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<lex_common_msgs::srv::AudioTextConversation_Response>()
{
  return &::lex_common_msgs::srv::rosidl_typesupport_introspection_cpp::AudioTextConversation_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lex_common_msgs, srv, AudioTextConversation_Response)() {
  return &::lex_common_msgs::srv::rosidl_typesupport_introspection_cpp::AudioTextConversation_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "lex_common_msgs/srv/detail/audio_text_conversation__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace lex_common_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers AudioTextConversation_service_members = {
  "lex_common_msgs::srv",  // service namespace
  "AudioTextConversation",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<lex_common_msgs::srv::AudioTextConversation>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t AudioTextConversation_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AudioTextConversation_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace lex_common_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<lex_common_msgs::srv::AudioTextConversation>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::lex_common_msgs::srv::rosidl_typesupport_introspection_cpp::AudioTextConversation_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::lex_common_msgs::srv::AudioTextConversation_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::lex_common_msgs::srv::AudioTextConversation_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lex_common_msgs, srv, AudioTextConversation)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<lex_common_msgs::srv::AudioTextConversation>();
}

#ifdef __cplusplus
}
#endif
