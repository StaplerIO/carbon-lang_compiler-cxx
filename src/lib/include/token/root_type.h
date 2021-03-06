//
// Created by Jeb Feng on 2022/2/11.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#pragma once

#include <string>
#include "../enums/token_type.h"
#include "operator_token.h"
#include "data_token.h"
#include "position.h"
#include "identifier_token.h"

namespace tcpl::compiler::lexer
{
	/// @typedef Contents in a comment token is just a string
	typedef std::string CommentToken;

	/**
	 * @class Token
	 * @brief Saves every token here, it contains all token types the compiler need to construct a package.
	 */
	class Token
	{
	public:
		Token();

		Token(const KeywordTokenType &keywordType, TokenPosition position);
		Token(const ContainerTokenType &container, TokenPosition position);
		Token(const OperatorToken &operatorTk, TokenPosition position);
		Token(IdentifierToken identifier, TokenPosition position);
		Token(CommentToken commentMessage, TokenPosition position);
		Token(DataToken data, TokenPosition position);
		Token(TokenType type, TokenPosition position);

		TokenType getTokenType() const;
		KeywordTokenType getKeywordType() const;
		ContainerTokenType getContainer() const;
		const OperatorToken &getOperatorTk() const;
		const IdentifierToken &getIdentifier() const;
		const CommentToken &getCommentMessage() const;
		const DataToken &getData() const;
		const TokenPosition &getPosition() const;

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
