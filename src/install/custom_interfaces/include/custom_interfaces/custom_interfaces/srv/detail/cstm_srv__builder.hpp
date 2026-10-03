// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:srv/CstmSrv.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__CSTM_SRV__BUILDER_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__CSTM_SRV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/srv/detail/cstm_srv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_CstmSrv_Request_b
{
public:
  explicit Init_CstmSrv_Request_b(::custom_interfaces::srv::CstmSrv_Request & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::srv::CstmSrv_Request b(::custom_interfaces::srv::CstmSrv_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::CstmSrv_Request msg_;
};

class Init_CstmSrv_Request_a
{
public:
  Init_CstmSrv_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CstmSrv_Request_b a(::custom_interfaces::srv::CstmSrv_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_CstmSrv_Request_b(msg_);
  }

private:
  ::custom_interfaces::srv::CstmSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::CstmSrv_Request>()
{
  return custom_interfaces::srv::builder::Init_CstmSrv_Request_a();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_CstmSrv_Response_rslt
{
public:
  Init_CstmSrv_Response_rslt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::srv::CstmSrv_Response rslt(::custom_interfaces::srv::CstmSrv_Response::_rslt_type arg)
  {
    msg_.rslt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::CstmSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::CstmSrv_Response>()
{
  return custom_interfaces::srv::builder::Init_CstmSrv_Response_rslt();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__CSTM_SRV__BUILDER_HPP_
