add_library(tcpl_compiler_lexer
        models/token/root_type.cpp include/models/token/root_type.h
        include/models/enums/token_type.h models/enums/token_type.cpp
        include/models/token/operator_token.h models/token/operator_token.cpp
        include/models/token/data_token.h models/token/data_token.cpp
        include/models/token/identifier.h models/token/identifier.cpp
        include/models/token/position.h models/token/position.cpp
        include/tokenizer.h tokenizer.cpp
        include/builders/comment.h builders/comment.cpp
        include/builders/keyword.h builders/keyword.cpp)
