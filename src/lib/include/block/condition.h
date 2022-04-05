//
// Created by Jeb Feng on 2022/4/4.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#pragma once

#include "action_block.h"
#include "expression/relation_expression.h"

namespace tcpl::compiler::parser
{
	class ConditionBlock
	{
	public:
		ConditionBlock(RelationExpression condition, ActionBlock actions);

	private:

		RelationExpression condition;
		ActionBlock actions;
	};
}
