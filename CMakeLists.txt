cmake_minimum_required(VERSION 3.15)
project(EasyGL)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenGL REQUIRED)
find_package(glfw3 3.3 REQUIRED)

add_library(EasyGL easygl.cpp easygl.h)

target_link_libraries(EasyGL OpenGL::GL glfw)
