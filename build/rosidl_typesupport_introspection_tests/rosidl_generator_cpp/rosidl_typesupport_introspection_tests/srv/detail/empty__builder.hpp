// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosidl_typesupport_introspection_tests:srv/Empty.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_TYPESUPPORT_INTROSPECTION_TESTS__SRV__DETAIL__EMPTY__BUILDER_HPP_
#define ROSIDL_TYPESUPPORT_INTROSPECTION_TESTS__SRV__DETAIL__EMPTY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosidl_typesupport_introspection_tests/srv/detail/empty__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosidl_typesupport_introspection_tests
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosidl_typesupport_introspection_tests::srv::Empty_Request>()
{
  return ::rosidl_typesupport_introspection_tests::srv::Empty_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rosidl_typesupport_introspection_tests


namespace rosidl_typesupport_introspection_tests
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosidl_typesupport_introspection_tests::srv::Empty_Response>()
{
  return ::rosidl_typesupport_introspection_tests::srv::Empty_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rosidl_typesupport_introspection_tests

#endif  // ROSIDL_TYPESUPPORT_INTROSPECTION_TESTS__SRV__DETAIL__EMPTY__BUILDER_HPP_
