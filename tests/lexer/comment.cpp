//
// Created by Jeb Feng on 2022/2/15.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include "gtest/gtest.h"
#include "../../src/lexer/include/builders/comment.h"

using namespace tcpl::compiler::lexer;

TEST(LexerTest, CommentTest)
{
	auto comment = std::string("// My comment \n");

	auto result = build_comment_token(comment, 0);

	ASSERT_EQ(result.value().getPosition().getLength(), comment.length());
	ASSERT_NE(result, std::nullopt);

}
