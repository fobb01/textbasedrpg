#pragma once
#include "Dungeon.h"

//Used to generate the dungeon

class Generator
{
private:
    long int seed = 0;
    bool checkSuccess();        //Checks if the dungeon generation was successful
public:
    bool genSeed(long int givenSeed = 0);
    Dungeon genDungeon();   //Returns a dungeon which is generated through this method
};