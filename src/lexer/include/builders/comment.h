//
// Created by Jeb Feng on 2022/2/15.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#ifndef CARBON_LANG_COMPILER_COMMENT_H
#define CARBON_LANG_COMPILER_COMMENT_H

#include <string>
#include "../models/token/root_type.h"

namespace tcpl::compiler::lexer
{
	std::optional<Token> build_comment_token(const std::string& source_code, size_t base_pos);
}

#endif //CARBON_LANG_COMPILER_COMMENT_H