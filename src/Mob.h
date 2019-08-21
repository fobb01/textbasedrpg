#pragma once

#include <vector>

class mob
{
public:
  int getLevel();
  int getHP();
  int getMP();
  std::vector<int>& getItems();                     //Will return a refrence to a vector of item indexes belonging to the mob

private:
  std::vector<int> item_list;
  int level, hp, mp;

};
