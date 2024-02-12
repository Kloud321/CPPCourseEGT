cmake_minimum_required(VERSION 3.27)
project(JSON_Files_Homework)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(JSON_Files_Homework
        Employee.cpp
        Employee.h
        main.cpp
        pugiconfig.h
        pugixml.cpp
        pugixml.h
        Workstation.cpp
        Workstation.h)
