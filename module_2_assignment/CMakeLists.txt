cmake_minimum_required(VERSION 3.8)
project(module_2_assignment)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)





add_executable(spiral src/drive_spiral.cpp)
ament_target_dependencies(spiral rclcpp geometry_msgs)

add_executable(circle src/drive_circle.cpp)
ament_target_dependencies(circle rclcpp geometry_msgs)



install(TARGETS
  spiral
  circle
  DESTINATION lib/${PROJECT_NAME})

  install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME})
ament_package()
