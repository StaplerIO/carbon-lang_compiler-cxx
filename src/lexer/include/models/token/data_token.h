//
// Created by Jeb Feng on 2022/2/13.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#ifndef CARBON_LANG_COMPILER_DATA_TOKEN_H
#define CARBON_LANG_COMPILER_DATA_TOKEN_H

#include <string>
#include "../enums/token_type.h"

namespace tcpl::compiler::lexer
{
	class DataToken {
	public:
		DataToken(DataTokenType type, const std::string& raw_content);

	private:

		DataTokenType type;

		std::string raw_number;
		std::string raw_string;
	};
}

#endif //CARBON_LANG_COMPILER_DATA_TOKEN_H
