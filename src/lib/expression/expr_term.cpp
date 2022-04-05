//
// Created by Jeb Feng on 2022/4/4.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include "expression/expr_term.h"

tcpl::compiler::parser::ExprTerm::ExprTerm(const ExprDataTerm &dataTerm) : data_term(dataTerm)
{ }

tcpl::compiler::parser::ExprTerm::ExprTerm(const ExprOperatorTerm &opTerm) : operator_term(opTerm)
{ }
