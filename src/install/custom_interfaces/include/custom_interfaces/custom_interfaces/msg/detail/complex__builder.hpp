// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/Complex.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__COMPLEX__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__COMPLEX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/complex__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_Complex_imaginary
{
public:
  explicit Init_Complex_imaginary(::custom_interfaces::msg::Complex & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::Complex imaginary(::custom_interfaces::msg::Complex::_imaginary_type arg)
  {
    msg_.imaginary = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::Complex msg_;
};

class Init_Complex_real
{
public:
  Init_Complex_real()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Complex_imaginary real(::custom_interfaces::msg::Complex::_real_type arg)
  {
    msg_.real = std::move(arg);
    return Init_Complex_imaginary(msg_);
  }

private:
  ::custom_interfaces::msg::Complex msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::Complex>()
{
  return custom_interfaces::msg::builder::Init_Complex_real();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__COMPLEX__BUILDER_HPP_
