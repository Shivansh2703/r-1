// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lex_common_msgs:srv/AudioTextConversation.idl
// generated code does not contain a copyright notice

#ifndef LEX_COMMON_MSGS__SRV__DETAIL__AUDIO_TEXT_CONVERSATION__TRAITS_HPP_
#define LEX_COMMON_MSGS__SRV__DETAIL__AUDIO_TEXT_CONVERSATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lex_common_msgs/srv/detail/audio_text_conversation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lex_common_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const AudioTextConversation_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: content_type
  {
    out << "content_type: ";
    rosidl_generator_traits::value_to_yaml(msg.content_type, out);
    out << ", ";
  }

  // member: accept_type
  {
    out << "accept_type: ";
    rosidl_generator_traits::value_to_yaml(msg.accept_type, out);
    out << ", ";
  }

  // member: text_request
  {
    out << "text_request: ";
    rosidl_generator_traits::value_to_yaml(msg.text_request, out);
    out << ", ";
  }

  // member: audio_request
  {
    if (msg.audio_request.size() == 0) {
      out << "audio_request: []";
    } else {
      out << "audio_request: [";
      size_t pending_items = msg.audio_request.size();
      for (auto item : msg.audio_request) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AudioTextConversation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: content_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "content_type: ";
    rosidl_generator_traits::value_to_yaml(msg.content_type, out);
    out << "\n";
  }

  // member: accept_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accept_type: ";
    rosidl_generator_traits::value_to_yaml(msg.accept_type, out);
    out << "\n";
  }

  // member: text_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "text_request: ";
    rosidl_generator_traits::value_to_yaml(msg.text_request, out);
    out << "\n";
  }

  // member: audio_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.audio_request.size() == 0) {
      out << "audio_request: []\n";
    } else {
      out << "audio_request:\n";
      for (auto item : msg.audio_request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AudioTextConversation_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace lex_common_msgs

namespace rosidl_generator_traits
{

[[deprecated("use lex_common_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lex_common_msgs::srv::AudioTextConversation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  lex_common_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lex_common_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const lex_common_msgs::srv::AudioTextConversation_Request & msg)
{
  return lex_common_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lex_common_msgs::srv::AudioTextConversation_Request>()
{
  return "lex_common_msgs::srv::AudioTextConversation_Request";
}

template<>
inline const char * name<lex_common_msgs::srv::AudioTextConversation_Request>()
{
  return "lex_common_msgs/srv/AudioTextConversation_Request";
}

template<>
struct has_fixed_size<lex_common_msgs::srv::AudioTextConversation_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lex_common_msgs::srv::AudioTextConversation_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lex_common_msgs::srv::AudioTextConversation_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'slots'
#include "lex_common_msgs/msg/detail/key_value__traits.hpp"

namespace lex_common_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const AudioTextConversation_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: text_response
  {
    out << "text_response: ";
    rosidl_generator_traits::value_to_yaml(msg.text_response, out);
    out << ", ";
  }

  // member: audio_response
  {
    if (msg.audio_response.size() == 0) {
      out << "audio_response: []";
    } else {
      out << "audio_response: [";
      size_t pending_items = msg.audio_response.size();
      for (auto item : msg.audio_response) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: slots
  {
    if (msg.slots.size() == 0) {
      out << "slots: []";
    } else {
      out << "slots: [";
      size_t pending_items = msg.slots.size();
      for (auto item : msg.slots) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: intent_name
  {
    out << "intent_name: ";
    rosidl_generator_traits::value_to_yaml(msg.intent_name, out);
    out << ", ";
  }

  // member: message_format_type
  {
    out << "message_format_type: ";
    rosidl_generator_traits::value_to_yaml(msg.message_format_type, out);
    out << ", ";
  }

  // member: dialog_state
  {
    out << "dialog_state: ";
    rosidl_generator_traits::value_to_yaml(msg.dialog_state, out);
    out << ", ";
  }

  // member: error_code
  {
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << ", ";
  }

  // member: error_message
  {
    out << "error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.error_message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AudioTextConversation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: text_response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "text_response: ";
    rosidl_generator_traits::value_to_yaml(msg.text_response, out);
    out << "\n";
  }

  // member: audio_response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.audio_response.size() == 0) {
      out << "audio_response: []\n";
    } else {
      out << "audio_response:\n";
      for (auto item : msg.audio_response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: slots
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.slots.size() == 0) {
      out << "slots: []\n";
    } else {
      out << "slots:\n";
      for (auto item : msg.slots) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: intent_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "intent_name: ";
    rosidl_generator_traits::value_to_yaml(msg.intent_name, out);
    out << "\n";
  }

  // member: message_format_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message_format_type: ";
    rosidl_generator_traits::value_to_yaml(msg.message_format_type, out);
    out << "\n";
  }

  // member: dialog_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dialog_state: ";
    rosidl_generator_traits::value_to_yaml(msg.dialog_state, out);
    out << "\n";
  }

  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << "\n";
  }

  // member: error_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.error_message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AudioTextConversation_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace lex_common_msgs

namespace rosidl_generator_traits
{

[[deprecated("use lex_common_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lex_common_msgs::srv::AudioTextConversation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  lex_common_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lex_common_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const lex_common_msgs::srv::AudioTextConversation_Response & msg)
{
  return lex_common_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lex_common_msgs::srv::AudioTextConversation_Response>()
{
  return "lex_common_msgs::srv::AudioTextConversation_Response";
}

template<>
inline const char * name<lex_common_msgs::srv::AudioTextConversation_Response>()
{
  return "lex_common_msgs/srv/AudioTextConversation_Response";
}

template<>
struct has_fixed_size<lex_common_msgs::srv::AudioTextConversation_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lex_common_msgs::srv::AudioTextConversation_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lex_common_msgs::srv::AudioTextConversation_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lex_common_msgs::srv::AudioTextConversation>()
{
  return "lex_common_msgs::srv::AudioTextConversation";
}

template<>
inline const char * name<lex_common_msgs::srv::AudioTextConversation>()
{
  return "lex_common_msgs/srv/AudioTextConversation";
}

template<>
struct has_fixed_size<lex_common_msgs::srv::AudioTextConversation>
  : std::integral_constant<
    bool,
    has_fixed_size<lex_common_msgs::srv::AudioTextConversation_Request>::value &&
    has_fixed_size<lex_common_msgs::srv::AudioTextConversation_Response>::value
  >
{
};

template<>
struct has_bounded_size<lex_common_msgs::srv::AudioTextConversation>
  : std::integral_constant<
    bool,
    has_bounded_size<lex_common_msgs::srv::AudioTextConversation_Request>::value &&
    has_bounded_size<lex_common_msgs::srv::AudioTextConversation_Response>::value
  >
{
};

template<>
struct is_service<lex_common_msgs::srv::AudioTextConversation>
  : std::true_type
{
};

template<>
struct is_service_request<lex_common_msgs::srv::AudioTextConversation_Request>
  : std::true_type
{
};

template<>
struct is_service_response<lex_common_msgs::srv::AudioTextConversation_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LEX_COMMON_MSGS__SRV__DETAIL__AUDIO_TEXT_CONVERSATION__TRAITS_HPP_
