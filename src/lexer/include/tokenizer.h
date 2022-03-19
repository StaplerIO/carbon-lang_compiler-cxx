//
// Created by Jeb Feng on 2022/2/12.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#ifndef CARBON_LANG_COMPILER_TOKENIZER_H
#define CARBON_LANG_COMPILER_TOKENIZER_H

#include "models/token/root_type.h"

namespace tcpl::compiler::lexer
{
	std::vector<Token> tokenize(const std::string& source_code);
}

#endif //CARBON_LANG_COMPILER_TOKENIZER_H
