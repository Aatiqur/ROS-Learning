// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:msg/Complex.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__COMPLEX__STRUCT_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__COMPLEX__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__msg__Complex __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__msg__Complex __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Complex_
{
  using Type = Complex_<ContainerAllocator>;

  explicit Complex_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->real = 0ll;
      this->imaginary = 0ll;
    }
  }

  explicit Complex_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->real = 0ll;
      this->imaginary = 0ll;
    }
  }

  // field types and members
  using _real_type =
    int64_t;
  _real_type real;
  using _imaginary_type =
    int64_t;
  _imaginary_type imaginary;

  // setters for named parameter idiom
  Type & set__real(
    const int64_t & _arg)
  {
    this->real = _arg;
    return *this;
  }
  Type & set__imaginary(
    const int64_t & _arg)
  {
    this->imaginary = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::msg::Complex_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::msg::Complex_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::msg::Complex_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::msg::Complex_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::Complex_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::Complex_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::Complex_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::Complex_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::msg::Complex_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::msg::Complex_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__msg__Complex
    std::shared_ptr<custom_interfaces::msg::Complex_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__msg__Complex
    std::shared_ptr<custom_interfaces::msg::Complex_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Complex_ & other) const
  {
    if (this->real != other.real) {
      return false;
    }
    if (this->imaginary != other.imaginary) {
      return false;
    }
    return true;
  }
  bool operator!=(const Complex_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Complex_

// alias to use template instance with default allocator
using Complex =
  custom_interfaces::msg::Complex_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__COMPLEX__STRUCT_HPP_
