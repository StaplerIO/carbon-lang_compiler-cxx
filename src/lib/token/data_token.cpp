//
// Created by Jeb Feng on 2022/2/14.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include "../include/enums/token_type.h"
#include "../include/token/data_token.h"

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

	DataTokenType DataToken::getType() const
	{
		return type;
	}

	const std::string &DataToken::getRawNumber() const
	{
		return raw_number;
	}

	const std::string &DataToken::getRawString() const
	{
		return raw_string;
	}
}
