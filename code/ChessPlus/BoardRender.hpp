#pragma once
#include <SFML/Graphics.hpp>

class BoardRender {
private:
	// TODO: Draw based on a provided area
	const int RECT_SIZE = 75;
public:
	const int BOARD_SIZE = 8;

	BoardRender();
	~BoardRender();

	/**
	* Draws the board to the window
	*/
	void draw(sf::RenderWindow& window);
};