cmake_minimum_required(VERSION 3.5.0)
project(HelloOO)
file(GLOB SOURCES "*.cpp")
add_executable(${PROJECT_NAME} ${SOURCES})