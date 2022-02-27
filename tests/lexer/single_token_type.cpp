//
// Created by Jeb Feng on 2022/2/15.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include <gtest/gtest.h>
#include "../../src/lexer/include/builders/comment.h"
#include "include/builders/keyword.h"
#include "include/builders/identifier.h"
#include "include/builders/number.h"

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
	ASSERT_EQ(result.getTokenType(), TokenType::Keyword);
	ASSERT_EQ(result.getKeywordType(), KeywordTokenType::None);

	result = try_build_keyword_token(source.substr(5), 5);
	ASSERT_EQ(result.getKeywordType(), KeywordTokenType::Any);
}

TEST(LexerTest, IdentifierTest)
{
	auto source = std::string("var");

	auto result = try_build_identifier_token(source, 0);
	ASSERT_EQ(result.getTokenType(), TokenType::Invalid);

	source = std::string("foo");
	result = try_build_identifier_token(source, 0);
	ASSERT_EQ(result.getTokenType(), TokenType::Identifier);
}

TEST(LexerTest, NumberTest)
{
	auto source = std::string("1.23");

	auto result = try_build_number_token(source, 0);
	ASSERT_EQ(result.getTokenType(), TokenType::Data);
	ASSERT_EQ(result.getData().getRawNumber(), source);
}
