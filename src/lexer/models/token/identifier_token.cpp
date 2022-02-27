//
// Created by Jeb Feng on 2022/2/14.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include "../../include/models/token/identifier_token.h"

#include <utility>

namespace tcpl::compiler::lexer {
	IdentifierToken::IdentifierToken(tcpl::compiler::lexer::IdentifierType type, std::string rawContent)
			: type(type), raw_content(std::move(rawContent))
	{ }
}


