// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ysk_msgs:msg/Location.idl
// generated code does not contain a copyright notice

#ifndef YSK_MSGS__MSG__DETAIL__LOCATION__BUILDER_HPP_
#define YSK_MSGS__MSG__DETAIL__LOCATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ysk_msgs/msg/detail/location__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ysk_msgs
{

namespace msg
{

namespace builder
{

class Init_Location_data
{
public:
  Init_Location_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ysk_msgs::msg::Location data(::ysk_msgs::msg::Location::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ysk_msgs::msg::Location msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ysk_msgs::msg::Location>()
{
  return ysk_msgs::msg::builder::Init_Location_data();
}

}  // namespace ysk_msgs

#endif  // YSK_MSGS__MSG__DETAIL__LOCATION__BUILDER_HPP_
