#include "Grid.h"
#include "Style.h"
#include "LootPanel.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "SFML works!");
    Grid mainGrid;
    LootPanel lootPanel;
    mainGrid.items.push_back(Item("axe","cut easly", 0, 3, 0b011011010,sf::Color::Yellow));
    mainGrid.items.back().setPosition(sf::Vector2f(0, 0));
    bool isDragging = false;
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) 
            {
                sf::Vector2i mouse = sf::Mouse::getPosition(window);
               
                if (mainGrid.items.back().checkPosition(sf::Vector2f(mouse))) {
                    isDragging = true;
                    mainGrid.items.back().setPosition(sf::Vector2f(mouse.x, mouse.y));
                }
            }
            if (sf::Event::MouseButtonReleased) {
                isDragging = false;
            }
        }
        window.clear();
        window.draw(mainGrid);
        window.draw(lootPanel);
        window.draw(mainGrid.items.back());
        window.display();
    }

    return 0;
}