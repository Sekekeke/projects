#include <curses.h>

int main(){
    
    /*
    инициализирует и очищает экран
    аллоцирует память
    */
    initscr();
    
    //Проверяем поддерживает ли терминал цвета
    if (has_colors()){
        printw("yes, it can");
    } else {
        printw("No, it cant");
        getch();
        endwin();
        return -1;
    }

    
    //Обычная печать на экран
    printw("Some text\n");

    /*
        A_REVERSE -- меняет цвета фона и шрифта местами
        A_BLINK - моргание, не работает в винде
        A_INVIS - невидимый
    */
    //Включить атрибут
    attron(A_REVERSE);
    printw("Some text");
    attroff(A_REVERSE);

    attron(A_INVIS);
    printw("Some text\n");
    attroff(A_INVIS);
    

    /*
    */

    if (!can_change_color()) {
        printw("You cant change colour");
        getch();
    }
    /*
        COLOR_PAIR(n)
        COLOR_BLACK   0
        COLOR_RED     1
        COLOR_GREEN   2
        COLOR_YELLOW  3
        COLOR_BLUE    4
        COLOR_MAGENTA 5
        COLOR_CYAN    6
        COLOR_WHITE   7
    */
    start_color();

    //Меняем красный цвет

    init_color(COLOR_RED, 88, 543, 77);
    //Связываем цвета init_pair(идентификатор цвета, цвет шрифта, цвет фона)
    init_pair(1, COLOR_CYAN, COLOR_WHITE);
    init_pair(2, COLOR_RED, COLOR_BLACK);

    
    attron(COLOR_PAIR(2));
    printw("Some text\n");
    attroff(COLOR_PAIR(2));
    
    
    getch();
    /*
    Закрывает экран и чистит память
    */
    endwin();

    return 0;
}