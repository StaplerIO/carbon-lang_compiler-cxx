//
// Created by Jeb Feng on 2022/4/4.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#pragma once

#include <optional>
#include "condition.h"

namespace tcpl::compiler::parser
{
	class IfBlock
	{
	public:
		IfBlock(ConditionBlock ifBlock, std::vector<ConditionBlock> elifCollection, std::optional<ActionBlock> elseBlock);

	private:
		ConditionBlock if_block;
		std::vector<ConditionBlock> elif_collection;
		std::optional<ActionBlock> else_block;
	};
}
