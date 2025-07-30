// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosidl_typesupport_introspection_tests:srv/Arrays.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_TYPESUPPORT_INTROSPECTION_TESTS__SRV__DETAIL__ARRAYS__STRUCT_H_
#define ROSIDL_TYPESUPPORT_INTROSPECTION_TESTS__SRV__DETAIL__ARRAYS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'string_values'
// Member 'string_values_default'
#include "rosidl_runtime_c/string.h"
// Member 'basic_types_values'
#include "rosidl_typesupport_introspection_tests/msg/detail/basic_types__struct.h"
// Member 'constants_values'
#include "rosidl_typesupport_introspection_tests/msg/detail/constants__struct.h"
// Member 'defaults_values'
#include "rosidl_typesupport_introspection_tests/msg/detail/defaults__struct.h"

/// Struct defined in srv/Arrays in the package rosidl_typesupport_introspection_tests.
typedef struct rosidl_typesupport_introspection_tests__srv__Arrays_Request
{
  bool bool_values[3];
  uint8_t byte_values[3];
  uint8_t char_values[3];
  float float32_values[3];
  double float64_values[3];
  int8_t int8_values[3];
  uint8_t uint8_values[3];
  int16_t int16_values[3];
  uint16_t uint16_values[3];
  int32_t int32_values[3];
  uint32_t uint32_values[3];
  int64_t int64_values[3];
  uint64_t uint64_values[3];
  rosidl_runtime_c__String string_values[3];
  rosidl_typesupport_introspection_tests__msg__BasicTypes basic_types_values[3];
  rosidl_typesupport_introspection_tests__msg__Constants constants_values[3];
  rosidl_typesupport_introspection_tests__msg__Defaults defaults_values[3];
  bool bool_values_default[3];
  uint8_t byte_values_default[3];
  uint8_t char_values_default[3];
  float float32_values_default[3];
  double float64_values_default[3];
  int8_t int8_values_default[3];
  uint8_t uint8_values_default[3];
  int16_t int16_values_default[3];
  uint16_t uint16_values_default[3];
  int32_t int32_values_default[3];
  uint32_t uint32_values_default[3];
  int64_t int64_values_default[3];
  uint64_t uint64_values_default[3];
  rosidl_runtime_c__String string_values_default[3];
} rosidl_typesupport_introspection_tests__srv__Arrays_Request;

// Struct for a sequence of rosidl_typesupport_introspection_tests__srv__Arrays_Request.
typedef struct rosidl_typesupport_introspection_tests__srv__Arrays_Request__Sequence
{
  rosidl_typesupport_introspection_tests__srv__Arrays_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosidl_typesupport_introspection_tests__srv__Arrays_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'string_values'
// Member 'string_values_default'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'basic_types_values'
// already included above
// #include "rosidl_typesupport_introspection_tests/msg/detail/basic_types__struct.h"
// Member 'constants_values'
// already included above
// #include "rosidl_typesupport_introspection_tests/msg/detail/constants__struct.h"
// Member 'defaults_values'
// already included above
// #include "rosidl_typesupport_introspection_tests/msg/detail/defaults__struct.h"

/// Struct defined in srv/Arrays in the package rosidl_typesupport_introspection_tests.
typedef struct rosidl_typesupport_introspection_tests__srv__Arrays_Response
{
  bool bool_values[3];
  uint8_t byte_values[3];
  uint8_t char_values[3];
  float float32_values[3];
  double float64_values[3];
  int8_t int8_values[3];
  uint8_t uint8_values[3];
  int16_t int16_values[3];
  uint16_t uint16_values[3];
  int32_t int32_values[3];
  uint32_t uint32_values[3];
  int64_t int64_values[3];
  uint64_t uint64_values[3];
  rosidl_runtime_c__String string_values[3];
  rosidl_typesupport_introspection_tests__msg__BasicTypes basic_types_values[3];
  rosidl_typesupport_introspection_tests__msg__Constants constants_values[3];
  rosidl_typesupport_introspection_tests__msg__Defaults defaults_values[3];
  bool bool_values_default[3];
  uint8_t byte_values_default[3];
  uint8_t char_values_default[3];
  float float32_values_default[3];
  double float64_values_default[3];
  int8_t int8_values_default[3];
  uint8_t uint8_values_default[3];
  int16_t int16_values_default[3];
  uint16_t uint16_values_default[3];
  int32_t int32_values_default[3];
  uint32_t uint32_values_default[3];
  int64_t int64_values_default[3];
  uint64_t uint64_values_default[3];
  rosidl_runtime_c__String string_values_default[3];
} rosidl_typesupport_introspection_tests__srv__Arrays_Response;

// Struct for a sequence of rosidl_typesupport_introspection_tests__srv__Arrays_Response.
typedef struct rosidl_typesupport_introspection_tests__srv__Arrays_Response__Sequence
{
  rosidl_typesupport_introspection_tests__srv__Arrays_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosidl_typesupport_introspection_tests__srv__Arrays_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSIDL_TYPESUPPORT_INTROSPECTION_TESTS__SRV__DETAIL__ARRAYS__STRUCT_H_
