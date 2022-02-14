//
// Created by Jeb Feng on 2022/2/14.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#ifndef CARBON_LANG_COMPILER_IDENTIFIER_H
#define CARBON_LANG_COMPILER_IDENTIFIER_H

#include <string>
#include "../enums/token_type.h"

namespace tcpl::compiler::lexer
{
	class IdentifierToken
	{
	public:
		IdentifierToken(IdentifierType type, std::string rawContent);

	private:
		IdentifierType type;
		std::string raw_content;
	};
}

#endif //CARBON_LANG_COMPILER_IDENTIFIER_H
