cmake_minimum_required (VERSION 3.22)

project ("OpenCVTest")

set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV CONFIG REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable (OpenCVTest "OpenCVTest.cpp")

target_link_libraries(OpenCVTest ${OpenCV_LIBS})
