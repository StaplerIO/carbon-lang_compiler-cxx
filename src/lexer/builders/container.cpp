//
// Created by Jeb Feng on 2022/3/12.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include <map>
#include "../include/builders/container.h"

namespace tcpl::compiler::lexer
{
	static const std::map<ContainerTokenType, const char> container_types = {
			{ContainerTokenType::Brace,       '{'},
			{ContainerTokenType::AntiBrace,   '}'},
			{ContainerTokenType::Bracket,     '('},
			{ContainerTokenType::AntiBracket, ')'},
			{ContainerTokenType::Index,       '['},
			{ContainerTokenType::AntiIndex,   ']'},
	};

	std::optional<Token> try_build_container_token(const std::string &source_code, size_t base_pos)
	{
		for (auto container: container_types)
		{
			if (source_code.starts_with(container.second))
			{
				return std::optional(Token(container.first, TokenPosition(base_pos, 1)));
			}
		}

		return std::nullopt;
	}
}
