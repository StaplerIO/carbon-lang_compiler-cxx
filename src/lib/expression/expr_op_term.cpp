//
// Created by Jeb Feng on 2022/4/4.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//
#include "expression/expr_op_term.h"

tcpl::compiler::parser::ExprOperatorTerm::ExprOperatorTerm(const tcpl::compiler::lexer::OperatorToken &operatorTk)
		: operator_tk(operatorTk)
{ }
