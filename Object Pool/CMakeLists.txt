cmake_minimum_required(VERSION 3.13)

project(Object-pool)

set(CMAKE_CXX_STANDARD 23) # Enable the C++23 standard

file(GLOB_RECURSE SOURCE_FILES src/*.cpp)

add_executable(object-pool ${SOURCE_FILES})

target_include_directories(object-pool PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
