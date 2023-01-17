#include "Item.h"
Item::Item(const char* n, const char* d, const int h, const int p, const int s, sf::Color c) : name(n), description(d), health(h), power(p), mask(s), color(c)
{


}

void Item::draw(sf::RenderTarget& target, sf::RenderStates states) const {

	for (int i = 0; i < 9; ++i) {
		//if (mask)
		//target.draw();

		//Bit shifting
	}
}