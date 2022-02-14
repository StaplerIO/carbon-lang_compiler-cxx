//
// Created by Jeb Feng on 2022/2/11.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#ifndef CARBON_LANG_COMPILER_ROOT_TYPE_H
#define CARBON_LANG_COMPILER_ROOT_TYPE_H

#include <string>
#include "../enums/token_type.h"
#include "operator_token.h"
#include "data_token.h"
#include "position.h"
#include "identifier.h"

namespace tcpl::compiler::lexer
{
	typedef std::string CommentToken;

	class Token
	{
	public:
		Token(TokenType type, const KeywordTokenType &keywordType, TokenPosition position);
		Token(TokenType type, const ContainerTokenType &container, TokenPosition position);
		Token(TokenType type, const OperatorToken &operatorTk, TokenPosition position);
		Token(TokenType type, IdentifierToken identifier, TokenPosition position);
		Token(TokenType type, std::string commentMessage, TokenPosition position);
		Token(TokenType type, DataToken data, TokenPosition position);

	private:

		TokenType type;

		// The token may be one of the subtypes
		KeywordTokenType keyword_type = KeywordTokenType::Invalid;
		ContainerTokenType container = ContainerTokenType::Invalid;
		OperatorToken operator_tk = OperatorToken(OperatorTokenType::Invalid);
		IdentifierToken identifier = IdentifierToken(IdentifierType::Invalid, "");
		CommentToken comment_message = std::string();
		DataToken data = DataToken(DataTokenType::Invalid, "");

		TokenPosition position;

		// std::string raw;
	};
}

#endif //CARBON_LANG_COMPILER_ROOT_TYPE_H
