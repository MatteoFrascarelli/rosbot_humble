// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosbot_interfaces:msg/ObstacleInfo.idl
// generated code does not contain a copyright notice

#ifndef ROSBOT_INTERFACES__MSG__DETAIL__OBSTACLE_INFO__TRAITS_HPP_
#define ROSBOT_INTERFACES__MSG__DETAIL__OBSTACLE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rosbot_interfaces/msg/detail/obstacle_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/pose2_d__traits.hpp"

namespace rosbot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObstacleInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: shape
  {
    out << "shape: ";
    rosidl_generator_traits::value_to_yaml(msg.shape, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: area
  {
    out << "area: ";
    rosidl_generator_traits::value_to_yaml(msg.area, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObstacleInfo & msg,
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

  // member: shape
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shape: ";
    rosidl_generator_traits::value_to_yaml(msg.shape, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: area
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area: ";
    rosidl_generator_traits::value_to_yaml(msg.area, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObstacleInfo & msg, bool use_flow_style = false)
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

}  // namespace rosbot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use rosbot_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rosbot_interfaces::msg::ObstacleInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  rosbot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rosbot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const rosbot_interfaces::msg::ObstacleInfo & msg)
{
  return rosbot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rosbot_interfaces::msg::ObstacleInfo>()
{
  return "rosbot_interfaces::msg::ObstacleInfo";
}

template<>
inline const char * name<rosbot_interfaces::msg::ObstacleInfo>()
{
  return "rosbot_interfaces/msg/ObstacleInfo";
}

template<>
struct has_fixed_size<rosbot_interfaces::msg::ObstacleInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosbot_interfaces::msg::ObstacleInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosbot_interfaces::msg::ObstacleInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSBOT_INTERFACES__MSG__DETAIL__OBSTACLE_INFO__TRAITS_HPP_
