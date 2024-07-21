cmake_minimum_required(VERSION 3.8)
project(LineFollower)


# find_package()

# Include_directories()


add_executable(LFH LF_main.cpp linefollowing.cpp)
add_executable(PRL pointer_robot_location.cpp)


target_link_libraries(LFH)
