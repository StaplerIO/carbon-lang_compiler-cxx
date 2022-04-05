//
// Created by Jeb Feng on 2022/4/4.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#pragma once

#include <string>
#include <vector>
#include "expr_term.h"

namespace tcpl::compiler::parser
{
	class SimpleExpression
	{
	public:
		SimpleExpression(std::vector<ExprTerm> postfixExpr, std::string outputType);

	private:
		std::vector<ExprTerm> postfix_expr;

		std::string output_type;
	};
}
