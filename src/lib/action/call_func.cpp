//
// Created by Jeb Feng on 2022/4/2.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include "action/call_func.h"

#include <utility>

tcpl::compiler::parser::CallAction::CallAction(tcpl::compiler::parser::Identifier functionName, std::vector<Parameter> parameters)
		: function_name(std::move(functionName)), parameters(std::move(parameters))
{ }
