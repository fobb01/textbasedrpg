#include "iostream"
#include "title_page.h"
#include "title_page.cpp"

int main(int argc, const char** argv) {     //For now I dont have support for command line arguments

    int menuSelection;

    if(initCurses())
    {
       menuSelection = displayTitle();
      
    }
    else
    { 
       std::cout << "Curses not correctly loaded";
    }
    

    closeCurses();

    return 0;
}