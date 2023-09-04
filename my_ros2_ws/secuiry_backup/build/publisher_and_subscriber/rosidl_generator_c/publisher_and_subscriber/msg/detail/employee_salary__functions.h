// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from publisher_and_subscriber:msg/EmployeeSalary.idl
// generated code does not contain a copyright notice

#ifndef PUBLISHER_AND_SUBSCRIBER__MSG__DETAIL__EMPLOYEE_SALARY__FUNCTIONS_H_
#define PUBLISHER_AND_SUBSCRIBER__MSG__DETAIL__EMPLOYEE_SALARY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "publisher_and_subscriber/msg/rosidl_generator_c__visibility_control.h"

#include "publisher_and_subscriber/msg/detail/employee_salary__struct.h"

/// Initialize msg/EmployeeSalary message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * publisher_and_subscriber__msg__EmployeeSalary
 * )) before or use
 * publisher_and_subscriber__msg__EmployeeSalary__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_publisher_and_subscriber
bool
publisher_and_subscriber__msg__EmployeeSalary__init(publisher_and_subscriber__msg__EmployeeSalary * msg);

/// Finalize msg/EmployeeSalary message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_publisher_and_subscriber
void
publisher_and_subscriber__msg__EmployeeSalary__fini(publisher_and_subscriber__msg__EmployeeSalary * msg);

/// Create msg/EmployeeSalary message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * publisher_and_subscriber__msg__EmployeeSalary__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_publisher_and_subscriber
publisher_and_subscriber__msg__EmployeeSalary *
publisher_and_subscriber__msg__EmployeeSalary__create();

/// Destroy msg/EmployeeSalary message.
/**
 * It calls
 * publisher_and_subscriber__msg__EmployeeSalary__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_publisher_and_subscriber
void
publisher_and_subscriber__msg__EmployeeSalary__destroy(publisher_and_subscriber__msg__EmployeeSalary * msg);

/// Check for msg/EmployeeSalary message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_publisher_and_subscriber
bool
publisher_and_subscriber__msg__EmployeeSalary__are_equal(const publisher_and_subscriber__msg__EmployeeSalary * lhs, const publisher_and_subscriber__msg__EmployeeSalary * rhs);

/// Copy a msg/EmployeeSalary message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_publisher_and_subscriber
bool
publisher_and_subscriber__msg__EmployeeSalary__copy(
  const publisher_and_subscriber__msg__EmployeeSalary * input,
  publisher_and_subscriber__msg__EmployeeSalary * output);

/// Initialize array of msg/EmployeeSalary messages.
/**
 * It allocates the memory for the number of elements and calls
 * publisher_and_subscriber__msg__EmployeeSalary__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_publisher_and_subscriber
bool
publisher_and_subscriber__msg__EmployeeSalary__Sequence__init(publisher_and_subscriber__msg__EmployeeSalary__Sequence * array, size_t size);

/// Finalize array of msg/EmployeeSalary messages.
/**
 * It calls
 * publisher_and_subscriber__msg__EmployeeSalary__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_publisher_and_subscriber
void
publisher_and_subscriber__msg__EmployeeSalary__Sequence__fini(publisher_and_subscriber__msg__EmployeeSalary__Sequence * array);

/// Create array of msg/EmployeeSalary messages.
/**
 * It allocates the memory for the array and calls
 * publisher_and_subscriber__msg__EmployeeSalary__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_publisher_and_subscriber
publisher_and_subscriber__msg__EmployeeSalary__Sequence *
publisher_and_subscriber__msg__EmployeeSalary__Sequence__create(size_t size);

/// Destroy array of msg/EmployeeSalary messages.
/**
 * It calls
 * publisher_and_subscriber__msg__EmployeeSalary__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_publisher_and_subscriber
void
publisher_and_subscriber__msg__EmployeeSalary__Sequence__destroy(publisher_and_subscriber__msg__EmployeeSalary__Sequence * array);

/// Check for msg/EmployeeSalary message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_publisher_and_subscriber
bool
publisher_and_subscriber__msg__EmployeeSalary__Sequence__are_equal(const publisher_and_subscriber__msg__EmployeeSalary__Sequence * lhs, const publisher_and_subscriber__msg__EmployeeSalary__Sequence * rhs);

/// Copy an array of msg/EmployeeSalary messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_publisher_and_subscriber
bool
publisher_and_subscriber__msg__EmployeeSalary__Sequence__copy(
  const publisher_and_subscriber__msg__EmployeeSalary__Sequence * input,
  publisher_and_subscriber__msg__EmployeeSalary__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PUBLISHER_AND_SUBSCRIBER__MSG__DETAIL__EMPLOYEE_SALARY__FUNCTIONS_H_
