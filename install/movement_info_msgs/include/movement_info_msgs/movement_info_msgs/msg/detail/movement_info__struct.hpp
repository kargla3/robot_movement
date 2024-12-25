// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from movement_info_msgs:msg/MovementInfo.idl
// generated code does not contain a copyright notice

#ifndef MOVEMENT_INFO_MSGS__MSG__DETAIL__MOVEMENT_INFO__STRUCT_HPP_
#define MOVEMENT_INFO_MSGS__MSG__DETAIL__MOVEMENT_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__movement_info_msgs__msg__MovementInfo __attribute__((deprecated))
#else
# define DEPRECATED__movement_info_msgs__msg__MovementInfo __declspec(deprecated)
#endif

namespace movement_info_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MovementInfo_
{
  using Type = MovementInfo_<ContainerAllocator>;

  explicit MovementInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->movement = "";
      this->heading = "";
    }
  }

  explicit MovementInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : movement(_alloc),
    heading(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->movement = "";
      this->heading = "";
    }
  }

  // field types and members
  using _movement_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _movement_type movement;
  using _heading_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _heading_type heading;

  // setters for named parameter idiom
  Type & set__movement(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->movement = _arg;
    return *this;
  }
  Type & set__heading(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->heading = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> FORWARD;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> BACKWARD;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> STANDSTILL;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> LEFT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> RIGHT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> STRAIGHT;

  // pointer types
  using RawPtr =
    movement_info_msgs::msg::MovementInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const movement_info_msgs::msg::MovementInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<movement_info_msgs::msg::MovementInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<movement_info_msgs::msg::MovementInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      movement_info_msgs::msg::MovementInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<movement_info_msgs::msg::MovementInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      movement_info_msgs::msg::MovementInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<movement_info_msgs::msg::MovementInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<movement_info_msgs::msg::MovementInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<movement_info_msgs::msg::MovementInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__movement_info_msgs__msg__MovementInfo
    std::shared_ptr<movement_info_msgs::msg::MovementInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__movement_info_msgs__msg__MovementInfo
    std::shared_ptr<movement_info_msgs::msg::MovementInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MovementInfo_ & other) const
  {
    if (this->movement != other.movement) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    return true;
  }
  bool operator!=(const MovementInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MovementInfo_

// alias to use template instance with default allocator
using MovementInfo =
  movement_info_msgs::msg::MovementInfo_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
MovementInfo_<ContainerAllocator>::FORWARD = "forward";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
MovementInfo_<ContainerAllocator>::BACKWARD = "backward";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
MovementInfo_<ContainerAllocator>::STANDSTILL = "standstill";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
MovementInfo_<ContainerAllocator>::LEFT = "left";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
MovementInfo_<ContainerAllocator>::RIGHT = "right";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
MovementInfo_<ContainerAllocator>::STRAIGHT = "straight";

}  // namespace msg

}  // namespace movement_info_msgs

#endif  // MOVEMENT_INFO_MSGS__MSG__DETAIL__MOVEMENT_INFO__STRUCT_HPP_
