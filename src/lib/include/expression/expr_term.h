//
// Created by Jeb Feng on 2022/4/4.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#pragma once

#include <optional>
#include "expression/expr_data_term.h"
#include "expression/expr_op_term.h"

namespace tcpl::compiler::parser
{
	class ExprTerm
	{
	public:
		explicit ExprTerm(const ExprDataTerm &dataTerm);
		explicit ExprTerm(const ExprOperatorTerm &opTerm);

	private:
		std::optional<ExprDataTerm> data_term;
		std::optional<ExprOperatorTerm> operator_term;
	};
}
