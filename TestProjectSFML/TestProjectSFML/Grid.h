#pragma once
#include <SFML/Graphics.hpp>
#include "Tile.h"
#include "Style.h"
#include "Item.h"
#include <vector>

using namespace std;
class Grid : public sf::Drawable
{
public:
	Grid();
	~Grid();

	Tile cells[cellCount*cellCount];
	void draw(sf::RenderTarget&, sf::RenderStates) const;

	vector<Item> items;
};

