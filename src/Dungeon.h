#ifndef DUNGEON_H
#define DUNGEON_H

#include <ncurses.h>

class Dungeon
{
private:
    int level;
    bool genLevel();
public:
    Dungeon(int seed);
    Dungeon();
    
    void changeLevel();
};




#endif
