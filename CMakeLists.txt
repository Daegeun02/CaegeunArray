cmake_minimum_required( VERSION 3.10 )

project( run )

add_subdirectory( numdg )

add_executable( run main.cpp )

target_link_libraries( run PUBLIC numdg )
