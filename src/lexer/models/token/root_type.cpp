//
// Created by Jeb Feng on 2022/2/11.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include "../../include/models/token/root_type.h"

#include <utility>

namespace tcpl::compiler::lexer {
	Token::Token(tcpl::compiler::lexer::TokenType type, const tcpl::compiler::lexer::KeywordTokenType &keywordType, TokenPosition position)
			: type(type), keyword_type(keywordType), position(position)
	{ }

	Token::Token(tcpl::compiler::lexer::TokenType type, const tcpl::compiler::lexer::ContainerTokenType &container, TokenPosition position)
			: type(type), container(container), position(position)
	{ }

	Token::Token(tcpl::compiler::lexer::TokenType type, const tcpl::compiler::lexer::OperatorToken &operatorTk, TokenPosition position)
			: type(type), operator_tk(operatorTk), position(position)
	{ }

	Token::Token(tcpl::compiler::lexer::TokenType type, tcpl::compiler::lexer::IdentifierToken identifier, TokenPosition position)
			: type(type), identifier(std::move(identifier)), position(position)
	{ }

	Token::Token(tcpl::compiler::lexer::TokenType type, std::string commentMessage, TokenPosition position)
			: type(type), comment_message(std::move(commentMessage)), position(position)
	{ }

	Token::Token(tcpl::compiler::lexer::TokenType type, tcpl::compiler::lexer::DataToken data, TokenPosition position)
			: type(type), data(std::move(data)), position(position)
	{ }
}
