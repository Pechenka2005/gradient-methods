cmake_minimum_required(VERSION 3.17)
project(gradient_methods)

set(CMAKE_CXX_STANDARD 14)

add_executable(gradient_methods main.cpp GradientDescent.cpp GradientDescent.h)