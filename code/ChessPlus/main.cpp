#include <SFML/Graphics.hpp>
#include "BoardRender.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(600, 600), "Chess+");
    
    BoardRender board;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        board.draw(window);
        window.display();
    }

    return 0;
}