# This cmake is written for a dommy application to be exicute ROS pakage
cmake_minimum_required(VERSION 3.5)

# project name
project(jordendemo)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  genmsg
  message_generation
)

set(CMAKE_BINARY_DIR ./bin)
set(CMAKE_SOURCE_SUB_DIR ./src/subscribe)
set(CMAKE_SOURCE_PRO_DIR ./src/producer)
set(CMAKE_INCLUDE_DIR ./include)

add_message_files(
                    FILES
                    parktype1.msg
                 )

add_service_files(
                    FILES
                    parktype1.srv
                 )
# Generate added messages and services
#generate_messages(
 #                 DEPENDENCIES 
  #                std_msgs
   #               )

## Declare a catkin package
catkin_package(
                CATKIN_DEPENDS roscpp  std_msgs
              )



set(PROJECTSRC
    ${CMAKE_SOURCE_SUB_DIR}/ad_parking_type_main.cpp
    ${CMAKE_SOURCE_SUB_DIR}/parking_parallel_type_info.cpp
    ${CMAKE_SOURCE_SUB_DIR}/parking_side_type_info.cpp)
    
    include_directories(${catkin_INCLUDE_DIRS} "${CMAKE_INCLUDE_DIR}")



add_executable(subscribe ${PROJECTSRC} ${CMAKE_INCLUDE_DIR})
target_link_libraries(subscribe ${catkin_LIBRARIES})

add_executable(producer ${CMAKE_SOURCE_PRO_DIR}/parking_type_produce.cpp ${CMAKE_INCLUDE_DIR})
target_link_libraries(producer ${catkin_LIBRARIES})
