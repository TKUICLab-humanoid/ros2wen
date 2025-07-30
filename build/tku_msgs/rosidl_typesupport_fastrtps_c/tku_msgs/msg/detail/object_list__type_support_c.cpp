// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tku_msgs:msg/ObjectList.idl
// generated code does not contain a copyright notice
#include "tku_msgs/msg/detail/object_list__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tku_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tku_msgs/msg/detail/object_list__struct.h"
#include "tku_msgs/msg/detail/object_list__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "tku_msgs/msg/detail/color_array__functions.h"  // objectlist

// forward declare type support functions
size_t get_serialized_size_tku_msgs__msg__ColorArray(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tku_msgs__msg__ColorArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tku_msgs, msg, ColorArray)();


using _ObjectList__ros_msg_type = tku_msgs__msg__ObjectList;

static bool _ObjectList__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ObjectList__ros_msg_type * ros_message = static_cast<const _ObjectList__ros_msg_type *>(untyped_ros_message);
  // Field name: objectlist
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tku_msgs, msg, ColorArray
      )()->data);
    size_t size = ros_message->objectlist.size;
    auto array_ptr = ros_message->objectlist.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _ObjectList__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ObjectList__ros_msg_type * ros_message = static_cast<_ObjectList__ros_msg_type *>(untyped_ros_message);
  // Field name: objectlist
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tku_msgs, msg, ColorArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->objectlist.data) {
      tku_msgs__msg__ColorArray__Sequence__fini(&ros_message->objectlist);
    }
    if (!tku_msgs__msg__ColorArray__Sequence__init(&ros_message->objectlist, size)) {
      fprintf(stderr, "failed to create array for field 'objectlist'");
      return false;
    }
    auto array_ptr = ros_message->objectlist.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tku_msgs
size_t get_serialized_size_tku_msgs__msg__ObjectList(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ObjectList__ros_msg_type * ros_message = static_cast<const _ObjectList__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name objectlist
  {
    size_t array_size = ros_message->objectlist.size;
    auto array_ptr = ros_message->objectlist.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_tku_msgs__msg__ColorArray(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ObjectList__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tku_msgs__msg__ObjectList(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tku_msgs
size_t max_serialized_size_tku_msgs__msg__ObjectList(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: objectlist
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_tku_msgs__msg__ColorArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = tku_msgs__msg__ObjectList;
    is_plain =
      (
      offsetof(DataType, objectlist) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ObjectList__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tku_msgs__msg__ObjectList(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ObjectList = {
  "tku_msgs::msg",
  "ObjectList",
  _ObjectList__cdr_serialize,
  _ObjectList__cdr_deserialize,
  _ObjectList__get_serialized_size,
  _ObjectList__max_serialized_size
};

static rosidl_message_type_support_t _ObjectList__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ObjectList,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tku_msgs, msg, ObjectList)() {
  return &_ObjectList__type_support;
}

#if defined(__cplusplus)
}
#endif
