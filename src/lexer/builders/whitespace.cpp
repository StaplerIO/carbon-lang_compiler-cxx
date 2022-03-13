//
// Created by Jeb Feng on 2022/3/13.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include <vector>
#include "../include/builders/whitespace.h"

namespace tcpl::compiler::lexer
{
	static const std::vector<char> whitespace_characters = {' ', '\n', '\t', '\r', '\v', '\f'};

	std::optional<Token> try_build_whitespace_token(const std::string &token_stream, size_t base_pos)
	{
		auto result = std::string();

		for (auto c: token_stream)
		{
			// Check if current character is a whitespace character
			if (std::find(whitespace_characters.begin(), whitespace_characters.end(), c) != whitespace_characters.end())
			{
				result += c;
			}
			else
			{
				// End check procedure
				break;
			}
		}

		if (result.empty())
		{
			return std::nullopt;
		}
		else
		{
			return Token(TokenType::Whitespace, TokenPosition(base_pos, result.length()));
		}
	}
}

