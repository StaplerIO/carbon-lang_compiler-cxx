//
// Created by Jeb Feng on 2022/2/26.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#pragma once

#include <optional>
#include "../../../lib/include/token/root_type.h"

namespace tcpl::compiler::lexer
{
	/**
	 * @brief Build keyword token from the first character of the token stream
	 */
	std::optional<Token> try_build_keyword_token(const std::string &token_stream, size_t base_pos);
}
