// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ysk_msgs:srv/OpenCvInfo.idl
// generated code does not contain a copyright notice

#ifndef YSK_MSGS__SRV__DETAIL__OPEN_CV_INFO__STRUCT_H_
#define YSK_MSGS__SRV__DETAIL__OPEN_CV_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/OpenCvInfo in the package ysk_msgs.
typedef struct ysk_msgs__srv__OpenCvInfo_Request
{
  uint8_t structure_needs_at_least_one_member;
} ysk_msgs__srv__OpenCvInfo_Request;

// Struct for a sequence of ysk_msgs__srv__OpenCvInfo_Request.
typedef struct ysk_msgs__srv__OpenCvInfo_Request__Sequence
{
  ysk_msgs__srv__OpenCvInfo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ysk_msgs__srv__OpenCvInfo_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'order'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/OpenCvInfo in the package ysk_msgs.
typedef struct ysk_msgs__srv__OpenCvInfo_Response
{
  rosidl_runtime_c__String__Sequence order;
  bool already;
} ysk_msgs__srv__OpenCvInfo_Response;

// Struct for a sequence of ysk_msgs__srv__OpenCvInfo_Response.
typedef struct ysk_msgs__srv__OpenCvInfo_Response__Sequence
{
  ysk_msgs__srv__OpenCvInfo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ysk_msgs__srv__OpenCvInfo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YSK_MSGS__SRV__DETAIL__OPEN_CV_INFO__STRUCT_H_
