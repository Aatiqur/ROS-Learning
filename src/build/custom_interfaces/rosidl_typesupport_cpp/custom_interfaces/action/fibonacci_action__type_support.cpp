// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from custom_interfaces:action/FibonacciAction.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "custom_interfaces/action/detail/fibonacci_action__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FibonacciAction_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FibonacciAction_Goal_type_support_ids_t;

static const _FibonacciAction_Goal_type_support_ids_t _FibonacciAction_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FibonacciAction_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FibonacciAction_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FibonacciAction_Goal_type_support_symbol_names_t _FibonacciAction_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_interfaces, action, FibonacciAction_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_interfaces, action, FibonacciAction_Goal)),
  }
};

typedef struct _FibonacciAction_Goal_type_support_data_t
{
  void * data[2];
} _FibonacciAction_Goal_type_support_data_t;

static _FibonacciAction_Goal_type_support_data_t _FibonacciAction_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FibonacciAction_Goal_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_FibonacciAction_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_FibonacciAction_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_FibonacciAction_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FibonacciAction_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FibonacciAction_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace custom_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_interfaces::action::FibonacciAction_Goal>()
{
  return &::custom_interfaces::action::rosidl_typesupport_cpp::FibonacciAction_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, custom_interfaces, action, FibonacciAction_Goal)() {
  return get_message_type_support_handle<custom_interfaces::action::FibonacciAction_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_interfaces/action/detail/fibonacci_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FibonacciAction_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FibonacciAction_Result_type_support_ids_t;

static const _FibonacciAction_Result_type_support_ids_t _FibonacciAction_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FibonacciAction_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FibonacciAction_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FibonacciAction_Result_type_support_symbol_names_t _FibonacciAction_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_interfaces, action, FibonacciAction_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_interfaces, action, FibonacciAction_Result)),
  }
};

typedef struct _FibonacciAction_Result_type_support_data_t
{
  void * data[2];
} _FibonacciAction_Result_type_support_data_t;

static _FibonacciAction_Result_type_support_data_t _FibonacciAction_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FibonacciAction_Result_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_FibonacciAction_Result_message_typesupport_ids.typesupport_identifier[0],
  &_FibonacciAction_Result_message_typesupport_symbol_names.symbol_name[0],
  &_FibonacciAction_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FibonacciAction_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FibonacciAction_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace custom_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_interfaces::action::FibonacciAction_Result>()
{
  return &::custom_interfaces::action::rosidl_typesupport_cpp::FibonacciAction_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, custom_interfaces, action, FibonacciAction_Result)() {
  return get_message_type_support_handle<custom_interfaces::action::FibonacciAction_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_interfaces/action/detail/fibonacci_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FibonacciAction_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FibonacciAction_Feedback_type_support_ids_t;

static const _FibonacciAction_Feedback_type_support_ids_t _FibonacciAction_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FibonacciAction_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FibonacciAction_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FibonacciAction_Feedback_type_support_symbol_names_t _FibonacciAction_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_interfaces, action, FibonacciAction_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_interfaces, action, FibonacciAction_Feedback)),
  }
};

typedef struct _FibonacciAction_Feedback_type_support_data_t
{
  void * data[2];
} _FibonacciAction_Feedback_type_support_data_t;

static _FibonacciAction_Feedback_type_support_data_t _FibonacciAction_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FibonacciAction_Feedback_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_FibonacciAction_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_FibonacciAction_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_FibonacciAction_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FibonacciAction_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FibonacciAction_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace custom_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_interfaces::action::FibonacciAction_Feedback>()
{
  return &::custom_interfaces::action::rosidl_typesupport_cpp::FibonacciAction_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, custom_interfaces, action, FibonacciAction_Feedback)() {
  return get_message_type_support_handle<custom_interfaces::action::FibonacciAction_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_interfaces/action/detail/fibonacci_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FibonacciAction_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FibonacciAction_SendGoal_Request_type_support_ids_t;

static const _FibonacciAction_SendGoal_Request_type_support_ids_t _FibonacciAction_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FibonacciAction_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FibonacciAction_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FibonacciAction_SendGoal_Request_type_support_symbol_names_t _FibonacciAction_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_interfaces, action, FibonacciAction_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_interfaces, action, FibonacciAction_SendGoal_Request)),
  }
};

typedef struct _FibonacciAction_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _FibonacciAction_SendGoal_Request_type_support_data_t;

static _FibonacciAction_SendGoal_Request_type_support_data_t _FibonacciAction_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FibonacciAction_SendGoal_Request_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_FibonacciAction_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_FibonacciAction_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_FibonacciAction_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FibonacciAction_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FibonacciAction_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace custom_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_interfaces::action::FibonacciAction_SendGoal_Request>()
{
  return &::custom_interfaces::action::rosidl_typesupport_cpp::FibonacciAction_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, custom_interfaces, action, FibonacciAction_SendGoal_Request)() {
  return get_message_type_support_handle<custom_interfaces::action::FibonacciAction_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_interfaces/action/detail/fibonacci_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FibonacciAction_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FibonacciAction_SendGoal_Response_type_support_ids_t;

static const _FibonacciAction_SendGoal_Response_type_support_ids_t _FibonacciAction_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FibonacciAction_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FibonacciAction_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FibonacciAction_SendGoal_Response_type_support_symbol_names_t _FibonacciAction_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_interfaces, action, FibonacciAction_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_interfaces, action, FibonacciAction_SendGoal_Response)),
  }
};

typedef struct _FibonacciAction_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _FibonacciAction_SendGoal_Response_type_support_data_t;

static _FibonacciAction_SendGoal_Response_type_support_data_t _FibonacciAction_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FibonacciAction_SendGoal_Response_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_FibonacciAction_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_FibonacciAction_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_FibonacciAction_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FibonacciAction_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FibonacciAction_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace custom_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_interfaces::action::FibonacciAction_SendGoal_Response>()
{
  return &::custom_interfaces::action::rosidl_typesupport_cpp::FibonacciAction_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, custom_interfaces, action, FibonacciAction_SendGoal_Response)() {
  return get_message_type_support_handle<custom_interfaces::action::FibonacciAction_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "custom_interfaces/action/detail/fibonacci_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FibonacciAction_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FibonacciAction_SendGoal_type_support_ids_t;

static const _FibonacciAction_SendGoal_type_support_ids_t _FibonacciAction_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FibonacciAction_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FibonacciAction_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FibonacciAction_SendGoal_type_support_symbol_names_t _FibonacciAction_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_interfaces, action, FibonacciAction_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_interfaces, action, FibonacciAction_SendGoal)),
  }
};

typedef struct _FibonacciAction_SendGoal_type_support_data_t
{
  void * data[2];
} _FibonacciAction_SendGoal_type_support_data_t;

static _FibonacciAction_SendGoal_type_support_data_t _FibonacciAction_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FibonacciAction_SendGoal_service_typesupport_map = {
  2,
  "custom_interfaces",
  &_FibonacciAction_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_FibonacciAction_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_FibonacciAction_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t FibonacciAction_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FibonacciAction_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace custom_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<custom_interfaces::action::FibonacciAction_SendGoal>()
{
  return &::custom_interfaces::action::rosidl_typesupport_cpp::FibonacciAction_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, custom_interfaces, action, FibonacciAction_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<custom_interfaces::action::FibonacciAction_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_interfaces/action/detail/fibonacci_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FibonacciAction_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FibonacciAction_GetResult_Request_type_support_ids_t;

static const _FibonacciAction_GetResult_Request_type_support_ids_t _FibonacciAction_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FibonacciAction_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FibonacciAction_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FibonacciAction_GetResult_Request_type_support_symbol_names_t _FibonacciAction_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_interfaces, action, FibonacciAction_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_interfaces, action, FibonacciAction_GetResult_Request)),
  }
};

typedef struct _FibonacciAction_GetResult_Request_type_support_data_t
{
  void * data[2];
} _FibonacciAction_GetResult_Request_type_support_data_t;

static _FibonacciAction_GetResult_Request_type_support_data_t _FibonacciAction_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FibonacciAction_GetResult_Request_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_FibonacciAction_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_FibonacciAction_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_FibonacciAction_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FibonacciAction_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FibonacciAction_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace custom_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_interfaces::action::FibonacciAction_GetResult_Request>()
{
  return &::custom_interfaces::action::rosidl_typesupport_cpp::FibonacciAction_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, custom_interfaces, action, FibonacciAction_GetResult_Request)() {
  return get_message_type_support_handle<custom_interfaces::action::FibonacciAction_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_interfaces/action/detail/fibonacci_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FibonacciAction_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FibonacciAction_GetResult_Response_type_support_ids_t;

static const _FibonacciAction_GetResult_Response_type_support_ids_t _FibonacciAction_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FibonacciAction_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FibonacciAction_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FibonacciAction_GetResult_Response_type_support_symbol_names_t _FibonacciAction_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_interfaces, action, FibonacciAction_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_interfaces, action, FibonacciAction_GetResult_Response)),
  }
};

typedef struct _FibonacciAction_GetResult_Response_type_support_data_t
{
  void * data[2];
} _FibonacciAction_GetResult_Response_type_support_data_t;

static _FibonacciAction_GetResult_Response_type_support_data_t _FibonacciAction_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FibonacciAction_GetResult_Response_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_FibonacciAction_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_FibonacciAction_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_FibonacciAction_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FibonacciAction_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FibonacciAction_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace custom_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_interfaces::action::FibonacciAction_GetResult_Response>()
{
  return &::custom_interfaces::action::rosidl_typesupport_cpp::FibonacciAction_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, custom_interfaces, action, FibonacciAction_GetResult_Response)() {
  return get_message_type_support_handle<custom_interfaces::action::FibonacciAction_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "custom_interfaces/action/detail/fibonacci_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FibonacciAction_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FibonacciAction_GetResult_type_support_ids_t;

static const _FibonacciAction_GetResult_type_support_ids_t _FibonacciAction_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FibonacciAction_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FibonacciAction_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FibonacciAction_GetResult_type_support_symbol_names_t _FibonacciAction_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_interfaces, action, FibonacciAction_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_interfaces, action, FibonacciAction_GetResult)),
  }
};

typedef struct _FibonacciAction_GetResult_type_support_data_t
{
  void * data[2];
} _FibonacciAction_GetResult_type_support_data_t;

static _FibonacciAction_GetResult_type_support_data_t _FibonacciAction_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FibonacciAction_GetResult_service_typesupport_map = {
  2,
  "custom_interfaces",
  &_FibonacciAction_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_FibonacciAction_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_FibonacciAction_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t FibonacciAction_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FibonacciAction_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace custom_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<custom_interfaces::action::FibonacciAction_GetResult>()
{
  return &::custom_interfaces::action::rosidl_typesupport_cpp::FibonacciAction_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, custom_interfaces, action, FibonacciAction_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<custom_interfaces::action::FibonacciAction_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_interfaces/action/detail/fibonacci_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FibonacciAction_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FibonacciAction_FeedbackMessage_type_support_ids_t;

static const _FibonacciAction_FeedbackMessage_type_support_ids_t _FibonacciAction_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FibonacciAction_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FibonacciAction_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FibonacciAction_FeedbackMessage_type_support_symbol_names_t _FibonacciAction_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_interfaces, action, FibonacciAction_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_interfaces, action, FibonacciAction_FeedbackMessage)),
  }
};

typedef struct _FibonacciAction_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _FibonacciAction_FeedbackMessage_type_support_data_t;

static _FibonacciAction_FeedbackMessage_type_support_data_t _FibonacciAction_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FibonacciAction_FeedbackMessage_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_FibonacciAction_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_FibonacciAction_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_FibonacciAction_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FibonacciAction_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FibonacciAction_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace custom_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_interfaces::action::FibonacciAction_FeedbackMessage>()
{
  return &::custom_interfaces::action::rosidl_typesupport_cpp::FibonacciAction_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, custom_interfaces, action, FibonacciAction_FeedbackMessage)() {
  return get_message_type_support_handle<custom_interfaces::action::FibonacciAction_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "custom_interfaces/action/detail/fibonacci_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t FibonacciAction_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace custom_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<custom_interfaces::action::FibonacciAction>()
{
  using ::custom_interfaces::action::rosidl_typesupport_cpp::FibonacciAction_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  FibonacciAction_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::custom_interfaces::action::FibonacciAction::Impl::SendGoalService>();
  FibonacciAction_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::custom_interfaces::action::FibonacciAction::Impl::GetResultService>();
  FibonacciAction_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::custom_interfaces::action::FibonacciAction::Impl::CancelGoalService>();
  FibonacciAction_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::custom_interfaces::action::FibonacciAction::Impl::FeedbackMessage>();
  FibonacciAction_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::custom_interfaces::action::FibonacciAction::Impl::GoalStatusMessage>();
  return &FibonacciAction_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, custom_interfaces, action, FibonacciAction)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<custom_interfaces::action::FibonacciAction>();
}

#ifdef __cplusplus
}
#endif
