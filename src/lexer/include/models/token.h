//
// Created by Jeb Feng on 2022/2/11.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#ifndef CARBON_LANG_COMPILER_TOKEN_H
#define CARBON_LANG_COMPILER_TOKEN_H

#include "token_type.h"

namespace tcpl::compiler::lexer
{
	class Token
	{
		TokenType type;

		// The token may be one of the subtypes
		KeywordTokenType keywordType;

		// Token position
		int startPos;
		int len;
	};
}

#endif //CARBON_LANG_COMPILER_TOKEN_H
