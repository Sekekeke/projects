#include <curses.h>

int main(){
    
    /*
    инициализирует и очищает экран
    аллоцирует память
    */
    initscr();
    noecho();
    cbreak();
    //Создаем окно, игровое поле
    WINDOW * win = newwin(20, 80, 3, 3);
    refresh();
    box(win, 0, 0);
    wrefresh(win);
    
    int player_character = '@';
    int cur_ch;
    int cur_x = 1, cur_y = 1;
    int prev_x = 1, prev_y = 1;  
    keypad(win, true);
    
    mvwaddch(win, cur_y, cur_x, player_character);
    wrefresh(win);
    while ((cur_ch = wgetch(win)) != 'q') {
        prev_x = cur_x;
        prev_y = cur_y;
        switch(cur_ch){
            case KEY_UP:
                cur_y--;
                break;
            case KEY_DOWN:
                cur_y++;
                break;
            case KEY_LEFT:
                cur_x--;
                break;
            case KEY_RIGHT:
                cur_x++;
                break;
            default:
                0;
                break;
        };
        mvwprintw(stdscr, 1, 1, "Current (%d, %d)", cur_x, cur_y);
        mvwprintw(stdscr, 2, 1, "Previous (%d, %d)", prev_x, prev_y);
        
        refresh();
        mvwaddch(win, cur_y, cur_x, player_character);
        wrefresh(win);
        mvwaddch(win, prev_y, prev_x, ' ');
        wrefresh(win);
        //refresh();
        
    }

    /*
    Закрывает экран и чистит память
    */
    endwin();

    return 0;
}