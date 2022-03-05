//
// Created by Jeb Feng on 2022/3/2.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include "../include/builders/string.h"

namespace tcpl::compiler::lexer
{
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
