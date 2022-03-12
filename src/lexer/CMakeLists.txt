add_library(tcpl_compiler_lexer
        models/token/root_type.cpp include/models/token/root_type.h
        include/models/enums/token_type.h models/enums/token_type.cpp
        include/models/token/operator_token.h models/token/operator_token.cpp
        include/models/token/data_token.h models/token/data_token.cpp
        include/models/token/identifier_token.h models/token/identifier_token.cpp
        include/models/token/position.h models/token/position.cpp
        include/builders/comment.h builders/comment.cpp
        include/builders/keyword.h builders/keyword.cpp 
        include/builders/identifier.h builders/identifier.cpp
        include/builders/number.h builders/number.cpp
        include/builders/string.h builders/string.cpp
        include/builders/operator.h builders/operator.cpp
        include/builders/container.h builders/container.cpp
        include/tokenizer.h tokenizer.cpp
        )
