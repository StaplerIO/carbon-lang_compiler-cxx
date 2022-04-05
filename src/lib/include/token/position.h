//
// Created by Jeb Feng on 2022/2/14.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#pragma once

#include <cstddef>

namespace tcpl::compiler::lexer
{
	class TokenPosition
	{
	public:
		TokenPosition(size_t startPos, size_t length) : start_pos(startPos), length(length)
		{ }

		size_t getStartPos() const;
		size_t getLength() const;

	private:

		size_t start_pos;
		size_t length;
	};
}
