cmake_minimum_required(VERSION 3.12 FATAL_ERROR)

set(PROJECT_NAME "Server")
project(${PROJECT_NAME})

add_executable(
        ${PROJECT_NAME}
        main.cpp
        Server.cpp
        headers/Server.hpp
        headers/interfaces/IServer.hpp
)

set_target_properties(
        ${PROJECT_NAME}
        PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
)