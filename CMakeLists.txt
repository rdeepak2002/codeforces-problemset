cmake_minimum_required(VERSION 3.25)
project(codeforces_problemset)

set(CMAKE_CXX_STANDARD 17)

FILE(GLOB SOURCE_FILES src/*.cpp)

add_executable(codeforces_problemset ${SOURCE_FILES})
