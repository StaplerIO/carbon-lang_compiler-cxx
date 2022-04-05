//
// Created by Jeb Feng on 2022/4/4.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#pragma once

#include "token/operator_token.h"

namespace tcpl::compiler::parser
{
	class ExprOperatorTerm
	{
	public:
		explicit ExprOperatorTerm(const lexer::OperatorToken &operatorTk);

	private:
		lexer::OperatorToken operator_tk;
	};
}
