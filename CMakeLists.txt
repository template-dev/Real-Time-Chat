cmake_minimum_required(VERSION 3.12 FATAL_ERROR)

set(PROJECT_NAME "Real-Time-Chat")
project(${PROJECT_NAME})

#add_subdirectory(
#    ${CMAKE_CURRENT_SOURCE_DIR}/Client
#)

add_subdirectory(
    ${CMAKE_CURRENT_SOURCE_DIR}/Server
)