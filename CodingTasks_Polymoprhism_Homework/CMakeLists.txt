cmake_minimum_required(VERSION 3.27)
project(CodingTasks_Polymoprhism_Homework)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(CodingTasks_Polymoprhism_Homework
        Circle.cpp
        Circle.h
        main.cpp
        Rectangle.cpp
        Rectangle.h
        Shape.cpp
        Shape.h)
