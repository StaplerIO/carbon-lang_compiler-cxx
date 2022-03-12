//
// Created by Jeb Feng on 2022/3/12.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include <regex>
#include "../include/builders/data.h"

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

	std::optional<Token> try_build_string_token(const std::string &source_code, size_t base_pos)
	{
		if (source_code.starts_with("\""))
		{
			auto end_pos = source_code.find_first_of('\"', 1);
			auto raw = source_code.substr(0, end_pos + 1);

			// A string cannot cross line in source code
			auto line_break_pos = source_code.find_first_of('\n');
			if (line_break_pos > end_pos)
			{
				auto string_content = raw.substr(1, raw.length() - 2);
				return std::optional(Token(DataToken(DataTokenType::String, string_content),
										   TokenPosition(base_pos, raw.length())));
			}
		}

		return std::nullopt;
	}
}
