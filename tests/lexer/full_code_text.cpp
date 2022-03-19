//
// Created by Jeb Feng on 2022/3/16.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include <gtest/gtest.h>
#include "include/tokenizer.h"

TEST(LexerTest, FullCodeTextTest)
{
	std::string source = R"(link std;
						    decl func main()[none]{
								decl var number i;
								i = 1;
								return;
							})";

	auto result = tcpl::compiler::lexer::tokenize(source);

	ASSERT_EQ(result.size(), 37);
}
