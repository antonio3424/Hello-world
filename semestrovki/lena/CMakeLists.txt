cmake_minimum_required(VERSION 3.6)
project(untitled2)

set(CMAKE_C_STANDARD 90)

set(SOURCE_FILES main.c qdbmp.c)

add_executable(imageload_template ${SOURCE_FILES})