#pragma once

#include <vector>

class Mob
{
public:
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

  bool takeDamage(int roll, Mob& enemy);                 //Returns false if the attack did not hit
  int rollAttack(int item_index);                        //Returns an attack roll
  
private:

  int level, hp, mp, ac;

};
