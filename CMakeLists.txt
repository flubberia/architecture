cmake_minimum_required(VERSION 2.8)
project(lab1)
set(CMAKE_CXX_COMPILER "/usr/bin/g++")
set(CMAKE_CC_COMPILER "/usr/bin/gcc")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pg")
add_subdirectory(test build/test)
add_executable(lab1-main main.cpp src/BinTree.cpp)
