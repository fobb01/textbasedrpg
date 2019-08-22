/*
This is the start of a roguelike project in C++
First I will create a rudementary console application
Then I will eventually create a desktop application to provide an interface for the program...
*/

#include "headers/IncludeLibraries.h"
#include "headers/IncludeClasses.h"

int main()
{
	
	Player *test;
	test = new Player(1, 2, 3, 4);
	
	test->printing();

	

	return 0;
}