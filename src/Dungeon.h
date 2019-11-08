#ifndef DUNGEON_H
#define DUNGEON_H

#include <ncurses.h>
#include <vector>

class Dungeon
{
private:
    int currentLevel;
    std::vector<std::vector<int>> dungeonLayout;        //Will hold the values of objects, each integer corresponds to a type of object,

public:
    Dungeon();
    Dungeon(int level);
    Dungeon(int level, int seed);
    ~Dungeon();
    
    void changeLevel();
};




#endif
