#include "LootPanel.h"
#include "Style.h"

LootPanel::LootPanel()
{
	this->setPosition(margin+gridSize+midPadding,margin);
	this->setSize(sf::Vector2f( windowWidth - 2 * margin - gridSize - midPadding, gridSize));
	this->setOutlineColor(sf::Color(253, 108, 158, 255));
	this->setOutlineThickness(5);
	this->setFillColor(sf::Color(0, 255, 0, 255));
}
LootPanel::~LootPanel()
{

}