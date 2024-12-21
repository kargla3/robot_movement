// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from movement_info_msgs:msg/MovementInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "movement_info_msgs/msg/detail/movement_info__rosidl_typesupport_introspection_c.h"
#include "movement_info_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "movement_info_msgs/msg/detail/movement_info__functions.h"
#include "movement_info_msgs/msg/detail/movement_info__struct.h"


// Include directives for member types
// Member `movement`
// Member `heading`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void movement_info_msgs__msg__MovementInfo__rosidl_typesupport_introspection_c__MovementInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  movement_info_msgs__msg__MovementInfo__init(message_memory);
}

void movement_info_msgs__msg__MovementInfo__rosidl_typesupport_introspection_c__MovementInfo_fini_function(void * message_memory)
{
  movement_info_msgs__msg__MovementInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember movement_info_msgs__msg__MovementInfo__rosidl_typesupport_introspection_c__MovementInfo_message_member_array[2] = {
  {
    "movement",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(movement_info_msgs__msg__MovementInfo, movement),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heading",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(movement_info_msgs__msg__MovementInfo, heading),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers movement_info_msgs__msg__MovementInfo__rosidl_typesupport_introspection_c__MovementInfo_message_members = {
  "movement_info_msgs__msg",  // message namespace
  "MovementInfo",  // message name
  2,  // number of fields
  sizeof(movement_info_msgs__msg__MovementInfo),
  movement_info_msgs__msg__MovementInfo__rosidl_typesupport_introspection_c__MovementInfo_message_member_array,  // message members
  movement_info_msgs__msg__MovementInfo__rosidl_typesupport_introspection_c__MovementInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  movement_info_msgs__msg__MovementInfo__rosidl_typesupport_introspection_c__MovementInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t movement_info_msgs__msg__MovementInfo__rosidl_typesupport_introspection_c__MovementInfo_message_type_support_handle = {
  0,
  &movement_info_msgs__msg__MovementInfo__rosidl_typesupport_introspection_c__MovementInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_movement_info_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, movement_info_msgs, msg, MovementInfo)() {
  if (!movement_info_msgs__msg__MovementInfo__rosidl_typesupport_introspection_c__MovementInfo_message_type_support_handle.typesupport_identifier) {
    movement_info_msgs__msg__MovementInfo__rosidl_typesupport_introspection_c__MovementInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &movement_info_msgs__msg__MovementInfo__rosidl_typesupport_introspection_c__MovementInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
