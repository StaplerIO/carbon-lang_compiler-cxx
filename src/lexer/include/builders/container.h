//
// Created by Jeb Feng on 2022/3/12.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#ifndef CARBON_LANG_COMPILER_CONTAINER_H
#define CARBON_LANG_COMPILER_CONTAINER_H

#include <optional>
#include "../../../lib/include/token/root_type.h"

namespace tcpl::compiler::lexer
{
	std::optional<Token> try_build_container_token(const std::string &source_code, size_t base_pos);
}

#endif //CARBON_LANG_COMPILER_CONTAINER_H
