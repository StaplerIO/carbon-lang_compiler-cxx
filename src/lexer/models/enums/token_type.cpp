//
// Created by Jeb Feng on 2022/2/12.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include <cstring>
#include "../../include/models/enums/token_type.h"

namespace tcpl::compiler::lexer
{
	TokenType match_token(char *token)
	{
		if (match_keyword(token) != KeywordTokenType::Invalid) return TokenType::Keyword;
		else return TokenType::Invalid;
	}

	KeywordTokenType match_keyword(char *token)
	{
		if(strcmp(token, "number") == 0) return KeywordTokenType::Number;
		else if(strcmp(token, "char") == 0) return KeywordTokenType::Character;
		else if(strcmp(token, "string") == 0) return KeywordTokenType::String;
		else if(strcmp(token, "decl") == 0) return KeywordTokenType::Declare;
		else if(strcmp(token, "var") == 0) return KeywordTokenType::Variable;
		else if(strcmp(token, "const") == 0) return KeywordTokenType::Const;
		else if(strcmp(token, "export") == 0) return KeywordTokenType::Export;
		else if(strcmp(token, "func") == 0) return KeywordTokenType::Function;
		else if(strcmp(token, "if") == 0) return KeywordTokenType::If;
		else if(strcmp(token, "elif") == 0) return KeywordTokenType::ElseIf;
		else if(strcmp(token, "else") == 0) return KeywordTokenType::Else;
		else if(strcmp(token, "while") == 0) return KeywordTokenType::While;
		else if(strcmp(token, "loop") == 0) return KeywordTokenType::Loop;
		else if(strcmp(token, "continue") == 0) return KeywordTokenType::Continue;
		else if(strcmp(token, "break") == 0) return KeywordTokenType::Break;
		else if(strcmp(token, "return") == 0) return KeywordTokenType::Return;
		else if(strcmp(token, "call") == 0) return KeywordTokenType::Call;
		else if(strcmp(token, "link") == 0) return KeywordTokenType::Link;
		else if(strcmp(token, "scope") == 0) return KeywordTokenType::Scope;
		else if(strcmp(token, "none") == 0) return KeywordTokenType::None;
		else return KeywordTokenType::Invalid;
	}
}
