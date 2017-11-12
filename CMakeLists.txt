cmake_minimum_required(VERSION 3.0.0)
project(vpnselector VERSION 0.0.1)

set (CMAKE_CXX_FLAGS "-std=c++11 ${CMAKE_CXX_FLAGS}")

#include(CTest)
#enable_testing()

#Keep in mind
#-DCMAKE_CXX_FLAGS=-std=c++11 ${CMAKE_CXX_FLAGS}

set(CURL_LIBRARY "-lcurl") 
find_package(CURL REQUIRED) 

include_directories("${PROJECT_SOURCE_DIR}/include")
include_directories("${PROJECT_SOURCE_DIR}/lib")

set( CPP src/main.cpp src/Country.cpp)

add_executable(vpnselector ${CPP})
target_link_libraries(vpnselector ${CURL_LIBRARIES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
#include(CPack)

#install(TARGETS vpnselector RUNTIME DESTINATION bin)