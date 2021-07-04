cmake_minimum_required(VERSION 3.9)
project(CodeTest)

set(CMAKE_CXX_STANDARD 20)

add_definitions(-std=c++17)
add_subdirectory(./googletest)
include_directories(./googletest/googletest/include)
link_directories(./googletest)
set(LIBRARIES pthread)

aux_source_directory(./ SRC)


add_executable(CodeTest ${SRC})

target_link_libraries(CodeTest gtest)