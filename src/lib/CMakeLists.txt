include_directories(include)

add_library(tcpl_compiler_lib_lexer
        include/enums/token_type.h
        include/token/root_type.h token/root_type.cpp
        include/token/operator_token.h token/operator_token.cpp
        include/token/data_token.h token/data_token.cpp
        include/token/identifier_token.h token/identifier_token.cpp
        include/token/position.h token/position.cpp)

add_library(tcpl_compiler_lib_parser
        include/enums/ast_node_type.h
        ast_utils/parameter.cpp include/ast_utils/parameter.h
        ast_utils/scope.cpp include/ast_utils/scope.h
        ast_utils/ast_control_node.cpp include/ast_utils/ast_control_node.h
        ast_utils/identifier.cpp include/ast_utils/identifier.h
        expression/simple_expr.cpp include/expression/simple_expr.h
        expression/relation_expression.cpp include/expression/relation_expression.h
        expression/expr_term.cpp include/expression/expr_term.h
        expression/expr_data_term.cpp include/expression/expr_data_term.h
        expression/expr_op_term.cpp include/expression/expr_op_term.h
        action/declaration.cpp include/action/declaration.h
        action/assignment.cpp include/action/assignment.h
        action/call_func.cpp include/action/call_func.h
        action/return_func.cpp include/action/return_func.h
        block/condition_if.cpp include/block/condition_if.h
        block/function.cpp include/block/function.h
        block/loop.cpp include/block/loop.h
        block/condition.cpp include/block/condition.h
        block/action_block.cpp include/block/action_block.h
        block/while_block.cpp include/block/while_block.h include/enums/expression_type.h)

target_link_libraries(tcpl_compiler_lib_parser
        tcpl_compiler_lib_lexer)
