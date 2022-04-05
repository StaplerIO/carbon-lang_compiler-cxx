//
// Created by Jeb Feng on 2022/2/26.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include <cstring>
#include <string>
#include <map>
#include "../include/builders/keyword.h"

namespace tcpl::compiler::lexer
{
	static const std::map<KeywordTokenType, const char *> keyword_map = {
			{KeywordTokenType::Number,   "number"},
			{KeywordTokenType::String,   "string"},
			{KeywordTokenType::Declare,  "decl"},
			{KeywordTokenType::Variable, "var"},
			{KeywordTokenType::Const,    "const"},
			{KeywordTokenType::Export,   "export"},
			{KeywordTokenType::Function, "func"},
			{KeywordTokenType::If,       "if"},
			{KeywordTokenType::ElseIf,   "elif"},
			{KeywordTokenType::Else,     "else"},
			{KeywordTokenType::While,    "while"},
			{KeywordTokenType::Loop,     "loop"},
			{KeywordTokenType::Continue, "continue"},
			{KeywordTokenType::Break,    "break"},
			{KeywordTokenType::Return,   "return"},
			{KeywordTokenType::Call,     "call"},
			{KeywordTokenType::Link,     "link"},
			{KeywordTokenType::Scope,    "scope"},
			{KeywordTokenType::None,     "none"},
			{KeywordTokenType::Any,      "any"},
			{KeywordTokenType::True,     "true"},
			{KeywordTokenType::False,    "false"},
	};

	std::optional<Token> try_build_keyword_token(const std::string &token_stream, size_t base_pos)
	{
		for (auto item: keyword_map)
		{
			if (token_stream.starts_with(item.second))
			{
				return std::optional(Token(item.first, TokenPosition(base_pos, strlen(item.second))));
			}
		}

		return std::nullopt;
	}
}
