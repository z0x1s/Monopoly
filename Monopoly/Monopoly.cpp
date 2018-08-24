// Monopoly.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

using namespace sf;

int main()
{
	RenderWindow *window = new RenderWindow(VideoMode(800, 600), "Test");

	bool exit = false;
	while (!exit)
	{
		Event e;
		while (window->pollEvent(e))
		{
			if (e.type == Event::Closed)
				exit = true;
		}

		window->clear(Color::Blue);
		window->display();
	}

    return 0;
}

