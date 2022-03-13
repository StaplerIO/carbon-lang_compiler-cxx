//
// Created by Jeb Feng on 2022/3/12.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#ifndef CARBON_LANG_COMPILER_DATA_H
#define CARBON_LANG_COMPILER_DATA_H

#include <optional>
#include "../models/token/root_type.h"

namespace tcpl::compiler::lexer
{
	std::optional<Token> try_build_number_token(const std::string &token_stream, size_t base_pos);

	std::optional<Token> try_build_string_token(const std::string &source_code, size_t base_pos);
}

#endif //CARBON_LANG_COMPILER_DATA_H
