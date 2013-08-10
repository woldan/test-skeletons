cmake_minimum_required(VERSION 2.8)

# .. name of the game: scope and e.g. xcode project, vc solution, etc. name ..
project(unittest.skeletons)

# .. tell CMake we want a `test` target ..
enable_testing()

# .. descend into the sources directory ..
add_subdirectory(src)

# .. descend into the unit test directory using the catch backend ..
add_subdirectory(test.catch)
# .. descend into the unit test directory using the boost backend ..
add_subdirectory(test.boost)

