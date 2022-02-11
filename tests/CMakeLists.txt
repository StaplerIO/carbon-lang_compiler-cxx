enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

include(GoogleTest)

add_executable(
        simple_test
        simple_test.cpp
)
target_link_libraries(
        simple_test
        gtest gtest_main
)

gtest_discover_tests(simple_test)
