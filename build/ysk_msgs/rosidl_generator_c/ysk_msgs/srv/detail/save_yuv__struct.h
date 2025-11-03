// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ysk_msgs:srv/SaveYUV.idl
// generated code does not contain a copyright notice

#ifndef YSK_MSGS__SRV__DETAIL__SAVE_YUV__STRUCT_H_
#define YSK_MSGS__SRV__DETAIL__SAVE_YUV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'location'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SaveYUV in the package ysk_msgs.
typedef struct ysk_msgs__srv__SaveYUV_Request
{
  bool save;
  rosidl_runtime_c__String location;
} ysk_msgs__srv__SaveYUV_Request;

// Struct for a sequence of ysk_msgs__srv__SaveYUV_Request.
typedef struct ysk_msgs__srv__SaveYUV_Request__Sequence
{
  ysk_msgs__srv__SaveYUV_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ysk_msgs__srv__SaveYUV_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SaveYUV in the package ysk_msgs.
typedef struct ysk_msgs__srv__SaveYUV_Response
{
  bool already;
} ysk_msgs__srv__SaveYUV_Response;

// Struct for a sequence of ysk_msgs__srv__SaveYUV_Response.
typedef struct ysk_msgs__srv__SaveYUV_Response__Sequence
{
  ysk_msgs__srv__SaveYUV_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ysk_msgs__srv__SaveYUV_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YSK_MSGS__SRV__DETAIL__SAVE_YUV__STRUCT_H_
