#pragma once

#include <vector>

class Mob
{
public:
  int getLevel();
  int getHP();
  int getMP();
  std::vector<int>& getItems();                     //Will return a refrence to a vector of item indexes belonging to the mob

protected:
  std::vector<int> item_list;
  int level, hp, mp;

};
