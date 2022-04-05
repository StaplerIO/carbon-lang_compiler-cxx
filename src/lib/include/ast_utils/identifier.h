//
// Created by Jeb Feng on 2022/4/4.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#pragma once

#include <string>
#include "scope.h"

namespace tcpl::compiler::parser
{
	class Identifier
	{
	public:
		Identifier(const Scope &scope, const std::string &name);

	private:
		Scope scope;
		std::string name;
	};
}
