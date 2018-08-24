#include "stdafx.h"
#include "MainWindow.h"


MainWindow::MainWindow(sf::VideoMode &vmode)
{
	this->vid_mode = &vmode;
	rw = new sf::RenderWindow(*vid_mode, this->title);
	this->closed = false;
	this->clock = sf::Clock();
}

void MainWindow::loop()
{
	while (this->closed != false)
	{
		this->fps_correct();
		this->render();
	}
}

void MainWindow::render()
{
	this->event_handle();
	rw->clear();

	rw->display();
}

void MainWindow::drawing()
{
	
}

void MainWindow::event_handle()
{
	event = sf::Event();
	while (rw->pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			this->closed = true;
	}
}

void MainWindow::fps_correct()
{
	current_timeloop = clock.getElapsedTime().asMicroseconds();
	current_timeloop /= 800;
}


MainWindow::~MainWindow()
{
}
