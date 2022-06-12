#include <iostream>
using namespace std;
int main(){
    double d = 4.77;
    int a = 42;
    char ch = 'q';
    int* p;

    //Все ок. Типы совпадают
    p = &a;
    cout << *p << endl;

    //Тип указателя инт, тогда как объекта дабл. С char также не работает
    //p = &d;
    cout << *p;
    
    //Недопустимо, мы засовываем в указатель значение a, а нужна ссылка.
    //p = a;

    // Если принудительно не иниализирвоать указатель нулем, то поведение ифа непредсказуемо. Скорей всего всегда будет true
    int* pp = nullptr;

    if (pp) {
        cout << "OMG";
    } else {
        cout << "Yep";
    }
    return 0;
}