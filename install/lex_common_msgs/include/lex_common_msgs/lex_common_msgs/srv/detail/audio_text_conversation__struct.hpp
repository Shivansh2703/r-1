// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lex_common_msgs:srv/AudioTextConversation.idl
// generated code does not contain a copyright notice

#ifndef LEX_COMMON_MSGS__SRV__DETAIL__AUDIO_TEXT_CONVERSATION__STRUCT_HPP_
#define LEX_COMMON_MSGS__SRV__DETAIL__AUDIO_TEXT_CONVERSATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lex_common_msgs__srv__AudioTextConversation_Request __attribute__((deprecated))
#else
# define DEPRECATED__lex_common_msgs__srv__AudioTextConversation_Request __declspec(deprecated)
#endif

namespace lex_common_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AudioTextConversation_Request_
{
  using Type = AudioTextConversation_Request_<ContainerAllocator>;

  explicit AudioTextConversation_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->content_type = "";
      this->accept_type = "";
      this->text_request = "";
    }
  }

  explicit AudioTextConversation_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : content_type(_alloc),
    accept_type(_alloc),
    text_request(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->content_type = "";
      this->accept_type = "";
      this->text_request = "";
    }
  }

  // field types and members
  using _content_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _content_type_type content_type;
  using _accept_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _accept_type_type accept_type;
  using _text_request_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _text_request_type text_request;
  using _audio_request_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _audio_request_type audio_request;

  // setters for named parameter idiom
  Type & set__content_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->content_type = _arg;
    return *this;
  }
  Type & set__accept_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->accept_type = _arg;
    return *this;
  }
  Type & set__text_request(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->text_request = _arg;
    return *this;
  }
  Type & set__audio_request(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->audio_request = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lex_common_msgs::srv::AudioTextConversation_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const lex_common_msgs::srv::AudioTextConversation_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lex_common_msgs::srv::AudioTextConversation_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lex_common_msgs::srv::AudioTextConversation_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lex_common_msgs::srv::AudioTextConversation_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lex_common_msgs::srv::AudioTextConversation_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lex_common_msgs::srv::AudioTextConversation_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lex_common_msgs::srv::AudioTextConversation_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lex_common_msgs::srv::AudioTextConversation_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lex_common_msgs::srv::AudioTextConversation_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lex_common_msgs__srv__AudioTextConversation_Request
    std::shared_ptr<lex_common_msgs::srv::AudioTextConversation_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lex_common_msgs__srv__AudioTextConversation_Request
    std::shared_ptr<lex_common_msgs::srv::AudioTextConversation_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AudioTextConversation_Request_ & other) const
  {
    if (this->content_type != other.content_type) {
      return false;
    }
    if (this->accept_type != other.accept_type) {
      return false;
    }
    if (this->text_request != other.text_request) {
      return false;
    }
    if (this->audio_request != other.audio_request) {
      return false;
    }
    return true;
  }
  bool operator!=(const AudioTextConversation_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AudioTextConversation_Request_

// alias to use template instance with default allocator
using AudioTextConversation_Request =
  lex_common_msgs::srv::AudioTextConversation_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lex_common_msgs


// Include directives for member types
// Member 'slots'
#include "lex_common_msgs/msg/detail/key_value__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__lex_common_msgs__srv__AudioTextConversation_Response __attribute__((deprecated))
#else
# define DEPRECATED__lex_common_msgs__srv__AudioTextConversation_Response __declspec(deprecated)
#endif

namespace lex_common_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AudioTextConversation_Response_
{
  using Type = AudioTextConversation_Response_<ContainerAllocator>;

  explicit AudioTextConversation_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->text_response = "";
      this->intent_name = "";
      this->message_format_type = "";
      this->dialog_state = "";
      this->error_code = 0;
      this->error_message = "";
    }
  }

  explicit AudioTextConversation_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : text_response(_alloc),
    intent_name(_alloc),
    message_format_type(_alloc),
    dialog_state(_alloc),
    error_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->text_response = "";
      this->intent_name = "";
      this->message_format_type = "";
      this->dialog_state = "";
      this->error_code = 0;
      this->error_message = "";
    }
  }

  // field types and members
  using _text_response_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _text_response_type text_response;
  using _audio_response_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _audio_response_type audio_response;
  using _slots_type =
    std::vector<lex_common_msgs::msg::KeyValue_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<lex_common_msgs::msg::KeyValue_<ContainerAllocator>>>;
  _slots_type slots;
  using _intent_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _intent_name_type intent_name;
  using _message_format_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_format_type_type message_format_type;
  using _dialog_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _dialog_state_type dialog_state;
  using _error_code_type =
    uint8_t;
  _error_code_type error_code;
  using _error_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_message_type error_message;

  // setters for named parameter idiom
  Type & set__text_response(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->text_response = _arg;
    return *this;
  }
  Type & set__audio_response(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->audio_response = _arg;
    return *this;
  }
  Type & set__slots(
    const std::vector<lex_common_msgs::msg::KeyValue_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<lex_common_msgs::msg::KeyValue_<ContainerAllocator>>> & _arg)
  {
    this->slots = _arg;
    return *this;
  }
  Type & set__intent_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->intent_name = _arg;
    return *this;
  }
  Type & set__message_format_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message_format_type = _arg;
    return *this;
  }
  Type & set__dialog_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->dialog_state = _arg;
    return *this;
  }
  Type & set__error_code(
    const uint8_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__error_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lex_common_msgs::srv::AudioTextConversation_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const lex_common_msgs::srv::AudioTextConversation_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lex_common_msgs::srv::AudioTextConversation_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lex_common_msgs::srv::AudioTextConversation_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lex_common_msgs::srv::AudioTextConversation_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lex_common_msgs::srv::AudioTextConversation_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lex_common_msgs::srv::AudioTextConversation_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lex_common_msgs::srv::AudioTextConversation_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lex_common_msgs::srv::AudioTextConversation_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lex_common_msgs::srv::AudioTextConversation_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lex_common_msgs__srv__AudioTextConversation_Response
    std::shared_ptr<lex_common_msgs::srv::AudioTextConversation_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lex_common_msgs__srv__AudioTextConversation_Response
    std::shared_ptr<lex_common_msgs::srv::AudioTextConversation_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AudioTextConversation_Response_ & other) const
  {
    if (this->text_response != other.text_response) {
      return false;
    }
    if (this->audio_response != other.audio_response) {
      return false;
    }
    if (this->slots != other.slots) {
      return false;
    }
    if (this->intent_name != other.intent_name) {
      return false;
    }
    if (this->message_format_type != other.message_format_type) {
      return false;
    }
    if (this->dialog_state != other.dialog_state) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->error_message != other.error_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const AudioTextConversation_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AudioTextConversation_Response_

// alias to use template instance with default allocator
using AudioTextConversation_Response =
  lex_common_msgs::srv::AudioTextConversation_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lex_common_msgs

namespace lex_common_msgs
{

namespace srv
{

struct AudioTextConversation
{
  using Request = lex_common_msgs::srv::AudioTextConversation_Request;
  using Response = lex_common_msgs::srv::AudioTextConversation_Response;
};

}  // namespace srv

}  // namespace lex_common_msgs

#endif  // LEX_COMMON_MSGS__SRV__DETAIL__AUDIO_TEXT_CONVERSATION__STRUCT_HPP_
