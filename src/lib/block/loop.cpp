//
// Created by Jeb Feng on 2022/4/4.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include "block/loop.h"

#include <utility>

tcpl::compiler::parser::LoopBlock::LoopBlock(tcpl::compiler::parser::ActionBlock actions) : actions(std::move(actions))
{ }
