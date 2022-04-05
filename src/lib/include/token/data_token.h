//
// Created by Jeb Feng on 2022/2/13.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#pragma once

#include <string>
#include "../enums/token_type.h"

namespace tcpl::compiler::lexer
{
	class DataToken
	{
	public:
		DataToken(DataTokenType type, const std::string &raw_content);

		DataTokenType getType() const;
		const std::string &getRawNumber() const;
		const std::string &getRawString() const;

	private:

		DataTokenType type;

		std::string raw_number;
		std::string raw_string;
	};
}
