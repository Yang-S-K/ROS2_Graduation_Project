// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ysk_msgs:msg/Zoom.idl
// generated code does not contain a copyright notice

#ifndef YSK_MSGS__MSG__DETAIL__ZOOM__TRAITS_HPP_
#define YSK_MSGS__MSG__DETAIL__ZOOM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ysk_msgs/msg/detail/zoom__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ysk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Zoom & msg,
  std::ostream & out)
{
  out << "{";
  // member: zoomin
  {
    out << "zoomin: ";
    rosidl_generator_traits::value_to_yaml(msg.zoomin, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Zoom & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: zoomin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "zoomin: ";
    rosidl_generator_traits::value_to_yaml(msg.zoomin, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Zoom & msg, bool use_flow_style = false)
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
  const ysk_msgs::msg::Zoom & msg,
  std::ostream & out, size_t indentation = 0)
{
  ysk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ysk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ysk_msgs::msg::Zoom & msg)
{
  return ysk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ysk_msgs::msg::Zoom>()
{
  return "ysk_msgs::msg::Zoom";
}

template<>
inline const char * name<ysk_msgs::msg::Zoom>()
{
  return "ysk_msgs/msg/Zoom";
}

template<>
struct has_fixed_size<ysk_msgs::msg::Zoom>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ysk_msgs::msg::Zoom>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ysk_msgs::msg::Zoom>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YSK_MSGS__MSG__DETAIL__ZOOM__TRAITS_HPP_
