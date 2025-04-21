// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_custom_msgs:msg/PathPose.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_MSGS__MSG__DETAIL__PATH_POSE__STRUCT_H_
#define MY_CUSTOM_MSGS__MSG__DETAIL__PATH_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/PathPose in the package my_custom_msgs.
typedef struct my_custom_msgs__msg__PathPose
{
  geometry_msgs__msg__Pose pose;
  float linear_velocity;
  float angular_velocity;
  float time;
} my_custom_msgs__msg__PathPose;

// Struct for a sequence of my_custom_msgs__msg__PathPose.
typedef struct my_custom_msgs__msg__PathPose__Sequence
{
  my_custom_msgs__msg__PathPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_custom_msgs__msg__PathPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_CUSTOM_MSGS__MSG__DETAIL__PATH_POSE__STRUCT_H_
