#include <iostream>		// <> -> Search include_file dir
#include "Log.h"		// "" -> Relative to current file

int main()
{
	InitLog();
	Log("Hello World!");
	std::cin.get();

	return 0;
}