// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_custom_msgs:msg/PathPose.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_MSGS__MSG__DETAIL__PATH_POSE__BUILDER_HPP_
#define MY_CUSTOM_MSGS__MSG__DETAIL__PATH_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_custom_msgs/msg/detail/path_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_custom_msgs
{

namespace msg
{

namespace builder
{

class Init_PathPose_time
{
public:
  explicit Init_PathPose_time(::my_custom_msgs::msg::PathPose & msg)
  : msg_(msg)
  {}
  ::my_custom_msgs::msg::PathPose time(::my_custom_msgs::msg::PathPose::_time_type arg)
  {
    msg_.time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_msgs::msg::PathPose msg_;
};

class Init_PathPose_angular_velocity
{
public:
  explicit Init_PathPose_angular_velocity(::my_custom_msgs::msg::PathPose & msg)
  : msg_(msg)
  {}
  Init_PathPose_time angular_velocity(::my_custom_msgs::msg::PathPose::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_PathPose_time(msg_);
  }

private:
  ::my_custom_msgs::msg::PathPose msg_;
};

class Init_PathPose_linear_velocity
{
public:
  explicit Init_PathPose_linear_velocity(::my_custom_msgs::msg::PathPose & msg)
  : msg_(msg)
  {}
  Init_PathPose_angular_velocity linear_velocity(::my_custom_msgs::msg::PathPose::_linear_velocity_type arg)
  {
    msg_.linear_velocity = std::move(arg);
    return Init_PathPose_angular_velocity(msg_);
  }

private:
  ::my_custom_msgs::msg::PathPose msg_;
};

class Init_PathPose_pose
{
public:
  Init_PathPose_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathPose_linear_velocity pose(::my_custom_msgs::msg::PathPose::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_PathPose_linear_velocity(msg_);
  }

private:
  ::my_custom_msgs::msg::PathPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_custom_msgs::msg::PathPose>()
{
  return my_custom_msgs::msg::builder::Init_PathPose_pose();
}

}  // namespace my_custom_msgs

#endif  // MY_CUSTOM_MSGS__MSG__DETAIL__PATH_POSE__BUILDER_HPP_
