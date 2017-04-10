#include "TreatDisease.h"
#include <iostream>

void TreatDisease::execute(Player *player, City2 *city)
{
	city->removeCubes(1);
}