// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from publisher_and_subscriber:msg/EmployeeSalary.idl
// generated code does not contain a copyright notice

#ifndef PUBLISHER_AND_SUBSCRIBER__MSG__DETAIL__EMPLOYEE_SALARY__TRAITS_HPP_
#define PUBLISHER_AND_SUBSCRIBER__MSG__DETAIL__EMPLOYEE_SALARY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "publisher_and_subscriber/msg/detail/employee_salary__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace publisher_and_subscriber
{

namespace msg
{

inline void to_flow_style_yaml(
  const EmployeeSalary & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: surname
  {
    out << "surname: ";
    rosidl_generator_traits::value_to_yaml(msg.surname, out);
    out << ", ";
  }

  // member: tasks
  {
    if (msg.tasks.size() == 0) {
      out << "tasks: []";
    } else {
      out << "tasks: [";
      size_t pending_items = msg.tasks.size();
      for (auto item : msg.tasks) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: salary
  {
    out << "salary: ";
    rosidl_generator_traits::value_to_yaml(msg.salary, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EmployeeSalary & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: surname
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "surname: ";
    rosidl_generator_traits::value_to_yaml(msg.surname, out);
    out << "\n";
  }

  // member: tasks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tasks.size() == 0) {
      out << "tasks: []\n";
    } else {
      out << "tasks:\n";
      for (auto item : msg.tasks) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: salary
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "salary: ";
    rosidl_generator_traits::value_to_yaml(msg.salary, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EmployeeSalary & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace publisher_and_subscriber

namespace rosidl_generator_traits
{

[[deprecated("use publisher_and_subscriber::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const publisher_and_subscriber::msg::EmployeeSalary & msg,
  std::ostream & out, size_t indentation = 0)
{
  publisher_and_subscriber::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use publisher_and_subscriber::msg::to_yaml() instead")]]
inline std::string to_yaml(const publisher_and_subscriber::msg::EmployeeSalary & msg)
{
  return publisher_and_subscriber::msg::to_yaml(msg);
}

template<>
inline const char * data_type<publisher_and_subscriber::msg::EmployeeSalary>()
{
  return "publisher_and_subscriber::msg::EmployeeSalary";
}

template<>
inline const char * name<publisher_and_subscriber::msg::EmployeeSalary>()
{
  return "publisher_and_subscriber/msg/EmployeeSalary";
}

template<>
struct has_fixed_size<publisher_and_subscriber::msg::EmployeeSalary>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<publisher_and_subscriber::msg::EmployeeSalary>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<publisher_and_subscriber::msg::EmployeeSalary>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PUBLISHER_AND_SUBSCRIBER__MSG__DETAIL__EMPLOYEE_SALARY__TRAITS_HPP_
