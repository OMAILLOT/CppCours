#include "Grid.h"
#include "Tile.h"
#include "Style.h"



Grid::Grid() {
	for (int i = 0; i < cellCount * cellCount; ++i) {
		cells[i].setPosition(i % cellCount * cellSize+margin, i/cellCount*cellSize+margin);
	}
}

Grid::~Grid() {

}

void Grid::draw(sf::RenderTarget& target, sf::RenderStates states) const{
	target.draw(cells[24]);
	for (int i = 0; i < cellCount * cellCount; ++i) {
		target.draw(cells[i]);
	}
	for (const Item& item : this->items)
	{
		target.draw(item);
	}
}