//
// Created by Jeb Feng on 2022/4/4.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#pragma once

#include <optional>
#include <string>
#include "action/call_func.h"
#include "enums/expression_type.h"

namespace tcpl::compiler::parser
{
	class ExprDataTerm
	{
	public:
		ExprDataTerm(ExprDataTermType type, const std::string &value);
		explicit ExprDataTerm(const Identifier &identifier);
		explicit ExprDataTerm(const CallAction &functionCall);

	private:
		ExprDataTermType type;

		std::optional<std::string> number;
		std::optional<std::string> string;
		std::optional<Identifier> identifier;
		std::optional<CallAction> function_call;
	};
}
