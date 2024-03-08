#include <map>
#include <string>
#include <SFML/Graphics.hpp>

class ResourceHandler {
private:
	std::map<std::string, sf::Font> fontMap;

public:
	ResourceHandler();
	~ResourceHandler();

	/**
	* Registers the font found at the specified path with the specified name
	*/
	void registerFont(const std::string& name, const std::string& filePath);
	/**
	* Returns the requested font
	*/
	sf::Font getFont(const std::string& name);
};