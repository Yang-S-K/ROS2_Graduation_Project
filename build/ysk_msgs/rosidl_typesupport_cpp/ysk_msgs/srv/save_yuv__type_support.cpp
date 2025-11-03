// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from ysk_msgs:srv/SaveYUV.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ysk_msgs/srv/detail/save_yuv__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ysk_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SaveYUV_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SaveYUV_Request_type_support_ids_t;

static const _SaveYUV_Request_type_support_ids_t _SaveYUV_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SaveYUV_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SaveYUV_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SaveYUV_Request_type_support_symbol_names_t _SaveYUV_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ysk_msgs, srv, SaveYUV_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ysk_msgs, srv, SaveYUV_Request)),
  }
};

typedef struct _SaveYUV_Request_type_support_data_t
{
  void * data[2];
} _SaveYUV_Request_type_support_data_t;

static _SaveYUV_Request_type_support_data_t _SaveYUV_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SaveYUV_Request_message_typesupport_map = {
  2,
  "ysk_msgs",
  &_SaveYUV_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SaveYUV_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SaveYUV_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SaveYUV_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SaveYUV_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ysk_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ysk_msgs::srv::SaveYUV_Request>()
{
  return &::ysk_msgs::srv::rosidl_typesupport_cpp::SaveYUV_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ysk_msgs, srv, SaveYUV_Request)() {
  return get_message_type_support_handle<ysk_msgs::srv::SaveYUV_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ysk_msgs/srv/detail/save_yuv__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ysk_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SaveYUV_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SaveYUV_Response_type_support_ids_t;

static const _SaveYUV_Response_type_support_ids_t _SaveYUV_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SaveYUV_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SaveYUV_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SaveYUV_Response_type_support_symbol_names_t _SaveYUV_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ysk_msgs, srv, SaveYUV_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ysk_msgs, srv, SaveYUV_Response)),
  }
};

typedef struct _SaveYUV_Response_type_support_data_t
{
  void * data[2];
} _SaveYUV_Response_type_support_data_t;

static _SaveYUV_Response_type_support_data_t _SaveYUV_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SaveYUV_Response_message_typesupport_map = {
  2,
  "ysk_msgs",
  &_SaveYUV_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SaveYUV_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SaveYUV_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SaveYUV_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SaveYUV_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ysk_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ysk_msgs::srv::SaveYUV_Response>()
{
  return &::ysk_msgs::srv::rosidl_typesupport_cpp::SaveYUV_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ysk_msgs, srv, SaveYUV_Response)() {
  return get_message_type_support_handle<ysk_msgs::srv::SaveYUV_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ysk_msgs/srv/detail/save_yuv__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ysk_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SaveYUV_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SaveYUV_type_support_ids_t;

static const _SaveYUV_type_support_ids_t _SaveYUV_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SaveYUV_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SaveYUV_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SaveYUV_type_support_symbol_names_t _SaveYUV_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ysk_msgs, srv, SaveYUV)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ysk_msgs, srv, SaveYUV)),
  }
};

typedef struct _SaveYUV_type_support_data_t
{
  void * data[2];
} _SaveYUV_type_support_data_t;

static _SaveYUV_type_support_data_t _SaveYUV_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SaveYUV_service_typesupport_map = {
  2,
  "ysk_msgs",
  &_SaveYUV_service_typesupport_ids.typesupport_identifier[0],
  &_SaveYUV_service_typesupport_symbol_names.symbol_name[0],
  &_SaveYUV_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SaveYUV_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SaveYUV_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ysk_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ysk_msgs::srv::SaveYUV>()
{
  return &::ysk_msgs::srv::rosidl_typesupport_cpp::SaveYUV_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, ysk_msgs, srv, SaveYUV)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<ysk_msgs::srv::SaveYUV>();
}

#ifdef __cplusplus
}
#endif
