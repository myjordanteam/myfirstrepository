# This cmake is written for a dommy application to be exicute ROS pakage
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)


set(CMAKE_BINARY_DIR ./bin)
set(CMAKE_SOURCE_DIR ./src)
set(CMAKE_INCLUDE_DIR ./include)

set(PROJECTSRC
    $CMAKE_SOURCE_DIR/ad_parking_type_main.cpp
    $CMAKE_SOURCE_DIR/parking_parallel_type_info.cpp
    $CMAKE_SOURCE_DIR/parking_side_type_info.cpp)
    
    
include_directories("${CMAKE_BINARY_DIR}")
include_directories("${CMAKE_INCLUDE_DIR}")
# project name
project(dummyproject)

add_executable(execute ${PROJECTSRC})
