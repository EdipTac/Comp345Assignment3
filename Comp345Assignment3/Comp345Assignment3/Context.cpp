#include "Context.h"

void Context::set_strategy(StrategyInterface *strategy) {
	_strategy = strategy;
}

void Context::execute() const  {
	_strategy->execute();
}
