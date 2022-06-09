#include <iostream>
#include "Sales_Item.h"

int main(){
    Sales_item item1, item2, result;
    
    std::cout << "Print isbn, quantity, price" << std::endl;
    std::cin >> item1;

    std::cout << "Print isbn, quantity, price" << std::endl;
    std::cin >> item2;

    result = item1 + item2;
    std::cout << result;
    return 0;
}