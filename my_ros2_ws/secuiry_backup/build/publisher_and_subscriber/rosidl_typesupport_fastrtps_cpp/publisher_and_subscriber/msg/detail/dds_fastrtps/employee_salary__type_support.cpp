// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from publisher_and_subscriber:msg/EmployeeSalary.idl
// generated code does not contain a copyright notice
#include "publisher_and_subscriber/msg/detail/employee_salary__rosidl_typesupport_fastrtps_cpp.hpp"
#include "publisher_and_subscriber/msg/detail/employee_salary__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace publisher_and_subscriber
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_publisher_and_subscriber
cdr_serialize(
  const publisher_and_subscriber::msg::EmployeeSalary & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: name
  cdr << ros_message.name;
  // Member: surname
  cdr << ros_message.surname;
  // Member: tasks
  {
    cdr << ros_message.tasks;
  }
  // Member: salary
  cdr << ros_message.salary;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_publisher_and_subscriber
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  publisher_and_subscriber::msg::EmployeeSalary & ros_message)
{
  // Member: name
  cdr >> ros_message.name;

  // Member: surname
  cdr >> ros_message.surname;

  // Member: tasks
  {
    cdr >> ros_message.tasks;
  }

  // Member: salary
  cdr >> ros_message.salary;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_publisher_and_subscriber
get_serialized_size(
  const publisher_and_subscriber::msg::EmployeeSalary & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.name.size() + 1);
  // Member: surname
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.surname.size() + 1);
  // Member: tasks
  {
    size_t array_size = 3;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.tasks[index].size() + 1);
    }
  }
  // Member: salary
  {
    size_t item_size = sizeof(ros_message.salary);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_publisher_and_subscriber
max_serialized_size_EmployeeSalary(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: surname
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: tasks
  {
    size_t array_size = 3;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: salary
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static bool _EmployeeSalary__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const publisher_and_subscriber::msg::EmployeeSalary *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EmployeeSalary__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<publisher_and_subscriber::msg::EmployeeSalary *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EmployeeSalary__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const publisher_and_subscriber::msg::EmployeeSalary *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EmployeeSalary__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_EmployeeSalary(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _EmployeeSalary__callbacks = {
  "publisher_and_subscriber::msg",
  "EmployeeSalary",
  _EmployeeSalary__cdr_serialize,
  _EmployeeSalary__cdr_deserialize,
  _EmployeeSalary__get_serialized_size,
  _EmployeeSalary__max_serialized_size
};

static rosidl_message_type_support_t _EmployeeSalary__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EmployeeSalary__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace publisher_and_subscriber

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_publisher_and_subscriber
const rosidl_message_type_support_t *
get_message_type_support_handle<publisher_and_subscriber::msg::EmployeeSalary>()
{
  return &publisher_and_subscriber::msg::typesupport_fastrtps_cpp::_EmployeeSalary__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, publisher_and_subscriber, msg, EmployeeSalary)() {
  return &publisher_and_subscriber::msg::typesupport_fastrtps_cpp::_EmployeeSalary__handle;
}

#ifdef __cplusplus
}
#endif
