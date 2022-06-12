#include <iostream>
using namespace std;
int main(){
    int val = 1488;

    //Копирование ссылки
    int &refval = val;
    
    //Копирование значения
    int val_copy = val;

    refval += 5;
    val_copy += 11;

    cout << "\nval = " << val << "\nrefval = " << refval << "\nval_copy = " << val_copy;
    cout << "\n\n";

    int another_val = refval;
    another_val += 100;
    cout << "\nrefval = " << refval << "\nanother_val = " << another_val << endl;
     
    return 0;
}