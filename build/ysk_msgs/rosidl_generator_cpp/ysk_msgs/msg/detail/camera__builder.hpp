// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ysk_msgs:msg/Camera.idl
// generated code does not contain a copyright notice

#ifndef YSK_MSGS__MSG__DETAIL__CAMERA__BUILDER_HPP_
#define YSK_MSGS__MSG__DETAIL__CAMERA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ysk_msgs/msg/detail/camera__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ysk_msgs
{

namespace msg
{

namespace builder
{

class Init_Camera_auto_exposure
{
public:
  explicit Init_Camera_auto_exposure(::ysk_msgs::msg::Camera & msg)
  : msg_(msg)
  {}
  ::ysk_msgs::msg::Camera auto_exposure(::ysk_msgs::msg::Camera::_auto_exposure_type arg)
  {
    msg_.auto_exposure = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ysk_msgs::msg::Camera msg_;
};

class Init_Camera_autowhitebalance
{
public:
  explicit Init_Camera_autowhitebalance(::ysk_msgs::msg::Camera & msg)
  : msg_(msg)
  {}
  Init_Camera_auto_exposure autowhitebalance(::ysk_msgs::msg::Camera::_autowhitebalance_type arg)
  {
    msg_.autowhitebalance = std::move(arg);
    return Init_Camera_auto_exposure(msg_);
  }

private:
  ::ysk_msgs::msg::Camera msg_;
};

class Init_Camera_whitebalance
{
public:
  explicit Init_Camera_whitebalance(::ysk_msgs::msg::Camera & msg)
  : msg_(msg)
  {}
  Init_Camera_autowhitebalance whitebalance(::ysk_msgs::msg::Camera::_whitebalance_type arg)
  {
    msg_.whitebalance = std::move(arg);
    return Init_Camera_autowhitebalance(msg_);
  }

private:
  ::ysk_msgs::msg::Camera msg_;
};

class Init_Camera_saturation
{
public:
  explicit Init_Camera_saturation(::ysk_msgs::msg::Camera & msg)
  : msg_(msg)
  {}
  Init_Camera_whitebalance saturation(::ysk_msgs::msg::Camera::_saturation_type arg)
  {
    msg_.saturation = std::move(arg);
    return Init_Camera_whitebalance(msg_);
  }

private:
  ::ysk_msgs::msg::Camera msg_;
};

class Init_Camera_contrast
{
public:
  explicit Init_Camera_contrast(::ysk_msgs::msg::Camera & msg)
  : msg_(msg)
  {}
  Init_Camera_saturation contrast(::ysk_msgs::msg::Camera::_contrast_type arg)
  {
    msg_.contrast = std::move(arg);
    return Init_Camera_saturation(msg_);
  }

private:
  ::ysk_msgs::msg::Camera msg_;
};

class Init_Camera_brightness
{
public:
  Init_Camera_brightness()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Camera_contrast brightness(::ysk_msgs::msg::Camera::_brightness_type arg)
  {
    msg_.brightness = std::move(arg);
    return Init_Camera_contrast(msg_);
  }

private:
  ::ysk_msgs::msg::Camera msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ysk_msgs::msg::Camera>()
{
  return ysk_msgs::msg::builder::Init_Camera_brightness();
}

}  // namespace ysk_msgs

#endif  // YSK_MSGS__MSG__DETAIL__CAMERA__BUILDER_HPP_
