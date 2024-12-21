// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from movement_info_msgs:msg/MovementInfo.idl
// generated code does not contain a copyright notice

#ifndef MOVEMENT_INFO_MSGS__MSG__DETAIL__MOVEMENT_INFO__TRAITS_HPP_
#define MOVEMENT_INFO_MSGS__MSG__DETAIL__MOVEMENT_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "movement_info_msgs/msg/detail/movement_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace movement_info_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MovementInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: movement
  {
    out << "movement: ";
    rosidl_generator_traits::value_to_yaml(msg.movement, out);
    out << ", ";
  }

  // member: heading
  {
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MovementInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: movement
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "movement: ";
    rosidl_generator_traits::value_to_yaml(msg.movement, out);
    out << "\n";
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MovementInfo & msg, bool use_flow_style = false)
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

}  // namespace movement_info_msgs

namespace rosidl_generator_traits
{

[[deprecated("use movement_info_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const movement_info_msgs::msg::MovementInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  movement_info_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use movement_info_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const movement_info_msgs::msg::MovementInfo & msg)
{
  return movement_info_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<movement_info_msgs::msg::MovementInfo>()
{
  return "movement_info_msgs::msg::MovementInfo";
}

template<>
inline const char * name<movement_info_msgs::msg::MovementInfo>()
{
  return "movement_info_msgs/msg/MovementInfo";
}

template<>
struct has_fixed_size<movement_info_msgs::msg::MovementInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<movement_info_msgs::msg::MovementInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<movement_info_msgs::msg::MovementInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEMENT_INFO_MSGS__MSG__DETAIL__MOVEMENT_INFO__TRAITS_HPP_
