//
// Created by Jeb Feng on 2022/4/2.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#pragma once

#include <string>
#include "ast_utils/identifier.h"

namespace tcpl::compiler::parser
{
	class DeclarationAction
	{
	public:
		DeclarationAction(bool isVariable, const std::string &dataType, const Identifier &identifier);

	private:

		bool is_variable;
		std::string data_type;
		Identifier identifier;
	};
}
