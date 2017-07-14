cmake_minimum_required(VERSION 2.8.12)

project(sensor_node_ep CXX)
   
add_subdirectory(kaa)

add_executable(sensor_node_ep src/main.cpp)
target_link_libraries(sensor_node_ep kaacpp)
