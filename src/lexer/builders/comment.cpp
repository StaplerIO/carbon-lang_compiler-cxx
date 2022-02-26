//
// Created by Jeb Feng on 2022/2/15.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include <optional>
#include "../include/builders/comment.h"

namespace tcpl::compiler::lexer
{
	std::optional<Token> build_comment_token(const std::string& source_code, size_t base_pos)
	{
		if (source_code.starts_with("//"))
		{
			auto pos = source_code.find_first_of('\n');
			auto raw = source_code.substr(0, pos + 1);

			return std::optional(Token(raw.substr(2), TokenPosition(base_pos, raw.length())));
		}

		return std::nullopt;
	}
}
