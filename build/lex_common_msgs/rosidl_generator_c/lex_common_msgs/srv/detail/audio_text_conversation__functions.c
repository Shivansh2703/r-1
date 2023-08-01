// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lex_common_msgs:srv/AudioTextConversation.idl
// generated code does not contain a copyright notice
#include "lex_common_msgs/srv/detail/audio_text_conversation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `content_type`
// Member `accept_type`
// Member `text_request`
#include "rosidl_runtime_c/string_functions.h"
// Member `audio_request`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
lex_common_msgs__srv__AudioTextConversation_Request__init(lex_common_msgs__srv__AudioTextConversation_Request * msg)
{
  if (!msg) {
    return false;
  }
  // content_type
  if (!rosidl_runtime_c__String__init(&msg->content_type)) {
    lex_common_msgs__srv__AudioTextConversation_Request__fini(msg);
    return false;
  }
  // accept_type
  if (!rosidl_runtime_c__String__init(&msg->accept_type)) {
    lex_common_msgs__srv__AudioTextConversation_Request__fini(msg);
    return false;
  }
  // text_request
  if (!rosidl_runtime_c__String__init(&msg->text_request)) {
    lex_common_msgs__srv__AudioTextConversation_Request__fini(msg);
    return false;
  }
  // audio_request
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->audio_request, 0)) {
    lex_common_msgs__srv__AudioTextConversation_Request__fini(msg);
    return false;
  }
  return true;
}

void
lex_common_msgs__srv__AudioTextConversation_Request__fini(lex_common_msgs__srv__AudioTextConversation_Request * msg)
{
  if (!msg) {
    return;
  }
  // content_type
  rosidl_runtime_c__String__fini(&msg->content_type);
  // accept_type
  rosidl_runtime_c__String__fini(&msg->accept_type);
  // text_request
  rosidl_runtime_c__String__fini(&msg->text_request);
  // audio_request
  rosidl_runtime_c__uint8__Sequence__fini(&msg->audio_request);
}

bool
lex_common_msgs__srv__AudioTextConversation_Request__are_equal(const lex_common_msgs__srv__AudioTextConversation_Request * lhs, const lex_common_msgs__srv__AudioTextConversation_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // content_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->content_type), &(rhs->content_type)))
  {
    return false;
  }
  // accept_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->accept_type), &(rhs->accept_type)))
  {
    return false;
  }
  // text_request
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->text_request), &(rhs->text_request)))
  {
    return false;
  }
  // audio_request
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->audio_request), &(rhs->audio_request)))
  {
    return false;
  }
  return true;
}

bool
lex_common_msgs__srv__AudioTextConversation_Request__copy(
  const lex_common_msgs__srv__AudioTextConversation_Request * input,
  lex_common_msgs__srv__AudioTextConversation_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // content_type
  if (!rosidl_runtime_c__String__copy(
      &(input->content_type), &(output->content_type)))
  {
    return false;
  }
  // accept_type
  if (!rosidl_runtime_c__String__copy(
      &(input->accept_type), &(output->accept_type)))
  {
    return false;
  }
  // text_request
  if (!rosidl_runtime_c__String__copy(
      &(input->text_request), &(output->text_request)))
  {
    return false;
  }
  // audio_request
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->audio_request), &(output->audio_request)))
  {
    return false;
  }
  return true;
}

lex_common_msgs__srv__AudioTextConversation_Request *
lex_common_msgs__srv__AudioTextConversation_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lex_common_msgs__srv__AudioTextConversation_Request * msg = (lex_common_msgs__srv__AudioTextConversation_Request *)allocator.allocate(sizeof(lex_common_msgs__srv__AudioTextConversation_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lex_common_msgs__srv__AudioTextConversation_Request));
  bool success = lex_common_msgs__srv__AudioTextConversation_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lex_common_msgs__srv__AudioTextConversation_Request__destroy(lex_common_msgs__srv__AudioTextConversation_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lex_common_msgs__srv__AudioTextConversation_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lex_common_msgs__srv__AudioTextConversation_Request__Sequence__init(lex_common_msgs__srv__AudioTextConversation_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lex_common_msgs__srv__AudioTextConversation_Request * data = NULL;

  if (size) {
    data = (lex_common_msgs__srv__AudioTextConversation_Request *)allocator.zero_allocate(size, sizeof(lex_common_msgs__srv__AudioTextConversation_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lex_common_msgs__srv__AudioTextConversation_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lex_common_msgs__srv__AudioTextConversation_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
lex_common_msgs__srv__AudioTextConversation_Request__Sequence__fini(lex_common_msgs__srv__AudioTextConversation_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      lex_common_msgs__srv__AudioTextConversation_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

lex_common_msgs__srv__AudioTextConversation_Request__Sequence *
lex_common_msgs__srv__AudioTextConversation_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lex_common_msgs__srv__AudioTextConversation_Request__Sequence * array = (lex_common_msgs__srv__AudioTextConversation_Request__Sequence *)allocator.allocate(sizeof(lex_common_msgs__srv__AudioTextConversation_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lex_common_msgs__srv__AudioTextConversation_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lex_common_msgs__srv__AudioTextConversation_Request__Sequence__destroy(lex_common_msgs__srv__AudioTextConversation_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lex_common_msgs__srv__AudioTextConversation_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lex_common_msgs__srv__AudioTextConversation_Request__Sequence__are_equal(const lex_common_msgs__srv__AudioTextConversation_Request__Sequence * lhs, const lex_common_msgs__srv__AudioTextConversation_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lex_common_msgs__srv__AudioTextConversation_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lex_common_msgs__srv__AudioTextConversation_Request__Sequence__copy(
  const lex_common_msgs__srv__AudioTextConversation_Request__Sequence * input,
  lex_common_msgs__srv__AudioTextConversation_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lex_common_msgs__srv__AudioTextConversation_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lex_common_msgs__srv__AudioTextConversation_Request * data =
      (lex_common_msgs__srv__AudioTextConversation_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lex_common_msgs__srv__AudioTextConversation_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lex_common_msgs__srv__AudioTextConversation_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lex_common_msgs__srv__AudioTextConversation_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


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
#include "lex_common_msgs/msg/detail/key_value__functions.h"

bool
lex_common_msgs__srv__AudioTextConversation_Response__init(lex_common_msgs__srv__AudioTextConversation_Response * msg)
{
  if (!msg) {
    return false;
  }
  // text_response
  if (!rosidl_runtime_c__String__init(&msg->text_response)) {
    lex_common_msgs__srv__AudioTextConversation_Response__fini(msg);
    return false;
  }
  // audio_response
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->audio_response, 0)) {
    lex_common_msgs__srv__AudioTextConversation_Response__fini(msg);
    return false;
  }
  // slots
  if (!lex_common_msgs__msg__KeyValue__Sequence__init(&msg->slots, 0)) {
    lex_common_msgs__srv__AudioTextConversation_Response__fini(msg);
    return false;
  }
  // intent_name
  if (!rosidl_runtime_c__String__init(&msg->intent_name)) {
    lex_common_msgs__srv__AudioTextConversation_Response__fini(msg);
    return false;
  }
  // message_format_type
  if (!rosidl_runtime_c__String__init(&msg->message_format_type)) {
    lex_common_msgs__srv__AudioTextConversation_Response__fini(msg);
    return false;
  }
  // dialog_state
  if (!rosidl_runtime_c__String__init(&msg->dialog_state)) {
    lex_common_msgs__srv__AudioTextConversation_Response__fini(msg);
    return false;
  }
  // error_code
  // error_message
  if (!rosidl_runtime_c__String__init(&msg->error_message)) {
    lex_common_msgs__srv__AudioTextConversation_Response__fini(msg);
    return false;
  }
  return true;
}

void
lex_common_msgs__srv__AudioTextConversation_Response__fini(lex_common_msgs__srv__AudioTextConversation_Response * msg)
{
  if (!msg) {
    return;
  }
  // text_response
  rosidl_runtime_c__String__fini(&msg->text_response);
  // audio_response
  rosidl_runtime_c__uint8__Sequence__fini(&msg->audio_response);
  // slots
  lex_common_msgs__msg__KeyValue__Sequence__fini(&msg->slots);
  // intent_name
  rosidl_runtime_c__String__fini(&msg->intent_name);
  // message_format_type
  rosidl_runtime_c__String__fini(&msg->message_format_type);
  // dialog_state
  rosidl_runtime_c__String__fini(&msg->dialog_state);
  // error_code
  // error_message
  rosidl_runtime_c__String__fini(&msg->error_message);
}

bool
lex_common_msgs__srv__AudioTextConversation_Response__are_equal(const lex_common_msgs__srv__AudioTextConversation_Response * lhs, const lex_common_msgs__srv__AudioTextConversation_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // text_response
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->text_response), &(rhs->text_response)))
  {
    return false;
  }
  // audio_response
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->audio_response), &(rhs->audio_response)))
  {
    return false;
  }
  // slots
  if (!lex_common_msgs__msg__KeyValue__Sequence__are_equal(
      &(lhs->slots), &(rhs->slots)))
  {
    return false;
  }
  // intent_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->intent_name), &(rhs->intent_name)))
  {
    return false;
  }
  // message_format_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message_format_type), &(rhs->message_format_type)))
  {
    return false;
  }
  // dialog_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->dialog_state), &(rhs->dialog_state)))
  {
    return false;
  }
  // error_code
  if (lhs->error_code != rhs->error_code) {
    return false;
  }
  // error_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_message), &(rhs->error_message)))
  {
    return false;
  }
  return true;
}

bool
lex_common_msgs__srv__AudioTextConversation_Response__copy(
  const lex_common_msgs__srv__AudioTextConversation_Response * input,
  lex_common_msgs__srv__AudioTextConversation_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // text_response
  if (!rosidl_runtime_c__String__copy(
      &(input->text_response), &(output->text_response)))
  {
    return false;
  }
  // audio_response
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->audio_response), &(output->audio_response)))
  {
    return false;
  }
  // slots
  if (!lex_common_msgs__msg__KeyValue__Sequence__copy(
      &(input->slots), &(output->slots)))
  {
    return false;
  }
  // intent_name
  if (!rosidl_runtime_c__String__copy(
      &(input->intent_name), &(output->intent_name)))
  {
    return false;
  }
  // message_format_type
  if (!rosidl_runtime_c__String__copy(
      &(input->message_format_type), &(output->message_format_type)))
  {
    return false;
  }
  // dialog_state
  if (!rosidl_runtime_c__String__copy(
      &(input->dialog_state), &(output->dialog_state)))
  {
    return false;
  }
  // error_code
  output->error_code = input->error_code;
  // error_message
  if (!rosidl_runtime_c__String__copy(
      &(input->error_message), &(output->error_message)))
  {
    return false;
  }
  return true;
}

lex_common_msgs__srv__AudioTextConversation_Response *
lex_common_msgs__srv__AudioTextConversation_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lex_common_msgs__srv__AudioTextConversation_Response * msg = (lex_common_msgs__srv__AudioTextConversation_Response *)allocator.allocate(sizeof(lex_common_msgs__srv__AudioTextConversation_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lex_common_msgs__srv__AudioTextConversation_Response));
  bool success = lex_common_msgs__srv__AudioTextConversation_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lex_common_msgs__srv__AudioTextConversation_Response__destroy(lex_common_msgs__srv__AudioTextConversation_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lex_common_msgs__srv__AudioTextConversation_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lex_common_msgs__srv__AudioTextConversation_Response__Sequence__init(lex_common_msgs__srv__AudioTextConversation_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lex_common_msgs__srv__AudioTextConversation_Response * data = NULL;

  if (size) {
    data = (lex_common_msgs__srv__AudioTextConversation_Response *)allocator.zero_allocate(size, sizeof(lex_common_msgs__srv__AudioTextConversation_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lex_common_msgs__srv__AudioTextConversation_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lex_common_msgs__srv__AudioTextConversation_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
lex_common_msgs__srv__AudioTextConversation_Response__Sequence__fini(lex_common_msgs__srv__AudioTextConversation_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      lex_common_msgs__srv__AudioTextConversation_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

lex_common_msgs__srv__AudioTextConversation_Response__Sequence *
lex_common_msgs__srv__AudioTextConversation_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lex_common_msgs__srv__AudioTextConversation_Response__Sequence * array = (lex_common_msgs__srv__AudioTextConversation_Response__Sequence *)allocator.allocate(sizeof(lex_common_msgs__srv__AudioTextConversation_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lex_common_msgs__srv__AudioTextConversation_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lex_common_msgs__srv__AudioTextConversation_Response__Sequence__destroy(lex_common_msgs__srv__AudioTextConversation_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lex_common_msgs__srv__AudioTextConversation_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lex_common_msgs__srv__AudioTextConversation_Response__Sequence__are_equal(const lex_common_msgs__srv__AudioTextConversation_Response__Sequence * lhs, const lex_common_msgs__srv__AudioTextConversation_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lex_common_msgs__srv__AudioTextConversation_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lex_common_msgs__srv__AudioTextConversation_Response__Sequence__copy(
  const lex_common_msgs__srv__AudioTextConversation_Response__Sequence * input,
  lex_common_msgs__srv__AudioTextConversation_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lex_common_msgs__srv__AudioTextConversation_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lex_common_msgs__srv__AudioTextConversation_Response * data =
      (lex_common_msgs__srv__AudioTextConversation_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lex_common_msgs__srv__AudioTextConversation_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lex_common_msgs__srv__AudioTextConversation_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lex_common_msgs__srv__AudioTextConversation_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
