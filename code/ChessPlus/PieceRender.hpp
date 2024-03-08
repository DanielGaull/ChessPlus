#pragma once
#include <SFML/Graphics.hpp>

class PieceRender {
private:
	sf::Font& font;

public:
	PieceRender(sf::Font font);
	~PieceRender();

	/**
	* Draws this piece to the window
	*/
	void draw(sf::RenderWindow& window);
};