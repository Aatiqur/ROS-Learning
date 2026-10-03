cmake_minimum_required(VERSION 3.8)
project(custom_interfaces)

set(custom_interfaces_MAJOR_VERSION 0)
set(custom_interfaces_MINOR_VERSION 0)
set(custom_interfaces_PATCH_VERSION 0)
set(custom_interfaces_VERSION
  ${custom_interfaces_MAJOR_VERSION}.${custom_interfaces_MINOR_VERSION}.${custom_interfaces_PATCH_VERSION})

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Complex.msg"
  "srv/CstmSrv.srv"
)


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()
ament_package()
