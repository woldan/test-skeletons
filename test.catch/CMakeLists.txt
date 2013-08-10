cmake_minimum_required(VERSION 2.8)

# .. name of the game: scope and e.g. xcode project, vc solution, etc. name ..
project(test.hello.using.catch)

# .. name the catch sub-module include path ..
set(CATCH_INCLUDE_DIRS "${CMAKE_CURRENT_SOURCE_DIR}/catch/include")

# .. we need to find lib.hello to link against it ..
include_directories(
  ${LIB_HELLO_INCLUDE_DIRS}
  ${CATCH_INCLUDE_DIRS}
)
link_directories(${LIB_HELLO_LIBRARY_DIRS})

# .. declare a library to build ..
add_executable(
  run.hello.test.using.catch
  run_hello_test_using_catch.cpp
)
target_link_libraries(
  run.hello.test.using.catch
  ${LIB_HELLO_LIBRARIES}
)

# .. declare the test runner to be run in the `test` target (only it ENABLE_TESTING has been set!)
add_test(test.hello.using.catch run.hello.test.using.catch)

