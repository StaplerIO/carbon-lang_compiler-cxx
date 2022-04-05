//
// Created by Jeb Feng on 2022/4/4.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include "expression/expr_data_term.h"

using namespace tcpl::compiler::parser;

ExprDataTerm::ExprDataTerm(ExprDataTermType type, const std::string &value)
		: type(type)
{
	if (type == ExprDataTermType::Number)
	{
		this->number = value;
	}
	else if (type == ExprDataTermType::String)
	{
		this->string = value;
	}
}

ExprDataTerm::ExprDataTerm(const Identifier &identifier)
		: identifier(identifier), type(ExprDataTermType::Identifier)
{ }

ExprDataTerm::ExprDataTerm(const CallAction &functionCall)
		: function_call(functionCall), type(ExprDataTermType::FunctionCall)
{ }
