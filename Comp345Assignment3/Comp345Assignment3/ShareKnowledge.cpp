#include "ShareKnowledge.h"


void ShareKnowledge::execute(Player *player, City2 *city) {}

void ShareKnowledge::execute(Player *p1, Player *p2) {
	std::vector<std::string> cards = p1->cards();
	p2->addCard(cards[0]);
}