cmake_minimum_required(VERSION 3.15)
project(TimeWorker)

set(CMAKE_CXX_STANDARD 17)

add_executable(TimeWorker src/main.cpp src/main.h src/data/Task.cpp src/data/Task.h src/core/AbstractSerializer.cpp src/core/AbstractSerializer.h src/core/TaskSerializer.cpp src/core/TaskSerializer.h src/cli/TimeWorkerCli.cpp src/cli/TimeWorkerCli.h src/interface/AbstractUserInterface.cpp src/interface/AbstractUserInterface.h src/core/util/DateConverter.cpp src/core/util/DateConverter.h src/core/util/SmartPointer.cpp src/core/util/SmartPointer.h)