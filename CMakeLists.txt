cmake_minimum_required(VERSION 3.16)
project(CustomTracker_Client_C C)

include_directories(include lib)

add_definitions(-DCURL_STATICLIB)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -lcurl")
add_executable(CustomTracker_Client_C main.c)
target_link_libraries(CustomTracker_Client_C curl)