#pragma once

#include "Tile.h"
#include <vector>

class Dungeon{
private:
    bool buildLevel();                  //Builds the dungeon itself holds if successful
    int vertSize, horiSize;

public:
    
    Dungeon(int vertSize = 100, int horiSize = 100);               //Calls the function create dungeon in constructor with 100 for both as default values if not passed
    
    bool displayLevel();                
};
