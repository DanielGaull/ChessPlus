#include <SFML/Graphics.hpp>
#include "BoardRender.hpp"

BoardRender::BoardRender() {

}
BoardRender::~BoardRender() {

}
void BoardRender::draw(sf::RenderWindow& window) {
	for (int i = 0; i < BOARD_SIZE; i++) {
		for (int j = 0; j < BOARD_SIZE; j++) {
			sf::RectangleShape rectangle(sf::Vector2f(RECT_SIZE, RECT_SIZE));
			rectangle.setPosition(sf::Vector2f(RECT_SIZE * j, RECT_SIZE * i));
			sf::Color color;
			if (((i + j) % 2) == 0) {
				color = sf::Color(181, 161, 123);
			}
			else {
				color = sf::Color(69, 61, 48);
			}
			rectangle.setFillColor(color);
			window.draw(rectangle);
		}
	}
}