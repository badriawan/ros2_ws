cmake_minimum_required(VERSION 3.5)
project(ros_fundamental)

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
find_package(nav_msgs REQUIRED)
find_package(tf2_ros REQUIRED)




add_executable(talker src/publisher.cpp)
ament_target_dependencies(talker rclcpp std_msgs)

add_executable(listener src/subscriber.cpp)
ament_target_dependencies(listener rclcpp std_msgs)

add_executable(drive_turtle src/drive_turtle.cpp)
ament_target_dependencies(drive_turtle rclcpp std_msgs geometry_msgs)

add_executable(tf_static src/tf_static.cpp)
ament_target_dependencies(tf_static rclcpp std_msgs geometry_msgs tf2_ros)



install(TARGETS
  talker
  listener
  drive_turtle
  tf_static
  DESTINATION lib/${PROJECT_NAME})

install(DIRECTORY
  launch
  urdf
  DESTINATION share/${PROJECT_NAME})

ament_package()