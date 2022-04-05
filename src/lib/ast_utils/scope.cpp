//
// Created by Jeb Feng on 2022/4/4.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include "ast_utils/scope.h"

#include <utility>

tcpl::compiler::parser::Scope::Scope(std::vector<std::string> scopes) : scopes(std::move(scopes))
{ }
