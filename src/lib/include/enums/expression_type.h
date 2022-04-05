//
// Created by Jeb Feng on 2022/4/5.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#pragma once

namespace tcpl::compiler::parser
{
	enum class ExprDataTermType
	{
		Number,
		String,
		Identifier,
		FunctionCall
	};
}
