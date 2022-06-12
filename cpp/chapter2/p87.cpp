#include <iostream>
using namespace std;
int main(){
    int ival = 42;
    int *p = &ival;

    cout << "Value: " << *p << "\nAddress: " << p;

    return 0;
}