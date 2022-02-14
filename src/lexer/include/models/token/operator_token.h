//
// Created by Jeb Feng on 2022/2/13.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#ifndef CARBON_LANG_COMPILER_OPERATOR_TOKEN_H
#define CARBON_LANG_COMPILER_OPERATOR_TOKEN_H

#include "../enums/token_type.h"

namespace tcpl::compiler::lexer
{
	class OperatorToken
	{
	public:
		OperatorToken(OperatorTokenType type);

		OperatorToken(CalculationOperatorTokenType calculation);
		OperatorToken(RelationOperatorTokenType relation);
		OperatorToken(LogicalOperatorTokenType logical);

	private:

		OperatorTokenType type;

		CalculationOperatorTokenType calculation;
		RelationOperatorTokenType relation;
		LogicalOperatorTokenType logical;
	};
}

#endif //CARBON_LANG_COMPILER_OPERATOR_TOKEN_H
