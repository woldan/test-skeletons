# Test skeletons

Simple skeletons to copy-paste as building blocks into useful projects.

## Prerequisites

 * [git](http://git-scm.com/)
 * [cmake](http://www.cmake.org/)
 * [boost](http://www.boost.org/)

On Debian-ish system e.g. something like this might suffice:

    sudo apt-get install build-essential git cmake libboost-all-dev

## Usage

Change to this directory or do equivalent GUI operations for the following steps:

    cd <this/directory>

### Get git Submodules

Let git download the referenced sub-module repositories (e.g. catch):

    git submodule init
    git submodule update

### Configure the Build Config

Create out-of-source build directory (preferrably not inside the source dir):

    mkdir <here/should/be/my/build>
    cd <here/should/be/my/build>

Configure the build:

    cmake <source/directory/where/top-level/CMakeLists.txt/is/located>

### Build

Run the build system (if using some Makefile system):

    make

Or, run the build system (if using XCode):

    xcodebuild

Or, run the build system (if using MSVC):

    msbuild <solutionname>

### Run Tests

CMake created a `test` target that can be run like this:

    make test
