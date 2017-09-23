cmake_minimum_required(VERSION 2.6)
project(vpnselector)

add_executable(vpnselector main.cpp)

install(TARGETS vpnselector RUNTIME DESTINATION bin)
