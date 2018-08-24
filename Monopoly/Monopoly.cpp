// Monopoly.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Main.h"

int main()
{
	dbg::set_mode(D_HIDE);

	std::ofstream dbgLog("log.txt");
	dbg::log("Start program", dbgLog);
	dbgLog.close();
	sf::VideoMode vmode(800, 600);
	MainWindow main_window(vmode, "test");
	main_window.loop();

    return 0;
}

