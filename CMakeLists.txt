cmake_minimum_required(VERSION 3.19)
project(carbon-lang_compiler)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_FLAGS_DEBUG_INIT "-std=c++20 -g -fno-omit-frame-pointer")
set(CMAKE_CXX_FLAGS_RELEASE_INIT "-std=c++20 -g -O2")

include(FetchContent)

# Test framework: GoogleTest
MESSAGE(STATUS "Downloading GoogleTest")
FetchContent_Declare(googletest
        GIT_REPOSITORY https://github.com/google/googletest
        GIT_TAG release-1.11.0)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Third-party modules
MESSAGE(STATUS "Downloading nlohmann_json")
FetchContent_Declare(json
        GIT_REPOSITORY https://github.com/nlohmann/json
        GIT_TAG v3.10.5)
FetchContent_MakeAvailable(json)

add_subdirectory(src)
add_subdirectory(tests)
