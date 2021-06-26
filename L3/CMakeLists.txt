cmake_minimum_required(VERSION 3.19)
project(L3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(L3
        declarationFile.h
        definition.cpp
        main.cpp)
