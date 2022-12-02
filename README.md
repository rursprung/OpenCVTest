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

### Configure the Environment for vcpkg
This needs to be done once:
* Set up an environment variable `VCPKG_ROOT` and set it to the root directory of your vcpkg installation (see also [vcpkg environment](https://vcpkg.readthedocs.io/en/latest/users/config-environment/))
* Set up an environment variable `CMAKE_TOOLCHAIN_FILE` and set it to `%VCPKG_ROOT%\scripts\buildsystems\vcpkg.cmake` (Windows) or `${VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake` (Linux/Mac)
  * Note: for this to work properly you need CMake >= 3.21, see [the docs](https://cmake.org/cmake/help/v3.24/envvar/CMAKE_TOOLCHAIN_FILE.html#envvar:CMAKE_TOOLCHAIN_FILE).

### Open in an IDE / Build
Various IDEs (e.g. CLion) have built-in support for CMake and can just directly open the directory as a project.
Some, e.g. Visual Studio, need an additional component or plugin (for VS open the installer and make sure to select the CMake component).

You can also use CMake to generate any project files, incl. standard `Makefile`s.

Due to the integration of vcpkg in CMake (thanks to the toolchain file) and the presence of the `vcpkg.json` config which
specifies the dependencies the build will automatically download & compile the necessary dependencies (incl. all transient dependencies).
