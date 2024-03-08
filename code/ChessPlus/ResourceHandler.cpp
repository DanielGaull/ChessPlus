#include "ResourceHandler.hpp"

ResourceHandler::ResourceHandler() {
	
}

ResourceHandler::~ResourceHandler() {

}

void ResourceHandler::registerFont(const std::string& name, const std::string& filePath) {
	sf::Font font;
	font.loadFromFile(filePath);
	fontMap[name] = font;
}
sf::Font ResourceHandler::getFont(const std::string& name) {
	return fontMap[name];
}