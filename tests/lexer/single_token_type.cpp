//
// Created by Jeb Feng on 2022/2/15.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include <gtest/gtest.h>
#include "../../src/lexer/include/builders/comment.h"
#include "include/builders/keyword.h"
#include "include/builders/identifier.h"
#include "include/builders/operator.h"
#include "include/builders/container.h"
#include "include/builders/data.h"

using namespace tcpl::compiler::lexer;

TEST(LexerTest, CommentTest)
{
	auto source = std::string("// My source \n");

	auto result = try_build_comment_token(source, 0);

	ASSERT_EQ(result.value().getPosition().getLength(), source.length());
	ASSERT_NE(result, std::nullopt);

}

TEST(LexerTest, KeywordTest)
{
	auto source = std::string("none any false decl");

	auto result = try_build_keyword_token(source, 0);
	ASSERT_EQ(result.value().getTokenType(), TokenType::Keyword);
	ASSERT_EQ(result.value().getKeywordType(), KeywordTokenType::None);

	result = try_build_keyword_token(source.substr(5), 5);
	ASSERT_EQ(result.value().getKeywordType(), KeywordTokenType::Any);
}

TEST(LexerTest, IdentifierTest)
{
	// This is a keyword, not an identifier
	auto source = std::string("var");

	auto result = try_build_identifier_token(source, 0);
	ASSERT_FALSE(result.has_value());

	// This is an identifier
	source = std::string("foo");
	result = try_build_identifier_token(source, 0);
	ASSERT_EQ(result.value().getTokenType(), TokenType::Identifier);
}

TEST(LexerTest, NumberTest)
{
	auto source = std::string("1.23");

	auto result = try_build_number_token(source, 0);
	ASSERT_EQ(result.value().getTokenType(), TokenType::Data);
	ASSERT_EQ(result.value().getData().getRawNumber(), source);
}

TEST(LexerTest, StringTest)
{
	auto source = std::string("\"hello, world!\"");

	auto result = try_build_string_token(source, 0);
	ASSERT_EQ(result.value().getTokenType(), TokenType::Data);
	ASSERT_EQ(result.value().getData().getRawString(), source.substr(1, source.length() - 2));

	// Strings cannot cross lines
	source = std::string("\"12\n12\"");
	result = try_build_string_token(source, 0);
	ASSERT_FALSE(result.has_value());
}

TEST(LexerTest, OperatorTest)
{
	auto source = std::string("+ - >= >");

	auto result = try_build_operator_token(source, 0);
	ASSERT_EQ(result.value().getOperatorTk().getCalculation(), CalculationOperatorTokenType::Plus);

	result = try_build_operator_token(source.substr(2), 0);
	ASSERT_EQ(result.value().getOperatorTk().getCalculation(), CalculationOperatorTokenType::Minus);

	result = try_build_operator_token(source.substr(4), 0);
	ASSERT_EQ(result.value().getOperatorTk().getRelation(), RelationOperatorTokenType::BiggerEqual);

	result = try_build_operator_token(source.substr(7), 0);
	ASSERT_EQ(result.value().getOperatorTk().getRelation(), RelationOperatorTokenType::Bigger);
}

TEST(LexerTest, ContainerTest)
{
	auto source = std::string("[}");

	auto result = try_build_container_token(source, 0);
	ASSERT_EQ(result.value().getContainer(), ContainerTokenType::Index);

	result = try_build_container_token(source.substr(result.value().getPosition().getLength()), result.value().getPosition().getLength());
	ASSERT_EQ(result.value().getContainer(), ContainerTokenType::AntiBrace);
}
