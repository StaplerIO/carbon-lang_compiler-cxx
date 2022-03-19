//
// Created by Jeb Feng on 2022/3/5.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#ifndef CARBON_LANG_COMPILER_OPERATOR_H
#define CARBON_LANG_COMPILER_OPERATOR_H

#include <optional>
#include <string>
#include "../models/token/root_type.h"

namespace tcpl::compiler::lexer
{
	std::optional<Token> try_build_operator_token(const std::string &token_stream, size_t base_pos);

	CalculationOperatorTokenType try_build_calculation_operator_token(const std::string &token_stream);

	LogicalOperatorTokenType try_build_logical_operator_token(const std::string &token_stream);

	RelationOperatorTokenType try_build_relation_operator_token(const std::string &token_stream);

	OperatorTokenType try_build_direct_operator_token(const std::string &token_stream);
}

#endif //CARBON_LANG_COMPILER_OPERATOR_H
