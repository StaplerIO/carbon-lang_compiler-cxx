//
// Created by Jeb Feng on 2022/3/13.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include <cstring>
#include <vector>
#include "../include/builders/scope.h"

namespace tcpl::compiler::lexer
{
	static const char * scope_token = "::";

	std::optional<Token> try_build_scope_token(const std::string &token_stream, size_t base_pos)
	{
		if(token_stream.starts_with(scope_token))
		{
			return Token(TokenType::Scope, TokenPosition(base_pos, strlen(scope_token)));
		}

		return std::nullopt;
	}
}
