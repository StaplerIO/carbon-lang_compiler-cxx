//
// Created by Jeb Feng on 2022/2/15.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include "gtest/gtest.h"
#include "../../src/lexer/include/builders/comment.h"
#include "include/builders/keyword.h"

using namespace tcpl::compiler::lexer;

TEST(LexerTest, CommentTest)
{
	auto comment = std::string("// My comment \n");

	auto result = build_comment_token(comment, 0);

	ASSERT_EQ(result.value().getPosition().getLength(), comment.length());
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