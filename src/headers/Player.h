#pragma once
class Player: public Mob			
{
public:

  Player(int level, int hp, int mp, int ac)     //Calls the mob constructor
  {
    Mob(level, hp, mp, ac);
  }

  void getItem(int item_index);      //Function overloaded to allow for multiple item inputs
  void getItem(int item1_index, int item2_index);
  void getItem(int item1_index, int item2_index, int item3_index);
  void getItem(int item1_index, int item2_index, int item3_index, int item4_index);  
  
  int dropItem(int item_index);


private:




};


