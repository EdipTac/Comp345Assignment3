#include <string>
#include <iostream>
#include <memory>
#include "Player.h"


/*
The following is the cpp file for the player class within the game. As described in the header file, the content of the
player were only done based on Disctinct Part 1 of the assignment and therefore only contains the role and reference cards.
The role cards themselves contain the color of each pawn that will be generated when the assignment is merged with other
group members while doing the first build of the game, where the color of the role card will determine the color of the pawn chosen.

The code contains 2 constructors as well as 2 display functions to print out the details of each card within the character's hand.
*/

Player::Player(){
	_name = "";
	_myReference = std::make_unique<ReferenceCard>();
	_myRole = std::make_unique<RoleCard>();
	_myPawn = Pawn();
}

Player::Player(std::string name, std::unique_ptr<RoleCard> role) : _name(name), _myReference(std::make_unique<ReferenceCard>()), _myRole(std::move(role)) {}


void Player::displayRole() {
	_myRole->printRole();

}

void Player::displayReference() {
	_myReference->printReference();
}

Pawn Player::myPawn() {
	return _myPawn;
}

void Player::addCard(std::string card) {
	_myCards.push_back(card);
}

void Player::displayCards() {
	std::cout << "The following cards are at hand \n";
	for (auto i = 0u; _myCards.size(); i++)
	{
		std::cout << _myCards[i] << std::endl;
	}
}

std::vector<std::string> Player::cards() {
	return _myCards;
}

void Player::displayFirstCard() {
	std::cout << _myCards[0] << std::endl;
}


