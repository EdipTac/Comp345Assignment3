#include "Context.h"



void Context::set_strategy(StrategyInterface *strategy) {
	_strategy = strategy;
}

void Context::execute(Player *player, City2 *city)  {
	_strategy->execute(player, city);
}
