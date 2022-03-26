//
// Created by Jeb Feng on 2022/3/13.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#ifndef CARBON_LANG_COMPILER_SEMICOLON_H
#define CARBON_LANG_COMPILER_SEMICOLON_H

#include <optional>
#include "../../../lib/include/token/root_type.h"

namespace tcpl::compiler::lexer
{
	/**
	 * @brief Build semicolon token from the first character of the token stream
	 */
	std::optional<Token> try_build_semicolon_token(const std::string &token_stream, size_t base_pos);
}

#endif //CARBON_LANG_COMPILER_SEMICOLON_H
