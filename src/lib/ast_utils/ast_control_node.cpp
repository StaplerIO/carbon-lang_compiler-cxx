//
// Created by Jeb Feng on 2022/4/4.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include "ast_utils/ast_control_node.h"

#include <utility>

tcpl::compiler::parser::ASTControlNode::ASTControlNode(const DeclarationAction &declarationAction)
		: declaration_action(declarationAction), type(ASTNodeType::DeclarationAction)
{ }

tcpl::compiler::parser::ASTControlNode::ASTControlNode(const AssignmentAction &assignmentAction)
		: assignment_Action(assignmentAction), type(ASTNodeType::AssignmentAction)
{ }

tcpl::compiler::parser::ASTControlNode::ASTControlNode(const tcpl::compiler::parser::CallAction &callFuncAction)
		: call_action(callFuncAction), type(ASTNodeType::CallAction)
{ }

tcpl::compiler::parser::ASTControlNode::ASTControlNode(const tcpl::compiler::parser::ReturnAction &returnFuncAction)
		: return_action(returnFuncAction), type(ASTNodeType::ReturnAction)
{ }

tcpl::compiler::parser::ASTControlNode::ASTControlNode(const tcpl::compiler::parser::WhileBlock &whileBlock)
		: while_block(whileBlock), type(ASTNodeType::WhileBlock)
{ }

tcpl::compiler::parser::ASTControlNode::ASTControlNode(const tcpl::compiler::parser::IfBlock &conditionIfBlock)
		: if_block(conditionIfBlock), type(ASTNodeType::IfBlock)
{ }

tcpl::compiler::parser::ASTControlNode::ASTControlNode(const tcpl::compiler::parser::LoopBlock &loopBlock)
		: loop_block(loopBlock), type(ASTNodeType::LoopBlock)
{ }

tcpl::compiler::parser::ASTControlNode::ASTControlNode(tcpl::compiler::parser::ASTNodeType type) : type(type)
{ }

