// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ysk_msgs:msg/OpenCvOrder.idl
// generated code does not contain a copyright notice

#ifndef YSK_MSGS__MSG__DETAIL__OPEN_CV_ORDER__STRUCT_HPP_
#define YSK_MSGS__MSG__DETAIL__OPEN_CV_ORDER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ysk_msgs__msg__OpenCvOrder __attribute__((deprecated))
#else
# define DEPRECATED__ysk_msgs__msg__OpenCvOrder __declspec(deprecated)
#endif

namespace ysk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OpenCvOrder_
{
  using Type = OpenCvOrder_<ContainerAllocator>;

  explicit OpenCvOrder_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit OpenCvOrder_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _order_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _order_type order;

  // setters for named parameter idiom
  Type & set__order(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->order = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ysk_msgs::msg::OpenCvOrder_<ContainerAllocator> *;
  using ConstRawPtr =
    const ysk_msgs::msg::OpenCvOrder_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ysk_msgs::msg::OpenCvOrder_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ysk_msgs::msg::OpenCvOrder_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ysk_msgs::msg::OpenCvOrder_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ysk_msgs::msg::OpenCvOrder_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ysk_msgs::msg::OpenCvOrder_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ysk_msgs::msg::OpenCvOrder_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ysk_msgs::msg::OpenCvOrder_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ysk_msgs::msg::OpenCvOrder_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ysk_msgs__msg__OpenCvOrder
    std::shared_ptr<ysk_msgs::msg::OpenCvOrder_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ysk_msgs__msg__OpenCvOrder
    std::shared_ptr<ysk_msgs::msg::OpenCvOrder_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OpenCvOrder_ & other) const
  {
    if (this->order != other.order) {
      return false;
    }
    return true;
  }
  bool operator!=(const OpenCvOrder_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OpenCvOrder_

// alias to use template instance with default allocator
using OpenCvOrder =
  ysk_msgs::msg::OpenCvOrder_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ysk_msgs

#endif  // YSK_MSGS__MSG__DETAIL__OPEN_CV_ORDER__STRUCT_HPP_
