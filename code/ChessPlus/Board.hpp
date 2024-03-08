#pragma once
#include <SFML/Graphics.hpp>

class Board {
private:
	const int RECT_SIZE = 75;
public:
	const int BOARD_SIZE = 8;

	Board();
	~Board();

	/**
	* Draws the board to the window
	*/
	void draw(sf::RenderWindow& window);
};