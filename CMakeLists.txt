cmake_minimum_required(VERSION 3.5.1)
project(cpp17_chanllenge)

include_directories(include)

file(GLOB SOURCES "source/*.cpp")

message(STATUS "The following files are added: " ${SOURCES})

add_executable(cpp17Chanllenge ${SOURCES})
