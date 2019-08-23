#pragma once

#include "Tile.h"
#include <vector>

class Dungeon{
private:
    bool buildLevel();                  //Builds the dungeon itself 
    int vertSize, horiSize;
    
public:
    
    Dungeon(int vertSize = 20, int horiSize = 60);               //Calls the function create dungeon in constructor with 100 for both as default values if not passed
    

    bool displayLevel();
    bool crtFail;                               //Holds true if the level was created false if not                  
};
