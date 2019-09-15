#include "Generator.h"
#include <stdlib.h>
#include <time.h>

bool Generator::genSeed(long int givenSeed = 0)
{     
    if (seed == 0 && givenSeed == 0)    //Generates a key if none is supplied
    {
        srand((unsigned) time(NULL));   
        seed = rand();
        return true;
    } 
    else if (seed != 0 && givenSeed == 0)   //Key is already generated
    {
        return false;           //Key already generated
    }
    else if (givenSeed > 0 && givenSeed < RAND_MAX)     //Uses a given seed even if a key has already been generated
     {
        seed = givenSeed;
        return true;
    }   
    else
        return false;
}
    
Dungeon Generator::genDungeon()

{
    Dungeon emptyDungeon;
    return emptyDungeon;
}
