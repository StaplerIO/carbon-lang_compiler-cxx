//
// Created by Jeb Feng on 2022/3/5.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#pragma once

#include <optional>
#include <string>
#include "../../../lib/include/token/root_type.h"

namespace tcpl::compiler::lexer
{
	/**
	 * @brief Build operator token, matches its type automatically
	 * @param token_stream The position of tokens required to be validated in the whole code file
	 * @param base_pos The first character
	 * @return Return the operator found by the first characters of the array
	 * @retval <code>std::nullopt</code>: Code doesn't match any types of operator
	 * @retval <code>not_null</code>: Found some type of operator that matches the first characters of the array
	 */
	std::optional<Token> try_build_operator_token(const std::string &token_stream, size_t base_pos);

	CalculationOperatorTokenType try_build_calculation_operator_token(const std::string &token_stream);

	LogicalOperatorTokenType try_build_logical_operator_token(const std::string &token_stream);

	RelationOperatorTokenType try_build_relation_operator_token(const std::string &token_stream);

	OperatorTokenType try_build_direct_operator_token(const std::string &token_stream);
}
