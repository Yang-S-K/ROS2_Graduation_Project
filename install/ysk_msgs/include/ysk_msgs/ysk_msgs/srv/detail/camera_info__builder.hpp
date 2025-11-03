// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ysk_msgs:srv/CameraInfo.idl
// generated code does not contain a copyright notice

#ifndef YSK_MSGS__SRV__DETAIL__CAMERA_INFO__BUILDER_HPP_
#define YSK_MSGS__SRV__DETAIL__CAMERA_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ysk_msgs/srv/detail/camera_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ysk_msgs
{

namespace srv
{

namespace builder
{

class Init_CameraInfo_Request_load
{
public:
  Init_CameraInfo_Request_load()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ysk_msgs::srv::CameraInfo_Request load(::ysk_msgs::srv::CameraInfo_Request::_load_type arg)
  {
    msg_.load = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ysk_msgs::srv::CameraInfo_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ysk_msgs::srv::CameraInfo_Request>()
{
  return ysk_msgs::srv::builder::Init_CameraInfo_Request_load();
}

}  // namespace ysk_msgs


namespace ysk_msgs
{

namespace srv
{

namespace builder
{

class Init_CameraInfo_Response_auto_backlight_compensation
{
public:
  explicit Init_CameraInfo_Response_auto_backlight_compensation(::ysk_msgs::srv::CameraInfo_Response & msg)
  : msg_(msg)
  {}
  ::ysk_msgs::srv::CameraInfo_Response auto_backlight_compensation(::ysk_msgs::srv::CameraInfo_Response::_auto_backlight_compensation_type arg)
  {
    msg_.auto_backlight_compensation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ysk_msgs::srv::CameraInfo_Response msg_;
};

class Init_CameraInfo_Response_auto_exposure
{
public:
  explicit Init_CameraInfo_Response_auto_exposure(::ysk_msgs::srv::CameraInfo_Response & msg)
  : msg_(msg)
  {}
  Init_CameraInfo_Response_auto_backlight_compensation auto_exposure(::ysk_msgs::srv::CameraInfo_Response::_auto_exposure_type arg)
  {
    msg_.auto_exposure = std::move(arg);
    return Init_CameraInfo_Response_auto_backlight_compensation(msg_);
  }

private:
  ::ysk_msgs::srv::CameraInfo_Response msg_;
};

class Init_CameraInfo_Response_auto_white_balance
{
public:
  explicit Init_CameraInfo_Response_auto_white_balance(::ysk_msgs::srv::CameraInfo_Response & msg)
  : msg_(msg)
  {}
  Init_CameraInfo_Response_auto_exposure auto_white_balance(::ysk_msgs::srv::CameraInfo_Response::_auto_white_balance_type arg)
  {
    msg_.auto_white_balance = std::move(arg);
    return Init_CameraInfo_Response_auto_exposure(msg_);
  }

private:
  ::ysk_msgs::srv::CameraInfo_Response msg_;
};

class Init_CameraInfo_Response_white_balance
{
public:
  explicit Init_CameraInfo_Response_white_balance(::ysk_msgs::srv::CameraInfo_Response & msg)
  : msg_(msg)
  {}
  Init_CameraInfo_Response_auto_white_balance white_balance(::ysk_msgs::srv::CameraInfo_Response::_white_balance_type arg)
  {
    msg_.white_balance = std::move(arg);
    return Init_CameraInfo_Response_auto_white_balance(msg_);
  }

private:
  ::ysk_msgs::srv::CameraInfo_Response msg_;
};

class Init_CameraInfo_Response_saturation
{
public:
  explicit Init_CameraInfo_Response_saturation(::ysk_msgs::srv::CameraInfo_Response & msg)
  : msg_(msg)
  {}
  Init_CameraInfo_Response_white_balance saturation(::ysk_msgs::srv::CameraInfo_Response::_saturation_type arg)
  {
    msg_.saturation = std::move(arg);
    return Init_CameraInfo_Response_white_balance(msg_);
  }

private:
  ::ysk_msgs::srv::CameraInfo_Response msg_;
};

class Init_CameraInfo_Response_contrast
{
public:
  explicit Init_CameraInfo_Response_contrast(::ysk_msgs::srv::CameraInfo_Response & msg)
  : msg_(msg)
  {}
  Init_CameraInfo_Response_saturation contrast(::ysk_msgs::srv::CameraInfo_Response::_contrast_type arg)
  {
    msg_.contrast = std::move(arg);
    return Init_CameraInfo_Response_saturation(msg_);
  }

private:
  ::ysk_msgs::srv::CameraInfo_Response msg_;
};

class Init_CameraInfo_Response_brightness
{
public:
  Init_CameraInfo_Response_brightness()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraInfo_Response_contrast brightness(::ysk_msgs::srv::CameraInfo_Response::_brightness_type arg)
  {
    msg_.brightness = std::move(arg);
    return Init_CameraInfo_Response_contrast(msg_);
  }

private:
  ::ysk_msgs::srv::CameraInfo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ysk_msgs::srv::CameraInfo_Response>()
{
  return ysk_msgs::srv::builder::Init_CameraInfo_Response_brightness();
}

}  // namespace ysk_msgs

#endif  // YSK_MSGS__SRV__DETAIL__CAMERA_INFO__BUILDER_HPP_
