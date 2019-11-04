#include <iostream>
#include "TitlePage.h"
#include "Dungeon.h"                                 //TODO: Figure out how to get rid of the include .cpp files
//#include "Dungeon.cpp"
//#include "TitlePage.cpp"

int main(int argc, const char** argv) {                  //For now I dont have support for command line arguments
   
   //Declaration of various variables to be used throughout the program
   int menuSelection = 0, turns = 0;
   bool gameContinue;


    if(initCurses())                                      //Loads Curses initially and displays the main menu
    {
       menuSelection = displayTitle();
      
    }
    else
    { 
       std::cout << "Curses not correctly loaded";
    }
    

   if (menuSelection == 1)                                 //Enters main game loop if a 1 was entered in the title screen
   {
       gameContinue = true;
       clear();
   }
   else 
   {
      clear();
      printw("Something went wrong.....\tMenu selection = %d", menuSelection);
      getch();
   }
   


   while (gameContinue)                                  //Enters game loop
   {
      turns++;                                           //Each time this loops, the turns counter is incremented   

   }






    closeCurses();

    return 0;
}