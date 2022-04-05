//
// Created by Jeb Feng on 2022/4/4.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#pragma once

#include <optional>
#include "enums/ast_node_type.h"
#include "action/declaration.h"
#include "action/assignment.h"
#include "action/call_func.h"
#include "action/return_func.h"
#include "block/while_block.h"
#include "block/condition_if.h"
#include "block/loop.h"

namespace tcpl::compiler::parser
{
	class ASTControlNode
	{
	public:
		explicit ASTControlNode(const DeclarationAction &declarationAction);
		explicit ASTControlNode(const AssignmentAction &assignmentAction);
		explicit ASTControlNode(const CallAction &callFuncAction);
		explicit ASTControlNode(const ReturnAction &returnFuncAction);
		explicit ASTControlNode(const WhileBlock &whileBlock);
		explicit ASTControlNode(const IfBlock &conditionIfBlock);
		explicit ASTControlNode(const LoopBlock &loopBlock);
		explicit ASTControlNode(ASTNodeType type);

	private:
		ASTNodeType type;

		std::optional<DeclarationAction> declaration_action;
		std::optional<AssignmentAction> assignment_Action;
		std::optional<CallAction> call_action;
		std::optional<ReturnAction> return_action;

		std::optional<WhileBlock> while_block;
		std::optional<IfBlock> if_block;
		std::optional<LoopBlock> loop_block;
	};
}
