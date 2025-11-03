// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ysk_msgs:srv/YUVInfo.idl
// generated code does not contain a copyright notice

#ifndef YSK_MSGS__SRV__DETAIL__YUV_INFO__BUILDER_HPP_
#define YSK_MSGS__SRV__DETAIL__YUV_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ysk_msgs/srv/detail/yuv_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ysk_msgs
{

namespace srv
{

namespace builder
{

class Init_YUVInfo_Request_colorlabel
{
public:
  Init_YUVInfo_Request_colorlabel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ysk_msgs::srv::YUVInfo_Request colorlabel(::ysk_msgs::srv::YUVInfo_Request::_colorlabel_type arg)
  {
    msg_.colorlabel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ysk_msgs::srv::YUVInfo_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ysk_msgs::srv::YUVInfo_Request>()
{
  return ysk_msgs::srv::builder::Init_YUVInfo_Request_colorlabel();
}

}  // namespace ysk_msgs


namespace ysk_msgs
{

namespace srv
{

namespace builder
{

class Init_YUVInfo_Response_cbmax
{
public:
  explicit Init_YUVInfo_Response_cbmax(::ysk_msgs::srv::YUVInfo_Response & msg)
  : msg_(msg)
  {}
  ::ysk_msgs::srv::YUVInfo_Response cbmax(::ysk_msgs::srv::YUVInfo_Response::_cbmax_type arg)
  {
    msg_.cbmax = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ysk_msgs::srv::YUVInfo_Response msg_;
};

class Init_YUVInfo_Response_cbmin
{
public:
  explicit Init_YUVInfo_Response_cbmin(::ysk_msgs::srv::YUVInfo_Response & msg)
  : msg_(msg)
  {}
  Init_YUVInfo_Response_cbmax cbmin(::ysk_msgs::srv::YUVInfo_Response::_cbmin_type arg)
  {
    msg_.cbmin = std::move(arg);
    return Init_YUVInfo_Response_cbmax(msg_);
  }

private:
  ::ysk_msgs::srv::YUVInfo_Response msg_;
};

class Init_YUVInfo_Response_crmax
{
public:
  explicit Init_YUVInfo_Response_crmax(::ysk_msgs::srv::YUVInfo_Response & msg)
  : msg_(msg)
  {}
  Init_YUVInfo_Response_cbmin crmax(::ysk_msgs::srv::YUVInfo_Response::_crmax_type arg)
  {
    msg_.crmax = std::move(arg);
    return Init_YUVInfo_Response_cbmin(msg_);
  }

private:
  ::ysk_msgs::srv::YUVInfo_Response msg_;
};

class Init_YUVInfo_Response_crmin
{
public:
  explicit Init_YUVInfo_Response_crmin(::ysk_msgs::srv::YUVInfo_Response & msg)
  : msg_(msg)
  {}
  Init_YUVInfo_Response_crmax crmin(::ysk_msgs::srv::YUVInfo_Response::_crmin_type arg)
  {
    msg_.crmin = std::move(arg);
    return Init_YUVInfo_Response_crmax(msg_);
  }

private:
  ::ysk_msgs::srv::YUVInfo_Response msg_;
};

class Init_YUVInfo_Response_ymax
{
public:
  explicit Init_YUVInfo_Response_ymax(::ysk_msgs::srv::YUVInfo_Response & msg)
  : msg_(msg)
  {}
  Init_YUVInfo_Response_crmin ymax(::ysk_msgs::srv::YUVInfo_Response::_ymax_type arg)
  {
    msg_.ymax = std::move(arg);
    return Init_YUVInfo_Response_crmin(msg_);
  }

private:
  ::ysk_msgs::srv::YUVInfo_Response msg_;
};

class Init_YUVInfo_Response_ymin
{
public:
  Init_YUVInfo_Response_ymin()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_YUVInfo_Response_ymax ymin(::ysk_msgs::srv::YUVInfo_Response::_ymin_type arg)
  {
    msg_.ymin = std::move(arg);
    return Init_YUVInfo_Response_ymax(msg_);
  }

private:
  ::ysk_msgs::srv::YUVInfo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ysk_msgs::srv::YUVInfo_Response>()
{
  return ysk_msgs::srv::builder::Init_YUVInfo_Response_ymin();
}

}  // namespace ysk_msgs

#endif  // YSK_MSGS__SRV__DETAIL__YUV_INFO__BUILDER_HPP_
