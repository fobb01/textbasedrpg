#include "IncludeLibraries.h"
#include "IncludeClasses.h"	//For classes


void Player::getItem(int item_index)
{
   item_list.push_back(item_index); 
}

void Player::getItem(int item1_index, int item2_index)
{
    item_list.push_back(item1_index);
    item_list.push_back(item2_index);
}

void Player::getItem(int item1_index, int item2_index, int item3_index)
{
    item_list.push_back(item1_index);
    item_list.push_back(item2_index);
    item_list.push_back(item3_index);
}

void Player::getItem(int item1_index, int item2_index, int item3_index, int item4_index)
{
    item_list.push_back(item1_index);
    item_list.push_back(item2_index);
    item_list.push_back(item3_index);
    item_list.push_back(item4_index);
}

int Player::dropItem(int item_index)
{
    if (item_index >= 0)
        item_list.at(item_index);
}