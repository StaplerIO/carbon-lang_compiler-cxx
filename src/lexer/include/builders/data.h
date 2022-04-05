//
// Created by Jeb Feng on 2022/3/12.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#pragma once

#include <optional>
#include "../../../lib/include/token/root_type.h"

namespace tcpl::compiler::lexer
{
	/**
	 * @brief Build data token, identify whether it's a number token or string token automatically
	 * @param token_stream The tokens required to be validated
	 * @param base_pos The first character's position in the whole code file
	 * @return Return the operator found by the first characters of the array
	 * @retval <code>std::nullopt</code>: Code doesn't match any types of data
	 * @retval <code>not_null</code>: Found some type of data that matches the first characters of the array
	 */
	std::optional<Token> try_build_data_token(const std::string &token_stream, size_t base_pos);

	std::optional<Token> try_build_number_token(const std::string &token_stream, size_t base_pos);

	std::optional<Token> try_build_string_token(const std::string &source_code, size_t base_pos);
}
