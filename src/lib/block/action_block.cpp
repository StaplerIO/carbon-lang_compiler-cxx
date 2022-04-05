//
// Created by Jeb Feng on 2022/4/4.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include "block/action_block.h"

#include <utility>

tcpl::compiler::parser::ActionBlock::ActionBlock(std::vector<ASTControlNode> actions) : actions(std::move(actions))
{ }
