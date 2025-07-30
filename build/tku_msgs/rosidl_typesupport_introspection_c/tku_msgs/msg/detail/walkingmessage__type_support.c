// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tku_msgs:msg/Walkingmessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tku_msgs/msg/detail/walkingmessage__rosidl_typesupport_introspection_c.h"
#include "tku_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tku_msgs/msg/detail/walkingmessage__functions.h"
#include "tku_msgs/msg/detail/walkingmessage__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void tku_msgs__msg__Walkingmessage__rosidl_typesupport_introspection_c__Walkingmessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tku_msgs__msg__Walkingmessage__init(message_memory);
}

void tku_msgs__msg__Walkingmessage__rosidl_typesupport_introspection_c__Walkingmessage_fini_function(void * message_memory)
{
  tku_msgs__msg__Walkingmessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tku_msgs__msg__Walkingmessage__rosidl_typesupport_introspection_c__Walkingmessage_message_member_array[6] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__msg__Walkingmessage, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__msg__Walkingmessage, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__msg__Walkingmessage, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__msg__Walkingmessage, theta),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "walking_cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__msg__Walkingmessage, walking_cmd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__msg__Walkingmessage, sensor_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tku_msgs__msg__Walkingmessage__rosidl_typesupport_introspection_c__Walkingmessage_message_members = {
  "tku_msgs__msg",  // message namespace
  "Walkingmessage",  // message name
  6,  // number of fields
  sizeof(tku_msgs__msg__Walkingmessage),
  tku_msgs__msg__Walkingmessage__rosidl_typesupport_introspection_c__Walkingmessage_message_member_array,  // message members
  tku_msgs__msg__Walkingmessage__rosidl_typesupport_introspection_c__Walkingmessage_init_function,  // function to initialize message memory (memory has to be allocated)
  tku_msgs__msg__Walkingmessage__rosidl_typesupport_introspection_c__Walkingmessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tku_msgs__msg__Walkingmessage__rosidl_typesupport_introspection_c__Walkingmessage_message_type_support_handle = {
  0,
  &tku_msgs__msg__Walkingmessage__rosidl_typesupport_introspection_c__Walkingmessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tku_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tku_msgs, msg, Walkingmessage)() {
  if (!tku_msgs__msg__Walkingmessage__rosidl_typesupport_introspection_c__Walkingmessage_message_type_support_handle.typesupport_identifier) {
    tku_msgs__msg__Walkingmessage__rosidl_typesupport_introspection_c__Walkingmessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tku_msgs__msg__Walkingmessage__rosidl_typesupport_introspection_c__Walkingmessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
