/*
This is the start of a roguelike project in C++
First I will create a rudementary console application
Then I will eventually create a desktop application to provide an interface for the program...
*/

#include "headers/IncludeLibraries.h"
#include "headers/IncludeClasses.h"

int main()
{
	
	Mob *test;
	test = new Mob(12, 22, 43, 32);

	std::cout << test->getHP() << " " << test->getMP() << std::endl;

	

	return 0;
}