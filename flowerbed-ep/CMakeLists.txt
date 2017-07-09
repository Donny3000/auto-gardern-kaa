cmake_minimum_required(VERSION 2.8.12)

project(flowerbed-ep CXX)

add_subdirectory(kaa)

add_executable(flowerbed-ep-app
  src/main.cpp
)
target_link_libraries(flowerbed-ep-app kaacpp)
