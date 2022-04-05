//
// Created by Jeb Feng on 2022/4/2.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#pragma once

#include <string>
#include <vector>
#include "ast_utils/parameter.h"
#include "ast_utils/identifier.h"

namespace tcpl::compiler::parser
{
	class CallAction
	{
	public:
		CallAction(Identifier functionName, std::vector<Parameter> parameters);

	private:
		Identifier function_name;
		std::vector<Parameter> parameters;
	};
}
