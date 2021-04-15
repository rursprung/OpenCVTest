# Simple OpenCV Application
This demo just shows the picture from your webcam. If the webcam can't be accessed or isn't present it'll fail with an error.

## Building
This is a cross-platform project, you should be able to compile it on any target platform supported by OpenCV.

### Prerequisites
You need to install the following tools:
* a C++ compiler (might be packaged with your IDE)
* CMake (might be packaged with your IDE)
* optional: an IDE (e.g. Microsoft Visual Studio)
* [vcpkg](https://docs.microsoft.com/en-us/cpp/build/vcpkg)
* download & build the OpenCV library for your target platform using `vcpkg`. E.g. for windows x64: `vcpkg.exe install opencv:x64-windows`

### Build Using Visual Studio
* Install the CMake component in the Visual Studio Installer
* Set up an environment variable `VCPROJ_ROOT` and set it to the root directory of your vcpkg installation (see also [vcpkg environment](https://vcpkg.readthedocs.io/en/latest/users/config-environment/))

### Build Using Other Tools
You can use CMake to generate any project files, incl. standard `Makefile`s. You need to set the `CMAKE_TOOLCHAIN_FILE` parameter to the full path of `vcpkg.cmake` when calling CMake. See [the vcpkg docs](https://vcpkg.readthedocs.io/en/latest/examples/installing-and-using-packages/#cmake).
