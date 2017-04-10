#pragma once
#include <string>
#include "City2.h"

/*
This is the header file for the pawns that will be used within the game. Currently since only the Distinct Part 1
was done in the assignment, the code only can contain a text for the color and a text for the position of the pawn.
This will be changed and merged with the Map part of the assignment and will therefore be redone. However, in the mean
time only the strings were given to the pawn.
*/

class Pawn {
public:
	Pawn();
	Pawn(std::string color, City2 *position);
	void changePos(City2 *position);
	std::string &getPos();
	City2 *position();

private:
	std::string _color;
	City2 *_position;
};