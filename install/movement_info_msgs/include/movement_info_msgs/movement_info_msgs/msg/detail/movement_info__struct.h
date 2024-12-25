// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from movement_info_msgs:msg/MovementInfo.idl
// generated code does not contain a copyright notice

#ifndef MOVEMENT_INFO_MSGS__MSG__DETAIL__MOVEMENT_INFO__STRUCT_H_
#define MOVEMENT_INFO_MSGS__MSG__DETAIL__MOVEMENT_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FORWARD'.
static const char * const movement_info_msgs__msg__MovementInfo__FORWARD = "forward";

/// Constant 'BACKWARD'.
static const char * const movement_info_msgs__msg__MovementInfo__BACKWARD = "backward";

/// Constant 'STANDSTILL'.
static const char * const movement_info_msgs__msg__MovementInfo__STANDSTILL = "standstill";

/// Constant 'LEFT'.
/**
  * enums for movement heading
 */
static const char * const movement_info_msgs__msg__MovementInfo__LEFT = "left";

/// Constant 'RIGHT'.
static const char * const movement_info_msgs__msg__MovementInfo__RIGHT = "right";

/// Constant 'STRAIGHT'.
static const char * const movement_info_msgs__msg__MovementInfo__STRAIGHT = "straight";

// Include directives for member types
// Member 'movement'
// Member 'heading'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MovementInfo in the package movement_info_msgs.
/**
  * enums for movement direction
 */
typedef struct movement_info_msgs__msg__MovementInfo
{
  /// defines movement direction: FORWARD, BACKWARD, STANDSTILL
  rosidl_runtime_c__String movement;
  /// defines heading direction: LEFT, RIGHT, STRAIGHT
  rosidl_runtime_c__String heading;
} movement_info_msgs__msg__MovementInfo;

// Struct for a sequence of movement_info_msgs__msg__MovementInfo.
typedef struct movement_info_msgs__msg__MovementInfo__Sequence
{
  movement_info_msgs__msg__MovementInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} movement_info_msgs__msg__MovementInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEMENT_INFO_MSGS__MSG__DETAIL__MOVEMENT_INFO__STRUCT_H_
