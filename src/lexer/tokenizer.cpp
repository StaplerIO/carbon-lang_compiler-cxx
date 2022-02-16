//
// Created by Jeb Feng on 2022/2/12.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include <vector>
#include "include/tokenizer.h"
#include "include/models/token/root_type.h"

namespace tcpl::compiler::lexer
{
	std::vector<Token> tokenize(std::string source_code)
	{
		auto result = std::vector<Token>();

		auto cached_chars = std::string();
		for (size_t i = 0; i < source_code.length(); i++)
		{
			auto current = source_code[i];
		}

		return result;
	}
}
