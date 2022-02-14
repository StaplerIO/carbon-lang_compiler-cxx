//
// Created by Jeb Feng on 2022/2/14.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#ifndef CARBON_LANG_COMPILER_POSITION_H
#define CARBON_LANG_COMPILER_POSITION_H

namespace tcpl::compiler::lexer {
	struct TokenPosition {
		size_t start_pos;
		size_t length;
	};
}

#endif //CARBON_LANG_COMPILER_POSITION_H
