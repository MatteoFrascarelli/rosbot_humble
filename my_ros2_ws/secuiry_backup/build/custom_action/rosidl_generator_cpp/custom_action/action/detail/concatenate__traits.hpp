// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_action:action/Concatenate.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_ACTION__ACTION__DETAIL__CONCATENATE__TRAITS_HPP_
#define CUSTOM_ACTION__ACTION__DETAIL__CONCATENATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_action/action/detail/concatenate__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_action
{

namespace action
{

inline void to_flow_style_yaml(
  const Concatenate_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: num_concatenations
  {
    out << "num_concatenations: ";
    rosidl_generator_traits::value_to_yaml(msg.num_concatenations, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Concatenate_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num_concatenations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_concatenations: ";
    rosidl_generator_traits::value_to_yaml(msg.num_concatenations, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Concatenate_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace custom_action

namespace rosidl_generator_traits
{

[[deprecated("use custom_action::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_action::action::Concatenate_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_action::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_action::action::to_yaml() instead")]]
inline std::string to_yaml(const custom_action::action::Concatenate_Goal & msg)
{
  return custom_action::action::to_yaml(msg);
}

template<>
inline const char * data_type<custom_action::action::Concatenate_Goal>()
{
  return "custom_action::action::Concatenate_Goal";
}

template<>
inline const char * name<custom_action::action::Concatenate_Goal>()
{
  return "custom_action/action/Concatenate_Goal";
}

template<>
struct has_fixed_size<custom_action::action::Concatenate_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_action::action::Concatenate_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_action::action::Concatenate_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace custom_action
{

namespace action
{

inline void to_flow_style_yaml(
  const Concatenate_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: final_concatenation
  {
    out << "final_concatenation: ";
    rosidl_generator_traits::value_to_yaml(msg.final_concatenation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Concatenate_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: final_concatenation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "final_concatenation: ";
    rosidl_generator_traits::value_to_yaml(msg.final_concatenation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Concatenate_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace custom_action

namespace rosidl_generator_traits
{

[[deprecated("use custom_action::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_action::action::Concatenate_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_action::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_action::action::to_yaml() instead")]]
inline std::string to_yaml(const custom_action::action::Concatenate_Result & msg)
{
  return custom_action::action::to_yaml(msg);
}

template<>
inline const char * data_type<custom_action::action::Concatenate_Result>()
{
  return "custom_action::action::Concatenate_Result";
}

template<>
inline const char * name<custom_action::action::Concatenate_Result>()
{
  return "custom_action/action/Concatenate_Result";
}

template<>
struct has_fixed_size<custom_action::action::Concatenate_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_action::action::Concatenate_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_action::action::Concatenate_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace custom_action
{

namespace action
{

inline void to_flow_style_yaml(
  const Concatenate_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: partial_concatenation
  {
    out << "partial_concatenation: ";
    rosidl_generator_traits::value_to_yaml(msg.partial_concatenation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Concatenate_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: partial_concatenation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "partial_concatenation: ";
    rosidl_generator_traits::value_to_yaml(msg.partial_concatenation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Concatenate_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace custom_action

namespace rosidl_generator_traits
{

[[deprecated("use custom_action::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_action::action::Concatenate_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_action::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_action::action::to_yaml() instead")]]
inline std::string to_yaml(const custom_action::action::Concatenate_Feedback & msg)
{
  return custom_action::action::to_yaml(msg);
}

template<>
inline const char * data_type<custom_action::action::Concatenate_Feedback>()
{
  return "custom_action::action::Concatenate_Feedback";
}

template<>
inline const char * name<custom_action::action::Concatenate_Feedback>()
{
  return "custom_action/action/Concatenate_Feedback";
}

template<>
struct has_fixed_size<custom_action::action::Concatenate_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_action::action::Concatenate_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_action::action::Concatenate_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "custom_action/action/detail/concatenate__traits.hpp"

namespace custom_action
{

namespace action
{

inline void to_flow_style_yaml(
  const Concatenate_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Concatenate_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Concatenate_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace custom_action

namespace rosidl_generator_traits
{

[[deprecated("use custom_action::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_action::action::Concatenate_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_action::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_action::action::to_yaml() instead")]]
inline std::string to_yaml(const custom_action::action::Concatenate_SendGoal_Request & msg)
{
  return custom_action::action::to_yaml(msg);
}

template<>
inline const char * data_type<custom_action::action::Concatenate_SendGoal_Request>()
{
  return "custom_action::action::Concatenate_SendGoal_Request";
}

template<>
inline const char * name<custom_action::action::Concatenate_SendGoal_Request>()
{
  return "custom_action/action/Concatenate_SendGoal_Request";
}

template<>
struct has_fixed_size<custom_action::action::Concatenate_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<custom_action::action::Concatenate_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<custom_action::action::Concatenate_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<custom_action::action::Concatenate_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<custom_action::action::Concatenate_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace custom_action
{

namespace action
{

inline void to_flow_style_yaml(
  const Concatenate_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Concatenate_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Concatenate_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace custom_action

namespace rosidl_generator_traits
{

[[deprecated("use custom_action::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_action::action::Concatenate_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_action::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_action::action::to_yaml() instead")]]
inline std::string to_yaml(const custom_action::action::Concatenate_SendGoal_Response & msg)
{
  return custom_action::action::to_yaml(msg);
}

template<>
inline const char * data_type<custom_action::action::Concatenate_SendGoal_Response>()
{
  return "custom_action::action::Concatenate_SendGoal_Response";
}

template<>
inline const char * name<custom_action::action::Concatenate_SendGoal_Response>()
{
  return "custom_action/action/Concatenate_SendGoal_Response";
}

template<>
struct has_fixed_size<custom_action::action::Concatenate_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<custom_action::action::Concatenate_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<custom_action::action::Concatenate_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_action::action::Concatenate_SendGoal>()
{
  return "custom_action::action::Concatenate_SendGoal";
}

template<>
inline const char * name<custom_action::action::Concatenate_SendGoal>()
{
  return "custom_action/action/Concatenate_SendGoal";
}

template<>
struct has_fixed_size<custom_action::action::Concatenate_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_action::action::Concatenate_SendGoal_Request>::value &&
    has_fixed_size<custom_action::action::Concatenate_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_action::action::Concatenate_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_action::action::Concatenate_SendGoal_Request>::value &&
    has_bounded_size<custom_action::action::Concatenate_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<custom_action::action::Concatenate_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<custom_action::action::Concatenate_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_action::action::Concatenate_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace custom_action
{

namespace action
{

inline void to_flow_style_yaml(
  const Concatenate_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Concatenate_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Concatenate_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace custom_action

namespace rosidl_generator_traits
{

[[deprecated("use custom_action::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_action::action::Concatenate_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_action::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_action::action::to_yaml() instead")]]
inline std::string to_yaml(const custom_action::action::Concatenate_GetResult_Request & msg)
{
  return custom_action::action::to_yaml(msg);
}

template<>
inline const char * data_type<custom_action::action::Concatenate_GetResult_Request>()
{
  return "custom_action::action::Concatenate_GetResult_Request";
}

template<>
inline const char * name<custom_action::action::Concatenate_GetResult_Request>()
{
  return "custom_action/action/Concatenate_GetResult_Request";
}

template<>
struct has_fixed_size<custom_action::action::Concatenate_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<custom_action::action::Concatenate_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<custom_action::action::Concatenate_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "custom_action/action/detail/concatenate__traits.hpp"

namespace custom_action
{

namespace action
{

inline void to_flow_style_yaml(
  const Concatenate_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Concatenate_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Concatenate_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace custom_action

namespace rosidl_generator_traits
{

[[deprecated("use custom_action::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_action::action::Concatenate_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_action::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_action::action::to_yaml() instead")]]
inline std::string to_yaml(const custom_action::action::Concatenate_GetResult_Response & msg)
{
  return custom_action::action::to_yaml(msg);
}

template<>
inline const char * data_type<custom_action::action::Concatenate_GetResult_Response>()
{
  return "custom_action::action::Concatenate_GetResult_Response";
}

template<>
inline const char * name<custom_action::action::Concatenate_GetResult_Response>()
{
  return "custom_action/action/Concatenate_GetResult_Response";
}

template<>
struct has_fixed_size<custom_action::action::Concatenate_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<custom_action::action::Concatenate_Result>::value> {};

template<>
struct has_bounded_size<custom_action::action::Concatenate_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<custom_action::action::Concatenate_Result>::value> {};

template<>
struct is_message<custom_action::action::Concatenate_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_action::action::Concatenate_GetResult>()
{
  return "custom_action::action::Concatenate_GetResult";
}

template<>
inline const char * name<custom_action::action::Concatenate_GetResult>()
{
  return "custom_action/action/Concatenate_GetResult";
}

template<>
struct has_fixed_size<custom_action::action::Concatenate_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_action::action::Concatenate_GetResult_Request>::value &&
    has_fixed_size<custom_action::action::Concatenate_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_action::action::Concatenate_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_action::action::Concatenate_GetResult_Request>::value &&
    has_bounded_size<custom_action::action::Concatenate_GetResult_Response>::value
  >
{
};

template<>
struct is_service<custom_action::action::Concatenate_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<custom_action::action::Concatenate_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_action::action::Concatenate_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "custom_action/action/detail/concatenate__traits.hpp"

namespace custom_action
{

namespace action
{

inline void to_flow_style_yaml(
  const Concatenate_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Concatenate_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Concatenate_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace custom_action

namespace rosidl_generator_traits
{

[[deprecated("use custom_action::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_action::action::Concatenate_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_action::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_action::action::to_yaml() instead")]]
inline std::string to_yaml(const custom_action::action::Concatenate_FeedbackMessage & msg)
{
  return custom_action::action::to_yaml(msg);
}

template<>
inline const char * data_type<custom_action::action::Concatenate_FeedbackMessage>()
{
  return "custom_action::action::Concatenate_FeedbackMessage";
}

template<>
inline const char * name<custom_action::action::Concatenate_FeedbackMessage>()
{
  return "custom_action/action/Concatenate_FeedbackMessage";
}

template<>
struct has_fixed_size<custom_action::action::Concatenate_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<custom_action::action::Concatenate_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<custom_action::action::Concatenate_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<custom_action::action::Concatenate_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<custom_action::action::Concatenate_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<custom_action::action::Concatenate>
  : std::true_type
{
};

template<>
struct is_action_goal<custom_action::action::Concatenate_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<custom_action::action::Concatenate_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<custom_action::action::Concatenate_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // CUSTOM_ACTION__ACTION__DETAIL__CONCATENATE__TRAITS_HPP_
