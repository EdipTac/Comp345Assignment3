#include "Drive.h"

void Drive::execute(Player *player, City2 *city) 
{
	player->myPawn().changePos(city);
}