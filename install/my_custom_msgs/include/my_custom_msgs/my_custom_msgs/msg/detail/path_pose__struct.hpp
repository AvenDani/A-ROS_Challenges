// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_custom_msgs:msg/PathPose.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_MSGS__MSG__DETAIL__PATH_POSE__STRUCT_HPP_
#define MY_CUSTOM_MSGS__MSG__DETAIL__PATH_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_custom_msgs__msg__PathPose __attribute__((deprecated))
#else
# define DEPRECATED__my_custom_msgs__msg__PathPose __declspec(deprecated)
#endif

namespace my_custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PathPose_
{
  using Type = PathPose_<ContainerAllocator>;

  explicit PathPose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear_velocity = 0.0f;
      this->angular_velocity = 0.0f;
      this->time = 0.0f;
    }
  }

  explicit PathPose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear_velocity = 0.0f;
      this->angular_velocity = 0.0f;
      this->time = 0.0f;
    }
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _linear_velocity_type =
    float;
  _linear_velocity_type linear_velocity;
  using _angular_velocity_type =
    float;
  _angular_velocity_type angular_velocity;
  using _time_type =
    float;
  _time_type time;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__linear_velocity(
    const float & _arg)
  {
    this->linear_velocity = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const float & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }
  Type & set__time(
    const float & _arg)
  {
    this->time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_custom_msgs::msg::PathPose_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_custom_msgs::msg::PathPose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_custom_msgs::msg::PathPose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_custom_msgs::msg::PathPose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_custom_msgs::msg::PathPose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_custom_msgs::msg::PathPose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_custom_msgs::msg::PathPose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_custom_msgs::msg::PathPose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_custom_msgs::msg::PathPose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_custom_msgs::msg::PathPose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_custom_msgs__msg__PathPose
    std::shared_ptr<my_custom_msgs::msg::PathPose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_custom_msgs__msg__PathPose
    std::shared_ptr<my_custom_msgs::msg::PathPose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathPose_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->linear_velocity != other.linear_velocity) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathPose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathPose_

// alias to use template instance with default allocator
using PathPose =
  my_custom_msgs::msg::PathPose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_custom_msgs

#endif  // MY_CUSTOM_MSGS__MSG__DETAIL__PATH_POSE__STRUCT_HPP_
