// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ysk_msgs:srv/YUVInfo.idl
// generated code does not contain a copyright notice
#include "ysk_msgs/srv/detail/yuv_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ysk_msgs/srv/detail/yuv_info__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace ysk_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ysk_msgs
cdr_serialize(
  const ysk_msgs::srv::YUVInfo_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: colorlabel
  cdr << ros_message.colorlabel;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ysk_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ysk_msgs::srv::YUVInfo_Request & ros_message)
{
  // Member: colorlabel
  cdr >> ros_message.colorlabel;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ysk_msgs
get_serialized_size(
  const ysk_msgs::srv::YUVInfo_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: colorlabel
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.colorlabel.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ysk_msgs
max_serialized_size_YUVInfo_Request(
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


  // Member: colorlabel
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
    using DataType = ysk_msgs::srv::YUVInfo_Request;
    is_plain =
      (
      offsetof(DataType, colorlabel) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _YUVInfo_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ysk_msgs::srv::YUVInfo_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _YUVInfo_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ysk_msgs::srv::YUVInfo_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _YUVInfo_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ysk_msgs::srv::YUVInfo_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _YUVInfo_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_YUVInfo_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _YUVInfo_Request__callbacks = {
  "ysk_msgs::srv",
  "YUVInfo_Request",
  _YUVInfo_Request__cdr_serialize,
  _YUVInfo_Request__cdr_deserialize,
  _YUVInfo_Request__get_serialized_size,
  _YUVInfo_Request__max_serialized_size
};

static rosidl_message_type_support_t _YUVInfo_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_YUVInfo_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace ysk_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ysk_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ysk_msgs::srv::YUVInfo_Request>()
{
  return &ysk_msgs::srv::typesupport_fastrtps_cpp::_YUVInfo_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ysk_msgs, srv, YUVInfo_Request)() {
  return &ysk_msgs::srv::typesupport_fastrtps_cpp::_YUVInfo_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace ysk_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ysk_msgs
cdr_serialize(
  const ysk_msgs::srv::YUVInfo_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: ymin
  cdr << ros_message.ymin;
  // Member: ymax
  cdr << ros_message.ymax;
  // Member: crmin
  cdr << ros_message.crmin;
  // Member: crmax
  cdr << ros_message.crmax;
  // Member: cbmin
  cdr << ros_message.cbmin;
  // Member: cbmax
  cdr << ros_message.cbmax;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ysk_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ysk_msgs::srv::YUVInfo_Response & ros_message)
{
  // Member: ymin
  cdr >> ros_message.ymin;

  // Member: ymax
  cdr >> ros_message.ymax;

  // Member: crmin
  cdr >> ros_message.crmin;

  // Member: crmax
  cdr >> ros_message.crmax;

  // Member: cbmin
  cdr >> ros_message.cbmin;

  // Member: cbmax
  cdr >> ros_message.cbmax;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ysk_msgs
get_serialized_size(
  const ysk_msgs::srv::YUVInfo_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: ymin
  {
    size_t item_size = sizeof(ros_message.ymin);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ymax
  {
    size_t item_size = sizeof(ros_message.ymax);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: crmin
  {
    size_t item_size = sizeof(ros_message.crmin);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: crmax
  {
    size_t item_size = sizeof(ros_message.crmax);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cbmin
  {
    size_t item_size = sizeof(ros_message.cbmin);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cbmax
  {
    size_t item_size = sizeof(ros_message.cbmax);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ysk_msgs
max_serialized_size_YUVInfo_Response(
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


  // Member: ymin
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ymax
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: crmin
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: crmax
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cbmin
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cbmax
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
    using DataType = ysk_msgs::srv::YUVInfo_Response;
    is_plain =
      (
      offsetof(DataType, cbmax) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _YUVInfo_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ysk_msgs::srv::YUVInfo_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _YUVInfo_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ysk_msgs::srv::YUVInfo_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _YUVInfo_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ysk_msgs::srv::YUVInfo_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _YUVInfo_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_YUVInfo_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _YUVInfo_Response__callbacks = {
  "ysk_msgs::srv",
  "YUVInfo_Response",
  _YUVInfo_Response__cdr_serialize,
  _YUVInfo_Response__cdr_deserialize,
  _YUVInfo_Response__get_serialized_size,
  _YUVInfo_Response__max_serialized_size
};

static rosidl_message_type_support_t _YUVInfo_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_YUVInfo_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace ysk_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ysk_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ysk_msgs::srv::YUVInfo_Response>()
{
  return &ysk_msgs::srv::typesupport_fastrtps_cpp::_YUVInfo_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ysk_msgs, srv, YUVInfo_Response)() {
  return &ysk_msgs::srv::typesupport_fastrtps_cpp::_YUVInfo_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace ysk_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _YUVInfo__callbacks = {
  "ysk_msgs::srv",
  "YUVInfo",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ysk_msgs, srv, YUVInfo_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ysk_msgs, srv, YUVInfo_Response)(),
};

static rosidl_service_type_support_t _YUVInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_YUVInfo__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace ysk_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ysk_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<ysk_msgs::srv::YUVInfo>()
{
  return &ysk_msgs::srv::typesupport_fastrtps_cpp::_YUVInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ysk_msgs, srv, YUVInfo)() {
  return &ysk_msgs::srv::typesupport_fastrtps_cpp::_YUVInfo__handle;
}

#ifdef __cplusplus
}
#endif
