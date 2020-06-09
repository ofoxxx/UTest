cmake_minimum_required (VERSION 3.8)

project("UTestExample" LANGUAGES CXX)

add_executable(UTestExample example.cpp)

add_subdirectory("UTest")
include_directories("UTest")
target_link_libraries(UTestExample UTest)
