enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
include_directories(../src/lexer)

include(GoogleTest)

add_executable(
        lexer_test
        lexer/single_token_type.cpp
        lexer/full_code_text.cpp)
target_link_libraries(
        lexer_test
        tcpl_compiler_lexer
        gtest gtest_main
)

gtest_discover_tests(lexer_test)
