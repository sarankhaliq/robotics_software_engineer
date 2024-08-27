cmake_minimum_required(VERSION 3.8)
project(module_1_assignment)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

include_directories(include())

add_executable(task1_main src/task1_main.cpp src/task1_codes.cpp) 
add_executable(task2 src/task2.cpp) 
add_executable(task3_main src/task3_main.cpp src/task3_codes.cpp) 
