cmake_minimum_required(VERSION 3.27)
project(CodingTasks_Inheritance_Homework)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(CodingTasks_Inheritance_Homework
        Shape.cpp
        Shape.h
        Circle.h
        Rectangle.h
        Circle.cpp
        Rectangle.cpp
        main.cpp)
