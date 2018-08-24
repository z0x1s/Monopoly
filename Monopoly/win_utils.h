#pragma once


#include <Windows.h>
#include <iostream>
#include <fstream>
#include <list>

#include <SFML\System\String.hpp>

namespace dbg
{
	#define D_SHOW 5
	#define D_HIDE 0
}

namespace dbg
{

	static HWND cDebug;

	void set_mode(int macros)
	{
		cDebug = GetConsoleWindow();
		ShowWindow(cDebug, macros);
	}

	void log(sf::String str, std::ofstream fst, const char end = '\n')
	{
		fst << str.toAnsiString() << end;
	}
}