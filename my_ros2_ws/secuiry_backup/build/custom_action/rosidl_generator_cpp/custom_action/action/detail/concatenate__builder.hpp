// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_action:action/Concatenate.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_ACTION__ACTION__DETAIL__CONCATENATE__BUILDER_HPP_
#define CUSTOM_ACTION__ACTION__DETAIL__CONCATENATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_action/action/detail/concatenate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_action
{

namespace action
{

namespace builder
{

class Init_Concatenate_Goal_num_concatenations
{
public:
  Init_Concatenate_Goal_num_concatenations()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_action::action::Concatenate_Goal num_concatenations(::custom_action::action::Concatenate_Goal::_num_concatenations_type arg)
  {
    msg_.num_concatenations = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_action::action::Concatenate_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_action::action::Concatenate_Goal>()
{
  return custom_action::action::builder::Init_Concatenate_Goal_num_concatenations();
}

}  // namespace custom_action


namespace custom_action
{

namespace action
{

namespace builder
{

class Init_Concatenate_Result_final_concatenation
{
public:
  Init_Concatenate_Result_final_concatenation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_action::action::Concatenate_Result final_concatenation(::custom_action::action::Concatenate_Result::_final_concatenation_type arg)
  {
    msg_.final_concatenation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_action::action::Concatenate_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_action::action::Concatenate_Result>()
{
  return custom_action::action::builder::Init_Concatenate_Result_final_concatenation();
}

}  // namespace custom_action


namespace custom_action
{

namespace action
{

namespace builder
{

class Init_Concatenate_Feedback_partial_concatenation
{
public:
  Init_Concatenate_Feedback_partial_concatenation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_action::action::Concatenate_Feedback partial_concatenation(::custom_action::action::Concatenate_Feedback::_partial_concatenation_type arg)
  {
    msg_.partial_concatenation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_action::action::Concatenate_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_action::action::Concatenate_Feedback>()
{
  return custom_action::action::builder::Init_Concatenate_Feedback_partial_concatenation();
}

}  // namespace custom_action


namespace custom_action
{

namespace action
{

namespace builder
{

class Init_Concatenate_SendGoal_Request_goal
{
public:
  explicit Init_Concatenate_SendGoal_Request_goal(::custom_action::action::Concatenate_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::custom_action::action::Concatenate_SendGoal_Request goal(::custom_action::action::Concatenate_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_action::action::Concatenate_SendGoal_Request msg_;
};

class Init_Concatenate_SendGoal_Request_goal_id
{
public:
  Init_Concatenate_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Concatenate_SendGoal_Request_goal goal_id(::custom_action::action::Concatenate_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Concatenate_SendGoal_Request_goal(msg_);
  }

private:
  ::custom_action::action::Concatenate_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_action::action::Concatenate_SendGoal_Request>()
{
  return custom_action::action::builder::Init_Concatenate_SendGoal_Request_goal_id();
}

}  // namespace custom_action


namespace custom_action
{

namespace action
{

namespace builder
{

class Init_Concatenate_SendGoal_Response_stamp
{
public:
  explicit Init_Concatenate_SendGoal_Response_stamp(::custom_action::action::Concatenate_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::custom_action::action::Concatenate_SendGoal_Response stamp(::custom_action::action::Concatenate_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_action::action::Concatenate_SendGoal_Response msg_;
};

class Init_Concatenate_SendGoal_Response_accepted
{
public:
  Init_Concatenate_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Concatenate_SendGoal_Response_stamp accepted(::custom_action::action::Concatenate_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Concatenate_SendGoal_Response_stamp(msg_);
  }

private:
  ::custom_action::action::Concatenate_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_action::action::Concatenate_SendGoal_Response>()
{
  return custom_action::action::builder::Init_Concatenate_SendGoal_Response_accepted();
}

}  // namespace custom_action


namespace custom_action
{

namespace action
{

namespace builder
{

class Init_Concatenate_GetResult_Request_goal_id
{
public:
  Init_Concatenate_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_action::action::Concatenate_GetResult_Request goal_id(::custom_action::action::Concatenate_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_action::action::Concatenate_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_action::action::Concatenate_GetResult_Request>()
{
  return custom_action::action::builder::Init_Concatenate_GetResult_Request_goal_id();
}

}  // namespace custom_action


namespace custom_action
{

namespace action
{

namespace builder
{

class Init_Concatenate_GetResult_Response_result
{
public:
  explicit Init_Concatenate_GetResult_Response_result(::custom_action::action::Concatenate_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::custom_action::action::Concatenate_GetResult_Response result(::custom_action::action::Concatenate_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_action::action::Concatenate_GetResult_Response msg_;
};

class Init_Concatenate_GetResult_Response_status
{
public:
  Init_Concatenate_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Concatenate_GetResult_Response_result status(::custom_action::action::Concatenate_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Concatenate_GetResult_Response_result(msg_);
  }

private:
  ::custom_action::action::Concatenate_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_action::action::Concatenate_GetResult_Response>()
{
  return custom_action::action::builder::Init_Concatenate_GetResult_Response_status();
}

}  // namespace custom_action


namespace custom_action
{

namespace action
{

namespace builder
{

class Init_Concatenate_FeedbackMessage_feedback
{
public:
  explicit Init_Concatenate_FeedbackMessage_feedback(::custom_action::action::Concatenate_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::custom_action::action::Concatenate_FeedbackMessage feedback(::custom_action::action::Concatenate_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_action::action::Concatenate_FeedbackMessage msg_;
};

class Init_Concatenate_FeedbackMessage_goal_id
{
public:
  Init_Concatenate_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Concatenate_FeedbackMessage_feedback goal_id(::custom_action::action::Concatenate_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Concatenate_FeedbackMessage_feedback(msg_);
  }

private:
  ::custom_action::action::Concatenate_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_action::action::Concatenate_FeedbackMessage>()
{
  return custom_action::action::builder::Init_Concatenate_FeedbackMessage_goal_id();
}

}  // namespace custom_action

#endif  // CUSTOM_ACTION__ACTION__DETAIL__CONCATENATE__BUILDER_HPP_
