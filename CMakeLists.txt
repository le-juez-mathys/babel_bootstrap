cmake_minimum_required(VERSION 2.8.12)
project(babel)

add_definitions("-std=c++11")

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(test main.cpp)
target_link_libraries(test ${CONAN_LIBS})
##message(${CONAN_LIBS})
##target_link_libraries(test ${CONAN_LIBS} qminimal
