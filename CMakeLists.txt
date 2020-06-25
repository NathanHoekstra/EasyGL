cmake_minimum_required(VERSION 3.15)
project(EasyGL)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/modules/")

link_directories(${CMAKE_SOURCE_DIR}/lib)

find_package(OpenGL REQUIRED)
find_package(glfw3 3.3 REQUIRED)
message(STATUS "Found GLFW3 in ${GLFW3_INCLUDE_DIR}")

add_executable(EasyGL main.cpp easygl.cpp easygl.h)

target_link_libraries(EasyGL OpenGL::GL glfw3)

include_directories(${CMAKE_SOURCE_DIR}/includes)
