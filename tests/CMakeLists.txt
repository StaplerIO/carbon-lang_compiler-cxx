enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
include_directories(../src/lexer)

include(GoogleTest)

add_executable(
        single_token_type
        ../src/lexer/builders/comment.cpp ../src/lexer/include/builders/comment.h
        lexer/single_token_type.cpp
)
target_link_libraries(
        single_token_type
        gtest gtest_main
        tcpl_compiler_lexer
)

gtest_discover_tests(single_token_type)
