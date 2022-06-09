#include <iostream>
#include "Sales_Item.h"

int main(){
    Sales_item book;
    
    std::cout << "Print isbn, quantity, price" << std::endl;
    std::cin >> book;

    std::cout << book;
    return 0;
}