//
// Created by Jeb Feng on 2022/4/4.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include "ast_utils/identifier.h"

tcpl::compiler::parser::Identifier::Identifier(const tcpl::compiler::parser::Scope &scope, const std::string &name)
		: scope(scope), name(name)
{ }
