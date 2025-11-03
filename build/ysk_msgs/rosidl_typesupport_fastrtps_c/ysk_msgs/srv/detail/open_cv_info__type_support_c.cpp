// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ysk_msgs:srv/OpenCvInfo.idl
// generated code does not contain a copyright notice
#include "ysk_msgs/srv/detail/open_cv_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ysk_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ysk_msgs/srv/detail/open_cv_info__struct.h"
#include "ysk_msgs/srv/detail/open_cv_info__functions.h"
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


// forward declare type support functions


using _OpenCvInfo_Request__ros_msg_type = ysk_msgs__srv__OpenCvInfo_Request;

static bool _OpenCvInfo_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OpenCvInfo_Request__ros_msg_type * ros_message = static_cast<const _OpenCvInfo_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _OpenCvInfo_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OpenCvInfo_Request__ros_msg_type * ros_message = static_cast<_OpenCvInfo_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ysk_msgs
size_t get_serialized_size_ysk_msgs__srv__OpenCvInfo_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OpenCvInfo_Request__ros_msg_type * ros_message = static_cast<const _OpenCvInfo_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _OpenCvInfo_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ysk_msgs__srv__OpenCvInfo_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ysk_msgs
size_t max_serialized_size_ysk_msgs__srv__OpenCvInfo_Request(
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

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ysk_msgs__srv__OpenCvInfo_Request;
    is_plain =
      (
      offsetof(DataType, structure_needs_at_least_one_member) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _OpenCvInfo_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ysk_msgs__srv__OpenCvInfo_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_OpenCvInfo_Request = {
  "ysk_msgs::srv",
  "OpenCvInfo_Request",
  _OpenCvInfo_Request__cdr_serialize,
  _OpenCvInfo_Request__cdr_deserialize,
  _OpenCvInfo_Request__get_serialized_size,
  _OpenCvInfo_Request__max_serialized_size
};

static rosidl_message_type_support_t _OpenCvInfo_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OpenCvInfo_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ysk_msgs, srv, OpenCvInfo_Request)() {
  return &_OpenCvInfo_Request__type_support;
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
// #include "ysk_msgs/srv/detail/open_cv_info__struct.h"
// already included above
// #include "ysk_msgs/srv/detail/open_cv_info__functions.h"
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

#include "rosidl_runtime_c/string.h"  // order
#include "rosidl_runtime_c/string_functions.h"  // order

// forward declare type support functions


using _OpenCvInfo_Response__ros_msg_type = ysk_msgs__srv__OpenCvInfo_Response;

static bool _OpenCvInfo_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OpenCvInfo_Response__ros_msg_type * ros_message = static_cast<const _OpenCvInfo_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: order
  {
    size_t size = ros_message->order.size;
    auto array_ptr = ros_message->order.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: already
  {
    cdr << (ros_message->already ? true : false);
  }

  return true;
}

static bool _OpenCvInfo_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OpenCvInfo_Response__ros_msg_type * ros_message = static_cast<_OpenCvInfo_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: order
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->order.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->order);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->order, size)) {
      fprintf(stderr, "failed to create array for field 'order'");
      return false;
    }
    auto array_ptr = ros_message->order.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'order'\n");
        return false;
      }
    }
  }

  // Field name: already
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->already = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ysk_msgs
size_t get_serialized_size_ysk_msgs__srv__OpenCvInfo_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OpenCvInfo_Response__ros_msg_type * ros_message = static_cast<const _OpenCvInfo_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name order
  {
    size_t array_size = ros_message->order.size;
    auto array_ptr = ros_message->order.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name already
  {
    size_t item_size = sizeof(ros_message->already);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _OpenCvInfo_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ysk_msgs__srv__OpenCvInfo_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ysk_msgs
size_t max_serialized_size_ysk_msgs__srv__OpenCvInfo_Response(
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

  // member: order
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: already
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ysk_msgs__srv__OpenCvInfo_Response;
    is_plain =
      (
      offsetof(DataType, already) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _OpenCvInfo_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ysk_msgs__srv__OpenCvInfo_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_OpenCvInfo_Response = {
  "ysk_msgs::srv",
  "OpenCvInfo_Response",
  _OpenCvInfo_Response__cdr_serialize,
  _OpenCvInfo_Response__cdr_deserialize,
  _OpenCvInfo_Response__get_serialized_size,
  _OpenCvInfo_Response__max_serialized_size
};

static rosidl_message_type_support_t _OpenCvInfo_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OpenCvInfo_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ysk_msgs, srv, OpenCvInfo_Response)() {
  return &_OpenCvInfo_Response__type_support;
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
#include "ysk_msgs/srv/open_cv_info.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t OpenCvInfo__callbacks = {
  "ysk_msgs::srv",
  "OpenCvInfo",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ysk_msgs, srv, OpenCvInfo_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ysk_msgs, srv, OpenCvInfo_Response)(),
};

static rosidl_service_type_support_t OpenCvInfo__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &OpenCvInfo__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ysk_msgs, srv, OpenCvInfo)() {
  return &OpenCvInfo__handle;
}

#if defined(__cplusplus)
}
#endif
