//
// Created by Jeb Feng on 2022/4/4.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#pragma once

#include <string>
#include "ast_utils/scope.h"
#include "action_block.h"
#include "ast_utils/parameter.h"

namespace tcpl::compiler::parser
{
	class Function
	{
	public:
		Function(Scope scope, std::string identifier, std::vector<Parameter> parameters, ActionBlock body, std::string returnType);

	private:
		Scope scope;
		std::string identifier;

		std::vector<Parameter> parameters;
		ActionBlock body;
		std::string return_type;
	};
}
