cmake_minimum_required(VERSION 3.15)
project(TimeWorker)

set(CMAKE_CXX_STANDARD 17)

add_executable(TimeWorker src/main.cpp src/main.h src/data/Task.cpp src/data/Task.h)