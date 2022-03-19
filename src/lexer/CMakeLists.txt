SET(MODEL_PATH
        include/models/token/root_type.h models/token/root_type.cpp
        include/models/enums/token_type.h models/enums/token_type.cpp
        include/models/token/operator_token.h models/token/operator_token.cpp
        include/models/token/data_token.h models/token/data_token.cpp
        include/models/token/identifier_token.h models/token/identifier_token.cpp
        include/models/token/position.h models/token/position.cpp)

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

include_directories(include)

add_library(tcpl_compiler_lexer
        ${MODEL_PATH}
        ${BUILDER_PATH}
        include/tokenizer.h tokenizer.cpp)

target_link_libraries(
        tcpl_compiler_lexer
        nlohmann_json::nlohmann_json
)
