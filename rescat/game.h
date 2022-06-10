#ifndef _GAME_H_
#define _GAME_H_

#include <vector>

//Основеая игра
class game {
    public:
        game();
        ~game();

        //Возвращает истину если игра окончена(смерть, сейв, выход и тд)
        bool do_turn();
};

#endif
