//
// Created by Jeb Feng on 2022/2/14.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//


#include "../../include/models/enums/token_type.h"
#include "../../include/models/token/data_token.h"

#include <utility>

namespace tcpl::compiler::lexer {
	DataToken::DataToken(DataTokenType type, const std::string& raw_content) : type(type)
	{
		switch (type) {
			case DataTokenType::String:
				raw_string = raw_content;
				break;
			case DataTokenType::Number:
				raw_number = raw_content;
				break;
			case DataTokenType::Invalid:
				break;
		}
	}
}
