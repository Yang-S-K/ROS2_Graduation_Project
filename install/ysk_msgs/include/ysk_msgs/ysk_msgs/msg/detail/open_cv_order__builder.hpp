// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ysk_msgs:msg/OpenCvOrder.idl
// generated code does not contain a copyright notice

#ifndef YSK_MSGS__MSG__DETAIL__OPEN_CV_ORDER__BUILDER_HPP_
#define YSK_MSGS__MSG__DETAIL__OPEN_CV_ORDER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ysk_msgs/msg/detail/open_cv_order__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ysk_msgs
{

namespace msg
{

namespace builder
{

class Init_OpenCvOrder_order
{
public:
  Init_OpenCvOrder_order()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ysk_msgs::msg::OpenCvOrder order(::ysk_msgs::msg::OpenCvOrder::_order_type arg)
  {
    msg_.order = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ysk_msgs::msg::OpenCvOrder msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ysk_msgs::msg::OpenCvOrder>()
{
  return ysk_msgs::msg::builder::Init_OpenCvOrder_order();
}

}  // namespace ysk_msgs

#endif  // YSK_MSGS__MSG__DETAIL__OPEN_CV_ORDER__BUILDER_HPP_
