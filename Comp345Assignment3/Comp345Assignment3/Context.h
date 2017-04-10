#pragma once

#include "StrategyInterface.h"
#include "Player.h"
#include "City2.h"

class Context
{
public:
	explicit Context(StrategyInterface *strategy) : _strategy(strategy)
	{} //intentionally empty
	
	void set_strategy(StrategyInterface *strategy);

	void execute(Player *player, City2 *city);

private:
	StrategyInterface * _strategy;
};