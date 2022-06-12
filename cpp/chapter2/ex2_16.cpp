#include <iostream>
using namespace std;
int main(){
    
    int i = 0, &r1 = i;
    double d = 17.9, &r2 = d;

    //Допустимо, присваивает d значение 3.14
    //r2 = 3.14;
    //cout << d << " " << r2;

    //Допустимо, автоматически скастует int в double
    //r2 = r1;
    //cout << d << " " << r2;
    
    //Допустимо, автоматически скастует дабл в инт
    // i = r2;
    // cout << i << " " << r2;

    //Допустимо, скастует дабл в инт
    r1 = d;
    cout << i << " " << r2;
    return 0;
}