#pragma once
#include  "StrategyInterface.h"


class ShareKnowledge : public StrategyInterface
{
	public:
		void execute(Player *player, City2 *city) override;
		void execute(Player *p1, Player *p2) override;
};