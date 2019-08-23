#pragma once

#include <vector>

class Mob
{ 
private:

  int level, hp, mp, ac;
 

protected:

//TODO: Define stuff here


public:
  //Constructor
  Mob(int level = 0, int hp = 0, int mp = 0 , int ac = 0)     //Defaults to zero
  {
    this->level = level;
    this->hp = hp;
    this->mp = mp;
    this->ac = ac;
  } 

  //Methods defined in class header
  int getLevel() {return level;}
  int getHP() {return hp;}
  int getMP() {return mp;}
  int getAC() {return ac;}
  
  void setLevel(int x) {level = x;}
  void setHP(int x) {hp = x;}
  void setMP(int x) {mp = x;}
  void setAC(int x) {ac = x;}


  std::vector<int> item_list;

  //Public methods defined in mob cpp file

  bool takeDamage(int roll, Mob *enemy);                 //Returns false if the attack did not hit
  int rollAttack(int item_index);                        //Returns an attack roll


};
