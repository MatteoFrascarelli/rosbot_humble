// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from publisher_and_subscriber:msg/EmployeeSalary.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "publisher_and_subscriber/msg/detail/employee_salary__rosidl_typesupport_introspection_c.h"
#include "publisher_and_subscriber/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "publisher_and_subscriber/msg/detail/employee_salary__functions.h"
#include "publisher_and_subscriber/msg/detail/employee_salary__struct.h"


// Include directives for member types
// Member `name`
// Member `surname`
// Member `tasks`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void publisher_and_subscriber__msg__EmployeeSalary__rosidl_typesupport_introspection_c__EmployeeSalary_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  publisher_and_subscriber__msg__EmployeeSalary__init(message_memory);
}

void publisher_and_subscriber__msg__EmployeeSalary__rosidl_typesupport_introspection_c__EmployeeSalary_fini_function(void * message_memory)
{
  publisher_and_subscriber__msg__EmployeeSalary__fini(message_memory);
}

size_t publisher_and_subscriber__msg__EmployeeSalary__rosidl_typesupport_introspection_c__size_function__EmployeeSalary__tasks(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * publisher_and_subscriber__msg__EmployeeSalary__rosidl_typesupport_introspection_c__get_const_function__EmployeeSalary__tasks(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String * member =
    (const rosidl_runtime_c__String *)(untyped_member);
  return &member[index];
}

void * publisher_and_subscriber__msg__EmployeeSalary__rosidl_typesupport_introspection_c__get_function__EmployeeSalary__tasks(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String * member =
    (rosidl_runtime_c__String *)(untyped_member);
  return &member[index];
}

void publisher_and_subscriber__msg__EmployeeSalary__rosidl_typesupport_introspection_c__fetch_function__EmployeeSalary__tasks(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    publisher_and_subscriber__msg__EmployeeSalary__rosidl_typesupport_introspection_c__get_const_function__EmployeeSalary__tasks(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void publisher_and_subscriber__msg__EmployeeSalary__rosidl_typesupport_introspection_c__assign_function__EmployeeSalary__tasks(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    publisher_and_subscriber__msg__EmployeeSalary__rosidl_typesupport_introspection_c__get_function__EmployeeSalary__tasks(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember publisher_and_subscriber__msg__EmployeeSalary__rosidl_typesupport_introspection_c__EmployeeSalary_message_member_array[4] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(publisher_and_subscriber__msg__EmployeeSalary, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "surname",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(publisher_and_subscriber__msg__EmployeeSalary, surname),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tasks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(publisher_and_subscriber__msg__EmployeeSalary, tasks),  // bytes offset in struct
    NULL,  // default value
    publisher_and_subscriber__msg__EmployeeSalary__rosidl_typesupport_introspection_c__size_function__EmployeeSalary__tasks,  // size() function pointer
    publisher_and_subscriber__msg__EmployeeSalary__rosidl_typesupport_introspection_c__get_const_function__EmployeeSalary__tasks,  // get_const(index) function pointer
    publisher_and_subscriber__msg__EmployeeSalary__rosidl_typesupport_introspection_c__get_function__EmployeeSalary__tasks,  // get(index) function pointer
    publisher_and_subscriber__msg__EmployeeSalary__rosidl_typesupport_introspection_c__fetch_function__EmployeeSalary__tasks,  // fetch(index, &value) function pointer
    publisher_and_subscriber__msg__EmployeeSalary__rosidl_typesupport_introspection_c__assign_function__EmployeeSalary__tasks,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "salary",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(publisher_and_subscriber__msg__EmployeeSalary, salary),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers publisher_and_subscriber__msg__EmployeeSalary__rosidl_typesupport_introspection_c__EmployeeSalary_message_members = {
  "publisher_and_subscriber__msg",  // message namespace
  "EmployeeSalary",  // message name
  4,  // number of fields
  sizeof(publisher_and_subscriber__msg__EmployeeSalary),
  publisher_and_subscriber__msg__EmployeeSalary__rosidl_typesupport_introspection_c__EmployeeSalary_message_member_array,  // message members
  publisher_and_subscriber__msg__EmployeeSalary__rosidl_typesupport_introspection_c__EmployeeSalary_init_function,  // function to initialize message memory (memory has to be allocated)
  publisher_and_subscriber__msg__EmployeeSalary__rosidl_typesupport_introspection_c__EmployeeSalary_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t publisher_and_subscriber__msg__EmployeeSalary__rosidl_typesupport_introspection_c__EmployeeSalary_message_type_support_handle = {
  0,
  &publisher_and_subscriber__msg__EmployeeSalary__rosidl_typesupport_introspection_c__EmployeeSalary_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_publisher_and_subscriber
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, publisher_and_subscriber, msg, EmployeeSalary)() {
  if (!publisher_and_subscriber__msg__EmployeeSalary__rosidl_typesupport_introspection_c__EmployeeSalary_message_type_support_handle.typesupport_identifier) {
    publisher_and_subscriber__msg__EmployeeSalary__rosidl_typesupport_introspection_c__EmployeeSalary_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &publisher_and_subscriber__msg__EmployeeSalary__rosidl_typesupport_introspection_c__EmployeeSalary_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
