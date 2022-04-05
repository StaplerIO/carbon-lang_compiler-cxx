//
// Created by Jeb Feng on 2022/4/4.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include "block/condition_if.h"

#include <utility>

tcpl::compiler::parser::IfBlock::IfBlock(tcpl::compiler::parser::ConditionBlock ifBlock, std::vector<ConditionBlock> elifCollection, std::optional<ActionBlock> elseBlock)
		: if_block(std::move(ifBlock)), elif_collection(std::move(elifCollection)), else_block(std::move(elseBlock))
{ }
