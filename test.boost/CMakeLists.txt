cmake_minimum_required(VERSION 2.8)

# .. name of the game: scope and e.g. xcode project, vc solution, etc. name ..
project(test.hello.using.boost)

# .. find boost ..
find_package(
  Boost REQUIRED
  COMPONENTS unit_test_framework
)
add_definitions(-DBOOST_TEST_DYN_LINK)

# .. we need to find lib.hello to link against it ..
include_directories(
  ${LIB_HELLO_INCLUDE_DIRS}
  ${Boost_INCLUDE_DIRS}
)
link_directories(
  ${LIB_HELLO_LIBRARY_DIRS}
  ${Boost_LIBRARY_DIRS}
)

# .. declare a library to build ..
add_executable(
  run.hello.test.using.boost
  run_hello_test_using_boost.cpp
)
target_link_libraries(
  run.hello.test.using.boost
  ${LIB_HELLO_LIBRARIES}
  ${Boost_LIBRARIES}
)

# .. declare the test runner to be run in the `test` target (only if ENABLE_TESTING has been run!)
add_test(test.hello.using.boost run.hello.test.using.boost)

