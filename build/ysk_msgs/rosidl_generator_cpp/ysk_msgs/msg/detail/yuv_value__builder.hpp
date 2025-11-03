// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ysk_msgs:msg/YUVValue.idl
// generated code does not contain a copyright notice

#ifndef YSK_MSGS__MSG__DETAIL__YUV_VALUE__BUILDER_HPP_
#define YSK_MSGS__MSG__DETAIL__YUV_VALUE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ysk_msgs/msg/detail/yuv_value__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ysk_msgs
{

namespace msg
{

namespace builder
{

class Init_YUVValue_cbmax
{
public:
  explicit Init_YUVValue_cbmax(::ysk_msgs::msg::YUVValue & msg)
  : msg_(msg)
  {}
  ::ysk_msgs::msg::YUVValue cbmax(::ysk_msgs::msg::YUVValue::_cbmax_type arg)
  {
    msg_.cbmax = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ysk_msgs::msg::YUVValue msg_;
};

class Init_YUVValue_cbmin
{
public:
  explicit Init_YUVValue_cbmin(::ysk_msgs::msg::YUVValue & msg)
  : msg_(msg)
  {}
  Init_YUVValue_cbmax cbmin(::ysk_msgs::msg::YUVValue::_cbmin_type arg)
  {
    msg_.cbmin = std::move(arg);
    return Init_YUVValue_cbmax(msg_);
  }

private:
  ::ysk_msgs::msg::YUVValue msg_;
};

class Init_YUVValue_crmax
{
public:
  explicit Init_YUVValue_crmax(::ysk_msgs::msg::YUVValue & msg)
  : msg_(msg)
  {}
  Init_YUVValue_cbmin crmax(::ysk_msgs::msg::YUVValue::_crmax_type arg)
  {
    msg_.crmax = std::move(arg);
    return Init_YUVValue_cbmin(msg_);
  }

private:
  ::ysk_msgs::msg::YUVValue msg_;
};

class Init_YUVValue_crmin
{
public:
  explicit Init_YUVValue_crmin(::ysk_msgs::msg::YUVValue & msg)
  : msg_(msg)
  {}
  Init_YUVValue_crmax crmin(::ysk_msgs::msg::YUVValue::_crmin_type arg)
  {
    msg_.crmin = std::move(arg);
    return Init_YUVValue_crmax(msg_);
  }

private:
  ::ysk_msgs::msg::YUVValue msg_;
};

class Init_YUVValue_ymax
{
public:
  explicit Init_YUVValue_ymax(::ysk_msgs::msg::YUVValue & msg)
  : msg_(msg)
  {}
  Init_YUVValue_crmin ymax(::ysk_msgs::msg::YUVValue::_ymax_type arg)
  {
    msg_.ymax = std::move(arg);
    return Init_YUVValue_crmin(msg_);
  }

private:
  ::ysk_msgs::msg::YUVValue msg_;
};

class Init_YUVValue_ymin
{
public:
  Init_YUVValue_ymin()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_YUVValue_ymax ymin(::ysk_msgs::msg::YUVValue::_ymin_type arg)
  {
    msg_.ymin = std::move(arg);
    return Init_YUVValue_ymax(msg_);
  }

private:
  ::ysk_msgs::msg::YUVValue msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ysk_msgs::msg::YUVValue>()
{
  return ysk_msgs::msg::builder::Init_YUVValue_ymin();
}

}  // namespace ysk_msgs

#endif  // YSK_MSGS__MSG__DETAIL__YUV_VALUE__BUILDER_HPP_
