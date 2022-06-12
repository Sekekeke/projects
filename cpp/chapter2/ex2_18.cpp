#include <iostream>
using namespace std;
int main(){
    int val = 42, aval = 13;
    int* p;

    //Указатель без инициализации, указывает на какой-то мусор
    cout << p << ", " << *p << endl;

    //Меняем значение указателя(адрес)
    p = &val;
    cout << p << ", " << *p << endl;

    //Меняем значение объекта
    *p = aval;
    cout << p << ", " << *p << ", " <<val << endl;

    return 0;
}