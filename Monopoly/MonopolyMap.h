#pragma once

#include "stdafx.h"

class MonopolyMap
{
	sf::Texture map_image;
	sf::Sprite map;
public:
	void render(sf::RenderWindow *rw);

	MonopolyMap();
	~MonopolyMap();
};

