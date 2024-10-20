cmake_minimum_required(VERSION 3.10)
project(Grit VERSION 0.1)

set(CMAKE_CXX_COMPILER clang++)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

file(GLOB_RECURSE sources
  "${CMAKE_SOURCE_DIR}/src/*.cpp"
  "${CMAKE_SOURCE_DIR}/lib/*.cpp"
)

add_definitions(-DFUNCS -DDOCS)

include_directories("${CMAKE_SOURCE_DIR}/include")
add_executable(grit src/main.cpp)
add_library(funcs lib/funcs.cpp)
add_library(docs lib/docs.cpp)
target_link_libraries(grit funcs docs)
