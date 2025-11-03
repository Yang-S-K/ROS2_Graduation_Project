// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ysk_msgs:msg/CameraSave.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ysk_msgs/msg/detail/camera_save__rosidl_typesupport_introspection_c.h"
#include "ysk_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ysk_msgs/msg/detail/camera_save__functions.h"
#include "ysk_msgs/msg/detail/camera_save__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ysk_msgs__msg__CameraSave__rosidl_typesupport_introspection_c__CameraSave_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ysk_msgs__msg__CameraSave__init(message_memory);
}

void ysk_msgs__msg__CameraSave__rosidl_typesupport_introspection_c__CameraSave_fini_function(void * message_memory)
{
  ysk_msgs__msg__CameraSave__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ysk_msgs__msg__CameraSave__rosidl_typesupport_introspection_c__CameraSave_message_member_array[6] = {
  {
    "brightness",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ysk_msgs__msg__CameraSave, brightness),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ysk_msgs__msg__CameraSave, contrast),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ysk_msgs__msg__CameraSave, saturation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "whitebalance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ysk_msgs__msg__CameraSave, whitebalance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "autowhitebalance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ysk_msgs__msg__CameraSave, autowhitebalance),  // bytes offset in struct
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
    offsetof(ysk_msgs__msg__CameraSave, auto_exposure),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ysk_msgs__msg__CameraSave__rosidl_typesupport_introspection_c__CameraSave_message_members = {
  "ysk_msgs__msg",  // message namespace
  "CameraSave",  // message name
  6,  // number of fields
  sizeof(ysk_msgs__msg__CameraSave),
  ysk_msgs__msg__CameraSave__rosidl_typesupport_introspection_c__CameraSave_message_member_array,  // message members
  ysk_msgs__msg__CameraSave__rosidl_typesupport_introspection_c__CameraSave_init_function,  // function to initialize message memory (memory has to be allocated)
  ysk_msgs__msg__CameraSave__rosidl_typesupport_introspection_c__CameraSave_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ysk_msgs__msg__CameraSave__rosidl_typesupport_introspection_c__CameraSave_message_type_support_handle = {
  0,
  &ysk_msgs__msg__CameraSave__rosidl_typesupport_introspection_c__CameraSave_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ysk_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ysk_msgs, msg, CameraSave)() {
  if (!ysk_msgs__msg__CameraSave__rosidl_typesupport_introspection_c__CameraSave_message_type_support_handle.typesupport_identifier) {
    ysk_msgs__msg__CameraSave__rosidl_typesupport_introspection_c__CameraSave_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ysk_msgs__msg__CameraSave__rosidl_typesupport_introspection_c__CameraSave_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
