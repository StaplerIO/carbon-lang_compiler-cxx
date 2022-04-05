//
// Created by Jeb Feng on 2022/4/4.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#pragma once

#include "action_block.h"

namespace tcpl::compiler::parser
{
	class LoopBlock
	{
	public:
		explicit LoopBlock(ActionBlock actions);

	private:
		ActionBlock actions;
	};
}
