// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ysk_msgs:srv/OpenCvInfo.idl
// generated code does not contain a copyright notice
#include "ysk_msgs/srv/detail/open_cv_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
ysk_msgs__srv__OpenCvInfo_Request__init(ysk_msgs__srv__OpenCvInfo_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
ysk_msgs__srv__OpenCvInfo_Request__fini(ysk_msgs__srv__OpenCvInfo_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
ysk_msgs__srv__OpenCvInfo_Request__are_equal(const ysk_msgs__srv__OpenCvInfo_Request * lhs, const ysk_msgs__srv__OpenCvInfo_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
ysk_msgs__srv__OpenCvInfo_Request__copy(
  const ysk_msgs__srv__OpenCvInfo_Request * input,
  ysk_msgs__srv__OpenCvInfo_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

ysk_msgs__srv__OpenCvInfo_Request *
ysk_msgs__srv__OpenCvInfo_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ysk_msgs__srv__OpenCvInfo_Request * msg = (ysk_msgs__srv__OpenCvInfo_Request *)allocator.allocate(sizeof(ysk_msgs__srv__OpenCvInfo_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ysk_msgs__srv__OpenCvInfo_Request));
  bool success = ysk_msgs__srv__OpenCvInfo_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ysk_msgs__srv__OpenCvInfo_Request__destroy(ysk_msgs__srv__OpenCvInfo_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ysk_msgs__srv__OpenCvInfo_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ysk_msgs__srv__OpenCvInfo_Request__Sequence__init(ysk_msgs__srv__OpenCvInfo_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ysk_msgs__srv__OpenCvInfo_Request * data = NULL;

  if (size) {
    data = (ysk_msgs__srv__OpenCvInfo_Request *)allocator.zero_allocate(size, sizeof(ysk_msgs__srv__OpenCvInfo_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ysk_msgs__srv__OpenCvInfo_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ysk_msgs__srv__OpenCvInfo_Request__fini(&data[i - 1]);
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
ysk_msgs__srv__OpenCvInfo_Request__Sequence__fini(ysk_msgs__srv__OpenCvInfo_Request__Sequence * array)
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
      ysk_msgs__srv__OpenCvInfo_Request__fini(&array->data[i]);
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

ysk_msgs__srv__OpenCvInfo_Request__Sequence *
ysk_msgs__srv__OpenCvInfo_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ysk_msgs__srv__OpenCvInfo_Request__Sequence * array = (ysk_msgs__srv__OpenCvInfo_Request__Sequence *)allocator.allocate(sizeof(ysk_msgs__srv__OpenCvInfo_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ysk_msgs__srv__OpenCvInfo_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ysk_msgs__srv__OpenCvInfo_Request__Sequence__destroy(ysk_msgs__srv__OpenCvInfo_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ysk_msgs__srv__OpenCvInfo_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ysk_msgs__srv__OpenCvInfo_Request__Sequence__are_equal(const ysk_msgs__srv__OpenCvInfo_Request__Sequence * lhs, const ysk_msgs__srv__OpenCvInfo_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ysk_msgs__srv__OpenCvInfo_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ysk_msgs__srv__OpenCvInfo_Request__Sequence__copy(
  const ysk_msgs__srv__OpenCvInfo_Request__Sequence * input,
  ysk_msgs__srv__OpenCvInfo_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ysk_msgs__srv__OpenCvInfo_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ysk_msgs__srv__OpenCvInfo_Request * data =
      (ysk_msgs__srv__OpenCvInfo_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ysk_msgs__srv__OpenCvInfo_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ysk_msgs__srv__OpenCvInfo_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ysk_msgs__srv__OpenCvInfo_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `order`
#include "rosidl_runtime_c/string_functions.h"

bool
ysk_msgs__srv__OpenCvInfo_Response__init(ysk_msgs__srv__OpenCvInfo_Response * msg)
{
  if (!msg) {
    return false;
  }
  // order
  if (!rosidl_runtime_c__String__Sequence__init(&msg->order, 0)) {
    ysk_msgs__srv__OpenCvInfo_Response__fini(msg);
    return false;
  }
  // already
  return true;
}

void
ysk_msgs__srv__OpenCvInfo_Response__fini(ysk_msgs__srv__OpenCvInfo_Response * msg)
{
  if (!msg) {
    return;
  }
  // order
  rosidl_runtime_c__String__Sequence__fini(&msg->order);
  // already
}

bool
ysk_msgs__srv__OpenCvInfo_Response__are_equal(const ysk_msgs__srv__OpenCvInfo_Response * lhs, const ysk_msgs__srv__OpenCvInfo_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // order
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->order), &(rhs->order)))
  {
    return false;
  }
  // already
  if (lhs->already != rhs->already) {
    return false;
  }
  return true;
}

bool
ysk_msgs__srv__OpenCvInfo_Response__copy(
  const ysk_msgs__srv__OpenCvInfo_Response * input,
  ysk_msgs__srv__OpenCvInfo_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // order
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->order), &(output->order)))
  {
    return false;
  }
  // already
  output->already = input->already;
  return true;
}

ysk_msgs__srv__OpenCvInfo_Response *
ysk_msgs__srv__OpenCvInfo_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ysk_msgs__srv__OpenCvInfo_Response * msg = (ysk_msgs__srv__OpenCvInfo_Response *)allocator.allocate(sizeof(ysk_msgs__srv__OpenCvInfo_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ysk_msgs__srv__OpenCvInfo_Response));
  bool success = ysk_msgs__srv__OpenCvInfo_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ysk_msgs__srv__OpenCvInfo_Response__destroy(ysk_msgs__srv__OpenCvInfo_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ysk_msgs__srv__OpenCvInfo_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ysk_msgs__srv__OpenCvInfo_Response__Sequence__init(ysk_msgs__srv__OpenCvInfo_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ysk_msgs__srv__OpenCvInfo_Response * data = NULL;

  if (size) {
    data = (ysk_msgs__srv__OpenCvInfo_Response *)allocator.zero_allocate(size, sizeof(ysk_msgs__srv__OpenCvInfo_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ysk_msgs__srv__OpenCvInfo_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ysk_msgs__srv__OpenCvInfo_Response__fini(&data[i - 1]);
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
ysk_msgs__srv__OpenCvInfo_Response__Sequence__fini(ysk_msgs__srv__OpenCvInfo_Response__Sequence * array)
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
      ysk_msgs__srv__OpenCvInfo_Response__fini(&array->data[i]);
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

ysk_msgs__srv__OpenCvInfo_Response__Sequence *
ysk_msgs__srv__OpenCvInfo_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ysk_msgs__srv__OpenCvInfo_Response__Sequence * array = (ysk_msgs__srv__OpenCvInfo_Response__Sequence *)allocator.allocate(sizeof(ysk_msgs__srv__OpenCvInfo_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ysk_msgs__srv__OpenCvInfo_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ysk_msgs__srv__OpenCvInfo_Response__Sequence__destroy(ysk_msgs__srv__OpenCvInfo_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ysk_msgs__srv__OpenCvInfo_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ysk_msgs__srv__OpenCvInfo_Response__Sequence__are_equal(const ysk_msgs__srv__OpenCvInfo_Response__Sequence * lhs, const ysk_msgs__srv__OpenCvInfo_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ysk_msgs__srv__OpenCvInfo_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ysk_msgs__srv__OpenCvInfo_Response__Sequence__copy(
  const ysk_msgs__srv__OpenCvInfo_Response__Sequence * input,
  ysk_msgs__srv__OpenCvInfo_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ysk_msgs__srv__OpenCvInfo_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ysk_msgs__srv__OpenCvInfo_Response * data =
      (ysk_msgs__srv__OpenCvInfo_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ysk_msgs__srv__OpenCvInfo_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ysk_msgs__srv__OpenCvInfo_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ysk_msgs__srv__OpenCvInfo_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
