// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ysk_msgs:srv/OpenCvInfo.idl
// generated code does not contain a copyright notice

#ifndef YSK_MSGS__SRV__DETAIL__OPEN_CV_INFO__TRAITS_HPP_
#define YSK_MSGS__SRV__DETAIL__OPEN_CV_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ysk_msgs/srv/detail/open_cv_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ysk_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const OpenCvInfo_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OpenCvInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OpenCvInfo_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ysk_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ysk_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ysk_msgs::srv::OpenCvInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ysk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ysk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ysk_msgs::srv::OpenCvInfo_Request & msg)
{
  return ysk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ysk_msgs::srv::OpenCvInfo_Request>()
{
  return "ysk_msgs::srv::OpenCvInfo_Request";
}

template<>
inline const char * name<ysk_msgs::srv::OpenCvInfo_Request>()
{
  return "ysk_msgs/srv/OpenCvInfo_Request";
}

template<>
struct has_fixed_size<ysk_msgs::srv::OpenCvInfo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ysk_msgs::srv::OpenCvInfo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ysk_msgs::srv::OpenCvInfo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ysk_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const OpenCvInfo_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: order
  {
    if (msg.order.size() == 0) {
      out << "order: []";
    } else {
      out << "order: [";
      size_t pending_items = msg.order.size();
      for (auto item : msg.order) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: already
  {
    out << "already: ";
    rosidl_generator_traits::value_to_yaml(msg.already, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OpenCvInfo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: order
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.order.size() == 0) {
      out << "order: []\n";
    } else {
      out << "order:\n";
      for (auto item : msg.order) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: already
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "already: ";
    rosidl_generator_traits::value_to_yaml(msg.already, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OpenCvInfo_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ysk_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ysk_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ysk_msgs::srv::OpenCvInfo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ysk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ysk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ysk_msgs::srv::OpenCvInfo_Response & msg)
{
  return ysk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ysk_msgs::srv::OpenCvInfo_Response>()
{
  return "ysk_msgs::srv::OpenCvInfo_Response";
}

template<>
inline const char * name<ysk_msgs::srv::OpenCvInfo_Response>()
{
  return "ysk_msgs/srv/OpenCvInfo_Response";
}

template<>
struct has_fixed_size<ysk_msgs::srv::OpenCvInfo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ysk_msgs::srv::OpenCvInfo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ysk_msgs::srv::OpenCvInfo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ysk_msgs::srv::OpenCvInfo>()
{
  return "ysk_msgs::srv::OpenCvInfo";
}

template<>
inline const char * name<ysk_msgs::srv::OpenCvInfo>()
{
  return "ysk_msgs/srv/OpenCvInfo";
}

template<>
struct has_fixed_size<ysk_msgs::srv::OpenCvInfo>
  : std::integral_constant<
    bool,
    has_fixed_size<ysk_msgs::srv::OpenCvInfo_Request>::value &&
    has_fixed_size<ysk_msgs::srv::OpenCvInfo_Response>::value
  >
{
};

template<>
struct has_bounded_size<ysk_msgs::srv::OpenCvInfo>
  : std::integral_constant<
    bool,
    has_bounded_size<ysk_msgs::srv::OpenCvInfo_Request>::value &&
    has_bounded_size<ysk_msgs::srv::OpenCvInfo_Response>::value
  >
{
};

template<>
struct is_service<ysk_msgs::srv::OpenCvInfo>
  : std::true_type
{
};

template<>
struct is_service_request<ysk_msgs::srv::OpenCvInfo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ysk_msgs::srv::OpenCvInfo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // YSK_MSGS__SRV__DETAIL__OPEN_CV_INFO__TRAITS_HPP_
