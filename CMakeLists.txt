cmake_minimum_required (VERSION 3.22)

project ("OpenCVTest")

include(FindPkgConfig)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV CONFIG REQUIRED)
pkg_search_module(Aravis REQUIRED aravis-0.8)

include_directories(${OpenCV_INCLUDE_DIRS})
include_directories(${Aravis_INCLUDE_DIRS})

add_executable (OpenCVTest "OpenCVTest.cpp")

target_link_libraries(OpenCVTest ${OpenCV_LIBS} aravis-0.8)
