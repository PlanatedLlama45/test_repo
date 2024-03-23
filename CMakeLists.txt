cmake_minimum_required(VERSION 3.5.0)
project(sus_calculator VERSION 1.0.0)

add_executable(sus_calculator src/main.cpp)

target_link_libraries(sus_calculator -static)
