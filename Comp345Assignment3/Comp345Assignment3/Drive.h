#pragma once
#include "StrategyInterface.h"

class Drive : public StrategyInterface
{
public:
	void execute(Player *player, City2 *city)  override;
};