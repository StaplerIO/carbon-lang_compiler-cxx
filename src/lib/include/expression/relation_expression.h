//
// Created by Jeb Feng on 2022/4/4.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#pragma once

#include "simple_expr.h"
#include "enums/token_type.h"

namespace tcpl::compiler::parser
{
	class RelationExpression
	{
	public:
		RelationExpression(SimpleExpression left, SimpleExpression right, lexer::RelationOperatorTokenType relationOperator);

	private:
		SimpleExpression left;
		SimpleExpression right;

		lexer::RelationOperatorTokenType relation_operator;
	};
}
