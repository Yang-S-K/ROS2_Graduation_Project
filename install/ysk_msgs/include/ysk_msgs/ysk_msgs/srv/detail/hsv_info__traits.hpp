// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ysk_msgs:srv/HSVInfo.idl
// generated code does not contain a copyright notice

#ifndef YSK_MSGS__SRV__DETAIL__HSV_INFO__TRAITS_HPP_
#define YSK_MSGS__SRV__DETAIL__HSV_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ysk_msgs/srv/detail/hsv_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ysk_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const HSVInfo_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: colorlabel
  {
    out << "colorlabel: ";
    rosidl_generator_traits::value_to_yaml(msg.colorlabel, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HSVInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: colorlabel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "colorlabel: ";
    rosidl_generator_traits::value_to_yaml(msg.colorlabel, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HSVInfo_Request & msg, bool use_flow_style = false)
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
  const ysk_msgs::srv::HSVInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ysk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ysk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ysk_msgs::srv::HSVInfo_Request & msg)
{
  return ysk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ysk_msgs::srv::HSVInfo_Request>()
{
  return "ysk_msgs::srv::HSVInfo_Request";
}

template<>
inline const char * name<ysk_msgs::srv::HSVInfo_Request>()
{
  return "ysk_msgs/srv/HSVInfo_Request";
}

template<>
struct has_fixed_size<ysk_msgs::srv::HSVInfo_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ysk_msgs::srv::HSVInfo_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ysk_msgs::srv::HSVInfo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ysk_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const HSVInfo_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: hmin
  {
    out << "hmin: ";
    rosidl_generator_traits::value_to_yaml(msg.hmin, out);
    out << ", ";
  }

  // member: hmax
  {
    out << "hmax: ";
    rosidl_generator_traits::value_to_yaml(msg.hmax, out);
    out << ", ";
  }

  // member: smin
  {
    out << "smin: ";
    rosidl_generator_traits::value_to_yaml(msg.smin, out);
    out << ", ";
  }

  // member: smax
  {
    out << "smax: ";
    rosidl_generator_traits::value_to_yaml(msg.smax, out);
    out << ", ";
  }

  // member: vmin
  {
    out << "vmin: ";
    rosidl_generator_traits::value_to_yaml(msg.vmin, out);
    out << ", ";
  }

  // member: vmax
  {
    out << "vmax: ";
    rosidl_generator_traits::value_to_yaml(msg.vmax, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HSVInfo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: hmin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmin: ";
    rosidl_generator_traits::value_to_yaml(msg.hmin, out);
    out << "\n";
  }

  // member: hmax
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmax: ";
    rosidl_generator_traits::value_to_yaml(msg.hmax, out);
    out << "\n";
  }

  // member: smin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "smin: ";
    rosidl_generator_traits::value_to_yaml(msg.smin, out);
    out << "\n";
  }

  // member: smax
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "smax: ";
    rosidl_generator_traits::value_to_yaml(msg.smax, out);
    out << "\n";
  }

  // member: vmin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vmin: ";
    rosidl_generator_traits::value_to_yaml(msg.vmin, out);
    out << "\n";
  }

  // member: vmax
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vmax: ";
    rosidl_generator_traits::value_to_yaml(msg.vmax, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HSVInfo_Response & msg, bool use_flow_style = false)
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
  const ysk_msgs::srv::HSVInfo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ysk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ysk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ysk_msgs::srv::HSVInfo_Response & msg)
{
  return ysk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ysk_msgs::srv::HSVInfo_Response>()
{
  return "ysk_msgs::srv::HSVInfo_Response";
}

template<>
inline const char * name<ysk_msgs::srv::HSVInfo_Response>()
{
  return "ysk_msgs/srv/HSVInfo_Response";
}

template<>
struct has_fixed_size<ysk_msgs::srv::HSVInfo_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ysk_msgs::srv::HSVInfo_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ysk_msgs::srv::HSVInfo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ysk_msgs::srv::HSVInfo>()
{
  return "ysk_msgs::srv::HSVInfo";
}

template<>
inline const char * name<ysk_msgs::srv::HSVInfo>()
{
  return "ysk_msgs/srv/HSVInfo";
}

template<>
struct has_fixed_size<ysk_msgs::srv::HSVInfo>
  : std::integral_constant<
    bool,
    has_fixed_size<ysk_msgs::srv::HSVInfo_Request>::value &&
    has_fixed_size<ysk_msgs::srv::HSVInfo_Response>::value
  >
{
};

template<>
struct has_bounded_size<ysk_msgs::srv::HSVInfo>
  : std::integral_constant<
    bool,
    has_bounded_size<ysk_msgs::srv::HSVInfo_Request>::value &&
    has_bounded_size<ysk_msgs::srv::HSVInfo_Response>::value
  >
{
};

template<>
struct is_service<ysk_msgs::srv::HSVInfo>
  : std::true_type
{
};

template<>
struct is_service_request<ysk_msgs::srv::HSVInfo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ysk_msgs::srv::HSVInfo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // YSK_MSGS__SRV__DETAIL__HSV_INFO__TRAITS_HPP_
