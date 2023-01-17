#include "Tile.h"
#include "Style.h"

Tile::Tile() :isFull(false) {
	this->setOutlineColor(sf::Color());
	this->setSize(sf::Vector2f(cellSize, cellSize));
	this->setFillColor(sf::Color(255,0,0,255));
	this->setOutlineThickness(1);
}

Tile::~Tile()
{
}
