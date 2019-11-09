#include "Generator.h"
#include "Dungeon.h"

Generator::Generator()
{
    dungeon = new Dungeon();                           //Constructs level one of the dungeon
}

Generator::~Generator()
{
    delete dungeon;
}