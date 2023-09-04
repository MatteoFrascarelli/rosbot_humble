// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_action:action/Concatenate.idl
// generated code does not contain a copyright notice
#include "custom_action/action/detail/concatenate__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
custom_action__action__Concatenate_Goal__init(custom_action__action__Concatenate_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // num_concatenations
  return true;
}

void
custom_action__action__Concatenate_Goal__fini(custom_action__action__Concatenate_Goal * msg)
{
  if (!msg) {
    return;
  }
  // num_concatenations
}

bool
custom_action__action__Concatenate_Goal__are_equal(const custom_action__action__Concatenate_Goal * lhs, const custom_action__action__Concatenate_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // num_concatenations
  if (lhs->num_concatenations != rhs->num_concatenations) {
    return false;
  }
  return true;
}

bool
custom_action__action__Concatenate_Goal__copy(
  const custom_action__action__Concatenate_Goal * input,
  custom_action__action__Concatenate_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // num_concatenations
  output->num_concatenations = input->num_concatenations;
  return true;
}

custom_action__action__Concatenate_Goal *
custom_action__action__Concatenate_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_action__action__Concatenate_Goal * msg = (custom_action__action__Concatenate_Goal *)allocator.allocate(sizeof(custom_action__action__Concatenate_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_action__action__Concatenate_Goal));
  bool success = custom_action__action__Concatenate_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_action__action__Concatenate_Goal__destroy(custom_action__action__Concatenate_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_action__action__Concatenate_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_action__action__Concatenate_Goal__Sequence__init(custom_action__action__Concatenate_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_action__action__Concatenate_Goal * data = NULL;

  if (size) {
    data = (custom_action__action__Concatenate_Goal *)allocator.zero_allocate(size, sizeof(custom_action__action__Concatenate_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_action__action__Concatenate_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_action__action__Concatenate_Goal__fini(&data[i - 1]);
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
custom_action__action__Concatenate_Goal__Sequence__fini(custom_action__action__Concatenate_Goal__Sequence * array)
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
      custom_action__action__Concatenate_Goal__fini(&array->data[i]);
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

custom_action__action__Concatenate_Goal__Sequence *
custom_action__action__Concatenate_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_action__action__Concatenate_Goal__Sequence * array = (custom_action__action__Concatenate_Goal__Sequence *)allocator.allocate(sizeof(custom_action__action__Concatenate_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_action__action__Concatenate_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_action__action__Concatenate_Goal__Sequence__destroy(custom_action__action__Concatenate_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_action__action__Concatenate_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_action__action__Concatenate_Goal__Sequence__are_equal(const custom_action__action__Concatenate_Goal__Sequence * lhs, const custom_action__action__Concatenate_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_action__action__Concatenate_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_action__action__Concatenate_Goal__Sequence__copy(
  const custom_action__action__Concatenate_Goal__Sequence * input,
  custom_action__action__Concatenate_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_action__action__Concatenate_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_action__action__Concatenate_Goal * data =
      (custom_action__action__Concatenate_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_action__action__Concatenate_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_action__action__Concatenate_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_action__action__Concatenate_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `final_concatenation`
#include "rosidl_runtime_c/string_functions.h"

bool
custom_action__action__Concatenate_Result__init(custom_action__action__Concatenate_Result * msg)
{
  if (!msg) {
    return false;
  }
  // final_concatenation
  if (!rosidl_runtime_c__String__init(&msg->final_concatenation)) {
    custom_action__action__Concatenate_Result__fini(msg);
    return false;
  }
  return true;
}

void
custom_action__action__Concatenate_Result__fini(custom_action__action__Concatenate_Result * msg)
{
  if (!msg) {
    return;
  }
  // final_concatenation
  rosidl_runtime_c__String__fini(&msg->final_concatenation);
}

bool
custom_action__action__Concatenate_Result__are_equal(const custom_action__action__Concatenate_Result * lhs, const custom_action__action__Concatenate_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // final_concatenation
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->final_concatenation), &(rhs->final_concatenation)))
  {
    return false;
  }
  return true;
}

bool
custom_action__action__Concatenate_Result__copy(
  const custom_action__action__Concatenate_Result * input,
  custom_action__action__Concatenate_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // final_concatenation
  if (!rosidl_runtime_c__String__copy(
      &(input->final_concatenation), &(output->final_concatenation)))
  {
    return false;
  }
  return true;
}

custom_action__action__Concatenate_Result *
custom_action__action__Concatenate_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_action__action__Concatenate_Result * msg = (custom_action__action__Concatenate_Result *)allocator.allocate(sizeof(custom_action__action__Concatenate_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_action__action__Concatenate_Result));
  bool success = custom_action__action__Concatenate_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_action__action__Concatenate_Result__destroy(custom_action__action__Concatenate_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_action__action__Concatenate_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_action__action__Concatenate_Result__Sequence__init(custom_action__action__Concatenate_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_action__action__Concatenate_Result * data = NULL;

  if (size) {
    data = (custom_action__action__Concatenate_Result *)allocator.zero_allocate(size, sizeof(custom_action__action__Concatenate_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_action__action__Concatenate_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_action__action__Concatenate_Result__fini(&data[i - 1]);
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
custom_action__action__Concatenate_Result__Sequence__fini(custom_action__action__Concatenate_Result__Sequence * array)
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
      custom_action__action__Concatenate_Result__fini(&array->data[i]);
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

custom_action__action__Concatenate_Result__Sequence *
custom_action__action__Concatenate_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_action__action__Concatenate_Result__Sequence * array = (custom_action__action__Concatenate_Result__Sequence *)allocator.allocate(sizeof(custom_action__action__Concatenate_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_action__action__Concatenate_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_action__action__Concatenate_Result__Sequence__destroy(custom_action__action__Concatenate_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_action__action__Concatenate_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_action__action__Concatenate_Result__Sequence__are_equal(const custom_action__action__Concatenate_Result__Sequence * lhs, const custom_action__action__Concatenate_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_action__action__Concatenate_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_action__action__Concatenate_Result__Sequence__copy(
  const custom_action__action__Concatenate_Result__Sequence * input,
  custom_action__action__Concatenate_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_action__action__Concatenate_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_action__action__Concatenate_Result * data =
      (custom_action__action__Concatenate_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_action__action__Concatenate_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_action__action__Concatenate_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_action__action__Concatenate_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `partial_concatenation`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
custom_action__action__Concatenate_Feedback__init(custom_action__action__Concatenate_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // partial_concatenation
  if (!rosidl_runtime_c__String__init(&msg->partial_concatenation)) {
    custom_action__action__Concatenate_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
custom_action__action__Concatenate_Feedback__fini(custom_action__action__Concatenate_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // partial_concatenation
  rosidl_runtime_c__String__fini(&msg->partial_concatenation);
}

bool
custom_action__action__Concatenate_Feedback__are_equal(const custom_action__action__Concatenate_Feedback * lhs, const custom_action__action__Concatenate_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // partial_concatenation
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->partial_concatenation), &(rhs->partial_concatenation)))
  {
    return false;
  }
  return true;
}

bool
custom_action__action__Concatenate_Feedback__copy(
  const custom_action__action__Concatenate_Feedback * input,
  custom_action__action__Concatenate_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // partial_concatenation
  if (!rosidl_runtime_c__String__copy(
      &(input->partial_concatenation), &(output->partial_concatenation)))
  {
    return false;
  }
  return true;
}

custom_action__action__Concatenate_Feedback *
custom_action__action__Concatenate_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_action__action__Concatenate_Feedback * msg = (custom_action__action__Concatenate_Feedback *)allocator.allocate(sizeof(custom_action__action__Concatenate_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_action__action__Concatenate_Feedback));
  bool success = custom_action__action__Concatenate_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_action__action__Concatenate_Feedback__destroy(custom_action__action__Concatenate_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_action__action__Concatenate_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_action__action__Concatenate_Feedback__Sequence__init(custom_action__action__Concatenate_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_action__action__Concatenate_Feedback * data = NULL;

  if (size) {
    data = (custom_action__action__Concatenate_Feedback *)allocator.zero_allocate(size, sizeof(custom_action__action__Concatenate_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_action__action__Concatenate_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_action__action__Concatenate_Feedback__fini(&data[i - 1]);
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
custom_action__action__Concatenate_Feedback__Sequence__fini(custom_action__action__Concatenate_Feedback__Sequence * array)
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
      custom_action__action__Concatenate_Feedback__fini(&array->data[i]);
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

custom_action__action__Concatenate_Feedback__Sequence *
custom_action__action__Concatenate_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_action__action__Concatenate_Feedback__Sequence * array = (custom_action__action__Concatenate_Feedback__Sequence *)allocator.allocate(sizeof(custom_action__action__Concatenate_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_action__action__Concatenate_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_action__action__Concatenate_Feedback__Sequence__destroy(custom_action__action__Concatenate_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_action__action__Concatenate_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_action__action__Concatenate_Feedback__Sequence__are_equal(const custom_action__action__Concatenate_Feedback__Sequence * lhs, const custom_action__action__Concatenate_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_action__action__Concatenate_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_action__action__Concatenate_Feedback__Sequence__copy(
  const custom_action__action__Concatenate_Feedback__Sequence * input,
  custom_action__action__Concatenate_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_action__action__Concatenate_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_action__action__Concatenate_Feedback * data =
      (custom_action__action__Concatenate_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_action__action__Concatenate_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_action__action__Concatenate_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_action__action__Concatenate_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "custom_action/action/detail/concatenate__functions.h"

bool
custom_action__action__Concatenate_SendGoal_Request__init(custom_action__action__Concatenate_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    custom_action__action__Concatenate_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!custom_action__action__Concatenate_Goal__init(&msg->goal)) {
    custom_action__action__Concatenate_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
custom_action__action__Concatenate_SendGoal_Request__fini(custom_action__action__Concatenate_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  custom_action__action__Concatenate_Goal__fini(&msg->goal);
}

bool
custom_action__action__Concatenate_SendGoal_Request__are_equal(const custom_action__action__Concatenate_SendGoal_Request * lhs, const custom_action__action__Concatenate_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!custom_action__action__Concatenate_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
custom_action__action__Concatenate_SendGoal_Request__copy(
  const custom_action__action__Concatenate_SendGoal_Request * input,
  custom_action__action__Concatenate_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!custom_action__action__Concatenate_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

custom_action__action__Concatenate_SendGoal_Request *
custom_action__action__Concatenate_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_action__action__Concatenate_SendGoal_Request * msg = (custom_action__action__Concatenate_SendGoal_Request *)allocator.allocate(sizeof(custom_action__action__Concatenate_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_action__action__Concatenate_SendGoal_Request));
  bool success = custom_action__action__Concatenate_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_action__action__Concatenate_SendGoal_Request__destroy(custom_action__action__Concatenate_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_action__action__Concatenate_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_action__action__Concatenate_SendGoal_Request__Sequence__init(custom_action__action__Concatenate_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_action__action__Concatenate_SendGoal_Request * data = NULL;

  if (size) {
    data = (custom_action__action__Concatenate_SendGoal_Request *)allocator.zero_allocate(size, sizeof(custom_action__action__Concatenate_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_action__action__Concatenate_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_action__action__Concatenate_SendGoal_Request__fini(&data[i - 1]);
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
custom_action__action__Concatenate_SendGoal_Request__Sequence__fini(custom_action__action__Concatenate_SendGoal_Request__Sequence * array)
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
      custom_action__action__Concatenate_SendGoal_Request__fini(&array->data[i]);
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

custom_action__action__Concatenate_SendGoal_Request__Sequence *
custom_action__action__Concatenate_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_action__action__Concatenate_SendGoal_Request__Sequence * array = (custom_action__action__Concatenate_SendGoal_Request__Sequence *)allocator.allocate(sizeof(custom_action__action__Concatenate_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_action__action__Concatenate_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_action__action__Concatenate_SendGoal_Request__Sequence__destroy(custom_action__action__Concatenate_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_action__action__Concatenate_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_action__action__Concatenate_SendGoal_Request__Sequence__are_equal(const custom_action__action__Concatenate_SendGoal_Request__Sequence * lhs, const custom_action__action__Concatenate_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_action__action__Concatenate_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_action__action__Concatenate_SendGoal_Request__Sequence__copy(
  const custom_action__action__Concatenate_SendGoal_Request__Sequence * input,
  custom_action__action__Concatenate_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_action__action__Concatenate_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_action__action__Concatenate_SendGoal_Request * data =
      (custom_action__action__Concatenate_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_action__action__Concatenate_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_action__action__Concatenate_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_action__action__Concatenate_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
custom_action__action__Concatenate_SendGoal_Response__init(custom_action__action__Concatenate_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    custom_action__action__Concatenate_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
custom_action__action__Concatenate_SendGoal_Response__fini(custom_action__action__Concatenate_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
custom_action__action__Concatenate_SendGoal_Response__are_equal(const custom_action__action__Concatenate_SendGoal_Response * lhs, const custom_action__action__Concatenate_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
custom_action__action__Concatenate_SendGoal_Response__copy(
  const custom_action__action__Concatenate_SendGoal_Response * input,
  custom_action__action__Concatenate_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

custom_action__action__Concatenate_SendGoal_Response *
custom_action__action__Concatenate_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_action__action__Concatenate_SendGoal_Response * msg = (custom_action__action__Concatenate_SendGoal_Response *)allocator.allocate(sizeof(custom_action__action__Concatenate_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_action__action__Concatenate_SendGoal_Response));
  bool success = custom_action__action__Concatenate_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_action__action__Concatenate_SendGoal_Response__destroy(custom_action__action__Concatenate_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_action__action__Concatenate_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_action__action__Concatenate_SendGoal_Response__Sequence__init(custom_action__action__Concatenate_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_action__action__Concatenate_SendGoal_Response * data = NULL;

  if (size) {
    data = (custom_action__action__Concatenate_SendGoal_Response *)allocator.zero_allocate(size, sizeof(custom_action__action__Concatenate_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_action__action__Concatenate_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_action__action__Concatenate_SendGoal_Response__fini(&data[i - 1]);
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
custom_action__action__Concatenate_SendGoal_Response__Sequence__fini(custom_action__action__Concatenate_SendGoal_Response__Sequence * array)
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
      custom_action__action__Concatenate_SendGoal_Response__fini(&array->data[i]);
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

custom_action__action__Concatenate_SendGoal_Response__Sequence *
custom_action__action__Concatenate_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_action__action__Concatenate_SendGoal_Response__Sequence * array = (custom_action__action__Concatenate_SendGoal_Response__Sequence *)allocator.allocate(sizeof(custom_action__action__Concatenate_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_action__action__Concatenate_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_action__action__Concatenate_SendGoal_Response__Sequence__destroy(custom_action__action__Concatenate_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_action__action__Concatenate_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_action__action__Concatenate_SendGoal_Response__Sequence__are_equal(const custom_action__action__Concatenate_SendGoal_Response__Sequence * lhs, const custom_action__action__Concatenate_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_action__action__Concatenate_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_action__action__Concatenate_SendGoal_Response__Sequence__copy(
  const custom_action__action__Concatenate_SendGoal_Response__Sequence * input,
  custom_action__action__Concatenate_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_action__action__Concatenate_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_action__action__Concatenate_SendGoal_Response * data =
      (custom_action__action__Concatenate_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_action__action__Concatenate_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_action__action__Concatenate_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_action__action__Concatenate_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
custom_action__action__Concatenate_GetResult_Request__init(custom_action__action__Concatenate_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    custom_action__action__Concatenate_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
custom_action__action__Concatenate_GetResult_Request__fini(custom_action__action__Concatenate_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
custom_action__action__Concatenate_GetResult_Request__are_equal(const custom_action__action__Concatenate_GetResult_Request * lhs, const custom_action__action__Concatenate_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
custom_action__action__Concatenate_GetResult_Request__copy(
  const custom_action__action__Concatenate_GetResult_Request * input,
  custom_action__action__Concatenate_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

custom_action__action__Concatenate_GetResult_Request *
custom_action__action__Concatenate_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_action__action__Concatenate_GetResult_Request * msg = (custom_action__action__Concatenate_GetResult_Request *)allocator.allocate(sizeof(custom_action__action__Concatenate_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_action__action__Concatenate_GetResult_Request));
  bool success = custom_action__action__Concatenate_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_action__action__Concatenate_GetResult_Request__destroy(custom_action__action__Concatenate_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_action__action__Concatenate_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_action__action__Concatenate_GetResult_Request__Sequence__init(custom_action__action__Concatenate_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_action__action__Concatenate_GetResult_Request * data = NULL;

  if (size) {
    data = (custom_action__action__Concatenate_GetResult_Request *)allocator.zero_allocate(size, sizeof(custom_action__action__Concatenate_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_action__action__Concatenate_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_action__action__Concatenate_GetResult_Request__fini(&data[i - 1]);
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
custom_action__action__Concatenate_GetResult_Request__Sequence__fini(custom_action__action__Concatenate_GetResult_Request__Sequence * array)
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
      custom_action__action__Concatenate_GetResult_Request__fini(&array->data[i]);
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

custom_action__action__Concatenate_GetResult_Request__Sequence *
custom_action__action__Concatenate_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_action__action__Concatenate_GetResult_Request__Sequence * array = (custom_action__action__Concatenate_GetResult_Request__Sequence *)allocator.allocate(sizeof(custom_action__action__Concatenate_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_action__action__Concatenate_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_action__action__Concatenate_GetResult_Request__Sequence__destroy(custom_action__action__Concatenate_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_action__action__Concatenate_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_action__action__Concatenate_GetResult_Request__Sequence__are_equal(const custom_action__action__Concatenate_GetResult_Request__Sequence * lhs, const custom_action__action__Concatenate_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_action__action__Concatenate_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_action__action__Concatenate_GetResult_Request__Sequence__copy(
  const custom_action__action__Concatenate_GetResult_Request__Sequence * input,
  custom_action__action__Concatenate_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_action__action__Concatenate_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_action__action__Concatenate_GetResult_Request * data =
      (custom_action__action__Concatenate_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_action__action__Concatenate_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_action__action__Concatenate_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_action__action__Concatenate_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "custom_action/action/detail/concatenate__functions.h"

bool
custom_action__action__Concatenate_GetResult_Response__init(custom_action__action__Concatenate_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!custom_action__action__Concatenate_Result__init(&msg->result)) {
    custom_action__action__Concatenate_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
custom_action__action__Concatenate_GetResult_Response__fini(custom_action__action__Concatenate_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  custom_action__action__Concatenate_Result__fini(&msg->result);
}

bool
custom_action__action__Concatenate_GetResult_Response__are_equal(const custom_action__action__Concatenate_GetResult_Response * lhs, const custom_action__action__Concatenate_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!custom_action__action__Concatenate_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
custom_action__action__Concatenate_GetResult_Response__copy(
  const custom_action__action__Concatenate_GetResult_Response * input,
  custom_action__action__Concatenate_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!custom_action__action__Concatenate_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

custom_action__action__Concatenate_GetResult_Response *
custom_action__action__Concatenate_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_action__action__Concatenate_GetResult_Response * msg = (custom_action__action__Concatenate_GetResult_Response *)allocator.allocate(sizeof(custom_action__action__Concatenate_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_action__action__Concatenate_GetResult_Response));
  bool success = custom_action__action__Concatenate_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_action__action__Concatenate_GetResult_Response__destroy(custom_action__action__Concatenate_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_action__action__Concatenate_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_action__action__Concatenate_GetResult_Response__Sequence__init(custom_action__action__Concatenate_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_action__action__Concatenate_GetResult_Response * data = NULL;

  if (size) {
    data = (custom_action__action__Concatenate_GetResult_Response *)allocator.zero_allocate(size, sizeof(custom_action__action__Concatenate_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_action__action__Concatenate_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_action__action__Concatenate_GetResult_Response__fini(&data[i - 1]);
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
custom_action__action__Concatenate_GetResult_Response__Sequence__fini(custom_action__action__Concatenate_GetResult_Response__Sequence * array)
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
      custom_action__action__Concatenate_GetResult_Response__fini(&array->data[i]);
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

custom_action__action__Concatenate_GetResult_Response__Sequence *
custom_action__action__Concatenate_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_action__action__Concatenate_GetResult_Response__Sequence * array = (custom_action__action__Concatenate_GetResult_Response__Sequence *)allocator.allocate(sizeof(custom_action__action__Concatenate_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_action__action__Concatenate_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_action__action__Concatenate_GetResult_Response__Sequence__destroy(custom_action__action__Concatenate_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_action__action__Concatenate_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_action__action__Concatenate_GetResult_Response__Sequence__are_equal(const custom_action__action__Concatenate_GetResult_Response__Sequence * lhs, const custom_action__action__Concatenate_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_action__action__Concatenate_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_action__action__Concatenate_GetResult_Response__Sequence__copy(
  const custom_action__action__Concatenate_GetResult_Response__Sequence * input,
  custom_action__action__Concatenate_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_action__action__Concatenate_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_action__action__Concatenate_GetResult_Response * data =
      (custom_action__action__Concatenate_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_action__action__Concatenate_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_action__action__Concatenate_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_action__action__Concatenate_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "custom_action/action/detail/concatenate__functions.h"

bool
custom_action__action__Concatenate_FeedbackMessage__init(custom_action__action__Concatenate_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    custom_action__action__Concatenate_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!custom_action__action__Concatenate_Feedback__init(&msg->feedback)) {
    custom_action__action__Concatenate_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
custom_action__action__Concatenate_FeedbackMessage__fini(custom_action__action__Concatenate_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  custom_action__action__Concatenate_Feedback__fini(&msg->feedback);
}

bool
custom_action__action__Concatenate_FeedbackMessage__are_equal(const custom_action__action__Concatenate_FeedbackMessage * lhs, const custom_action__action__Concatenate_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!custom_action__action__Concatenate_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
custom_action__action__Concatenate_FeedbackMessage__copy(
  const custom_action__action__Concatenate_FeedbackMessage * input,
  custom_action__action__Concatenate_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!custom_action__action__Concatenate_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

custom_action__action__Concatenate_FeedbackMessage *
custom_action__action__Concatenate_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_action__action__Concatenate_FeedbackMessage * msg = (custom_action__action__Concatenate_FeedbackMessage *)allocator.allocate(sizeof(custom_action__action__Concatenate_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_action__action__Concatenate_FeedbackMessage));
  bool success = custom_action__action__Concatenate_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_action__action__Concatenate_FeedbackMessage__destroy(custom_action__action__Concatenate_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_action__action__Concatenate_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_action__action__Concatenate_FeedbackMessage__Sequence__init(custom_action__action__Concatenate_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_action__action__Concatenate_FeedbackMessage * data = NULL;

  if (size) {
    data = (custom_action__action__Concatenate_FeedbackMessage *)allocator.zero_allocate(size, sizeof(custom_action__action__Concatenate_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_action__action__Concatenate_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_action__action__Concatenate_FeedbackMessage__fini(&data[i - 1]);
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
custom_action__action__Concatenate_FeedbackMessage__Sequence__fini(custom_action__action__Concatenate_FeedbackMessage__Sequence * array)
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
      custom_action__action__Concatenate_FeedbackMessage__fini(&array->data[i]);
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

custom_action__action__Concatenate_FeedbackMessage__Sequence *
custom_action__action__Concatenate_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_action__action__Concatenate_FeedbackMessage__Sequence * array = (custom_action__action__Concatenate_FeedbackMessage__Sequence *)allocator.allocate(sizeof(custom_action__action__Concatenate_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_action__action__Concatenate_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_action__action__Concatenate_FeedbackMessage__Sequence__destroy(custom_action__action__Concatenate_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_action__action__Concatenate_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_action__action__Concatenate_FeedbackMessage__Sequence__are_equal(const custom_action__action__Concatenate_FeedbackMessage__Sequence * lhs, const custom_action__action__Concatenate_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_action__action__Concatenate_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_action__action__Concatenate_FeedbackMessage__Sequence__copy(
  const custom_action__action__Concatenate_FeedbackMessage__Sequence * input,
  custom_action__action__Concatenate_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_action__action__Concatenate_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_action__action__Concatenate_FeedbackMessage * data =
      (custom_action__action__Concatenate_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_action__action__Concatenate_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_action__action__Concatenate_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_action__action__Concatenate_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}