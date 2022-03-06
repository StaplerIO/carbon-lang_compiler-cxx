//
// Created by Jeb Feng on 2022/2/14.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//


#include "../../include/models/enums/token_type.h"
#include "../../include/models/token/operator_token.h"

namespace tcpl::compiler::lexer
{
	OperatorToken::OperatorToken(CalculationOperatorTokenType calculation)
			: type(OperatorTokenType::Calculation), calculation(calculation)
	{ }

	OperatorToken::OperatorToken(RelationOperatorTokenType relation)
			: type(OperatorTokenType::Relation), relation(relation)
	{ }

	OperatorToken::OperatorToken(LogicalOperatorTokenType logical)
			: type(OperatorTokenType::Logical), logical(logical)
	{ }

	OperatorToken::OperatorToken(OperatorTokenType type)
			: type(type)
	{ }

	OperatorTokenType OperatorToken::getType() const
	{
		return type;
	}

	CalculationOperatorTokenType OperatorToken::getCalculation() const
	{
		return calculation;
	}

	RelationOperatorTokenType OperatorToken::getRelation() const
	{
		return relation;
	}

	LogicalOperatorTokenType OperatorToken::getLogical() const
	{
		return logical;
	}
}
