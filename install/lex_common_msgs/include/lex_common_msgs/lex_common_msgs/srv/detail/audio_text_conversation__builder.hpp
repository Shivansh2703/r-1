// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lex_common_msgs:srv/AudioTextConversation.idl
// generated code does not contain a copyright notice

#ifndef LEX_COMMON_MSGS__SRV__DETAIL__AUDIO_TEXT_CONVERSATION__BUILDER_HPP_
#define LEX_COMMON_MSGS__SRV__DETAIL__AUDIO_TEXT_CONVERSATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lex_common_msgs/srv/detail/audio_text_conversation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lex_common_msgs
{

namespace srv
{

namespace builder
{

class Init_AudioTextConversation_Request_audio_request
{
public:
  explicit Init_AudioTextConversation_Request_audio_request(::lex_common_msgs::srv::AudioTextConversation_Request & msg)
  : msg_(msg)
  {}
  ::lex_common_msgs::srv::AudioTextConversation_Request audio_request(::lex_common_msgs::srv::AudioTextConversation_Request::_audio_request_type arg)
  {
    msg_.audio_request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lex_common_msgs::srv::AudioTextConversation_Request msg_;
};

class Init_AudioTextConversation_Request_text_request
{
public:
  explicit Init_AudioTextConversation_Request_text_request(::lex_common_msgs::srv::AudioTextConversation_Request & msg)
  : msg_(msg)
  {}
  Init_AudioTextConversation_Request_audio_request text_request(::lex_common_msgs::srv::AudioTextConversation_Request::_text_request_type arg)
  {
    msg_.text_request = std::move(arg);
    return Init_AudioTextConversation_Request_audio_request(msg_);
  }

private:
  ::lex_common_msgs::srv::AudioTextConversation_Request msg_;
};

class Init_AudioTextConversation_Request_accept_type
{
public:
  explicit Init_AudioTextConversation_Request_accept_type(::lex_common_msgs::srv::AudioTextConversation_Request & msg)
  : msg_(msg)
  {}
  Init_AudioTextConversation_Request_text_request accept_type(::lex_common_msgs::srv::AudioTextConversation_Request::_accept_type_type arg)
  {
    msg_.accept_type = std::move(arg);
    return Init_AudioTextConversation_Request_text_request(msg_);
  }

private:
  ::lex_common_msgs::srv::AudioTextConversation_Request msg_;
};

class Init_AudioTextConversation_Request_content_type
{
public:
  Init_AudioTextConversation_Request_content_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioTextConversation_Request_accept_type content_type(::lex_common_msgs::srv::AudioTextConversation_Request::_content_type_type arg)
  {
    msg_.content_type = std::move(arg);
    return Init_AudioTextConversation_Request_accept_type(msg_);
  }

private:
  ::lex_common_msgs::srv::AudioTextConversation_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lex_common_msgs::srv::AudioTextConversation_Request>()
{
  return lex_common_msgs::srv::builder::Init_AudioTextConversation_Request_content_type();
}

}  // namespace lex_common_msgs


namespace lex_common_msgs
{

namespace srv
{

namespace builder
{

class Init_AudioTextConversation_Response_error_message
{
public:
  explicit Init_AudioTextConversation_Response_error_message(::lex_common_msgs::srv::AudioTextConversation_Response & msg)
  : msg_(msg)
  {}
  ::lex_common_msgs::srv::AudioTextConversation_Response error_message(::lex_common_msgs::srv::AudioTextConversation_Response::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lex_common_msgs::srv::AudioTextConversation_Response msg_;
};

class Init_AudioTextConversation_Response_error_code
{
public:
  explicit Init_AudioTextConversation_Response_error_code(::lex_common_msgs::srv::AudioTextConversation_Response & msg)
  : msg_(msg)
  {}
  Init_AudioTextConversation_Response_error_message error_code(::lex_common_msgs::srv::AudioTextConversation_Response::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_AudioTextConversation_Response_error_message(msg_);
  }

private:
  ::lex_common_msgs::srv::AudioTextConversation_Response msg_;
};

class Init_AudioTextConversation_Response_dialog_state
{
public:
  explicit Init_AudioTextConversation_Response_dialog_state(::lex_common_msgs::srv::AudioTextConversation_Response & msg)
  : msg_(msg)
  {}
  Init_AudioTextConversation_Response_error_code dialog_state(::lex_common_msgs::srv::AudioTextConversation_Response::_dialog_state_type arg)
  {
    msg_.dialog_state = std::move(arg);
    return Init_AudioTextConversation_Response_error_code(msg_);
  }

private:
  ::lex_common_msgs::srv::AudioTextConversation_Response msg_;
};

class Init_AudioTextConversation_Response_message_format_type
{
public:
  explicit Init_AudioTextConversation_Response_message_format_type(::lex_common_msgs::srv::AudioTextConversation_Response & msg)
  : msg_(msg)
  {}
  Init_AudioTextConversation_Response_dialog_state message_format_type(::lex_common_msgs::srv::AudioTextConversation_Response::_message_format_type_type arg)
  {
    msg_.message_format_type = std::move(arg);
    return Init_AudioTextConversation_Response_dialog_state(msg_);
  }

private:
  ::lex_common_msgs::srv::AudioTextConversation_Response msg_;
};

class Init_AudioTextConversation_Response_intent_name
{
public:
  explicit Init_AudioTextConversation_Response_intent_name(::lex_common_msgs::srv::AudioTextConversation_Response & msg)
  : msg_(msg)
  {}
  Init_AudioTextConversation_Response_message_format_type intent_name(::lex_common_msgs::srv::AudioTextConversation_Response::_intent_name_type arg)
  {
    msg_.intent_name = std::move(arg);
    return Init_AudioTextConversation_Response_message_format_type(msg_);
  }

private:
  ::lex_common_msgs::srv::AudioTextConversation_Response msg_;
};

class Init_AudioTextConversation_Response_slots
{
public:
  explicit Init_AudioTextConversation_Response_slots(::lex_common_msgs::srv::AudioTextConversation_Response & msg)
  : msg_(msg)
  {}
  Init_AudioTextConversation_Response_intent_name slots(::lex_common_msgs::srv::AudioTextConversation_Response::_slots_type arg)
  {
    msg_.slots = std::move(arg);
    return Init_AudioTextConversation_Response_intent_name(msg_);
  }

private:
  ::lex_common_msgs::srv::AudioTextConversation_Response msg_;
};

class Init_AudioTextConversation_Response_audio_response
{
public:
  explicit Init_AudioTextConversation_Response_audio_response(::lex_common_msgs::srv::AudioTextConversation_Response & msg)
  : msg_(msg)
  {}
  Init_AudioTextConversation_Response_slots audio_response(::lex_common_msgs::srv::AudioTextConversation_Response::_audio_response_type arg)
  {
    msg_.audio_response = std::move(arg);
    return Init_AudioTextConversation_Response_slots(msg_);
  }

private:
  ::lex_common_msgs::srv::AudioTextConversation_Response msg_;
};

class Init_AudioTextConversation_Response_text_response
{
public:
  Init_AudioTextConversation_Response_text_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioTextConversation_Response_audio_response text_response(::lex_common_msgs::srv::AudioTextConversation_Response::_text_response_type arg)
  {
    msg_.text_response = std::move(arg);
    return Init_AudioTextConversation_Response_audio_response(msg_);
  }

private:
  ::lex_common_msgs::srv::AudioTextConversation_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lex_common_msgs::srv::AudioTextConversation_Response>()
{
  return lex_common_msgs::srv::builder::Init_AudioTextConversation_Response_text_response();
}

}  // namespace lex_common_msgs

#endif  // LEX_COMMON_MSGS__SRV__DETAIL__AUDIO_TEXT_CONVERSATION__BUILDER_HPP_
