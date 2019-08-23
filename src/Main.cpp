/*
This is the start of a roguelike project in C++
First I will create a rudementary console application
Then I will eventually create a desktop application to provide an interface for the program...
*/

#include "headers/IncludeLibraries.h"
#include "headers/IncludeClasses.h"
#include "./source/Dungeon.cpp"
int main()
{
	Dungeon *test;
	test = new Dungeon(200, 200);

	if (test)
	{
		std::cout << "Test Successful\n";

		test->displayLevel();
		delete test;
	}
	else
	{
		std::cout << "Not allocated";
	}
	
	return 0;
}