// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ysk_msgs:msg/CameraSave.idl
// generated code does not contain a copyright notice

#ifndef YSK_MSGS__MSG__DETAIL__CAMERA_SAVE__STRUCT_H_
#define YSK_MSGS__MSG__DETAIL__CAMERA_SAVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/CameraSave in the package ysk_msgs.
typedef struct ysk_msgs__msg__CameraSave
{
  float brightness;
  float contrast;
  float saturation;
  float whitebalance;
  bool autowhitebalance;
  bool auto_exposure;
} ysk_msgs__msg__CameraSave;

// Struct for a sequence of ysk_msgs__msg__CameraSave.
typedef struct ysk_msgs__msg__CameraSave__Sequence
{
  ysk_msgs__msg__CameraSave * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ysk_msgs__msg__CameraSave__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YSK_MSGS__MSG__DETAIL__CAMERA_SAVE__STRUCT_H_
