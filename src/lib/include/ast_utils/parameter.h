//
// Created by Jeb Feng on 2022/4/4.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#pragma once

#include <string>
#include "expression/simple_expr.h"
#include "ast_utils/identifier.h"

namespace tcpl::compiler::parser
{
	class Parameter
	{
	public:
		Parameter(std::string typeName, const SimpleExpression &evalExpression);
		Parameter(std::string typeName, const Identifier &identifier);

	private:
		std::string type_name;

		// Definition
		std::optional<Identifier> identifier;

		// Use
		std::optional<SimpleExpression> eval_expression;
	};
}
