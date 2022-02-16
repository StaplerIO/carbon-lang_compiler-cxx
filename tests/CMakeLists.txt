enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
include_directories(../src/lexer)

include(GoogleTest)

add_executable(
        lexer_comment
        ../src/lexer/builders/comment.cpp ../src/lexer/include/builders/comment.h
        lexer/comment.cpp
)
target_link_libraries(
        lexer_comment
        gtest gtest_main
        tcpl_compiler_lexer
)

gtest_discover_tests(lexer_comment)
