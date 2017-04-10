#include <iostream>
#include "DeckofRefs.h"
#include "DeckofRoles.h"
#include "RoleCard.h"
#include "ReferenceCard.h"
#include "Pawn.h"
#include "Player.h"
#include <memory>
#include <string>
#include "Context.h"
#include "Drive.h"
#include "BuildResearchStation.h"
#include "TreatDisease.h"
#include "ShareKnowledge.h"

/* Student: Edip Tac, ID: 26783287 Comp 345: Assignment 1

this is the main area where the game is deployed. Since the code is written for only the common part and distinct part 1
of the assignment, only those 2 requirements are tested in the following code.
*/



int main() {

	std::cout << ("NEW GAME") << "\n\n";


	DeckOfRefs referenceDeck{}; //creating a deck of reference cards

	DeckofRoles roleCardDeck{}; //creating a deck role cards


	std::vector<City2 *> cities;
	cities.push_back(new City2("Atlanta", "Blue", 2));
	cities.push_back(new City2("Miami", "Yellow", 1));
	cities.push_back(new City2("Karachi", "Black", 0));
	cities.push_back(new City2("Montreal", "Blue", 3));
	cities.push_back(new City2("Seoul", "Red", 0));

	Context context (new Drive()); //default strategy set to Drive



	Player p1("Player1", roleCardDeck.drawRoleCard()); //initializing the first player with his name and a randomly drawn role card
	p1.displayRole(); //displaying the role card and its content
	p1.displayReference(); //displaying the reference card and its content
	p1.myPawn().changePos(cities[0]);
	Player *p1ptr;
	p1ptr = &p1;
						   //the following is identical to above but for the 2nd players
	Player p2("Player2", roleCardDeck.drawRoleCard());
	p2.displayRole();
	p2.displayReference();
	p2.myPawn().changePos(cities[0]);
	Player *p2ptr;
	p2ptr = &p2;


	bool playGame = true;
	while (playGame) {

		std::cout << "Player1's turn \n Please press 1 to drive and press 2 to build a research station (in your current city), press 3 to treat a disease (in your current city), and press 4 to share knowledge. OR press 9 to quit \n";
		std::cout << "Your Current position is: " << p1.myPawn().getPos();
		int in = 1;
		while (in != 9) {

			std::cin >> in;
			if (in == 1) {

				std::cout << "Please enter the following numbers for the city to move to: \n"
					<< "0 for Atlanta \n 1 for Miami \n 2 for Karachi \n 3 for Montreal \n 4 for Seoul \n";
				int cityToMoveTo;
				std::cin >> cityToMoveTo;
				if (cityToMoveTo == 0) {
					context.set_strategy(new Drive());
					context.execute(p1ptr, cities[0]);
				}
				if (cityToMoveTo == 1) {
					context.set_strategy(new Drive());
					context.execute(p1ptr, cities[1]);
				}
				if (cityToMoveTo == 2) {
					context.set_strategy(new Drive());
					context.execute(p1ptr, cities[2]);
				}
				if (cityToMoveTo == 3) {
					context.set_strategy(new Drive());
					context.execute(p1ptr, cities[3]);
				}
				if (cityToMoveTo == 4) {
					context.set_strategy(new Drive());
					context.execute(p1ptr, cities[4]);
				}
				std::cout << "Current position is: " << p1.myPawn().getPos() << std::endl;

			}
			if (in == 2) {
				context.set_strategy(new BuildResearchStation());
				context.execute(p1ptr, p1.myPawn().position());;
				std::cout << "Research Station had been added to " << p1.myPawn().getPos() << std::endl;
			}


			if (in == 3) {
				context.set_strategy(new TreatDisease());
				context.execute(p1ptr, p1.myPawn().position());

				
			}

			if (in == 4) {
				std::cout << "Player 1 current has the following cards: \n";
				p1.displayCards();
				context.set_strategy(new ShareKnowledge());
				std::cout << "Player1 gave Player2 the following card: \n";
				p1.displayFirstCard();

			}
			std::cout << "Updated status of both players: \n";
			std::cout << "Player1: \n";
			p1.displayCards();
			std::cout << "Player2: \n";
			p2.displayCards();
			for (int i=0; cities.size(); i++)
			{
				cities[i]->printCity(); 
			}
		}

	}


	system("pause");

};