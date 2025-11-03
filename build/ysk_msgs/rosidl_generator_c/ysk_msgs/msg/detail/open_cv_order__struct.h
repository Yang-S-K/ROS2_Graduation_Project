// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ysk_msgs:msg/OpenCvOrder.idl
// generated code does not contain a copyright notice

#ifndef YSK_MSGS__MSG__DETAIL__OPEN_CV_ORDER__STRUCT_H_
#define YSK_MSGS__MSG__DETAIL__OPEN_CV_ORDER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'order'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/OpenCvOrder in the package ysk_msgs.
typedef struct ysk_msgs__msg__OpenCvOrder
{
  rosidl_runtime_c__String__Sequence order;
} ysk_msgs__msg__OpenCvOrder;

// Struct for a sequence of ysk_msgs__msg__OpenCvOrder.
typedef struct ysk_msgs__msg__OpenCvOrder__Sequence
{
  ysk_msgs__msg__OpenCvOrder * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ysk_msgs__msg__OpenCvOrder__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YSK_MSGS__MSG__DETAIL__OPEN_CV_ORDER__STRUCT_H_
