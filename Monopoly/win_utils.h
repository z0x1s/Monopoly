#pragma once


#include <Windows.h>
#include <iostream>
#include <fstream>
#include <list>

#include <SFML\System\String.hpp>


#define D_SHOW 5
#define D_HIDE 0


namespace dbg
{

	void set_mode(int macros)
	{
		HWND cDebug = GetConsoleWindow();
		ShowWindow(cDebug, macros);
	}

	void log(sf::String str, std::ofstream &fst, const char end = '\n')
	{
		fst << str.toAnsiString() << end;
	}
}