cmake_minimum_required(VERSION 3.16)
project(CustomTracker_Client_C C)
set(CMAKE_C_FLAGS "-fexec-charset=CP949")

add_executable(CustomTracker_Client_C main.c)