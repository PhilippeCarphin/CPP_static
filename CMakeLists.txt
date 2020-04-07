cmake_minimum_required(VERSION 3.10)
project(static_float CXX)

add_executable(main main.cpp)
add_library(mylib SHARED mylib.cpp)
target_link_libraries(main PRIVATE mylib)