#pragma once

#include "stdafx.h"

class MainWindow
{
	sf::RenderWindow *rw;
	sf::VideoMode *vid_mode;
	sf::String title;
	sf::Event event;
	sf::Clock clock;
	float current_timeloop;
	bool closed;
	std::list<sf::Drawable> render_list;
public:
	MainWindow(sf::VideoMode &vmode);

	void loop();

	void render();
	void event_handle();
	void fps_correct();
	void drawing();
	void 

	~MainWindow();
};

