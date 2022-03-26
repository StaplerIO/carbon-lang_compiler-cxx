//
// Created by Jeb Feng on 2022/2/15.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include "token/position.h"

namespace tcpl::compiler::lexer
{
	size_t lexer::TokenPosition::getStartPos() const
	{
		return start_pos;
	}

	size_t lexer::TokenPosition::getLength() const
	{
		return length;
	}
}
