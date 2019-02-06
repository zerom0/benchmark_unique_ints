cmake_minimum_required(VERSION 3.13)
project(benchmark_unique_ints)

set(CMAKE_CXX_STANDARD 14)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(benchmark_unique_ints main.cpp)
target_link_libraries(benchmark_unique_ints ${CONAN_LIBS})
