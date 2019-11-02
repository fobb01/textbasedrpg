#include "TitlePage.h"


int displayTitle()
{
    printw("HELLO AND WELCOME TO --untitled-- ROGUELIKE!\n1.) REGULAR GAME");
    int userInput = getch();                                                             //Recieves an ascii value from user input
    if (userInput > 48 && userInput < 50)                                                //If statement to control whether correct input was entered or not
        return 1;
    else
        return 0;
}
 
bool initCurses()
{
    initscr();                                                                           //Initializes ncurses
    cbreak();                                                                            //Character at a time input
    noecho();                                                                            //supresses auto echoing
    keypad(stdscr, TRUE);                                                                //allows special characters to be entered
    return true;
}

bool closeCurses()
{
    endwin();       //Closes Curses mode
    return true;
}
