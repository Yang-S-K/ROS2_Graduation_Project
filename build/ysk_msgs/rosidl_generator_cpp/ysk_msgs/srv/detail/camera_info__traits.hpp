// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ysk_msgs:srv/CameraInfo.idl
// generated code does not contain a copyright notice

#ifndef YSK_MSGS__SRV__DETAIL__CAMERA_INFO__TRAITS_HPP_
#define YSK_MSGS__SRV__DETAIL__CAMERA_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ysk_msgs/srv/detail/camera_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ysk_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const CameraInfo_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: load
  {
    out << "load: ";
    rosidl_generator_traits::value_to_yaml(msg.load, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CameraInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: load
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "load: ";
    rosidl_generator_traits::value_to_yaml(msg.load, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CameraInfo_Request & msg, bool use_flow_style = false)
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
  const ysk_msgs::srv::CameraInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ysk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ysk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ysk_msgs::srv::CameraInfo_Request & msg)
{
  return ysk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ysk_msgs::srv::CameraInfo_Request>()
{
  return "ysk_msgs::srv::CameraInfo_Request";
}

template<>
inline const char * name<ysk_msgs::srv::CameraInfo_Request>()
{
  return "ysk_msgs/srv/CameraInfo_Request";
}

template<>
struct has_fixed_size<ysk_msgs::srv::CameraInfo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ysk_msgs::srv::CameraInfo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ysk_msgs::srv::CameraInfo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ysk_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const CameraInfo_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: brightness
  {
    out << "brightness: ";
    rosidl_generator_traits::value_to_yaml(msg.brightness, out);
    out << ", ";
  }

  // member: contrast
  {
    out << "contrast: ";
    rosidl_generator_traits::value_to_yaml(msg.contrast, out);
    out << ", ";
  }

  // member: saturation
  {
    out << "saturation: ";
    rosidl_generator_traits::value_to_yaml(msg.saturation, out);
    out << ", ";
  }

  // member: white_balance
  {
    out << "white_balance: ";
    rosidl_generator_traits::value_to_yaml(msg.white_balance, out);
    out << ", ";
  }

  // member: auto_white_balance
  {
    out << "auto_white_balance: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_white_balance, out);
    out << ", ";
  }

  // member: auto_exposure
  {
    out << "auto_exposure: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_exposure, out);
    out << ", ";
  }

  // member: auto_backlight_compensation
  {
    out << "auto_backlight_compensation: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_backlight_compensation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CameraInfo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: brightness
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brightness: ";
    rosidl_generator_traits::value_to_yaml(msg.brightness, out);
    out << "\n";
  }

  // member: contrast
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "contrast: ";
    rosidl_generator_traits::value_to_yaml(msg.contrast, out);
    out << "\n";
  }

  // member: saturation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "saturation: ";
    rosidl_generator_traits::value_to_yaml(msg.saturation, out);
    out << "\n";
  }

  // member: white_balance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "white_balance: ";
    rosidl_generator_traits::value_to_yaml(msg.white_balance, out);
    out << "\n";
  }

  // member: auto_white_balance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auto_white_balance: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_white_balance, out);
    out << "\n";
  }

  // member: auto_exposure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auto_exposure: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_exposure, out);
    out << "\n";
  }

  // member: auto_backlight_compensation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auto_backlight_compensation: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_backlight_compensation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CameraInfo_Response & msg, bool use_flow_style = false)
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
  const ysk_msgs::srv::CameraInfo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ysk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ysk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ysk_msgs::srv::CameraInfo_Response & msg)
{
  return ysk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ysk_msgs::srv::CameraInfo_Response>()
{
  return "ysk_msgs::srv::CameraInfo_Response";
}

template<>
inline const char * name<ysk_msgs::srv::CameraInfo_Response>()
{
  return "ysk_msgs/srv/CameraInfo_Response";
}

template<>
struct has_fixed_size<ysk_msgs::srv::CameraInfo_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ysk_msgs::srv::CameraInfo_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ysk_msgs::srv::CameraInfo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ysk_msgs::srv::CameraInfo>()
{
  return "ysk_msgs::srv::CameraInfo";
}

template<>
inline const char * name<ysk_msgs::srv::CameraInfo>()
{
  return "ysk_msgs/srv/CameraInfo";
}

template<>
struct has_fixed_size<ysk_msgs::srv::CameraInfo>
  : std::integral_constant<
    bool,
    has_fixed_size<ysk_msgs::srv::CameraInfo_Request>::value &&
    has_fixed_size<ysk_msgs::srv::CameraInfo_Response>::value
  >
{
};

template<>
struct has_bounded_size<ysk_msgs::srv::CameraInfo>
  : std::integral_constant<
    bool,
    has_bounded_size<ysk_msgs::srv::CameraInfo_Request>::value &&
    has_bounded_size<ysk_msgs::srv::CameraInfo_Response>::value
  >
{
};

template<>
struct is_service<ysk_msgs::srv::CameraInfo>
  : std::true_type
{
};

template<>
struct is_service_request<ysk_msgs::srv::CameraInfo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ysk_msgs::srv::CameraInfo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // YSK_MSGS__SRV__DETAIL__CAMERA_INFO__TRAITS_HPP_
