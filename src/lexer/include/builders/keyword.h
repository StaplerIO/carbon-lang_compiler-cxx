//
// Created by Jeb Feng on 2022/2/26.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#ifndef CARBON_LANG_COMPILER_KEYWORD_H
#define CARBON_LANG_COMPILER_KEYWORD_H

#include <optional>
#include "../models/enums/token_type.h"
#include "../models/token/root_type.h"

namespace tcpl::compiler::lexer
{
	std::optional<Token> try_build_keyword_token(const std::string &token_stream, size_t base_pos);
}

#endif //CARBON_LANG_COMPILER_KEYWORD_H
