#include <curses.h>

/*
Два окна: 
    1 для вывода
    2 для ввода 
*/

int main(){
    
    initscr();
    noecho();
    cbreak();

    //Получим максимальные позиции экрана
    int x_max, y_max;
    getmaxyx(stdscr, y_max, x_max);
    //Ширина окна ввода в 3 строки;
    int hor_bw_ws = 2;
    int width_cons_w = 3;
    int otst_ot_ramok = 1;
    WINDOW* w_display = newwin(y_max - otst_ot_ramok - width_cons_w - hor_bw_ws, x_max - 2 * otst_ot_ramok, otst_ot_ramok, otst_ot_ramok);
    WINDOW* w_console = newwin(width_cons_w, x_max - 2 * otst_ot_ramok, y_max - otst_ot_ramok-width_cons_w, otst_ot_ramok);
    refresh();

    box(w_display, 0, 0);
    box(w_console, 0, 0);
    wrefresh(w_display);
    wrefresh(w_console);
    
    //подрубаем спец клавиши, стрелки, эф-ки и тд
    keypad(w_console, true);
    
    echo();   
    wmove(w_console, 1, 1);

    //Ввод из окна   
    int c = wgetch(w_console);
    noecho();
    if (c = KEY_ENTER) {
        mvwprintw(w_display, 1, 1, "You pressed j!");
        wrefresh(w_display);
    }
    getch();
    endwin();

    return 0;
}