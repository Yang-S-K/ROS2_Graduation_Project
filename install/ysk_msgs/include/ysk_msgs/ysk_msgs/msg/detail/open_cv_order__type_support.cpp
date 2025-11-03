// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ysk_msgs:msg/OpenCvOrder.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ysk_msgs/msg/detail/open_cv_order__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ysk_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void OpenCvOrder_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ysk_msgs::msg::OpenCvOrder(_init);
}

void OpenCvOrder_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ysk_msgs::msg::OpenCvOrder *>(message_memory);
  typed_message->~OpenCvOrder();
}

size_t size_function__OpenCvOrder__order(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__OpenCvOrder__order(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__OpenCvOrder__order(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__OpenCvOrder__order(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__OpenCvOrder__order(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__OpenCvOrder__order(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__OpenCvOrder__order(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__OpenCvOrder__order(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember OpenCvOrder_message_member_array[1] = {
  {
    "order",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ysk_msgs::msg::OpenCvOrder, order),  // bytes offset in struct
    nullptr,  // default value
    size_function__OpenCvOrder__order,  // size() function pointer
    get_const_function__OpenCvOrder__order,  // get_const(index) function pointer
    get_function__OpenCvOrder__order,  // get(index) function pointer
    fetch_function__OpenCvOrder__order,  // fetch(index, &value) function pointer
    assign_function__OpenCvOrder__order,  // assign(index, value) function pointer
    resize_function__OpenCvOrder__order  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers OpenCvOrder_message_members = {
  "ysk_msgs::msg",  // message namespace
  "OpenCvOrder",  // message name
  1,  // number of fields
  sizeof(ysk_msgs::msg::OpenCvOrder),
  OpenCvOrder_message_member_array,  // message members
  OpenCvOrder_init_function,  // function to initialize message memory (memory has to be allocated)
  OpenCvOrder_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t OpenCvOrder_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &OpenCvOrder_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ysk_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ysk_msgs::msg::OpenCvOrder>()
{
  return &::ysk_msgs::msg::rosidl_typesupport_introspection_cpp::OpenCvOrder_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ysk_msgs, msg, OpenCvOrder)() {
  return &::ysk_msgs::msg::rosidl_typesupport_introspection_cpp::OpenCvOrder_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
