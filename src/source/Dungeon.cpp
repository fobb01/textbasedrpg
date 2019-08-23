#include "../headers/Dungeon.h"
#include "../headers/IncludeLibraries.h"
#include "../headers/IncludeClasses.h"

//Function declarations of the class defined in the header file Dungeon.h 
//Each level of the dungeon is randomly generated
Dungeon::Dungeon(int vertSize, int horiSize)               //Calls the function create dungeon in constructor with 100 for both as default values if not passed
    {
        if (buildLevel(vertSize, horiSize))
        {
            crtFail = true;
        }
        else
        {
            crtFail = false;
        }
    }

bool Dungeon::buildLevel(int vertSize, int horiSize)          //Private method
{
    if (vertSize > 1000 || horiSize > 1000 || vertSize <= 0 || horiSize <= 0)                 //Return false if the dungeon is too big or too small
        return false;

    vertical = vertSize;
    horizontal = horiSize;

    for (int i = 0; i < vertSize ; i++)                 //Initializes the testing char of the array
    {
        for (int i2 = 0; i2 < horiSize; i2++)
        {
            
            level[i][i2]->testingChar = 'x';
        }
    }
    return true;

}

bool Dungeon::displayLevel()
{
    int i = 0;
    for (i = 0; i < vertical; i++)
    {
        for (int i2 = 0; i2 < horizontal; i2++)
            {
                std::cout << level[i][i2]->testingChar;           
            }
        std::cout << "\n";
    }
    return true;
}





