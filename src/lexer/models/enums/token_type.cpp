//
// Created by Jeb Feng on 2022/2/12.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include "../../include/models/enums/token_type.h"
#include "../../include/builders/keyword.h"

namespace tcpl::compiler::lexer
{
	TokenType match_token(const char *token)
	{
		if (try_build_keyword_token(token, 0).getTokenType() != TokenType::Invalid) return TokenType::Keyword;
		else return TokenType::Invalid;
	}
}
