cmake_minimum_required(VERSION 3.6)
project(Laba6)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90")

set(SOURCE_FILES main.c)
add_executable(main.c ${SOURCE_FILES})

target_link_libraries(main.c m)