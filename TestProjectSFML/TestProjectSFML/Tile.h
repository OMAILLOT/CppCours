#pragma once
#include <SFML/Graphics.hpp>


class Tile :public sf::RectangleShape
{
public:

	Tile();
	~Tile();
	
	bool isFull;

};

