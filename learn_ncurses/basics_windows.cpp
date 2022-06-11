#include <curses.h>

int main(){
    
    /*
    инициализирует и очищает экран
    аллоцирует память
    */
    initscr();
    
    //Выход из программы по контрол+с. В винде не хочет работать
    cbreak();
    
    
    int w1_height = 10, w1_width = 20, w1_start_y = 5, w1_start_x = 5;
    
    int w2_height = 10, w2_width = 20, w2_start_y = 5, w2_start_x = 5 + 5 + w1_start_x + w1_width;

    //Указатель на окно. Создаем новое окно(высота, ширина, начало окна y, начало окна x)
    WINDOW * w1_win = newwin(w1_height, w1_width, w1_start_y, w1_start_x);
    WINDOW * w2_win = newwin(w2_height, w2_width, w2_start_y, w2_start_x);
    //Обновляем экран
    refresh();
    //Рамка вокруг окна
    
    //Последние два аргумента - код символа для печатания вместо рамок
    box(w1_win, 65, 65);
    wborder(w2_win, 103, 103, 100, 100, 100, 100, 100, 100);
    
    //Обновляем окно
    wrefresh(w1_win);
    wrefresh(w2_win);
    
    //Печатает в окне, курсор по умолчанию (0,0)
    //mvwprintw(w1_win, 4, 2, "This is my box");
    //wrefresh(w1_win);
    
    getch();
    /*
    Закрывает экран и чистит память
    */
    endwin();

    return 0;
}