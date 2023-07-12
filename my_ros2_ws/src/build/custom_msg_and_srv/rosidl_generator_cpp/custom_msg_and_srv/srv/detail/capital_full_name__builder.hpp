// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msg_and_srv:srv/CapitalFullName.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG_AND_SRV__SRV__DETAIL__CAPITAL_FULL_NAME__BUILDER_HPP_
#define CUSTOM_MSG_AND_SRV__SRV__DETAIL__CAPITAL_FULL_NAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msg_and_srv/srv/detail/capital_full_name__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msg_and_srv
{

namespace srv
{

namespace builder
{

class Init_CapitalFullName_Request_surname
{
public:
  explicit Init_CapitalFullName_Request_surname(::custom_msg_and_srv::srv::CapitalFullName_Request & msg)
  : msg_(msg)
  {}
  ::custom_msg_and_srv::srv::CapitalFullName_Request surname(::custom_msg_and_srv::srv::CapitalFullName_Request::_surname_type arg)
  {
    msg_.surname = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msg_and_srv::srv::CapitalFullName_Request msg_;
};

class Init_CapitalFullName_Request_name
{
public:
  Init_CapitalFullName_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CapitalFullName_Request_surname name(::custom_msg_and_srv::srv::CapitalFullName_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_CapitalFullName_Request_surname(msg_);
  }

private:
  ::custom_msg_and_srv::srv::CapitalFullName_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msg_and_srv::srv::CapitalFullName_Request>()
{
  return custom_msg_and_srv::srv::builder::Init_CapitalFullName_Request_name();
}

}  // namespace custom_msg_and_srv


namespace custom_msg_and_srv
{

namespace srv
{

namespace builder
{

class Init_CapitalFullName_Response_capitalfullname
{
public:
  Init_CapitalFullName_Response_capitalfullname()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_msg_and_srv::srv::CapitalFullName_Response capitalfullname(::custom_msg_and_srv::srv::CapitalFullName_Response::_capitalfullname_type arg)
  {
    msg_.capitalfullname = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msg_and_srv::srv::CapitalFullName_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msg_and_srv::srv::CapitalFullName_Response>()
{
  return custom_msg_and_srv::srv::builder::Init_CapitalFullName_Response_capitalfullname();
}

}  // namespace custom_msg_and_srv

#endif  // CUSTOM_MSG_AND_SRV__SRV__DETAIL__CAPITAL_FULL_NAME__BUILDER_HPP_
