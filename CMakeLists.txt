cmake_minimum_required(VERSION 3.17)
project(final_project_sku6)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)
include_directories(src)

add_executable(final_project_sku6
        include/snake.h
        include/location.h
        include/direction.h
        src/snake.cc
        src/location.cc
        src/direction.cc)
