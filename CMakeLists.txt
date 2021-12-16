# CMake version
cmake_minimum_required(VERSION 3.0)

# Project name
project(masini)

# Define the search path for header files
include_directories(inc)

# Specify the required C++ standard
if(CMAKE_VERSION GREATER "3.1.2")
    set(CMAKE_CXX_STANDARD 14)
    set(CMAKE_CXX_STANDARD_REQUIRED ON)
    set(CMAKE_CXX_EXTENSIONS OFF)
else()
    if(CMAKE_COMPILER_IS_GNUCXX)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
    endif()
endif()

# Define the executable
add_executable(${PROJECT_NAME}
                inc/Golf.hpp
                inc/Engine.hpp
                inc/GolfTDI.hpp
                inc/GolfTSI.hpp
                inc/config.hpp
                src/Engine.cpp
                src/Golf.cpp
                src/GolfTDI.cpp
                src/GolfTSI.cpp
                src/main.cpp
                src/Passenger.cpp
                src/Driver.cpp)
