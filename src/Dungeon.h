#ifndef DUNGEON_H
#define DUNGEON_H

#include "Tile.h"
#include <ncurses.h>
#include <vector>

class Dungeon
{
private:
    int currentLevel;
    std::vector<std::vector<Tile>> dungeonLayout;        //Will hold the values of objects, each integer corresponds to a type of object,

public:
    Dungeon();
    Dungeon(int level);
    Dungeon(int level, int seed);
    ~Dungeon();
    
    bool buildSquareRoom(int x, int y);

    void changeLevel(int level);
};




#endif
