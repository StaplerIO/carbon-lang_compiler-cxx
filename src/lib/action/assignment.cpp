//
// Created by Jeb Feng on 2022/4/2.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include "action/assignment.h"

tcpl::compiler::parser::AssignmentAction::AssignmentAction(const tcpl::compiler::parser::Identifier &identifier, const tcpl::compiler::parser::SimpleExpression &expression)
		: identifier(identifier), expression(expression)
{ }
