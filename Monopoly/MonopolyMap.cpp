#include "MonopolyMap.h"


void MonopolyMap::render(sf::RenderWindow * rw)
{
	rw->draw(map);
}

MonopolyMap::MonopolyMap()
{
	this->map_image.loadFromFile(RESOURCES_IMAGES + "monopoly_map.png");
	this->map.setTexture(this->map_image);
	this->map.setPosition(sf::Vector2f(0, 0));
}


MonopolyMap::~MonopolyMap()
{
}
