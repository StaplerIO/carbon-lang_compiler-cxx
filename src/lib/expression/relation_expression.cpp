//
// Created by Jeb Feng on 2022/4/4.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//
#include "expression/relation_expression.h"

#include <utility>

tcpl::compiler::parser::RelationExpression::RelationExpression(tcpl::compiler::parser::SimpleExpression left, tcpl::compiler::parser::SimpleExpression right, tcpl::compiler::lexer::RelationOperatorTokenType relationOperator)
		: left(std::move(left)), right(std::move(right)), relation_operator(relationOperator)
{ }
