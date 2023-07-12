// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from publisher_and_subscriber:msg/EmployeeSalary.idl
// generated code does not contain a copyright notice

#ifndef PUBLISHER_AND_SUBSCRIBER__MSG__DETAIL__EMPLOYEE_SALARY__STRUCT_H_
#define PUBLISHER_AND_SUBSCRIBER__MSG__DETAIL__EMPLOYEE_SALARY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'surname'
// Member 'tasks'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/EmployeeSalary in the package publisher_and_subscriber.
/**
  * tasks is an array up to three strings
 */
typedef struct publisher_and_subscriber__msg__EmployeeSalary
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String surname;
  rosidl_runtime_c__String tasks[3];
  int16_t salary;
} publisher_and_subscriber__msg__EmployeeSalary;

// Struct for a sequence of publisher_and_subscriber__msg__EmployeeSalary.
typedef struct publisher_and_subscriber__msg__EmployeeSalary__Sequence
{
  publisher_and_subscriber__msg__EmployeeSalary * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} publisher_and_subscriber__msg__EmployeeSalary__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PUBLISHER_AND_SUBSCRIBER__MSG__DETAIL__EMPLOYEE_SALARY__STRUCT_H_
