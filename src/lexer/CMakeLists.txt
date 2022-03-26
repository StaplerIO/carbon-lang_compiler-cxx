SET(BUILDER_PATH
        include/builders/comment.h builders/comment.cpp
        include/builders/keyword.h builders/keyword.cpp
        include/builders/identifier.h builders/identifier.cpp
        include/builders/data.h builders/data.cpp
        include/builders/operator.h builders/operator.cpp
        include/builders/container.h builders/container.cpp
        include/builders/semicolon.h builders/semicolon.cpp
        include/builders/scope.h builders/scope.cpp
        include/builders/whitespace.h builders/whitespace.cpp)

SET(TOKENIZER_PATH
        include/tokenizer.h tokenizer.cpp)

include_directories(include)
include_directories(../lib/include)

add_library(tcpl_compiler_lexer
        ${BUILDER_PATH}
        ${TOKENIZER_PATH})

target_link_libraries(
        tcpl_compiler_lexer
        tcpl_compiler_lib_lexer
        nlohmann_json::nlohmann_json
)
