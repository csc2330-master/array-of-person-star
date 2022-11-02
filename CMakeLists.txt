cmake_minimum_required(VERSION 3.21)
project(array_of_person_star)

set(CMAKE_CXX_STANDARD 14)

add_executable(array_of_person_star main.cpp person.cpp person.h people.cpp people.h)
