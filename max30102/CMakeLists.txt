cmake_minimum_required()  # CMake version check
project(read_heart_rate)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 14)            # Enable c++14 standard

# Add main.cpp file of project root directory as source file
set(SOURCE_FILES main.c)
set(LFLAGS "-lwiringPi")
set(CFLAGS "")

SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")
SET(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} ${LFLAGS}")

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(read_heart_rate ${SOURCE_FILES})
