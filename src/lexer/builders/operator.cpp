//
// Created by Jeb Feng on 2022/3/5.
// Copyright (c) 2022 StaplerIO. All rights reserved.
//

#include <map>
#include "../include/builders/operator.h"

namespace tcpl::compiler::lexer
{
	static const std::map<CalculationOperatorTokenType, const char> calculation_operator = {
			{CalculationOperatorTokenType::Plus, '+'},
			{CalculationOperatorTokenType::Minus, '-'},
			{CalculationOperatorTokenType::Times, '*'},
			{CalculationOperatorTokenType::Divide, '/'},
			{CalculationOperatorTokenType::Modulo, '%'},
	};

	static const std::map<RelationOperatorTokenType, const char *> relation_operator = {
			{RelationOperatorTokenType::BiggerEqual, ">="},
			{RelationOperatorTokenType::LessEqual,   "<="},
			{RelationOperatorTokenType::NotEqual,    "<>"},
			{RelationOperatorTokenType::Equal,       "=="},
			{RelationOperatorTokenType::Bigger,      ">"},
			{RelationOperatorTokenType::Less,        "<"},
	};

	static const std::map<LogicalOperatorTokenType, const char *> logical_operator = {
			{LogicalOperatorTokenType::And, "&&"},
			{LogicalOperatorTokenType::Or,  "||"},
			{LogicalOperatorTokenType::Not, "!"},
	};

	static const std::map<OperatorTokenType, const char> direct_operator = {
			{OperatorTokenType::Comma, ','},
			{OperatorTokenType::Assignment,  '='},
	};

	std::optional<Token> try_build_operator_token(const std::string &token_stream, size_t base_pos)
	{
		auto calc_op = try_build_calculation_operator_token(token_stream);
		if(calc_op != CalculationOperatorTokenType::Invalid) return Token(OperatorToken(calc_op), TokenPosition(base_pos, 1));

		auto rel_op = try_build_relation_operator_token(token_stream);
		if(rel_op != RelationOperatorTokenType::Invalid) return Token(OperatorToken(rel_op), TokenPosition(base_pos, strlen(relation_operator.at(rel_op))));

		auto logic_op = try_build_logical_operator_token(token_stream);
		if(logic_op != LogicalOperatorTokenType::Invalid) return Token(OperatorToken(logic_op), TokenPosition(base_pos, strlen(logical_operator.at(logic_op))));

		auto direct_op = try_build_direct_operator_token(token_stream);
		if(direct_op != OperatorTokenType::Invalid) return Token(OperatorToken(direct_op), TokenPosition(base_pos, 1));

		return std::nullopt;
	}

	CalculationOperatorTokenType try_build_calculation_operator_token(const std::string &token_stream)
	{
		for (auto &item: calculation_operator)
		{
			if (token_stream.starts_with(item.second)) return item.first;
		}

		return CalculationOperatorTokenType::Invalid;
	}

	LogicalOperatorTokenType try_build_logical_operator_token(const std::string &token_stream)
	{
		for (auto &item: logical_operator)
		{
			if (token_stream.starts_with(item.second)) return item.first;
		}

		return LogicalOperatorTokenType::Invalid;
	}

	RelationOperatorTokenType try_build_relation_operator_token(const std::string &token_stream)
	{
		for (auto &item: relation_operator)
		{
			if (token_stream.starts_with(item.second) && strlen(item.second) == 2) return item.first;
		}

		for (auto &item: relation_operator)
		{
			if (token_stream.starts_with(item.second) && strlen(item.second) == 1) return item.first;
		}

		return RelationOperatorTokenType::Invalid;
	}

	OperatorTokenType try_build_direct_operator_token(const std::string &token_stream)
	{
		for (auto &item: direct_operator)
		{
			if (token_stream.starts_with(item.second)) return item.first;
		}

		return OperatorTokenType::Invalid;
	}
}
