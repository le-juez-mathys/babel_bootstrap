cmake_minimum_required(VERSION 2.8.12)
project(babel)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_definitions("-std=c++11")
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
#set(CMAKE_INCLUDE_CURRENT_DIR ON)


add_executable(test SRC/main.cpp SRC/QTCLASS.hpp SRC/Second_Windows.hpp)
target_link_libraries(test ${CONAN_LIBS})

