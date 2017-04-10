#pragma once
#include "StrategyInterface.h"
class BuildResearchStation : public StrategyInterface 
{
public:
	void execute(Player *player, City2 *city)  override;
};