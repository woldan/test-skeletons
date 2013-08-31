# Test skeletons

Simple skeletons to copy-paste as building blocks into useful projects.

## Prerequisites

 * [git](http://git-scm.com/)
 * [cmake](http://www.cmake.org/)
 * [boost](http://www.boost.org/)

On Debian-ish system e.g. something like this might suffice:

    sudo apt-get install build-essential git cmake libboost-all-dev

## Usage

### For the Impatient

On a Unix-ish system this should work:

    git clone https://github.com/woldan/test-skeletons.git

    cd test-skeletons
    git submodule init
    git submodule update

    mkdir ../build.test-skeletons
    cd ../build.test-skeletons
    cmake ../test-skeletons
    make

    make test

### Download

Change to this directory or do equivalent GUI operations for the following steps:

    git clone https://github.com/woldan/test-skeletons.git <this/directory>
    cd <this/directory>

### Get git Submodules

Let git download the referenced sub-module repositories (e.g. [catch](https://github.com/philsquared/Catch.git)):

    git submodule init
    git submodule update

### Configure the Build Config

Create out-of-source build directory (preferrably not inside the source dir):

    mkdir <here/should/be/my/build>
    cd <here/should/be/my/build>

Configure the build:

    cmake <source/directory/where/top-level/CMakeLists.txt/is/located>

Or, specify Xcode as build system on Mac OS:

    cmake -G Xcode <source/directory/where/top-level/CMakeLists.txt/is/located>

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

Or run [CTest](file:///d:/local/cmake/doc/cmake-2.8/ctest.html) directly:

    ctest
    ctest -VV

Or run the test runners even more direct to get their fancy output:

    ./test.catch/run.hello.test.using.catch
    ./test.boost/run.hello.test.using.boost
