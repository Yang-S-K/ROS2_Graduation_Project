// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ysk_msgs:msg/OpenCvOrder.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ysk_msgs/msg/detail/open_cv_order__rosidl_typesupport_introspection_c.h"
#include "ysk_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ysk_msgs/msg/detail/open_cv_order__functions.h"
#include "ysk_msgs/msg/detail/open_cv_order__struct.h"


// Include directives for member types
// Member `order`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ysk_msgs__msg__OpenCvOrder__rosidl_typesupport_introspection_c__OpenCvOrder_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ysk_msgs__msg__OpenCvOrder__init(message_memory);
}

void ysk_msgs__msg__OpenCvOrder__rosidl_typesupport_introspection_c__OpenCvOrder_fini_function(void * message_memory)
{
  ysk_msgs__msg__OpenCvOrder__fini(message_memory);
}

size_t ysk_msgs__msg__OpenCvOrder__rosidl_typesupport_introspection_c__size_function__OpenCvOrder__order(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * ysk_msgs__msg__OpenCvOrder__rosidl_typesupport_introspection_c__get_const_function__OpenCvOrder__order(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ysk_msgs__msg__OpenCvOrder__rosidl_typesupport_introspection_c__get_function__OpenCvOrder__order(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void ysk_msgs__msg__OpenCvOrder__rosidl_typesupport_introspection_c__fetch_function__OpenCvOrder__order(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    ysk_msgs__msg__OpenCvOrder__rosidl_typesupport_introspection_c__get_const_function__OpenCvOrder__order(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void ysk_msgs__msg__OpenCvOrder__rosidl_typesupport_introspection_c__assign_function__OpenCvOrder__order(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    ysk_msgs__msg__OpenCvOrder__rosidl_typesupport_introspection_c__get_function__OpenCvOrder__order(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool ysk_msgs__msg__OpenCvOrder__rosidl_typesupport_introspection_c__resize_function__OpenCvOrder__order(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ysk_msgs__msg__OpenCvOrder__rosidl_typesupport_introspection_c__OpenCvOrder_message_member_array[1] = {
  {
    "order",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ysk_msgs__msg__OpenCvOrder, order),  // bytes offset in struct
    NULL,  // default value
    ysk_msgs__msg__OpenCvOrder__rosidl_typesupport_introspection_c__size_function__OpenCvOrder__order,  // size() function pointer
    ysk_msgs__msg__OpenCvOrder__rosidl_typesupport_introspection_c__get_const_function__OpenCvOrder__order,  // get_const(index) function pointer
    ysk_msgs__msg__OpenCvOrder__rosidl_typesupport_introspection_c__get_function__OpenCvOrder__order,  // get(index) function pointer
    ysk_msgs__msg__OpenCvOrder__rosidl_typesupport_introspection_c__fetch_function__OpenCvOrder__order,  // fetch(index, &value) function pointer
    ysk_msgs__msg__OpenCvOrder__rosidl_typesupport_introspection_c__assign_function__OpenCvOrder__order,  // assign(index, value) function pointer
    ysk_msgs__msg__OpenCvOrder__rosidl_typesupport_introspection_c__resize_function__OpenCvOrder__order  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ysk_msgs__msg__OpenCvOrder__rosidl_typesupport_introspection_c__OpenCvOrder_message_members = {
  "ysk_msgs__msg",  // message namespace
  "OpenCvOrder",  // message name
  1,  // number of fields
  sizeof(ysk_msgs__msg__OpenCvOrder),
  ysk_msgs__msg__OpenCvOrder__rosidl_typesupport_introspection_c__OpenCvOrder_message_member_array,  // message members
  ysk_msgs__msg__OpenCvOrder__rosidl_typesupport_introspection_c__OpenCvOrder_init_function,  // function to initialize message memory (memory has to be allocated)
  ysk_msgs__msg__OpenCvOrder__rosidl_typesupport_introspection_c__OpenCvOrder_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ysk_msgs__msg__OpenCvOrder__rosidl_typesupport_introspection_c__OpenCvOrder_message_type_support_handle = {
  0,
  &ysk_msgs__msg__OpenCvOrder__rosidl_typesupport_introspection_c__OpenCvOrder_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ysk_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ysk_msgs, msg, OpenCvOrder)() {
  if (!ysk_msgs__msg__OpenCvOrder__rosidl_typesupport_introspection_c__OpenCvOrder_message_type_support_handle.typesupport_identifier) {
    ysk_msgs__msg__OpenCvOrder__rosidl_typesupport_introspection_c__OpenCvOrder_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ysk_msgs__msg__OpenCvOrder__rosidl_typesupport_introspection_c__OpenCvOrder_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
