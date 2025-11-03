// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ysk_msgs:srv/HSVInfo.idl
// generated code does not contain a copyright notice

#ifndef YSK_MSGS__SRV__DETAIL__HSV_INFO__STRUCT_H_
#define YSK_MSGS__SRV__DETAIL__HSV_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'colorlabel'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/HSVInfo in the package ysk_msgs.
typedef struct ysk_msgs__srv__HSVInfo_Request
{
  rosidl_runtime_c__String colorlabel;
} ysk_msgs__srv__HSVInfo_Request;

// Struct for a sequence of ysk_msgs__srv__HSVInfo_Request.
typedef struct ysk_msgs__srv__HSVInfo_Request__Sequence
{
  ysk_msgs__srv__HSVInfo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ysk_msgs__srv__HSVInfo_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/HSVInfo in the package ysk_msgs.
typedef struct ysk_msgs__srv__HSVInfo_Response
{
  int32_t hmin;
  int32_t hmax;
  int32_t smin;
  int32_t smax;
  int32_t vmin;
  int32_t vmax;
} ysk_msgs__srv__HSVInfo_Response;

// Struct for a sequence of ysk_msgs__srv__HSVInfo_Response.
typedef struct ysk_msgs__srv__HSVInfo_Response__Sequence
{
  ysk_msgs__srv__HSVInfo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ysk_msgs__srv__HSVInfo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YSK_MSGS__SRV__DETAIL__HSV_INFO__STRUCT_H_
