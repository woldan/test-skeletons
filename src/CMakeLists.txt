cmake_minimum_required(VERSION 2.8)

# .. name of the game: scope and e.g. xcode project, vc solution, etc. name ..
project(lib.hello)

# .. find our sources (globbing is easy but less safe if files are changed! See cmake docs) ..
file(
  GLOB_RECURSE LIB_HELLO_SOURCES
  *.cpp *.h *.c *.hpp
)

# .. declare a library to build ..
add_library(
  hello
  ${LIB_HELLO_SOURCES}
)

# .. propagat local variables to parent scope so other projects (like the unit tests) can reference them ..
set(LIB_HELLO_TARGET       hello                       PARENT_SCOPE)
set(LIB_HELLO_LIBRARIES    hello                       PARENT_SCOPE)
set(LIB_HELLO_INCLUDE_DIRS ${CMAKE_CURRENT_SOURCE_DIR} PARENT_SCOPE)
set(LIB_HELLO_LIBRARY_DIRS ${CMAKE_CURRENT_BINARY_DIR} PARENT_SCOPE)
