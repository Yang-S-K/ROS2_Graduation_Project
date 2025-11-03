// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ysk_msgs:srv/OpenCvInfo.idl
// generated code does not contain a copyright notice

#ifndef YSK_MSGS__SRV__DETAIL__OPEN_CV_INFO__BUILDER_HPP_
#define YSK_MSGS__SRV__DETAIL__OPEN_CV_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ysk_msgs/srv/detail/open_cv_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ysk_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ysk_msgs::srv::OpenCvInfo_Request>()
{
  return ::ysk_msgs::srv::OpenCvInfo_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace ysk_msgs


namespace ysk_msgs
{

namespace srv
{

namespace builder
{

class Init_OpenCvInfo_Response_already
{
public:
  explicit Init_OpenCvInfo_Response_already(::ysk_msgs::srv::OpenCvInfo_Response & msg)
  : msg_(msg)
  {}
  ::ysk_msgs::srv::OpenCvInfo_Response already(::ysk_msgs::srv::OpenCvInfo_Response::_already_type arg)
  {
    msg_.already = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ysk_msgs::srv::OpenCvInfo_Response msg_;
};

class Init_OpenCvInfo_Response_order
{
public:
  Init_OpenCvInfo_Response_order()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OpenCvInfo_Response_already order(::ysk_msgs::srv::OpenCvInfo_Response::_order_type arg)
  {
    msg_.order = std::move(arg);
    return Init_OpenCvInfo_Response_already(msg_);
  }

private:
  ::ysk_msgs::srv::OpenCvInfo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ysk_msgs::srv::OpenCvInfo_Response>()
{
  return ysk_msgs::srv::builder::Init_OpenCvInfo_Response_order();
}

}  // namespace ysk_msgs

#endif  // YSK_MSGS__SRV__DETAIL__OPEN_CV_INFO__BUILDER_HPP_
