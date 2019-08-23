#include "../headers/Dungeon.h"
#include "../headers/IncludeLibraries.h"
#include "../headers/IncludeClasses.h"

//Function declarations of the class defined in the header file Dungeon.h 
//Each level of the dungeon is randomly generated
Dungeon(int vert, int hori)               
    {
        vertSize = vert;
        horiSize = hori;
    }

bool Dungeon::buildLevel()          //Private method
{
    if (vertSize > 1000 || horiSize > 1000 || vertSize <= 0 || horiSize <= 0)                 //Return false if the dungeon is too big or too small
        return false;
}

bool Dungeon::displayLevel()
{
    std::cout << vertSize << horiSize;
    return true;
}





