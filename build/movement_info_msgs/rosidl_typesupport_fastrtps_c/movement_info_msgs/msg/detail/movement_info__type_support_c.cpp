// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from movement_info_msgs:msg/MovementInfo.idl
// generated code does not contain a copyright notice
#include "movement_info_msgs/msg/detail/movement_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "movement_info_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "movement_info_msgs/msg/detail/movement_info__struct.h"
#include "movement_info_msgs/msg/detail/movement_info__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // heading, movement
#include "rosidl_runtime_c/string_functions.h"  // heading, movement

// forward declare type support functions


using _MovementInfo__ros_msg_type = movement_info_msgs__msg__MovementInfo;

static bool _MovementInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MovementInfo__ros_msg_type * ros_message = static_cast<const _MovementInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: movement
  {
    const rosidl_runtime_c__String * str = &ros_message->movement;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: heading
  {
    const rosidl_runtime_c__String * str = &ros_message->heading;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _MovementInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MovementInfo__ros_msg_type * ros_message = static_cast<_MovementInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: movement
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->movement.data) {
      rosidl_runtime_c__String__init(&ros_message->movement);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->movement,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'movement'\n");
      return false;
    }
  }

  // Field name: heading
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->heading.data) {
      rosidl_runtime_c__String__init(&ros_message->heading);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->heading,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'heading'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_movement_info_msgs
size_t get_serialized_size_movement_info_msgs__msg__MovementInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MovementInfo__ros_msg_type * ros_message = static_cast<const _MovementInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name movement
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->movement.size + 1);
  // field.name heading
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->heading.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _MovementInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_movement_info_msgs__msg__MovementInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_movement_info_msgs
size_t max_serialized_size_movement_info_msgs__msg__MovementInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: movement
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: heading
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = movement_info_msgs__msg__MovementInfo;
    is_plain =
      (
      offsetof(DataType, heading) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MovementInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_movement_info_msgs__msg__MovementInfo(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MovementInfo = {
  "movement_info_msgs::msg",
  "MovementInfo",
  _MovementInfo__cdr_serialize,
  _MovementInfo__cdr_deserialize,
  _MovementInfo__get_serialized_size,
  _MovementInfo__max_serialized_size
};

static rosidl_message_type_support_t _MovementInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MovementInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, movement_info_msgs, msg, MovementInfo)() {
  return &_MovementInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
