// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ysk_msgs:msg/Zoom.idl
// generated code does not contain a copyright notice

#ifndef YSK_MSGS__MSG__DETAIL__ZOOM__BUILDER_HPP_
#define YSK_MSGS__MSG__DETAIL__ZOOM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ysk_msgs/msg/detail/zoom__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ysk_msgs
{

namespace msg
{

namespace builder
{

class Init_Zoom_zoomin
{
public:
  Init_Zoom_zoomin()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ysk_msgs::msg::Zoom zoomin(::ysk_msgs::msg::Zoom::_zoomin_type arg)
  {
    msg_.zoomin = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ysk_msgs::msg::Zoom msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ysk_msgs::msg::Zoom>()
{
  return ysk_msgs::msg::builder::Init_Zoom_zoomin();
}

}  // namespace ysk_msgs

#endif  // YSK_MSGS__MSG__DETAIL__ZOOM__BUILDER_HPP_
