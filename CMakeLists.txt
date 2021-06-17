cmake_minimum_required(VERSION 3.19)
project(untitled3)

set(CMAKE_CXX_STANDARD 17)
message(${CMAKE_CURRENT_SOURCE_DIR})
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR})
find_package(Filesystem REQUIRED COMPONENTS Experimental Final)
add_executable(untitled3 main.cpp)


target_link_libraries(untitled3 std::filesystem)