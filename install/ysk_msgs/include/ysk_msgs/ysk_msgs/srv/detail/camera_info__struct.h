// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ysk_msgs:srv/CameraInfo.idl
// generated code does not contain a copyright notice

#ifndef YSK_MSGS__SRV__DETAIL__CAMERA_INFO__STRUCT_H_
#define YSK_MSGS__SRV__DETAIL__CAMERA_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/CameraInfo in the package ysk_msgs.
typedef struct ysk_msgs__srv__CameraInfo_Request
{
  bool load;
} ysk_msgs__srv__CameraInfo_Request;

// Struct for a sequence of ysk_msgs__srv__CameraInfo_Request.
typedef struct ysk_msgs__srv__CameraInfo_Request__Sequence
{
  ysk_msgs__srv__CameraInfo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ysk_msgs__srv__CameraInfo_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/CameraInfo in the package ysk_msgs.
typedef struct ysk_msgs__srv__CameraInfo_Response
{
  int32_t brightness;
  int32_t contrast;
  int32_t saturation;
  int32_t white_balance;
  bool auto_white_balance;
  bool auto_exposure;
  bool auto_backlight_compensation;
} ysk_msgs__srv__CameraInfo_Response;

// Struct for a sequence of ysk_msgs__srv__CameraInfo_Response.
typedef struct ysk_msgs__srv__CameraInfo_Response__Sequence
{
  ysk_msgs__srv__CameraInfo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ysk_msgs__srv__CameraInfo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YSK_MSGS__SRV__DETAIL__CAMERA_INFO__STRUCT_H_
