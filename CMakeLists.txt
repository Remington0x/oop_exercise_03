cmake_minimum_required(VERSION 3.16.3)

set(CMAKE_CXX_FLAGS "-pedantic -Wall -Wextra -Werror")

set(CMAKE_CXX_STANDART 17)

project(lab3)

add_executable(oop_exercise_3 figure.cpp rectangle.cpp triangle.cpp main.cpp)
