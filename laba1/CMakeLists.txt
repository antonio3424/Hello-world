cmake_minimum_required(VERSION 3.6)
project(Laba1_CL)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90")

set(SOURCE_FILES main.c)
add_executable(Laba1_CL ${SOURCE_FILES})
target_link_libraries(Laba1_CL m)