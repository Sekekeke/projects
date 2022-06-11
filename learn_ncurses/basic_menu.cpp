#include <curses.h>
#include <string>

int main(){
    
    /*
    инициализирует и очищает экран
    аллоцирует память
    */
    initscr();

    WINDOW * wmenu = newwin(7, 110, 20, 5);
    refresh();

    box(wmenu, 0, 0);
    wrefresh(wmenu);
    keypad(wmenu, true);

    std::string choices[3] = {"Walk", "Play", "Poop"};
    int highlight = 0;
    int choice;
    noecho();
    while (true) {
        for(int i = 0; i < 3; i++) {
            if (highlight == i) {
                wattron(wmenu, A_REVERSE);
            }
            mvwprintw(wmenu, i+1, 1, choices[i].c_str());
            //wrefresh(wmenu);
            wattroff(wmenu, A_REVERSE);
            
        }
        choice = wgetch(wmenu);

        switch(choice) {
            case KEY_UP:
                highlight--;
                if (highlight == -1) {
                    highlight = 2;
                };
                break;
            case KEY_DOWN:
                highlight++;
                if (highlight == 3) {
                    highlight = 0;
                };
                break;
            default: 
                break;

        }
        if (choice == 10){
            break;
        }
        
    }
    mvwprintw(stdscr, 1, 1, choices[highlight].c_str());
    getch();
    /*
    Закрывает экран и чистит память
    */
    endwin();

    return 0;
}