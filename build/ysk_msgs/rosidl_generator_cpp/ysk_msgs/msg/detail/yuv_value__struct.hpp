// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ysk_msgs:msg/YUVValue.idl
// generated code does not contain a copyright notice

#ifndef YSK_MSGS__MSG__DETAIL__YUV_VALUE__STRUCT_HPP_
#define YSK_MSGS__MSG__DETAIL__YUV_VALUE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ysk_msgs__msg__YUVValue __attribute__((deprecated))
#else
# define DEPRECATED__ysk_msgs__msg__YUVValue __declspec(deprecated)
#endif

namespace ysk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct YUVValue_
{
  using Type = YUVValue_<ContainerAllocator>;

  explicit YUVValue_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ymin = 0;
      this->ymax = 0;
      this->crmin = 0;
      this->crmax = 0;
      this->cbmin = 0;
      this->cbmax = 0;
    }
  }

  explicit YUVValue_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ymin = 0;
      this->ymax = 0;
      this->crmin = 0;
      this->crmax = 0;
      this->cbmin = 0;
      this->cbmax = 0;
    }
  }

  // field types and members
  using _ymin_type =
    int16_t;
  _ymin_type ymin;
  using _ymax_type =
    int16_t;
  _ymax_type ymax;
  using _crmin_type =
    int16_t;
  _crmin_type crmin;
  using _crmax_type =
    int16_t;
  _crmax_type crmax;
  using _cbmin_type =
    int16_t;
  _cbmin_type cbmin;
  using _cbmax_type =
    int16_t;
  _cbmax_type cbmax;

  // setters for named parameter idiom
  Type & set__ymin(
    const int16_t & _arg)
  {
    this->ymin = _arg;
    return *this;
  }
  Type & set__ymax(
    const int16_t & _arg)
  {
    this->ymax = _arg;
    return *this;
  }
  Type & set__crmin(
    const int16_t & _arg)
  {
    this->crmin = _arg;
    return *this;
  }
  Type & set__crmax(
    const int16_t & _arg)
  {
    this->crmax = _arg;
    return *this;
  }
  Type & set__cbmin(
    const int16_t & _arg)
  {
    this->cbmin = _arg;
    return *this;
  }
  Type & set__cbmax(
    const int16_t & _arg)
  {
    this->cbmax = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ysk_msgs::msg::YUVValue_<ContainerAllocator> *;
  using ConstRawPtr =
    const ysk_msgs::msg::YUVValue_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ysk_msgs::msg::YUVValue_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ysk_msgs::msg::YUVValue_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ysk_msgs::msg::YUVValue_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ysk_msgs::msg::YUVValue_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ysk_msgs::msg::YUVValue_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ysk_msgs::msg::YUVValue_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ysk_msgs::msg::YUVValue_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ysk_msgs::msg::YUVValue_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ysk_msgs__msg__YUVValue
    std::shared_ptr<ysk_msgs::msg::YUVValue_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ysk_msgs__msg__YUVValue
    std::shared_ptr<ysk_msgs::msg::YUVValue_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const YUVValue_ & other) const
  {
    if (this->ymin != other.ymin) {
      return false;
    }
    if (this->ymax != other.ymax) {
      return false;
    }
    if (this->crmin != other.crmin) {
      return false;
    }
    if (this->crmax != other.crmax) {
      return false;
    }
    if (this->cbmin != other.cbmin) {
      return false;
    }
    if (this->cbmax != other.cbmax) {
      return false;
    }
    return true;
  }
  bool operator!=(const YUVValue_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct YUVValue_

// alias to use template instance with default allocator
using YUVValue =
  ysk_msgs::msg::YUVValue_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ysk_msgs

#endif  // YSK_MSGS__MSG__DETAIL__YUV_VALUE__STRUCT_HPP_
