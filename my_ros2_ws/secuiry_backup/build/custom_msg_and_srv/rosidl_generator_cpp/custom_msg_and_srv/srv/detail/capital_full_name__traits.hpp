// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msg_and_srv:srv/CapitalFullName.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG_AND_SRV__SRV__DETAIL__CAPITAL_FULL_NAME__TRAITS_HPP_
#define CUSTOM_MSG_AND_SRV__SRV__DETAIL__CAPITAL_FULL_NAME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_msg_and_srv/srv/detail/capital_full_name__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_msg_and_srv
{

namespace srv
{

inline void to_flow_style_yaml(
  const CapitalFullName_Request & msg,
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CapitalFullName_Request & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CapitalFullName_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custom_msg_and_srv

namespace rosidl_generator_traits
{

[[deprecated("use custom_msg_and_srv::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_msg_and_srv::srv::CapitalFullName_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_msg_and_srv::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_msg_and_srv::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_msg_and_srv::srv::CapitalFullName_Request & msg)
{
  return custom_msg_and_srv::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_msg_and_srv::srv::CapitalFullName_Request>()
{
  return "custom_msg_and_srv::srv::CapitalFullName_Request";
}

template<>
inline const char * name<custom_msg_and_srv::srv::CapitalFullName_Request>()
{
  return "custom_msg_and_srv/srv/CapitalFullName_Request";
}

template<>
struct has_fixed_size<custom_msg_and_srv::srv::CapitalFullName_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_msg_and_srv::srv::CapitalFullName_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_msg_and_srv::srv::CapitalFullName_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace custom_msg_and_srv
{

namespace srv
{

inline void to_flow_style_yaml(
  const CapitalFullName_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: capitalfullname
  {
    out << "capitalfullname: ";
    rosidl_generator_traits::value_to_yaml(msg.capitalfullname, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CapitalFullName_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: capitalfullname
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "capitalfullname: ";
    rosidl_generator_traits::value_to_yaml(msg.capitalfullname, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CapitalFullName_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custom_msg_and_srv

namespace rosidl_generator_traits
{

[[deprecated("use custom_msg_and_srv::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_msg_and_srv::srv::CapitalFullName_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_msg_and_srv::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_msg_and_srv::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_msg_and_srv::srv::CapitalFullName_Response & msg)
{
  return custom_msg_and_srv::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_msg_and_srv::srv::CapitalFullName_Response>()
{
  return "custom_msg_and_srv::srv::CapitalFullName_Response";
}

template<>
inline const char * name<custom_msg_and_srv::srv::CapitalFullName_Response>()
{
  return "custom_msg_and_srv/srv/CapitalFullName_Response";
}

template<>
struct has_fixed_size<custom_msg_and_srv::srv::CapitalFullName_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_msg_and_srv::srv::CapitalFullName_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_msg_and_srv::srv::CapitalFullName_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_msg_and_srv::srv::CapitalFullName>()
{
  return "custom_msg_and_srv::srv::CapitalFullName";
}

template<>
inline const char * name<custom_msg_and_srv::srv::CapitalFullName>()
{
  return "custom_msg_and_srv/srv/CapitalFullName";
}

template<>
struct has_fixed_size<custom_msg_and_srv::srv::CapitalFullName>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_msg_and_srv::srv::CapitalFullName_Request>::value &&
    has_fixed_size<custom_msg_and_srv::srv::CapitalFullName_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_msg_and_srv::srv::CapitalFullName>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_msg_and_srv::srv::CapitalFullName_Request>::value &&
    has_bounded_size<custom_msg_and_srv::srv::CapitalFullName_Response>::value
  >
{
};

template<>
struct is_service<custom_msg_and_srv::srv::CapitalFullName>
  : std::true_type
{
};

template<>
struct is_service_request<custom_msg_and_srv::srv::CapitalFullName_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_msg_and_srv::srv::CapitalFullName_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSG_AND_SRV__SRV__DETAIL__CAPITAL_FULL_NAME__TRAITS_HPP_
