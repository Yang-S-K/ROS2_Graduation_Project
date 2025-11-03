// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ysk_msgs:msg/Zoom.idl
// generated code does not contain a copyright notice
#include "ysk_msgs/msg/detail/zoom__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ysk_msgs__msg__Zoom__init(ysk_msgs__msg__Zoom * msg)
{
  if (!msg) {
    return false;
  }
  // zoomin
  return true;
}

void
ysk_msgs__msg__Zoom__fini(ysk_msgs__msg__Zoom * msg)
{
  if (!msg) {
    return;
  }
  // zoomin
}

bool
ysk_msgs__msg__Zoom__are_equal(const ysk_msgs__msg__Zoom * lhs, const ysk_msgs__msg__Zoom * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // zoomin
  if (lhs->zoomin != rhs->zoomin) {
    return false;
  }
  return true;
}

bool
ysk_msgs__msg__Zoom__copy(
  const ysk_msgs__msg__Zoom * input,
  ysk_msgs__msg__Zoom * output)
{
  if (!input || !output) {
    return false;
  }
  // zoomin
  output->zoomin = input->zoomin;
  return true;
}

ysk_msgs__msg__Zoom *
ysk_msgs__msg__Zoom__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ysk_msgs__msg__Zoom * msg = (ysk_msgs__msg__Zoom *)allocator.allocate(sizeof(ysk_msgs__msg__Zoom), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ysk_msgs__msg__Zoom));
  bool success = ysk_msgs__msg__Zoom__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ysk_msgs__msg__Zoom__destroy(ysk_msgs__msg__Zoom * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ysk_msgs__msg__Zoom__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ysk_msgs__msg__Zoom__Sequence__init(ysk_msgs__msg__Zoom__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ysk_msgs__msg__Zoom * data = NULL;

  if (size) {
    data = (ysk_msgs__msg__Zoom *)allocator.zero_allocate(size, sizeof(ysk_msgs__msg__Zoom), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ysk_msgs__msg__Zoom__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ysk_msgs__msg__Zoom__fini(&data[i - 1]);
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
ysk_msgs__msg__Zoom__Sequence__fini(ysk_msgs__msg__Zoom__Sequence * array)
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
      ysk_msgs__msg__Zoom__fini(&array->data[i]);
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

ysk_msgs__msg__Zoom__Sequence *
ysk_msgs__msg__Zoom__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ysk_msgs__msg__Zoom__Sequence * array = (ysk_msgs__msg__Zoom__Sequence *)allocator.allocate(sizeof(ysk_msgs__msg__Zoom__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ysk_msgs__msg__Zoom__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ysk_msgs__msg__Zoom__Sequence__destroy(ysk_msgs__msg__Zoom__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ysk_msgs__msg__Zoom__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ysk_msgs__msg__Zoom__Sequence__are_equal(const ysk_msgs__msg__Zoom__Sequence * lhs, const ysk_msgs__msg__Zoom__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ysk_msgs__msg__Zoom__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ysk_msgs__msg__Zoom__Sequence__copy(
  const ysk_msgs__msg__Zoom__Sequence * input,
  ysk_msgs__msg__Zoom__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ysk_msgs__msg__Zoom);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ysk_msgs__msg__Zoom * data =
      (ysk_msgs__msg__Zoom *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ysk_msgs__msg__Zoom__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ysk_msgs__msg__Zoom__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ysk_msgs__msg__Zoom__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
