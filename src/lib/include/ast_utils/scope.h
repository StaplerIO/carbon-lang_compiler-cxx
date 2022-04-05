//
// Created by Jeb Feng on 2022/4/4.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#pragma once

#include <string>
#include <vector>

namespace tcpl::compiler::parser
{
	class Scope
	{
	public:
		explicit Scope(std::vector<std::string> scopes);

	private:
		std::vector<std::string> scopes;
	};
}
