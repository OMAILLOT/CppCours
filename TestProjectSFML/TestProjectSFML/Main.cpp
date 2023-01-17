#include "Grid.h"
#include "Style.h"
#include "LootPanel.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "SFML works!");
    Grid mainGrid;
    LootPanel lootPanel;
    mainGrid.items.push_back(Item("axe","cut easly", 0, 3, 0b011011010,sf::Color::Yellow));

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        window.draw(mainGrid);
        window.draw(lootPanel);
        window.display();
    }

    return 0;
}