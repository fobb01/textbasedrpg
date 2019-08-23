#pragma once

#include "Tile.h"

class Dungeon{
private:
    Tile* level[200][200];                    //TODO: FIX THIS IT IS VERY BROKEN!!!
    bool buildLevel(int vertSize, int horiSize);                  //Builds the dungeon itself 

    int vertical;
    int horizontal;
    
public:
    
    Dungeon(int vertSize, int horiSize);               //Calls the function create dungeon in constructor with 100 for both as default values if not passed
  

    bool displayLevel();

    bool crtFail;                               //Holds true if the level was created false if not

                          
};
