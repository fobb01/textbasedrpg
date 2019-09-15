#pragma once
#include "Dungeon.h"

//Used to generate the dungeon

class Generator
{
private:
    long int seed = 0;
    bool checkSuccess();        //Checks if the dungeon generation was successful
public:
    long int getSeed();
    Dungeon genDungeon();   //Returns a dungeon which is generated through this method
};