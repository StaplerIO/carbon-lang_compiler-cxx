//
// Created by Jeb Feng on 2022/2/26.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include <regex>
#include "../include/builders/identifier.h"
#include "../include/models/token/root_type.h"
#include "../include/models/token/identifier_token.h"
#include "../include/builders/keyword.h"

namespace tcpl::compiler::lexer
{
	// Any identifier should match the following regular expression
	const auto identifier_regex = std::regex("([_a-zA-Z][_a-zA-Z0-9]{0,80})");

	Token try_build_identifier_token(const std::string &token_stream, size_t base_pos)
	{
		// Keyword cannot be an identifier
		if(try_build_keyword_token(token_stream, base_pos).getTokenType() == TokenType::Invalid)
		{
			std::smatch result;
			auto match = std::regex_match(token_stream, result, identifier_regex, std::regex_constants::match_not_bol);
			if(match)
			{
				auto identifier_name = result[1].str();
				return Token(IdentifierToken(IdentifierType::Unknown, identifier_name), TokenPosition(base_pos, identifier_name.length()));
			}
		}

		return Token();
	}
}
