// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ysk_msgs:srv/SaveYUV.idl
// generated code does not contain a copyright notice

#ifndef YSK_MSGS__SRV__DETAIL__SAVE_YUV__STRUCT_HPP_
#define YSK_MSGS__SRV__DETAIL__SAVE_YUV__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ysk_msgs__srv__SaveYUV_Request __attribute__((deprecated))
#else
# define DEPRECATED__ysk_msgs__srv__SaveYUV_Request __declspec(deprecated)
#endif

namespace ysk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SaveYUV_Request_
{
  using Type = SaveYUV_Request_<ContainerAllocator>;

  explicit SaveYUV_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->save = false;
      this->location = "";
    }
  }

  explicit SaveYUV_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : location(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->save = false;
      this->location = "";
    }
  }

  // field types and members
  using _save_type =
    bool;
  _save_type save;
  using _location_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _location_type location;

  // setters for named parameter idiom
  Type & set__save(
    const bool & _arg)
  {
    this->save = _arg;
    return *this;
  }
  Type & set__location(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->location = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ysk_msgs::srv::SaveYUV_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ysk_msgs::srv::SaveYUV_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ysk_msgs::srv::SaveYUV_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ysk_msgs::srv::SaveYUV_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ysk_msgs::srv::SaveYUV_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ysk_msgs::srv::SaveYUV_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ysk_msgs::srv::SaveYUV_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ysk_msgs::srv::SaveYUV_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ysk_msgs::srv::SaveYUV_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ysk_msgs::srv::SaveYUV_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ysk_msgs__srv__SaveYUV_Request
    std::shared_ptr<ysk_msgs::srv::SaveYUV_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ysk_msgs__srv__SaveYUV_Request
    std::shared_ptr<ysk_msgs::srv::SaveYUV_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SaveYUV_Request_ & other) const
  {
    if (this->save != other.save) {
      return false;
    }
    if (this->location != other.location) {
      return false;
    }
    return true;
  }
  bool operator!=(const SaveYUV_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SaveYUV_Request_

// alias to use template instance with default allocator
using SaveYUV_Request =
  ysk_msgs::srv::SaveYUV_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ysk_msgs


#ifndef _WIN32
# define DEPRECATED__ysk_msgs__srv__SaveYUV_Response __attribute__((deprecated))
#else
# define DEPRECATED__ysk_msgs__srv__SaveYUV_Response __declspec(deprecated)
#endif

namespace ysk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SaveYUV_Response_
{
  using Type = SaveYUV_Response_<ContainerAllocator>;

  explicit SaveYUV_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->already = false;
    }
  }

  explicit SaveYUV_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->already = false;
    }
  }

  // field types and members
  using _already_type =
    bool;
  _already_type already;

  // setters for named parameter idiom
  Type & set__already(
    const bool & _arg)
  {
    this->already = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ysk_msgs::srv::SaveYUV_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ysk_msgs::srv::SaveYUV_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ysk_msgs::srv::SaveYUV_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ysk_msgs::srv::SaveYUV_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ysk_msgs::srv::SaveYUV_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ysk_msgs::srv::SaveYUV_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ysk_msgs::srv::SaveYUV_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ysk_msgs::srv::SaveYUV_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ysk_msgs::srv::SaveYUV_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ysk_msgs::srv::SaveYUV_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ysk_msgs__srv__SaveYUV_Response
    std::shared_ptr<ysk_msgs::srv::SaveYUV_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ysk_msgs__srv__SaveYUV_Response
    std::shared_ptr<ysk_msgs::srv::SaveYUV_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SaveYUV_Response_ & other) const
  {
    if (this->already != other.already) {
      return false;
    }
    return true;
  }
  bool operator!=(const SaveYUV_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SaveYUV_Response_

// alias to use template instance with default allocator
using SaveYUV_Response =
  ysk_msgs::srv::SaveYUV_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ysk_msgs

namespace ysk_msgs
{

namespace srv
{

struct SaveYUV
{
  using Request = ysk_msgs::srv::SaveYUV_Request;
  using Response = ysk_msgs::srv::SaveYUV_Response;
};

}  // namespace srv

}  // namespace ysk_msgs

#endif  // YSK_MSGS__SRV__DETAIL__SAVE_YUV__STRUCT_HPP_
