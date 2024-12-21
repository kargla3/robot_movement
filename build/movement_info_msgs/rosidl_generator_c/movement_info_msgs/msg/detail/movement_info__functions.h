// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from movement_info_msgs:msg/MovementInfo.idl
// generated code does not contain a copyright notice

#ifndef MOVEMENT_INFO_MSGS__MSG__DETAIL__MOVEMENT_INFO__FUNCTIONS_H_
#define MOVEMENT_INFO_MSGS__MSG__DETAIL__MOVEMENT_INFO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "movement_info_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "movement_info_msgs/msg/detail/movement_info__struct.h"

/// Initialize msg/MovementInfo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * movement_info_msgs__msg__MovementInfo
 * )) before or use
 * movement_info_msgs__msg__MovementInfo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_movement_info_msgs
bool
movement_info_msgs__msg__MovementInfo__init(movement_info_msgs__msg__MovementInfo * msg);

/// Finalize msg/MovementInfo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_movement_info_msgs
void
movement_info_msgs__msg__MovementInfo__fini(movement_info_msgs__msg__MovementInfo * msg);

/// Create msg/MovementInfo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * movement_info_msgs__msg__MovementInfo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_movement_info_msgs
movement_info_msgs__msg__MovementInfo *
movement_info_msgs__msg__MovementInfo__create();

/// Destroy msg/MovementInfo message.
/**
 * It calls
 * movement_info_msgs__msg__MovementInfo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_movement_info_msgs
void
movement_info_msgs__msg__MovementInfo__destroy(movement_info_msgs__msg__MovementInfo * msg);

/// Check for msg/MovementInfo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_movement_info_msgs
bool
movement_info_msgs__msg__MovementInfo__are_equal(const movement_info_msgs__msg__MovementInfo * lhs, const movement_info_msgs__msg__MovementInfo * rhs);

/// Copy a msg/MovementInfo message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_movement_info_msgs
bool
movement_info_msgs__msg__MovementInfo__copy(
  const movement_info_msgs__msg__MovementInfo * input,
  movement_info_msgs__msg__MovementInfo * output);

/// Initialize array of msg/MovementInfo messages.
/**
 * It allocates the memory for the number of elements and calls
 * movement_info_msgs__msg__MovementInfo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_movement_info_msgs
bool
movement_info_msgs__msg__MovementInfo__Sequence__init(movement_info_msgs__msg__MovementInfo__Sequence * array, size_t size);

/// Finalize array of msg/MovementInfo messages.
/**
 * It calls
 * movement_info_msgs__msg__MovementInfo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_movement_info_msgs
void
movement_info_msgs__msg__MovementInfo__Sequence__fini(movement_info_msgs__msg__MovementInfo__Sequence * array);

/// Create array of msg/MovementInfo messages.
/**
 * It allocates the memory for the array and calls
 * movement_info_msgs__msg__MovementInfo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_movement_info_msgs
movement_info_msgs__msg__MovementInfo__Sequence *
movement_info_msgs__msg__MovementInfo__Sequence__create(size_t size);

/// Destroy array of msg/MovementInfo messages.
/**
 * It calls
 * movement_info_msgs__msg__MovementInfo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_movement_info_msgs
void
movement_info_msgs__msg__MovementInfo__Sequence__destroy(movement_info_msgs__msg__MovementInfo__Sequence * array);

/// Check for msg/MovementInfo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_movement_info_msgs
bool
movement_info_msgs__msg__MovementInfo__Sequence__are_equal(const movement_info_msgs__msg__MovementInfo__Sequence * lhs, const movement_info_msgs__msg__MovementInfo__Sequence * rhs);

/// Copy an array of msg/MovementInfo messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_movement_info_msgs
bool
movement_info_msgs__msg__MovementInfo__Sequence__copy(
  const movement_info_msgs__msg__MovementInfo__Sequence * input,
  movement_info_msgs__msg__MovementInfo__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MOVEMENT_INFO_MSGS__MSG__DETAIL__MOVEMENT_INFO__FUNCTIONS_H_
