//
// Created by Jeb Feng on 2022/4/4.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#pragma once

#include <optional>
#include "expression/simple_expr.h"

namespace tcpl::compiler::parser
{
	class ReturnAction
	{
	public:
		explicit ReturnAction(const SimpleExpression &evalExpression);

	private:
		std::optional<SimpleExpression> eval_expression;
	};
}
