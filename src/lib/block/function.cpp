//
// Created by Jeb Feng on 2022/4/4.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include "block/function.h"

#include <utility>

tcpl::compiler::parser::Function::Function(tcpl::compiler::parser::Scope scope, std::string identifier, std::vector<Parameter> parameters, tcpl::compiler::parser::ActionBlock body, std::string returnType)
		: scope(std::move(scope)), identifier(std::move(identifier)), parameters(std::move(parameters)), body(std::move(body)), return_type(std::move(returnType))
{ }
