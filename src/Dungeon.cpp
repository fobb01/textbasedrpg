#include "Dungeon.h"
#include <stdexcept>

Dungeon::Dungeon()              //Default contructor when no input specified
{
    currentLevel = 1;
    bool levelMade = genLevel();

    try
    {
        if(!levelMade)      //Checks to see if the level was correctly made
            throw std::runtime_error("Dungeon not Generated");
    }
    catch(const std::exception& e)
    {
        //TODO: define what happens here
        printw("%s\n", e.what());
    }
    

}

Dungeon::Dungeon(int level)                          //Constructor with inputted level
{

}

Dungeon::Dungeon(int level, int seed)                //Contructor with inputted level and seed 
{

}

bool Dungeon::genLevel()
{
    return false;
}