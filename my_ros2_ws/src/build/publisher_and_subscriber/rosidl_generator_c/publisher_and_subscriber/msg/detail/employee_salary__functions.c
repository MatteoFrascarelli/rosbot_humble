// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from publisher_and_subscriber:msg/EmployeeSalary.idl
// generated code does not contain a copyright notice
#include "publisher_and_subscriber/msg/detail/employee_salary__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `surname`
// Member `tasks`
#include "rosidl_runtime_c/string_functions.h"

bool
publisher_and_subscriber__msg__EmployeeSalary__init(publisher_and_subscriber__msg__EmployeeSalary * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    publisher_and_subscriber__msg__EmployeeSalary__fini(msg);
    return false;
  }
  // surname
  if (!rosidl_runtime_c__String__init(&msg->surname)) {
    publisher_and_subscriber__msg__EmployeeSalary__fini(msg);
    return false;
  }
  // tasks
  for (size_t i = 0; i < 3; ++i) {
    if (!rosidl_runtime_c__String__init(&msg->tasks[i])) {
      publisher_and_subscriber__msg__EmployeeSalary__fini(msg);
      return false;
    }
  }
  // salary
  return true;
}

void
publisher_and_subscriber__msg__EmployeeSalary__fini(publisher_and_subscriber__msg__EmployeeSalary * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // surname
  rosidl_runtime_c__String__fini(&msg->surname);
  // tasks
  for (size_t i = 0; i < 3; ++i) {
    rosidl_runtime_c__String__fini(&msg->tasks[i]);
  }
  // salary
}

bool
publisher_and_subscriber__msg__EmployeeSalary__are_equal(const publisher_and_subscriber__msg__EmployeeSalary * lhs, const publisher_and_subscriber__msg__EmployeeSalary * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // surname
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->surname), &(rhs->surname)))
  {
    return false;
  }
  // tasks
  for (size_t i = 0; i < 3; ++i) {
    if (!rosidl_runtime_c__String__are_equal(
        &(lhs->tasks[i]), &(rhs->tasks[i])))
    {
      return false;
    }
  }
  // salary
  if (lhs->salary != rhs->salary) {
    return false;
  }
  return true;
}

bool
publisher_and_subscriber__msg__EmployeeSalary__copy(
  const publisher_and_subscriber__msg__EmployeeSalary * input,
  publisher_and_subscriber__msg__EmployeeSalary * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // surname
  if (!rosidl_runtime_c__String__copy(
      &(input->surname), &(output->surname)))
  {
    return false;
  }
  // tasks
  for (size_t i = 0; i < 3; ++i) {
    if (!rosidl_runtime_c__String__copy(
        &(input->tasks[i]), &(output->tasks[i])))
    {
      return false;
    }
  }
  // salary
  output->salary = input->salary;
  return true;
}

publisher_and_subscriber__msg__EmployeeSalary *
publisher_and_subscriber__msg__EmployeeSalary__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  publisher_and_subscriber__msg__EmployeeSalary * msg = (publisher_and_subscriber__msg__EmployeeSalary *)allocator.allocate(sizeof(publisher_and_subscriber__msg__EmployeeSalary), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(publisher_and_subscriber__msg__EmployeeSalary));
  bool success = publisher_and_subscriber__msg__EmployeeSalary__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
publisher_and_subscriber__msg__EmployeeSalary__destroy(publisher_and_subscriber__msg__EmployeeSalary * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    publisher_and_subscriber__msg__EmployeeSalary__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
publisher_and_subscriber__msg__EmployeeSalary__Sequence__init(publisher_and_subscriber__msg__EmployeeSalary__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  publisher_and_subscriber__msg__EmployeeSalary * data = NULL;

  if (size) {
    data = (publisher_and_subscriber__msg__EmployeeSalary *)allocator.zero_allocate(size, sizeof(publisher_and_subscriber__msg__EmployeeSalary), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = publisher_and_subscriber__msg__EmployeeSalary__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        publisher_and_subscriber__msg__EmployeeSalary__fini(&data[i - 1]);
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
publisher_and_subscriber__msg__EmployeeSalary__Sequence__fini(publisher_and_subscriber__msg__EmployeeSalary__Sequence * array)
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
      publisher_and_subscriber__msg__EmployeeSalary__fini(&array->data[i]);
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

publisher_and_subscriber__msg__EmployeeSalary__Sequence *
publisher_and_subscriber__msg__EmployeeSalary__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  publisher_and_subscriber__msg__EmployeeSalary__Sequence * array = (publisher_and_subscriber__msg__EmployeeSalary__Sequence *)allocator.allocate(sizeof(publisher_and_subscriber__msg__EmployeeSalary__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = publisher_and_subscriber__msg__EmployeeSalary__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
publisher_and_subscriber__msg__EmployeeSalary__Sequence__destroy(publisher_and_subscriber__msg__EmployeeSalary__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    publisher_and_subscriber__msg__EmployeeSalary__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
publisher_and_subscriber__msg__EmployeeSalary__Sequence__are_equal(const publisher_and_subscriber__msg__EmployeeSalary__Sequence * lhs, const publisher_and_subscriber__msg__EmployeeSalary__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!publisher_and_subscriber__msg__EmployeeSalary__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
publisher_and_subscriber__msg__EmployeeSalary__Sequence__copy(
  const publisher_and_subscriber__msg__EmployeeSalary__Sequence * input,
  publisher_and_subscriber__msg__EmployeeSalary__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(publisher_and_subscriber__msg__EmployeeSalary);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    publisher_and_subscriber__msg__EmployeeSalary * data =
      (publisher_and_subscriber__msg__EmployeeSalary *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!publisher_and_subscriber__msg__EmployeeSalary__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          publisher_and_subscriber__msg__EmployeeSalary__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!publisher_and_subscriber__msg__EmployeeSalary__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
