// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from movement_info_msgs:msg/MovementInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "movement_info_msgs/msg/detail/movement_info__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace movement_info_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MovementInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) movement_info_msgs::msg::MovementInfo(_init);
}

void MovementInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<movement_info_msgs::msg::MovementInfo *>(message_memory);
  typed_message->~MovementInfo();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MovementInfo_message_member_array[2] = {
  {
    "movement",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(movement_info_msgs::msg::MovementInfo, movement),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "heading",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(movement_info_msgs::msg::MovementInfo, heading),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MovementInfo_message_members = {
  "movement_info_msgs::msg",  // message namespace
  "MovementInfo",  // message name
  2,  // number of fields
  sizeof(movement_info_msgs::msg::MovementInfo),
  MovementInfo_message_member_array,  // message members
  MovementInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  MovementInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MovementInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MovementInfo_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace movement_info_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<movement_info_msgs::msg::MovementInfo>()
{
  return &::movement_info_msgs::msg::rosidl_typesupport_introspection_cpp::MovementInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, movement_info_msgs, msg, MovementInfo)() {
  return &::movement_info_msgs::msg::rosidl_typesupport_introspection_cpp::MovementInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
