// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from movement_info_msgs:msg/MovementInfo.idl
// generated code does not contain a copyright notice
#include "movement_info_msgs/msg/detail/movement_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `movement`
// Member `heading`
#include "rosidl_runtime_c/string_functions.h"

bool
movement_info_msgs__msg__MovementInfo__init(movement_info_msgs__msg__MovementInfo * msg)
{
  if (!msg) {
    return false;
  }
  // movement
  if (!rosidl_runtime_c__String__init(&msg->movement)) {
    movement_info_msgs__msg__MovementInfo__fini(msg);
    return false;
  }
  // heading
  if (!rosidl_runtime_c__String__init(&msg->heading)) {
    movement_info_msgs__msg__MovementInfo__fini(msg);
    return false;
  }
  return true;
}

void
movement_info_msgs__msg__MovementInfo__fini(movement_info_msgs__msg__MovementInfo * msg)
{
  if (!msg) {
    return;
  }
  // movement
  rosidl_runtime_c__String__fini(&msg->movement);
  // heading
  rosidl_runtime_c__String__fini(&msg->heading);
}

bool
movement_info_msgs__msg__MovementInfo__are_equal(const movement_info_msgs__msg__MovementInfo * lhs, const movement_info_msgs__msg__MovementInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // movement
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->movement), &(rhs->movement)))
  {
    return false;
  }
  // heading
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->heading), &(rhs->heading)))
  {
    return false;
  }
  return true;
}

bool
movement_info_msgs__msg__MovementInfo__copy(
  const movement_info_msgs__msg__MovementInfo * input,
  movement_info_msgs__msg__MovementInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // movement
  if (!rosidl_runtime_c__String__copy(
      &(input->movement), &(output->movement)))
  {
    return false;
  }
  // heading
  if (!rosidl_runtime_c__String__copy(
      &(input->heading), &(output->heading)))
  {
    return false;
  }
  return true;
}

movement_info_msgs__msg__MovementInfo *
movement_info_msgs__msg__MovementInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  movement_info_msgs__msg__MovementInfo * msg = (movement_info_msgs__msg__MovementInfo *)allocator.allocate(sizeof(movement_info_msgs__msg__MovementInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(movement_info_msgs__msg__MovementInfo));
  bool success = movement_info_msgs__msg__MovementInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
movement_info_msgs__msg__MovementInfo__destroy(movement_info_msgs__msg__MovementInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    movement_info_msgs__msg__MovementInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
movement_info_msgs__msg__MovementInfo__Sequence__init(movement_info_msgs__msg__MovementInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  movement_info_msgs__msg__MovementInfo * data = NULL;

  if (size) {
    data = (movement_info_msgs__msg__MovementInfo *)allocator.zero_allocate(size, sizeof(movement_info_msgs__msg__MovementInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = movement_info_msgs__msg__MovementInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        movement_info_msgs__msg__MovementInfo__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
movement_info_msgs__msg__MovementInfo__Sequence__fini(movement_info_msgs__msg__MovementInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      movement_info_msgs__msg__MovementInfo__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

movement_info_msgs__msg__MovementInfo__Sequence *
movement_info_msgs__msg__MovementInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  movement_info_msgs__msg__MovementInfo__Sequence * array = (movement_info_msgs__msg__MovementInfo__Sequence *)allocator.allocate(sizeof(movement_info_msgs__msg__MovementInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = movement_info_msgs__msg__MovementInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
movement_info_msgs__msg__MovementInfo__Sequence__destroy(movement_info_msgs__msg__MovementInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    movement_info_msgs__msg__MovementInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
movement_info_msgs__msg__MovementInfo__Sequence__are_equal(const movement_info_msgs__msg__MovementInfo__Sequence * lhs, const movement_info_msgs__msg__MovementInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!movement_info_msgs__msg__MovementInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
movement_info_msgs__msg__MovementInfo__Sequence__copy(
  const movement_info_msgs__msg__MovementInfo__Sequence * input,
  movement_info_msgs__msg__MovementInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(movement_info_msgs__msg__MovementInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    movement_info_msgs__msg__MovementInfo * data =
      (movement_info_msgs__msg__MovementInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!movement_info_msgs__msg__MovementInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          movement_info_msgs__msg__MovementInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!movement_info_msgs__msg__MovementInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
