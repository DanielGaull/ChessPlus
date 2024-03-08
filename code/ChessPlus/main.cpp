#include <SFML/Graphics.hpp>
#include "BoardRender.hpp"
#include "PieceRender.hpp"
#include "ResourceHandler.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(600, 600), "Chess+");
    
    ResourceHandler resourceHandler;
    resourceHandler.registerFont("title", "./resources/font/OpenSans-Bold.ttf");

    BoardRender board;
    PieceRender testPiece(resourceHandler.getFont("title"));

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