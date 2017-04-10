#pragma once
#include "StrategyInterface.h"

class TreatDisease : public StrategyInterface
{
	public:
		void execute(Player *player, City2 *city) override;
};