cmake_minimum_required(VERSION 3.10)

project(Snake)

set (CMAKE_CXX_STANDARD 11)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# SFML Setup

# Includes
include_directories(${CMAKE_CURRENT_BINARY_DIR}/include)
# Determining OS and selecting appropriate shared libs
message(STATUS "Determining your OS...")
if (APPLE)
    link_directories(${CMAKE_CURRENT_BINARY_DIR}/lib/SFML/MacOS)
    message(STATUS "Linked libraries for MacOS")
elseif (WIN32)
    if (MSVC)
        link_directories(${CMAKE_CURRENT_BINARY_DIR}/lib/SFML/Win32/MSVC)
        message(STATUS "Linked libraries for Win32 MSVC")
    elseif (MINGW)
        link_directories(${CMAKE_CURRENT_BINARY_DIR}/lib/SFML/Win32/MinGW)
        message(STATUS "Linked libraries for Win32 MinGW")
    elseif (CMAKE_COMPILER_IS_GNUCXX)
        link_directories(${CMAKE_CURRENT_BINARY_DIR}/lib/SFML/Win32/GCC)
        message(STATUS "Linked libraries for Win32 GCC")
    else (MSVC)
        message(FATAL_ERROR "Couldn't recognize your Win32 compiler!")
    endif (MSVC)
elseif (UNIX)
    link_directories(${CMAKE_CURRENT_BINARY_DIR}/lib/SFML/Unix)
    message(STATUS "Linked libraries for Unix")
endif (APPLE)


# Creating executable
add_executable(Snake game.cpp)

# Linking SFML to executable
target_link_libraries(Snake sfml-audio sfml-graphics sfml-window sfml-system)