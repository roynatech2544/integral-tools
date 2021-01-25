cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
project(integral_tools)

add_subdirectory(Calc)
add_subdirectory(Combination)
add_subdirectory(PrimeNum)

set(integral_source_files core.cpp includes.h)
add_executable(intools ${integral_source_files})

target_link_libraries(intools PrimeNum)
  # also transitively gets the "js" and "util" dependencies
