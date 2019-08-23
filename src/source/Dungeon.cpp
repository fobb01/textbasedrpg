#include "../headers/Dungeon.h"
#include "../headers/IncludeLibraries.h"
#include "../headers/IncludeClasses.h"

//Function declarations of the class defined in the header file Dungeon.h 
//Each level of the dungeon is randomly generated
Dungeon::Dungeon(int vertSize, int horiSize)               //Calls the function create dungeon in constructor with 100 for both as default values if not passed
    {
        this->vertSize = vertSize;
        this->horiSize = horiSize;
    }

bool Dungeon::buildLevel()          //Private method
{
    if (vertSize > 1000 || horiSize > 1000 || vertSize <= 0 || horiSize <= 0)                 //Return false if the dungeon is too big or too small
        return false;
}

bool Dungeon::displayLevel()
{
    return true;
}





