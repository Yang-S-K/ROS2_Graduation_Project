// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ysk_msgs:srv/YUVInfo.idl
// generated code does not contain a copyright notice

#ifndef YSK_MSGS__SRV__DETAIL__YUV_INFO__STRUCT_HPP_
#define YSK_MSGS__SRV__DETAIL__YUV_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ysk_msgs__srv__YUVInfo_Request __attribute__((deprecated))
#else
# define DEPRECATED__ysk_msgs__srv__YUVInfo_Request __declspec(deprecated)
#endif

namespace ysk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct YUVInfo_Request_
{
  using Type = YUVInfo_Request_<ContainerAllocator>;

  explicit YUVInfo_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->colorlabel = "";
    }
  }

  explicit YUVInfo_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : colorlabel(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->colorlabel = "";
    }
  }

  // field types and members
  using _colorlabel_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _colorlabel_type colorlabel;

  // setters for named parameter idiom
  Type & set__colorlabel(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->colorlabel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ysk_msgs::srv::YUVInfo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ysk_msgs::srv::YUVInfo_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ysk_msgs::srv::YUVInfo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ysk_msgs::srv::YUVInfo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ysk_msgs::srv::YUVInfo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ysk_msgs::srv::YUVInfo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ysk_msgs::srv::YUVInfo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ysk_msgs::srv::YUVInfo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ysk_msgs::srv::YUVInfo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ysk_msgs::srv::YUVInfo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ysk_msgs__srv__YUVInfo_Request
    std::shared_ptr<ysk_msgs::srv::YUVInfo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ysk_msgs__srv__YUVInfo_Request
    std::shared_ptr<ysk_msgs::srv::YUVInfo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const YUVInfo_Request_ & other) const
  {
    if (this->colorlabel != other.colorlabel) {
      return false;
    }
    return true;
  }
  bool operator!=(const YUVInfo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct YUVInfo_Request_

// alias to use template instance with default allocator
using YUVInfo_Request =
  ysk_msgs::srv::YUVInfo_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ysk_msgs


#ifndef _WIN32
# define DEPRECATED__ysk_msgs__srv__YUVInfo_Response __attribute__((deprecated))
#else
# define DEPRECATED__ysk_msgs__srv__YUVInfo_Response __declspec(deprecated)
#endif

namespace ysk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct YUVInfo_Response_
{
  using Type = YUVInfo_Response_<ContainerAllocator>;

  explicit YUVInfo_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ymin = 0l;
      this->ymax = 0l;
      this->crmin = 0l;
      this->crmax = 0l;
      this->cbmin = 0l;
      this->cbmax = 0l;
    }
  }

  explicit YUVInfo_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ymin = 0l;
      this->ymax = 0l;
      this->crmin = 0l;
      this->crmax = 0l;
      this->cbmin = 0l;
      this->cbmax = 0l;
    }
  }

  // field types and members
  using _ymin_type =
    int32_t;
  _ymin_type ymin;
  using _ymax_type =
    int32_t;
  _ymax_type ymax;
  using _crmin_type =
    int32_t;
  _crmin_type crmin;
  using _crmax_type =
    int32_t;
  _crmax_type crmax;
  using _cbmin_type =
    int32_t;
  _cbmin_type cbmin;
  using _cbmax_type =
    int32_t;
  _cbmax_type cbmax;

  // setters for named parameter idiom
  Type & set__ymin(
    const int32_t & _arg)
  {
    this->ymin = _arg;
    return *this;
  }
  Type & set__ymax(
    const int32_t & _arg)
  {
    this->ymax = _arg;
    return *this;
  }
  Type & set__crmin(
    const int32_t & _arg)
  {
    this->crmin = _arg;
    return *this;
  }
  Type & set__crmax(
    const int32_t & _arg)
  {
    this->crmax = _arg;
    return *this;
  }
  Type & set__cbmin(
    const int32_t & _arg)
  {
    this->cbmin = _arg;
    return *this;
  }
  Type & set__cbmax(
    const int32_t & _arg)
  {
    this->cbmax = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ysk_msgs::srv::YUVInfo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ysk_msgs::srv::YUVInfo_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ysk_msgs::srv::YUVInfo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ysk_msgs::srv::YUVInfo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ysk_msgs::srv::YUVInfo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ysk_msgs::srv::YUVInfo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ysk_msgs::srv::YUVInfo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ysk_msgs::srv::YUVInfo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ysk_msgs::srv::YUVInfo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ysk_msgs::srv::YUVInfo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ysk_msgs__srv__YUVInfo_Response
    std::shared_ptr<ysk_msgs::srv::YUVInfo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ysk_msgs__srv__YUVInfo_Response
    std::shared_ptr<ysk_msgs::srv::YUVInfo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const YUVInfo_Response_ & other) const
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
  bool operator!=(const YUVInfo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct YUVInfo_Response_

// alias to use template instance with default allocator
using YUVInfo_Response =
  ysk_msgs::srv::YUVInfo_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ysk_msgs

namespace ysk_msgs
{

namespace srv
{

struct YUVInfo
{
  using Request = ysk_msgs::srv::YUVInfo_Request;
  using Response = ysk_msgs::srv::YUVInfo_Response;
};

}  // namespace srv

}  // namespace ysk_msgs

#endif  // YSK_MSGS__SRV__DETAIL__YUV_INFO__STRUCT_HPP_
