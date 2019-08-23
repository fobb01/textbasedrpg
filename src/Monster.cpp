#include

class Monster: public Mob
{
public:
  // need constructor
   Monster(int level, int hp, int mp, int ac)     //Calls the mob constructor
  {
    Mob(level, hp, mp, ac);
  }

  int* monsterLoc();          //Returns a pointer to the location of the monster on the board
  
private:
	
	

};