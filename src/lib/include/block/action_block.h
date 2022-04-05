//
// Created by Jeb Feng on 2022/4/4.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#pragma once

#include <vector>
#include "ast_utils/ast_control_node.h"

namespace tcpl::compiler::parser
{
	class ActionBlock
	{
	public:
		explicit ActionBlock(std::vector<ASTControlNode> actions);

	private:
		std::vector<ASTControlNode> actions;
	};
}
