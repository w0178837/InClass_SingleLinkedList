cmake_minimum_required(VERSION 3.8)
project(InClass_SingleLinkedList)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp NumberList.cpp NumberList.h)
add_executable(InClass_SingleLinkedList ${SOURCE_FILES})