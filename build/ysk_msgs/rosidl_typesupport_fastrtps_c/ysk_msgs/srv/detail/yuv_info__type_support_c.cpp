// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ysk_msgs:srv/YUVInfo.idl
// generated code does not contain a copyright notice
#include "ysk_msgs/srv/detail/yuv_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ysk_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ysk_msgs/srv/detail/yuv_info__struct.h"
#include "ysk_msgs/srv/detail/yuv_info__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // colorlabel
#include "rosidl_runtime_c/string_functions.h"  // colorlabel

// forward declare type support functions


using _YUVInfo_Request__ros_msg_type = ysk_msgs__srv__YUVInfo_Request;

static bool _YUVInfo_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _YUVInfo_Request__ros_msg_type * ros_message = static_cast<const _YUVInfo_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: colorlabel
  {
    const rosidl_runtime_c__String * str = &ros_message->colorlabel;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _YUVInfo_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _YUVInfo_Request__ros_msg_type * ros_message = static_cast<_YUVInfo_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: colorlabel
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->colorlabel.data) {
      rosidl_runtime_c__String__init(&ros_message->colorlabel);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->colorlabel,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'colorlabel'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ysk_msgs
size_t get_serialized_size_ysk_msgs__srv__YUVInfo_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _YUVInfo_Request__ros_msg_type * ros_message = static_cast<const _YUVInfo_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name colorlabel
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->colorlabel.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _YUVInfo_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ysk_msgs__srv__YUVInfo_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ysk_msgs
size_t max_serialized_size_ysk_msgs__srv__YUVInfo_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: colorlabel
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ysk_msgs__srv__YUVInfo_Request;
    is_plain =
      (
      offsetof(DataType, colorlabel) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _YUVInfo_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ysk_msgs__srv__YUVInfo_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_YUVInfo_Request = {
  "ysk_msgs::srv",
  "YUVInfo_Request",
  _YUVInfo_Request__cdr_serialize,
  _YUVInfo_Request__cdr_deserialize,
  _YUVInfo_Request__get_serialized_size,
  _YUVInfo_Request__max_serialized_size
};

static rosidl_message_type_support_t _YUVInfo_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_YUVInfo_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ysk_msgs, srv, YUVInfo_Request)() {
  return &_YUVInfo_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "ysk_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "ysk_msgs/srv/detail/yuv_info__struct.h"
// already included above
// #include "ysk_msgs/srv/detail/yuv_info__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _YUVInfo_Response__ros_msg_type = ysk_msgs__srv__YUVInfo_Response;

static bool _YUVInfo_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _YUVInfo_Response__ros_msg_type * ros_message = static_cast<const _YUVInfo_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: ymin
  {
    cdr << ros_message->ymin;
  }

  // Field name: ymax
  {
    cdr << ros_message->ymax;
  }

  // Field name: crmin
  {
    cdr << ros_message->crmin;
  }

  // Field name: crmax
  {
    cdr << ros_message->crmax;
  }

  // Field name: cbmin
  {
    cdr << ros_message->cbmin;
  }

  // Field name: cbmax
  {
    cdr << ros_message->cbmax;
  }

  return true;
}

static bool _YUVInfo_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _YUVInfo_Response__ros_msg_type * ros_message = static_cast<_YUVInfo_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: ymin
  {
    cdr >> ros_message->ymin;
  }

  // Field name: ymax
  {
    cdr >> ros_message->ymax;
  }

  // Field name: crmin
  {
    cdr >> ros_message->crmin;
  }

  // Field name: crmax
  {
    cdr >> ros_message->crmax;
  }

  // Field name: cbmin
  {
    cdr >> ros_message->cbmin;
  }

  // Field name: cbmax
  {
    cdr >> ros_message->cbmax;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ysk_msgs
size_t get_serialized_size_ysk_msgs__srv__YUVInfo_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _YUVInfo_Response__ros_msg_type * ros_message = static_cast<const _YUVInfo_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name ymin
  {
    size_t item_size = sizeof(ros_message->ymin);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ymax
  {
    size_t item_size = sizeof(ros_message->ymax);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name crmin
  {
    size_t item_size = sizeof(ros_message->crmin);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name crmax
  {
    size_t item_size = sizeof(ros_message->crmax);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cbmin
  {
    size_t item_size = sizeof(ros_message->cbmin);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cbmax
  {
    size_t item_size = sizeof(ros_message->cbmax);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _YUVInfo_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ysk_msgs__srv__YUVInfo_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ysk_msgs
size_t max_serialized_size_ysk_msgs__srv__YUVInfo_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: ymin
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ymax
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: crmin
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: crmax
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cbmin
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cbmax
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ysk_msgs__srv__YUVInfo_Response;
    is_plain =
      (
      offsetof(DataType, cbmax) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _YUVInfo_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ysk_msgs__srv__YUVInfo_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_YUVInfo_Response = {
  "ysk_msgs::srv",
  "YUVInfo_Response",
  _YUVInfo_Response__cdr_serialize,
  _YUVInfo_Response__cdr_deserialize,
  _YUVInfo_Response__get_serialized_size,
  _YUVInfo_Response__max_serialized_size
};

static rosidl_message_type_support_t _YUVInfo_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_YUVInfo_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ysk_msgs, srv, YUVInfo_Response)() {
  return &_YUVInfo_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "ysk_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ysk_msgs/srv/yuv_info.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t YUVInfo__callbacks = {
  "ysk_msgs::srv",
  "YUVInfo",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ysk_msgs, srv, YUVInfo_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ysk_msgs, srv, YUVInfo_Response)(),
};

static rosidl_service_type_support_t YUVInfo__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &YUVInfo__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ysk_msgs, srv, YUVInfo)() {
  return &YUVInfo__handle;
}

#if defined(__cplusplus)
}
#endif
