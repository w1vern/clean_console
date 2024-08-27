cmake_minimum_required(VERSION 3.3)

set (PROJECT_NAME clean_console)

project(${PROJECT_NAME})

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(${PROJECT_NAME} STATIC src/clean_console.cpp)