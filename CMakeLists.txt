cmake_minimum_required(VERSION 3.22)
project(Learning_C_PlusPlus)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXE_LINKER_FLAGS  "-static")

add_executable(Learning_C_PlusPlus main.cpp)
