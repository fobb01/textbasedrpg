#include "title_page.h"

bool initCurses()
{
    initscr();          //Initializes ncurses
    cbreak();           //Character at a time input
    noecho();           //supresses auto echoing
    keypad(stdscr, TRUE);   //allows special characters to be entered
    return true;
}

bool closeCurses()
{
    endwin();       //Closes Curses mode
    return true;
}

int displayTitle()
{
    printw("HELLO AND WELCOME TO --untitled-- ROGUELIKE!\n1.) REGULAR GAME");
    char choice = getch();
}

