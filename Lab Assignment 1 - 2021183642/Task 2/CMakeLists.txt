cmake_minimum_required(VERSION 3.20)
project(Task_2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Task_2
        main.cpp
        StackType.cpp
        StackType.h)
