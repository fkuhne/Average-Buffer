cmake_minimum_required(VERSION 3.5)
project(averageBuffer)

set(CMAKE_CXX_STANDARD 11)

add_executable(${PROJECT_NAME}
  ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/AverageBuffer.cpp
)
