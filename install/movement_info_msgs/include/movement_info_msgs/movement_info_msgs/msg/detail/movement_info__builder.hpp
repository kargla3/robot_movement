// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from movement_info_msgs:msg/MovementInfo.idl
// generated code does not contain a copyright notice

#ifndef MOVEMENT_INFO_MSGS__MSG__DETAIL__MOVEMENT_INFO__BUILDER_HPP_
#define MOVEMENT_INFO_MSGS__MSG__DETAIL__MOVEMENT_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "movement_info_msgs/msg/detail/movement_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace movement_info_msgs
{

namespace msg
{

namespace builder
{

class Init_MovementInfo_heading
{
public:
  explicit Init_MovementInfo_heading(::movement_info_msgs::msg::MovementInfo & msg)
  : msg_(msg)
  {}
  ::movement_info_msgs::msg::MovementInfo heading(::movement_info_msgs::msg::MovementInfo::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return std::move(msg_);
  }

private:
  ::movement_info_msgs::msg::MovementInfo msg_;
};

class Init_MovementInfo_movement
{
public:
  Init_MovementInfo_movement()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MovementInfo_heading movement(::movement_info_msgs::msg::MovementInfo::_movement_type arg)
  {
    msg_.movement = std::move(arg);
    return Init_MovementInfo_heading(msg_);
  }

private:
  ::movement_info_msgs::msg::MovementInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::movement_info_msgs::msg::MovementInfo>()
{
  return movement_info_msgs::msg::builder::Init_MovementInfo_movement();
}

}  // namespace movement_info_msgs

#endif  // MOVEMENT_INFO_MSGS__MSG__DETAIL__MOVEMENT_INFO__BUILDER_HPP_
