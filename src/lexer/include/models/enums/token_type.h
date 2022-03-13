//
// Created by Jeb Feng on 2022/2/11.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#ifndef CARBON_LANG_COMPILER_TOKEN_TYPE_H
#define CARBON_LANG_COMPILER_TOKEN_TYPE_H

namespace tcpl::compiler::lexer
{
	enum class TokenType
	{
		Keyword,
		Identifier,
		Data,
		Operator,
		Container,
		Semicolon,
		Comment,
		Scope,
		Whitespace,
		Invalid,
	};

	enum class KeywordTokenType
	{
		Number,
		Character,
		String,
		Declare,
		Variable,
		Const,
		Export,
		Function,
		If,
		ElseIf,
		Else,
		While,
		Loop,
		Continue,
		Break,
		Return,
		Call,
		Link,
		Scope,
		None,
		Any,
		True,
		False,
		Invalid
	};

	enum class DataTokenType
	{
		String,
		Number,
		Invalid
	};

	enum class ContainerTokenType
	{
		Brace,
		AntiBrace,
		Bracket,
		AntiBracket,
		Index,
		AntiIndex,
		Invalid
	};

	enum class OperatorTokenType
	{
		// Root type
		Calculation,
		Relation,
		Logical,
		// Absolute type
		Assignment,
		Comma,
		Invalid
	};

	enum class CalculationOperatorTokenType
	{
		Plus,
		Minus,
		Times,
		Divide,
		Modulo,
		Invalid
	};

	enum class RelationOperatorTokenType
	{
		Bigger,
		BiggerEqual,
		Less,
		LessEqual,
		NotEqual,
		Equal,
		Invalid
	};

	enum class LogicalOperatorTokenType {
		Not,
		And,
		Or,
		Invalid
	};

	enum class IdentifierType {
		Data,
		FunctionSignature,
		ScopeName,
		TypeSignature,
		Unknown,
		Invalid
	};
}

#endif //CARBON_LANG_COMPILER_TOKEN_TYPE_H
