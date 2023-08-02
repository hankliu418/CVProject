cmake_minimum_required(VERSION 3.5.0)
project(demo)

set(CMAKE_CXX_STANDARD 17)  
# set(OpenCV_INCLUDE_DIRS "/usr/local/include")
# set(OpenCV_LIBARIES_DIRS "/usr/local/libs") 

find_package(OpenCV REQUIRED)

message(STATUS "OpenCV library status")
message(STATUS "   version: ${OpenCV_VERSION}")
message(STATUS "   libaries path: ${OpenCV_LIBARIES_DIRS}")
message(STATUS "   libaries: ${OpenCV_LIBS}")
message(STATUS "   include path: ${OpenCV_INCLUDE_DIRS}")
  
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(main main.cpp)
target_link_libraries(main ${OpenCV_LIBS})

# set(CPACK_PROJECT_NAME ${PROJECT_NAME})
# set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# include(CPack)

# find_package(OpenCV REQUIRED)  
  
# include_directories(${OpenCV_INCLUDE_DIRS})