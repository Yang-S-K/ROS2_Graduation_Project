// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ysk_msgs:msg/CameraSave.idl
// generated code does not contain a copyright notice

#ifndef YSK_MSGS__MSG__DETAIL__CAMERA_SAVE__BUILDER_HPP_
#define YSK_MSGS__MSG__DETAIL__CAMERA_SAVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ysk_msgs/msg/detail/camera_save__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ysk_msgs
{

namespace msg
{

namespace builder
{

class Init_CameraSave_auto_exposure
{
public:
  explicit Init_CameraSave_auto_exposure(::ysk_msgs::msg::CameraSave & msg)
  : msg_(msg)
  {}
  ::ysk_msgs::msg::CameraSave auto_exposure(::ysk_msgs::msg::CameraSave::_auto_exposure_type arg)
  {
    msg_.auto_exposure = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ysk_msgs::msg::CameraSave msg_;
};

class Init_CameraSave_autowhitebalance
{
public:
  explicit Init_CameraSave_autowhitebalance(::ysk_msgs::msg::CameraSave & msg)
  : msg_(msg)
  {}
  Init_CameraSave_auto_exposure autowhitebalance(::ysk_msgs::msg::CameraSave::_autowhitebalance_type arg)
  {
    msg_.autowhitebalance = std::move(arg);
    return Init_CameraSave_auto_exposure(msg_);
  }

private:
  ::ysk_msgs::msg::CameraSave msg_;
};

class Init_CameraSave_whitebalance
{
public:
  explicit Init_CameraSave_whitebalance(::ysk_msgs::msg::CameraSave & msg)
  : msg_(msg)
  {}
  Init_CameraSave_autowhitebalance whitebalance(::ysk_msgs::msg::CameraSave::_whitebalance_type arg)
  {
    msg_.whitebalance = std::move(arg);
    return Init_CameraSave_autowhitebalance(msg_);
  }

private:
  ::ysk_msgs::msg::CameraSave msg_;
};

class Init_CameraSave_saturation
{
public:
  explicit Init_CameraSave_saturation(::ysk_msgs::msg::CameraSave & msg)
  : msg_(msg)
  {}
  Init_CameraSave_whitebalance saturation(::ysk_msgs::msg::CameraSave::_saturation_type arg)
  {
    msg_.saturation = std::move(arg);
    return Init_CameraSave_whitebalance(msg_);
  }

private:
  ::ysk_msgs::msg::CameraSave msg_;
};

class Init_CameraSave_contrast
{
public:
  explicit Init_CameraSave_contrast(::ysk_msgs::msg::CameraSave & msg)
  : msg_(msg)
  {}
  Init_CameraSave_saturation contrast(::ysk_msgs::msg::CameraSave::_contrast_type arg)
  {
    msg_.contrast = std::move(arg);
    return Init_CameraSave_saturation(msg_);
  }

private:
  ::ysk_msgs::msg::CameraSave msg_;
};

class Init_CameraSave_brightness
{
public:
  Init_CameraSave_brightness()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraSave_contrast brightness(::ysk_msgs::msg::CameraSave::_brightness_type arg)
  {
    msg_.brightness = std::move(arg);
    return Init_CameraSave_contrast(msg_);
  }

private:
  ::ysk_msgs::msg::CameraSave msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ysk_msgs::msg::CameraSave>()
{
  return ysk_msgs::msg::builder::Init_CameraSave_brightness();
}

}  // namespace ysk_msgs

#endif  // YSK_MSGS__MSG__DETAIL__CAMERA_SAVE__BUILDER_HPP_
