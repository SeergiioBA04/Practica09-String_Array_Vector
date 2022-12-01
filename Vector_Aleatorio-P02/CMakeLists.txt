cmake_minimum_required(VERSION 3.8)

project(function)

add_executable(Upper tools.h tools.cc Upper_Lower.cc Upper_Lower-function.cc Upper_Lower-function.h)
