#pragma once
#include <string>
#include <SFML/Graphics.hpp>

using namespace std;
class Item : public sf::Drawable
{
public:
	string name;
	string description;
	int health;
	int power;
	int mask;
	sf::Color color;

	Item(const char*, const char*, const int, const int, const int, sf::Color);

	void draw(sf::RenderTarget&, sf::RenderStates) const;

	void setPosition(sf::Vector2f);

	bool checkPosition(sf::Vector2f);

private : 
	sf::RectangleShape shapes[9];
};

