#include "Pawn.h"

/*
This is the cpp file for the pawn class. It only consists of 2 constructors since the Map
is not yet a part of the code. When the Map is combined, the code will be updated.
As of right now, the pawns only contain 2 strings, 1 for color and the other for the position
that the pawn is in within the map.

The defauly position is chosen as Atlanta since that is where all characters begin the game.
*/

Pawn::Pawn() : _color (""), _position() {

}

Pawn::Pawn(std::string col, City2* pos) : _color(col), _position(pos) {
}

void Pawn::changePos(City2 *pos) {
	_position = pos;
}

std::string &Pawn::getPos() {
	std::string temp = _position->name();
	return (temp);
}

City2* Pawn::position() {
	return _position;
}