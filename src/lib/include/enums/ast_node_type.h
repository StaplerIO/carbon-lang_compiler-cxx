//
// Created by Jeb Feng on 2022/4/4.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#pragma once

namespace tcpl::compiler::parser
{
	enum class ASTNodeType
	{
		DeclarationAction,
		AssignmentAction,
		CallAction,
		ReturnAction,
		IfBlock,
		WhileBlock,
		LoopBlock,
		BreakAction,
		ContinueAction,
		EmptyAction,
		InvalidAction,
	};
}
