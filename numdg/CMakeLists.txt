cmake_minimum_required (VERSION 3.10)

project (numdg)

add_library (numdg src/_math.cpp)

target_include_directories(numdg PUBLIC inc)