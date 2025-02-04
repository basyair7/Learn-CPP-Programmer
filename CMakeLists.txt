# Minimum version for CMake
cmake_minimum_required(VERSION 3.10)

# Project name and version
project(MyCXXProgram_test VERSION 1.0)

# Spesify the CXX standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories (for header files)
include_directories(${CMAKE_SOURCE_DIR}/include)

# Set Executable_name
set(EXECUTABLE_NAME latihan05)

# Source file
file(GLOB SOURCES
    ${CMAKE_SOURCE_DIR}/src/${EXECUTABLE_NAME}.cxx OR
	${CMAKE_SOURCE_DIR}/src/${EXECUTABLE_NAME}.cpp OR
	${CMAKE_SOURCE_DIR}/src/${EXECUTABLE_NAME}.cc OR
	${CMAKE_SOURCE_DIR}/src/${EXECUTABLE_NAME}.c++
)

# Add executable
add_executable(${EXECUTABLE_NAME}_out ${SOURCES})

# Optional: Add compiler warnings for debugging
if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU" OR CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    target_compile_options(${EXECUTABLE_NAME}_out PRIVATE -Wall -Wextra -pedantic)
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    target_compile_options(${EXECUTABLE_NAME}_out PRIVATE /W4)
endif()

# Optional: Print summary
message(STATUS "\n")
message(STATUS "Project Name: ${PROJECT_NAME}")
message(STATUS "CMake Version: ${CMAKE_VERSION}")
message(STATUS "CXX Compiler: ${CMAKE_CXX_COMPILER} (Version : ${CMAKE_CXX_COMPILER_VERSION})\n")