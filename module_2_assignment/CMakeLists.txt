cmake_minimum_required(VERSION 3.8)
project(module_2_assignment)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(turtlesim REQUIRED)
find_package(std_srvs REQUIRED)


add_executable(spiral src/drive_spiral.cpp)
ament_target_dependencies(spiral rclcpp geometry_msgs)

add_executable(circle src/drive_circle.cpp)
ament_target_dependencies(circle rclcpp geometry_msgs)

add_executable(multi_circle src/drive_multi_circle.cpp)
ament_target_dependencies(multi_circle rclcpp geometry_msgs)

<<<<<<< HEAD
#add_executable(too_n_fro src/drive_too_n_fro.cpp)
#ent_target_dependencies(too_n_fro rclcpp geometry_msgs turtlesim std_srvs)
=======
add_executable(task_4 src/task_4.cpp)
ament_target_dependencies(task_4 rclcpp geometry_msgs)
>>>>>>> a7863ecd9b2c325bbaafcfde912be62c6f8bba0c

install(TARGETS
  spiral
  circle
  multi_circle
<<<<<<< HEAD
=======
  task_4

>>>>>>> a7863ecd9b2c325bbaafcfde912be62c6f8bba0c
  DESTINATION lib/${PROJECT_NAME})

  install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME})
ament_package()
