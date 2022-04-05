//
// Created by Jeb Feng on 2022/4/4.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include "ast_utils/parameter.h"

#include <utility>

tcpl::compiler::parser::Parameter::Parameter(std::string typeName, const tcpl::compiler::parser::Identifier &identifier)
		: type_name(std::move(typeName)), identifier(identifier)
{ }

tcpl::compiler::parser::Parameter::Parameter(std::string typeName, const tcpl::compiler::parser::SimpleExpression &evalExpression)
		: type_name(std::move(typeName)), eval_expression(evalExpression)
{ }
