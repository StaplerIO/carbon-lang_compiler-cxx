//
// Created by Jeb Feng on 2022/3/13.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include <cstring>
#include "../include/builders/semicolon.h"

namespace tcpl::compiler::lexer
{
	static const char semicolon_token = ';';

	std::optional<Token> try_build_semicolon_token(const std::string &token_stream, size_t base_pos)
	{
		if(token_stream.starts_with(semicolon_token))
		{
			return Token(TokenType::Semicolon, TokenPosition(base_pos, strlen(&semicolon_token)));
		}

		return std::nullopt;
	}
}
