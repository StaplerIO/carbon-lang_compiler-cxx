//
// Created by Jeb Feng on 2022/2/13.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#pragma once

#include "../enums/token_type.h"

namespace tcpl::compiler::lexer
{
	class OperatorToken
	{
	public:
		explicit OperatorToken(OperatorTokenType type);

		explicit OperatorToken(CalculationOperatorTokenType calculation);
		explicit OperatorToken(RelationOperatorTokenType relation);
		explicit OperatorToken(LogicalOperatorTokenType logical);

		OperatorTokenType getType() const;
		CalculationOperatorTokenType getCalculation() const;
		RelationOperatorTokenType getRelation() const;
		LogicalOperatorTokenType getLogical() const;

	private:

		OperatorTokenType type;

		CalculationOperatorTokenType calculation;
		RelationOperatorTokenType relation;
		LogicalOperatorTokenType logical;
	};
}
