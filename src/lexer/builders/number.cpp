//
// Created by Jeb Feng on 2022/2/27.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include <regex>
#include "../include/builders/number.h"
#include "../include/models/token/root_type.h"

namespace tcpl::compiler::lexer
{
	const auto number_regex = std::regex(R"([+-]?(\.\d+|\d+\.|\d+|\d+\.?\d+|\d*\.?\d*[Ee][+-]?\d*))");

	std::optional<Token> try_build_number_token(const std::string &token_stream, size_t base_pos)
	{
		std::smatch result;
		auto match = std::regex_match(token_stream, result, number_regex, std::regex_constants::match_not_bol);
		if(match)
		{
			auto number = result[1].str();
			return std::optional(Token(DataToken(DataTokenType::Number, number),
									   TokenPosition(base_pos, number.length())));
		}

		return std::nullopt;
	}
}
