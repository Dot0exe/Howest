cmake_minimum_required(VERSION 3.18) # file(ARCHIVE_EXTRACT ...) requires 3.18+

# Project name (root folder name by default):
get_filename_component(MY_PROJECT_NAME ${CMAKE_SOURCE_DIR} NAME)

# Executable name (root folder name without lab number by default):
if(MY_PROJECT_NAME MATCHES "^[^_]+_(.*)$")
    set(EXECUTABLE_NAME "${CMAKE_MATCH_1}")
else()
    set(EXECUTABLE_NAME "${MY_PROJECT_NAME}")
endif()

project(${MY_PROJECT_NAME} LANGUAGES CXX)

# Enforce C++17 for the entire project
set(CMAKE_CXX_STANDARD 17)              # Request C++17
set(CMAKE_CXX_STANDARD_REQUIRED ON)     # Make C++17 Manditory instead of preferred
set(CMAKE_CXX_EXTENSIONS OFF)           # Don't allow compiler specific extensions (aka use the standard and nothing else)

add_executable(${EXECUTABLE_NAME} main.cpp)

target_compile_options(${EXECUTABLE_NAME} PRIVATE $<$<CXX_COMPILER_ID:MSVC>:/permissive->)