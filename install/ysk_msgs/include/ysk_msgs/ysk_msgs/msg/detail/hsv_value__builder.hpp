// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ysk_msgs:msg/HSVValue.idl
// generated code does not contain a copyright notice

#ifndef YSK_MSGS__MSG__DETAIL__HSV_VALUE__BUILDER_HPP_
#define YSK_MSGS__MSG__DETAIL__HSV_VALUE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ysk_msgs/msg/detail/hsv_value__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ysk_msgs
{

namespace msg
{

namespace builder
{

class Init_HSVValue_vmax
{
public:
  explicit Init_HSVValue_vmax(::ysk_msgs::msg::HSVValue & msg)
  : msg_(msg)
  {}
  ::ysk_msgs::msg::HSVValue vmax(::ysk_msgs::msg::HSVValue::_vmax_type arg)
  {
    msg_.vmax = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ysk_msgs::msg::HSVValue msg_;
};

class Init_HSVValue_vmin
{
public:
  explicit Init_HSVValue_vmin(::ysk_msgs::msg::HSVValue & msg)
  : msg_(msg)
  {}
  Init_HSVValue_vmax vmin(::ysk_msgs::msg::HSVValue::_vmin_type arg)
  {
    msg_.vmin = std::move(arg);
    return Init_HSVValue_vmax(msg_);
  }

private:
  ::ysk_msgs::msg::HSVValue msg_;
};

class Init_HSVValue_smax
{
public:
  explicit Init_HSVValue_smax(::ysk_msgs::msg::HSVValue & msg)
  : msg_(msg)
  {}
  Init_HSVValue_vmin smax(::ysk_msgs::msg::HSVValue::_smax_type arg)
  {
    msg_.smax = std::move(arg);
    return Init_HSVValue_vmin(msg_);
  }

private:
  ::ysk_msgs::msg::HSVValue msg_;
};

class Init_HSVValue_smin
{
public:
  explicit Init_HSVValue_smin(::ysk_msgs::msg::HSVValue & msg)
  : msg_(msg)
  {}
  Init_HSVValue_smax smin(::ysk_msgs::msg::HSVValue::_smin_type arg)
  {
    msg_.smin = std::move(arg);
    return Init_HSVValue_smax(msg_);
  }

private:
  ::ysk_msgs::msg::HSVValue msg_;
};

class Init_HSVValue_hmax
{
public:
  explicit Init_HSVValue_hmax(::ysk_msgs::msg::HSVValue & msg)
  : msg_(msg)
  {}
  Init_HSVValue_smin hmax(::ysk_msgs::msg::HSVValue::_hmax_type arg)
  {
    msg_.hmax = std::move(arg);
    return Init_HSVValue_smin(msg_);
  }

private:
  ::ysk_msgs::msg::HSVValue msg_;
};

class Init_HSVValue_hmin
{
public:
  Init_HSVValue_hmin()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HSVValue_hmax hmin(::ysk_msgs::msg::HSVValue::_hmin_type arg)
  {
    msg_.hmin = std::move(arg);
    return Init_HSVValue_hmax(msg_);
  }

private:
  ::ysk_msgs::msg::HSVValue msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ysk_msgs::msg::HSVValue>()
{
  return ysk_msgs::msg::builder::Init_HSVValue_hmin();
}

}  // namespace ysk_msgs

#endif  // YSK_MSGS__MSG__DETAIL__HSV_VALUE__BUILDER_HPP_
