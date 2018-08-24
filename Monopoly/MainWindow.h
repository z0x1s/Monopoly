#pragma once

#include "stdafx.h"
#include "MonopolyMap.h"

class MainWindow
{
	sf::RenderWindow *rw;
	sf::VideoMode *vid_mode;
	sf::String title;
	sf::Event event;
	sf::Clock clock;
	MonopolyMap monmap;
	float current_timeloop;
	bool closed;
public:
	MainWindow(sf::VideoMode &vmode, sf::String title);
	void loop();
	void close();
private:
	void render();
	void event_handle();
	void fps_correct();
	void drawing();

public:
	~MainWindow();
};

