# https://stackoverflow.com/questions/17566575/how-to-initialize-a-static-const-float-in-a-c-class-in-visual-studio
cmake_minimum_required(VERSION 3.10)
project(static_float CXX)
set(CMAKE_CXX_STANDARD 11)

add_executable(main main.cpp)
add_library(mylib SHARED mylib.cpp)
target_link_libraries(main PRIVATE mylib)
add_custom_target(check COMMAND ./main DEPENDS main)