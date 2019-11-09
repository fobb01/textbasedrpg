#ifndef TILE_H
#define TILE_H

class Tile
{   
    private:
    int id;
    bool walk, pickUp, edible, clothing, usableItem;

    public:
    void setID(int id);             //Each type of tile will hold a specific ID
    
    int  getID();

    bool canWalk();                 //Returns true if the player can walk on the tile
    bool canGet();
    bool canEat();
    bool canWear();
    bool canWield();   
};

#endif