#pragma once
#include <SFML/Graphics.hpp>

class PieceRender {
public:
	PieceRender();
	~PieceRender();

	/**
	* Draws this piece to the window
	*/
	void draw(sf::RenderWindow& window);
};