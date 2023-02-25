cmake_minimum_required(VERSION 3.23)
project(algosi_1)

set(CMAKE_CXX_STANDARD 23)

add_executable(algosi_1 main.cpp head.h core.cpp Writers/FileWriter.cpp Writers/FileWriter.h)
