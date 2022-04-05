//
// Created by Jeb Feng on 2022/4/2.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include "action/declaration.h"

tcpl::compiler::parser::DeclarationAction::DeclarationAction(bool isVariable, const std::string &dataType, const tcpl::compiler::parser::Identifier &identifier)
		: is_variable(isVariable), data_type(dataType), identifier(identifier)
{ }
