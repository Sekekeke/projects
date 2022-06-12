#include <iostream>

int main(){
    int i = 100;

    for (int i = 0; i <= 9; i++) {
        //Выведет блочную локальную i
        std::cout << i << std::endl;
    }
    //Выведел локальную в мейн
    std::cout << std::endl << i << std::endl;
    int q;
    std::cin >> q;
    return 0;
}