#ifndef DUNGEON_H
#define DUNGEON_H

#include <ncurses.h>

class Dungeon
{
private:
    int currentLevel;
    bool genLevel();
public:
    Dungeon();
    Dungeon(int level);
    Dungeon(int level, int seed);
    
    void changeLevel();
};




#endif
