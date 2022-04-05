//
// Created by Jeb Feng on 2022/4/4.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include "expression/simple_expr.h"

#include <utility>

tcpl::compiler::parser::SimpleExpression::SimpleExpression(std::vector<ExprTerm> postfixExpr, std::string outputType)
		: postfix_expr(std::move(postfixExpr)), output_type(std::move(outputType))
{ }
