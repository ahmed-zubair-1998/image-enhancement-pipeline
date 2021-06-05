# SPECIFY THE MINIMUM VERSION OF CMAKE REQUIRED
cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

# SPECIFY YOUR PROJECT NAME
PROJECT(sampleCode)

# FIND THE PACKAGES IN THE SYSTEM
find_package(OpenCV REQUIRED)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

# INCLUDE PACKAGE DIRECTORIES
include_directories(${OpenCV_INCLUDE_DIRS})
include_directories(source)

file(GLOB_RECURSE LIB_SOURCES "source/*.h" "source/*.cpp")

add_library(synef ${LIB_SOURCES})

add_executable(main main.cpp)

# LINK LIBRARIES TO THE EXECUTABLE FILE
target_link_libraries(main 
                      PRIVATE ${OpenCV_LIBS} 
                      PRIVATE synef
                      )

set_property(TARGET main PROPERTY CXX_STANDARD 14)
