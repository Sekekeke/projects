#include <iostream>
using namespace std;
int main(){
    
    //Допустимо, будет округление - отбрасывание дробной части
    int a = 1.9999;
    cout << a << endl;
    int b = -1.9;
    cout << b << endl;

    cout << endl << endl;

    //Литералы недопустимы при использовании ссылок
    //int &rval1 = 1.01;
    
    //Допустимо, так как ссылка на переменную
    int &rval2 = a;

    //Недопустимо, непроинициализрованная ссылка
    int &rval3;
    return 0;
}