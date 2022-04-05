//
// Created by Jeb Feng on 2022/4/2.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#pragma once

#include <string>
#include "expression/simple_expr.h"

namespace tcpl::compiler::parser
{
	class AssignmentAction
	{
	public:
		AssignmentAction(const Identifier &identifier, const SimpleExpression &expression);

	private:
		Identifier identifier;
		SimpleExpression expression;
	};
}
