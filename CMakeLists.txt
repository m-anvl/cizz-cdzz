cmake_minimum_required(VERSION 3.30)
project(CizzCdzz)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(cizzcdzz
    src/main.cpp
    src/print_func.cpp
    src/print_func.h
)

target_include_directories(cizzcdzz PRIVATE src)