//
// Created by Jeb Feng on 2022/2/12.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include <cstring>
#include <vector>
#include <stdexcept>
#include "include/tokenizer.h"
#include "include/builders/comment.h"
#include "include/builders/container.h"
#include "include/builders/identifier.h"
#include "include/builders/keyword.h"
#include "include/builders/operator.h"
#include "include/builders/scope.h"
#include "include/builders/semicolon.h"
#include "include/builders/whitespace.h"
#include "builders/data.h"

namespace tcpl::compiler::lexer
{
	std::vector<Token> tokenize(const std::string &source_code)
	{
		auto result = std::vector<Token>();

		size_t index = 0;
		while (index < source_code.length())
		{
			auto source_code_remaining = source_code.substr(index);

			// Try build with each token type
			{
				auto comment = try_build_comment_token(source_code_remaining, index);
				if (comment.has_value())
				{
					result.push_back(comment.value());
					index += comment.value().getPosition().getLength();
					continue;
				}
			}

			{
				auto container = try_build_container_token(source_code_remaining, index);
				if (container.has_value())
				{
					result.push_back(container.value());
					index += container.value().getPosition().getLength();
					continue;
				}
			}

			{
				auto identifier = try_build_identifier_token(source_code_remaining, index);
				if (identifier.has_value())
				{
					result.push_back(identifier.value());
					index += identifier.value().getPosition().getLength();
					continue;
				}
			}

			{
				auto keyword = try_build_keyword_token(source_code_remaining, index);
				if (keyword.has_value())
				{
					result.push_back(keyword.value());
					index += keyword.value().getPosition().getLength();
					continue;
				}
			}

			{
				auto op = try_build_operator_token(source_code_remaining, index);
				if (op.has_value())
				{
					result.push_back(op.value());
					index += op.value().getPosition().getLength();
					continue;
				}
			}

			{
				auto scope = try_build_scope_token(source_code_remaining, index);
				if (scope.has_value())
				{
					result.push_back(scope.value());
					index += scope.value().getPosition().getLength();

					continue;
				}
			}

			{
				auto semicolon = try_build_semicolon_token(source_code_remaining, index);
				if (semicolon.has_value())
				{
					result.push_back(semicolon.value());
					index += semicolon.value().getPosition().getLength();

					continue;
				}
			}

			{
				auto whitespace = try_build_whitespace_token(source_code_remaining, index);
				if (whitespace.has_value())
				{
					result.push_back(whitespace.value());
					index += whitespace.value().getPosition().getLength();

					continue;
				}
			}

			{
				auto data = try_build_data_token(source_code_remaining, index);
				if (data.has_value())
				{
					result.push_back(data.value());
					index += data.value().getPosition().getLength();
				}
			}

			// If we compared nothing, then there's something wrong with the source code (lexical issue)
			// So we just simply throw an exception here
			// TODO: Prevent throwing an exception here, collect all issues and print them before
			// throw std::domain_error(strcat("Invalid character detected at position", std::to_string(index).c_str()));
		}

		return result;
	}
}
