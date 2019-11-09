#ifndef GENERATOR_H
#define GENERATOR_H

#include "Dungeon.h"
#include "Tile.h"

class Generator
{
    private:
    Dungeon *dungeon;

    public:
    Generator();
    ~Generator();

    void renderDungeon();
    void updateRender();
};

#endif