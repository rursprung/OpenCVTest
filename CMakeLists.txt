# CMakeList.txt : CMake project for OpenCVTest, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("OpenCVTest")

find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

# Add source to this project's executable.
add_executable (OpenCVTest "OpenCVTest.cpp")

# TODO: Add tests and install targets if needed.
target_link_libraries(OpenCVTest ${OpenCV_LIBS})
