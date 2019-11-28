#include "Dungeon.h"
#include <stdexcept>

Dungeon::Dungeon()              //Default contructor when no input specified
{
    currentLevel = 1;
    dungeonLayout.resize(25*currentLevel);

    for(int i = 0; i < 25*currentLevel; i++)
    {
        dungeonLayout.at(i).resize(25*currentLevel);    //Work on defining this further
    }
}   

Dungeon::Dungeon(int level)                          //Constructor with inputted level
{

}

Dungeon::Dungeon(int level, int seed)                //Contructor with inputted level and seed 
{

}

Dungeon::~Dungeon()
{

}

bool Dungeon::buildSquareRoom(int x, int y, int sideLength)
{
    //Figure out a way to build a square room

    //Creates a square room at starting coordinates x and y with the length of each sides as sideLength
    for(int i = 0; i < sideLength; i++)
    {
        
    }
    return false;
}   


void Dungeon::changeLevel(int level)
{
    Dungeon(level);
}


