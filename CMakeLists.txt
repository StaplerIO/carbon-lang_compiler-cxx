cmake_minimum_required(VERSION 3.21)
project(carbon-lang_compiler)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_FLAGS_DEBUG_INIT "-std=c++20 -g -fno-omit-frame-pointer")
set(CMAKE_CXX_FLAGS_RELEASE_INIT "-std=c++20 -g -O2")

add_subdirectory(modules/third_party/googletest)

add_subdirectory(src)
add_subdirectory(tests)
