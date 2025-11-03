// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ysk_msgs:msg/YUVValue.idl
// generated code does not contain a copyright notice

#ifndef YSK_MSGS__MSG__DETAIL__YUV_VALUE__TRAITS_HPP_
#define YSK_MSGS__MSG__DETAIL__YUV_VALUE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ysk_msgs/msg/detail/yuv_value__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ysk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const YUVValue & msg,
  std::ostream & out)
{
  out << "{";
  // member: ymin
  {
    out << "ymin: ";
    rosidl_generator_traits::value_to_yaml(msg.ymin, out);
    out << ", ";
  }

  // member: ymax
  {
    out << "ymax: ";
    rosidl_generator_traits::value_to_yaml(msg.ymax, out);
    out << ", ";
  }

  // member: crmin
  {
    out << "crmin: ";
    rosidl_generator_traits::value_to_yaml(msg.crmin, out);
    out << ", ";
  }

  // member: crmax
  {
    out << "crmax: ";
    rosidl_generator_traits::value_to_yaml(msg.crmax, out);
    out << ", ";
  }

  // member: cbmin
  {
    out << "cbmin: ";
    rosidl_generator_traits::value_to_yaml(msg.cbmin, out);
    out << ", ";
  }

  // member: cbmax
  {
    out << "cbmax: ";
    rosidl_generator_traits::value_to_yaml(msg.cbmax, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const YUVValue & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ymin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ymin: ";
    rosidl_generator_traits::value_to_yaml(msg.ymin, out);
    out << "\n";
  }

  // member: ymax
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ymax: ";
    rosidl_generator_traits::value_to_yaml(msg.ymax, out);
    out << "\n";
  }

  // member: crmin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "crmin: ";
    rosidl_generator_traits::value_to_yaml(msg.crmin, out);
    out << "\n";
  }

  // member: crmax
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "crmax: ";
    rosidl_generator_traits::value_to_yaml(msg.crmax, out);
    out << "\n";
  }

  // member: cbmin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cbmin: ";
    rosidl_generator_traits::value_to_yaml(msg.cbmin, out);
    out << "\n";
  }

  // member: cbmax
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cbmax: ";
    rosidl_generator_traits::value_to_yaml(msg.cbmax, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const YUVValue & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ysk_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ysk_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ysk_msgs::msg::YUVValue & msg,
  std::ostream & out, size_t indentation = 0)
{
  ysk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ysk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ysk_msgs::msg::YUVValue & msg)
{
  return ysk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ysk_msgs::msg::YUVValue>()
{
  return "ysk_msgs::msg::YUVValue";
}

template<>
inline const char * name<ysk_msgs::msg::YUVValue>()
{
  return "ysk_msgs/msg/YUVValue";
}

template<>
struct has_fixed_size<ysk_msgs::msg::YUVValue>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ysk_msgs::msg::YUVValue>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ysk_msgs::msg::YUVValue>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YSK_MSGS__MSG__DETAIL__YUV_VALUE__TRAITS_HPP_
