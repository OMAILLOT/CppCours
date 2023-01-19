#include "Item.h"
#include "Style.h"
Item::Item(const char* n, const char* d, const int h, const int p, const int s, sf::Color c) : name(n), description(d), health(h), power(p), mask(s), color(c)
{
	for (int i = 0; i < 9; ++i) {
		shapes[i].setFillColor(c);
		shapes[i].setSize(sf::Vector2f(cellSize, cellSize));
	}
	
}

void Item::draw(sf::RenderTarget& target, sf::RenderStates states) const {
	int marker = 0b100000000;
	for (int i = 0; i < 9; ++i) {
		if (((marker >> i) & mask) != 0) {
			target.draw(shapes[i]);
		}
	}
}

void Item::setPosition(sf::Vector2f vec) {
	for (int i = 0; i < 9; ++i) {
		shapes[i].setPosition(vec.x + ((i % 3) * cellSize), vec.y + ((i / 3) * cellSize));
	}
}

bool Item::checkPosition(sf::Vector2f point) 
{
	int marker = 0b100000000;
	for (int i = 0; i < 9; ++i) {
		if (((marker >> i) & mask) != 0) {
			auto bbox = shapes[i].getGlobalBounds();
			if(bbox.contains(point))
			{
				return true;
			}
		
		}
	}
	return false;
}

