#include <curses.h>

int main(){
    
    /*
    инициализирует и очищает экран
    аллоцирует память
    */
    initscr();
    
    noecho();
    cbreak();
    int y, x;
    //Получим положение курсора
    getyx(stdscr, y, x);
    printw("%d, %d", y, x);

    move(5, 5);
    getyx(stdscr, y, x);
    printw("%d, %d", y, x);

    move(0, 0);
    clear();
    //Получить начало экрана/окна
    getbegyx(stdscr, y, x);
    printw("y = %d, x = %d", y, x);
    
    move(1, 1);
    //По прежнему (0, 0). Возвращает абсолютные
    getbegyx(stdscr, y, x);
    printw("y = %d, x = %d", y, x);
    
    //Получить максимумы. Возвращает относительно окна.
    getmaxyx(stdscr, y, x);
    printw("y = %d, x = %d", y, x);
    getch();
    clear();


    move(0, 0);

    WINDOW* win = newwin(10, 20, 5, 5);
    refresh();
    box(win, 0, 0);
    wrefresh(win);

    getyx(win, y, x);
    mvwprintw(win, 0, 1, "Cur: (%d, %d)", y, x);

    getbegyx(win, y, x);
    mvwprintw(win, 1, 1, "Begin: (%d, %d)", y, x);

    getmaxyx(win, y, x);
    mvwprintw(win, 2, 1, "max: (%d, %d)", y, x);
    wrefresh(win);

    /*
    Закрывает экран и чистит память
    */
    getch();
    endwin();

    return 0;
}