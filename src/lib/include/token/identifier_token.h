//
// Created by Jeb Feng on 2022/2/14.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#pragma once

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
