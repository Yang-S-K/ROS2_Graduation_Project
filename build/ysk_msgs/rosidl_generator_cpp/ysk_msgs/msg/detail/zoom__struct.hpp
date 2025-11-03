// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ysk_msgs:msg/Zoom.idl
// generated code does not contain a copyright notice

#ifndef YSK_MSGS__MSG__DETAIL__ZOOM__STRUCT_HPP_
#define YSK_MSGS__MSG__DETAIL__ZOOM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ysk_msgs__msg__Zoom __attribute__((deprecated))
#else
# define DEPRECATED__ysk_msgs__msg__Zoom __declspec(deprecated)
#endif

namespace ysk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Zoom_
{
  using Type = Zoom_<ContainerAllocator>;

  explicit Zoom_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->zoomin = 0.0f;
    }
  }

  explicit Zoom_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->zoomin = 0.0f;
    }
  }

  // field types and members
  using _zoomin_type =
    float;
  _zoomin_type zoomin;

  // setters for named parameter idiom
  Type & set__zoomin(
    const float & _arg)
  {
    this->zoomin = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ysk_msgs::msg::Zoom_<ContainerAllocator> *;
  using ConstRawPtr =
    const ysk_msgs::msg::Zoom_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ysk_msgs::msg::Zoom_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ysk_msgs::msg::Zoom_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ysk_msgs::msg::Zoom_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ysk_msgs::msg::Zoom_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ysk_msgs::msg::Zoom_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ysk_msgs::msg::Zoom_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ysk_msgs::msg::Zoom_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ysk_msgs::msg::Zoom_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ysk_msgs__msg__Zoom
    std::shared_ptr<ysk_msgs::msg::Zoom_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ysk_msgs__msg__Zoom
    std::shared_ptr<ysk_msgs::msg::Zoom_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Zoom_ & other) const
  {
    if (this->zoomin != other.zoomin) {
      return false;
    }
    return true;
  }
  bool operator!=(const Zoom_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Zoom_

// alias to use template instance with default allocator
using Zoom =
  ysk_msgs::msg::Zoom_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ysk_msgs

#endif  // YSK_MSGS__MSG__DETAIL__ZOOM__STRUCT_HPP_
