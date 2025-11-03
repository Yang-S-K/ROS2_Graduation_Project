// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ysk_msgs:srv/YUVInfo.idl
// generated code does not contain a copyright notice

#ifndef YSK_MSGS__SRV__DETAIL__YUV_INFO__STRUCT_H_
#define YSK_MSGS__SRV__DETAIL__YUV_INFO__STRUCT_H_

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

/// Struct defined in srv/YUVInfo in the package ysk_msgs.
typedef struct ysk_msgs__srv__YUVInfo_Request
{
  rosidl_runtime_c__String colorlabel;
} ysk_msgs__srv__YUVInfo_Request;

// Struct for a sequence of ysk_msgs__srv__YUVInfo_Request.
typedef struct ysk_msgs__srv__YUVInfo_Request__Sequence
{
  ysk_msgs__srv__YUVInfo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ysk_msgs__srv__YUVInfo_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/YUVInfo in the package ysk_msgs.
typedef struct ysk_msgs__srv__YUVInfo_Response
{
  int32_t ymin;
  int32_t ymax;
  int32_t crmin;
  int32_t crmax;
  int32_t cbmin;
  int32_t cbmax;
} ysk_msgs__srv__YUVInfo_Response;

// Struct for a sequence of ysk_msgs__srv__YUVInfo_Response.
typedef struct ysk_msgs__srv__YUVInfo_Response__Sequence
{
  ysk_msgs__srv__YUVInfo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ysk_msgs__srv__YUVInfo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YSK_MSGS__SRV__DETAIL__YUV_INFO__STRUCT_H_
