#pragma once

#include "StrategyInterface.h"


class Context
{
public:
	explicit Context(StrategyInterface *strategy) : _strategy(strategy)
	{} //intentionally empty

	void set_strategy(StrategyInterface *strategy);

	void execute() const;

private:
	StrategyInterface * _strategy;
};