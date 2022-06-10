#include "game.h"
#include <curses.h>

void intro();
//Конструктор игры
game::game(){
    clear();
    printw("Create constructor");
    getch();

    intro();
    
};

//Деструктор
game::~game(){
    clear();
    printw("Create destructor");
    getch();
};

bool game::do_turn() {
    erase();
    printw("do turn");
    getch();
    return true;
}

//Ругается, если экран консоли меньше 85x25
void intro(){
    int maxx, maxy;
    getmaxyx(stdscr, maxy, maxx);
    
    while (maxy < 25 || maxx < 80) {
        erase();
        printw("\
            Whoa. Whoa. Hey. This game requires a minimum terminal size of 80x25. I don't\n\
            know why certain graphical terminal emulators decided to take the old standard\n\
            size of 80x25 and toss it out the window, making their terminal 80x24 by\n\
            default, but that just won't work here.  Now stretch the bottom of your window\n\
            downward so you get an extra line.\n");
        getch();
        getmaxyx(stdscr, maxy, maxx);
    }
    erase();
}