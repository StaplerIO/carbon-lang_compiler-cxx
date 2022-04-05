//
// Created by Jeb Feng on 2022/2/12.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#pragma once

#include "../../lib/include/token/root_type.h"

namespace tcpl::compiler::lexer
{
	std::vector<Token> tokenize(const std::string& source_code);
}
