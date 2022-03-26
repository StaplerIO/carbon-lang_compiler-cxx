include_directories(include)

add_library(tcpl_compiler_lib_lexer
        include/token/root_type.h token/root_type.cpp
        include/enums/token_type.h enums/token_type.cpp
        include/token/operator_token.h token/operator_token.cpp
        include/token/data_token.h token/data_token.cpp
        include/token/identifier_token.h token/identifier_token.cpp
        include/token/position.h token/position.cpp)
