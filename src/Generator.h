#ifndef GENERATOR_H
#define GENERATOR_H

#include "Dungeon.h"
#include "Tile.h"

class Generator
{
    private:
    int currentLevel;
    Dungeon *dungeon;

    public:
    Generator();
    Generator();
    ~Generator();

    void downLevel();
    void upLevel();
    bool renderDungeon();
    bool updateRender();
};

#endif