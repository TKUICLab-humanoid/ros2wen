// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tku_msgs:msg/SingleMotorData.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__SINGLE_MOTOR_DATA__STRUCT_H_
#define TKU_MSGS__MSG__DETAIL__SINGLE_MOTOR_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SingleMotorData in the package tku_msgs.
typedef struct tku_msgs__msg__SingleMotorData
{
  int16_t id;
  int16_t position;
  int16_t speed;
} tku_msgs__msg__SingleMotorData;

// Struct for a sequence of tku_msgs__msg__SingleMotorData.
typedef struct tku_msgs__msg__SingleMotorData__Sequence
{
  tku_msgs__msg__SingleMotorData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tku_msgs__msg__SingleMotorData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TKU_MSGS__MSG__DETAIL__SINGLE_MOTOR_DATA__STRUCT_H_
