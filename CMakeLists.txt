cmake_minimum_required(VERSION 3.15)
project(mysharedlibrarytest)

set(CMAKE_CXX_STANDARD 20)

add_executable(mysharedlibrarytest main.cpp)

target_link_libraries(mysharedlibrarytest ${CMAKE_SOURCE_DIR}/lib/libmysharedlib.dylib)