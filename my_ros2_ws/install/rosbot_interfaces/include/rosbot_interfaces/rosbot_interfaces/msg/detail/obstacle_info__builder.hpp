// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosbot_interfaces:msg/ObstacleInfo.idl
// generated code does not contain a copyright notice

#ifndef ROSBOT_INTERFACES__MSG__DETAIL__OBSTACLE_INFO__BUILDER_HPP_
#define ROSBOT_INTERFACES__MSG__DETAIL__OBSTACLE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosbot_interfaces/msg/detail/obstacle_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosbot_interfaces
{

namespace msg
{

namespace builder
{

class Init_ObstacleInfo_frame_id
{
public:
  explicit Init_ObstacleInfo_frame_id(::rosbot_interfaces::msg::ObstacleInfo & msg)
  : msg_(msg)
  {}
  ::rosbot_interfaces::msg::ObstacleInfo frame_id(::rosbot_interfaces::msg::ObstacleInfo::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosbot_interfaces::msg::ObstacleInfo msg_;
};

class Init_ObstacleInfo_area
{
public:
  explicit Init_ObstacleInfo_area(::rosbot_interfaces::msg::ObstacleInfo & msg)
  : msg_(msg)
  {}
  Init_ObstacleInfo_frame_id area(::rosbot_interfaces::msg::ObstacleInfo::_area_type arg)
  {
    msg_.area = std::move(arg);
    return Init_ObstacleInfo_frame_id(msg_);
  }

private:
  ::rosbot_interfaces::msg::ObstacleInfo msg_;
};

class Init_ObstacleInfo_position
{
public:
  explicit Init_ObstacleInfo_position(::rosbot_interfaces::msg::ObstacleInfo & msg)
  : msg_(msg)
  {}
  Init_ObstacleInfo_area position(::rosbot_interfaces::msg::ObstacleInfo::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_ObstacleInfo_area(msg_);
  }

private:
  ::rosbot_interfaces::msg::ObstacleInfo msg_;
};

class Init_ObstacleInfo_shape
{
public:
  explicit Init_ObstacleInfo_shape(::rosbot_interfaces::msg::ObstacleInfo & msg)
  : msg_(msg)
  {}
  Init_ObstacleInfo_position shape(::rosbot_interfaces::msg::ObstacleInfo::_shape_type arg)
  {
    msg_.shape = std::move(arg);
    return Init_ObstacleInfo_position(msg_);
  }

private:
  ::rosbot_interfaces::msg::ObstacleInfo msg_;
};

class Init_ObstacleInfo_name
{
public:
  Init_ObstacleInfo_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObstacleInfo_shape name(::rosbot_interfaces::msg::ObstacleInfo::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ObstacleInfo_shape(msg_);
  }

private:
  ::rosbot_interfaces::msg::ObstacleInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosbot_interfaces::msg::ObstacleInfo>()
{
  return rosbot_interfaces::msg::builder::Init_ObstacleInfo_name();
}

}  // namespace rosbot_interfaces

#endif  // ROSBOT_INTERFACES__MSG__DETAIL__OBSTACLE_INFO__BUILDER_HPP_
