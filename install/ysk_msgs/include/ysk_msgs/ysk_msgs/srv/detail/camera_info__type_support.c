// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ysk_msgs:srv/CameraInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ysk_msgs/srv/detail/camera_info__rosidl_typesupport_introspection_c.h"
#include "ysk_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ysk_msgs/srv/detail/camera_info__functions.h"
#include "ysk_msgs/srv/detail/camera_info__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ysk_msgs__srv__CameraInfo_Request__rosidl_typesupport_introspection_c__CameraInfo_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ysk_msgs__srv__CameraInfo_Request__init(message_memory);
}

void ysk_msgs__srv__CameraInfo_Request__rosidl_typesupport_introspection_c__CameraInfo_Request_fini_function(void * message_memory)
{
  ysk_msgs__srv__CameraInfo_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ysk_msgs__srv__CameraInfo_Request__rosidl_typesupport_introspection_c__CameraInfo_Request_message_member_array[1] = {
  {
    "load",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ysk_msgs__srv__CameraInfo_Request, load),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ysk_msgs__srv__CameraInfo_Request__rosidl_typesupport_introspection_c__CameraInfo_Request_message_members = {
  "ysk_msgs__srv",  // message namespace
  "CameraInfo_Request",  // message name
  1,  // number of fields
  sizeof(ysk_msgs__srv__CameraInfo_Request),
  ysk_msgs__srv__CameraInfo_Request__rosidl_typesupport_introspection_c__CameraInfo_Request_message_member_array,  // message members
  ysk_msgs__srv__CameraInfo_Request__rosidl_typesupport_introspection_c__CameraInfo_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ysk_msgs__srv__CameraInfo_Request__rosidl_typesupport_introspection_c__CameraInfo_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ysk_msgs__srv__CameraInfo_Request__rosidl_typesupport_introspection_c__CameraInfo_Request_message_type_support_handle = {
  0,
  &ysk_msgs__srv__CameraInfo_Request__rosidl_typesupport_introspection_c__CameraInfo_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ysk_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ysk_msgs, srv, CameraInfo_Request)() {
  if (!ysk_msgs__srv__CameraInfo_Request__rosidl_typesupport_introspection_c__CameraInfo_Request_message_type_support_handle.typesupport_identifier) {
    ysk_msgs__srv__CameraInfo_Request__rosidl_typesupport_introspection_c__CameraInfo_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ysk_msgs__srv__CameraInfo_Request__rosidl_typesupport_introspection_c__CameraInfo_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ysk_msgs/srv/detail/camera_info__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ysk_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ysk_msgs/srv/detail/camera_info__functions.h"
// already included above
// #include "ysk_msgs/srv/detail/camera_info__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ysk_msgs__srv__CameraInfo_Response__rosidl_typesupport_introspection_c__CameraInfo_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ysk_msgs__srv__CameraInfo_Response__init(message_memory);
}

void ysk_msgs__srv__CameraInfo_Response__rosidl_typesupport_introspection_c__CameraInfo_Response_fini_function(void * message_memory)
{
  ysk_msgs__srv__CameraInfo_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ysk_msgs__srv__CameraInfo_Response__rosidl_typesupport_introspection_c__CameraInfo_Response_message_member_array[7] = {
  {
    "brightness",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ysk_msgs__srv__CameraInfo_Response, brightness),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "contrast",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ysk_msgs__srv__CameraInfo_Response, contrast),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "saturation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ysk_msgs__srv__CameraInfo_Response, saturation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "white_balance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ysk_msgs__srv__CameraInfo_Response, white_balance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "auto_white_balance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ysk_msgs__srv__CameraInfo_Response, auto_white_balance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "auto_exposure",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ysk_msgs__srv__CameraInfo_Response, auto_exposure),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "auto_backlight_compensation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ysk_msgs__srv__CameraInfo_Response, auto_backlight_compensation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ysk_msgs__srv__CameraInfo_Response__rosidl_typesupport_introspection_c__CameraInfo_Response_message_members = {
  "ysk_msgs__srv",  // message namespace
  "CameraInfo_Response",  // message name
  7,  // number of fields
  sizeof(ysk_msgs__srv__CameraInfo_Response),
  ysk_msgs__srv__CameraInfo_Response__rosidl_typesupport_introspection_c__CameraInfo_Response_message_member_array,  // message members
  ysk_msgs__srv__CameraInfo_Response__rosidl_typesupport_introspection_c__CameraInfo_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ysk_msgs__srv__CameraInfo_Response__rosidl_typesupport_introspection_c__CameraInfo_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ysk_msgs__srv__CameraInfo_Response__rosidl_typesupport_introspection_c__CameraInfo_Response_message_type_support_handle = {
  0,
  &ysk_msgs__srv__CameraInfo_Response__rosidl_typesupport_introspection_c__CameraInfo_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ysk_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ysk_msgs, srv, CameraInfo_Response)() {
  if (!ysk_msgs__srv__CameraInfo_Response__rosidl_typesupport_introspection_c__CameraInfo_Response_message_type_support_handle.typesupport_identifier) {
    ysk_msgs__srv__CameraInfo_Response__rosidl_typesupport_introspection_c__CameraInfo_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ysk_msgs__srv__CameraInfo_Response__rosidl_typesupport_introspection_c__CameraInfo_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ysk_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ysk_msgs/srv/detail/camera_info__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ysk_msgs__srv__detail__camera_info__rosidl_typesupport_introspection_c__CameraInfo_service_members = {
  "ysk_msgs__srv",  // service namespace
  "CameraInfo",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ysk_msgs__srv__detail__camera_info__rosidl_typesupport_introspection_c__CameraInfo_Request_message_type_support_handle,
  NULL  // response message
  // ysk_msgs__srv__detail__camera_info__rosidl_typesupport_introspection_c__CameraInfo_Response_message_type_support_handle
};

static rosidl_service_type_support_t ysk_msgs__srv__detail__camera_info__rosidl_typesupport_introspection_c__CameraInfo_service_type_support_handle = {
  0,
  &ysk_msgs__srv__detail__camera_info__rosidl_typesupport_introspection_c__CameraInfo_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ysk_msgs, srv, CameraInfo_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ysk_msgs, srv, CameraInfo_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ysk_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ysk_msgs, srv, CameraInfo)() {
  if (!ysk_msgs__srv__detail__camera_info__rosidl_typesupport_introspection_c__CameraInfo_service_type_support_handle.typesupport_identifier) {
    ysk_msgs__srv__detail__camera_info__rosidl_typesupport_introspection_c__CameraInfo_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ysk_msgs__srv__detail__camera_info__rosidl_typesupport_introspection_c__CameraInfo_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ysk_msgs, srv, CameraInfo_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ysk_msgs, srv, CameraInfo_Response)()->data;
  }

  return &ysk_msgs__srv__detail__camera_info__rosidl_typesupport_introspection_c__CameraInfo_service_type_support_handle;
}
