// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ysk_msgs:msg/YUVValue.idl
// generated code does not contain a copyright notice
#include "ysk_msgs/msg/detail/yuv_value__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ysk_msgs__msg__YUVValue__init(ysk_msgs__msg__YUVValue * msg)
{
  if (!msg) {
    return false;
  }
  // ymin
  // ymax
  // crmin
  // crmax
  // cbmin
  // cbmax
  return true;
}

void
ysk_msgs__msg__YUVValue__fini(ysk_msgs__msg__YUVValue * msg)
{
  if (!msg) {
    return;
  }
  // ymin
  // ymax
  // crmin
  // crmax
  // cbmin
  // cbmax
}

bool
ysk_msgs__msg__YUVValue__are_equal(const ysk_msgs__msg__YUVValue * lhs, const ysk_msgs__msg__YUVValue * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ymin
  if (lhs->ymin != rhs->ymin) {
    return false;
  }
  // ymax
  if (lhs->ymax != rhs->ymax) {
    return false;
  }
  // crmin
  if (lhs->crmin != rhs->crmin) {
    return false;
  }
  // crmax
  if (lhs->crmax != rhs->crmax) {
    return false;
  }
  // cbmin
  if (lhs->cbmin != rhs->cbmin) {
    return false;
  }
  // cbmax
  if (lhs->cbmax != rhs->cbmax) {
    return false;
  }
  return true;
}

bool
ysk_msgs__msg__YUVValue__copy(
  const ysk_msgs__msg__YUVValue * input,
  ysk_msgs__msg__YUVValue * output)
{
  if (!input || !output) {
    return false;
  }
  // ymin
  output->ymin = input->ymin;
  // ymax
  output->ymax = input->ymax;
  // crmin
  output->crmin = input->crmin;
  // crmax
  output->crmax = input->crmax;
  // cbmin
  output->cbmin = input->cbmin;
  // cbmax
  output->cbmax = input->cbmax;
  return true;
}

ysk_msgs__msg__YUVValue *
ysk_msgs__msg__YUVValue__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ysk_msgs__msg__YUVValue * msg = (ysk_msgs__msg__YUVValue *)allocator.allocate(sizeof(ysk_msgs__msg__YUVValue), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ysk_msgs__msg__YUVValue));
  bool success = ysk_msgs__msg__YUVValue__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ysk_msgs__msg__YUVValue__destroy(ysk_msgs__msg__YUVValue * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ysk_msgs__msg__YUVValue__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ysk_msgs__msg__YUVValue__Sequence__init(ysk_msgs__msg__YUVValue__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ysk_msgs__msg__YUVValue * data = NULL;

  if (size) {
    data = (ysk_msgs__msg__YUVValue *)allocator.zero_allocate(size, sizeof(ysk_msgs__msg__YUVValue), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ysk_msgs__msg__YUVValue__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ysk_msgs__msg__YUVValue__fini(&data[i - 1]);
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
ysk_msgs__msg__YUVValue__Sequence__fini(ysk_msgs__msg__YUVValue__Sequence * array)
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
      ysk_msgs__msg__YUVValue__fini(&array->data[i]);
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

ysk_msgs__msg__YUVValue__Sequence *
ysk_msgs__msg__YUVValue__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ysk_msgs__msg__YUVValue__Sequence * array = (ysk_msgs__msg__YUVValue__Sequence *)allocator.allocate(sizeof(ysk_msgs__msg__YUVValue__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ysk_msgs__msg__YUVValue__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ysk_msgs__msg__YUVValue__Sequence__destroy(ysk_msgs__msg__YUVValue__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ysk_msgs__msg__YUVValue__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ysk_msgs__msg__YUVValue__Sequence__are_equal(const ysk_msgs__msg__YUVValue__Sequence * lhs, const ysk_msgs__msg__YUVValue__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ysk_msgs__msg__YUVValue__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ysk_msgs__msg__YUVValue__Sequence__copy(
  const ysk_msgs__msg__YUVValue__Sequence * input,
  ysk_msgs__msg__YUVValue__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ysk_msgs__msg__YUVValue);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ysk_msgs__msg__YUVValue * data =
      (ysk_msgs__msg__YUVValue *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ysk_msgs__msg__YUVValue__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ysk_msgs__msg__YUVValue__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ysk_msgs__msg__YUVValue__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
