cmake_minimum_required(VERSION 3.5.0)
project(demo)

set(CMAKE_CXX_STANDARD 17)  
# set(OpenCV_INCLUDE_DIRS "/usr/local/include") # set header postion yourself, will be overwritten by find_packages
# set(OpenCV_LIBARIES_DIRS "/usr/local/libs") 

find_package(OpenCV REQUIRED) # find OpenCV library as shown in message below

message(STATUS "OpenCV library status")
message(STATUS "   version: ${OpenCV_VERSION}")
message(STATUS "   libaries path: ${OpenCV_LIBARIES_DIRS}")
# message(STATUS "   libaries: ${OpenCV_LIBS}")
message(STATUS "   include path: ${OpenCV_INCLUDE_DIRS}")
  
include_directories(${OpenCV_INCLUDE_DIRS}) # Add OpenCV headers location to include paths

add_executable(test main.cpp) # Build main.cpp to build/main
target_link_libraries(test ${OpenCV_LIBS}) # Link application with OpenCV libraries