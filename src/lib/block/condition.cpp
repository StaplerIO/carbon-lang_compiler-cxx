//
// Created by Jeb Feng on 2022/4/4.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include "block/condition.h"

#include <utility>

tcpl::compiler::parser::ConditionBlock::ConditionBlock(tcpl::compiler::parser::RelationExpression condition, tcpl::compiler::parser::ActionBlock actions)
		: condition(std::move(condition)), actions(std::move(actions))
{ }
