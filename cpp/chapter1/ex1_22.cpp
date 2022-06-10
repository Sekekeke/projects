#include <iostream>
#include "Sales_Item.h"

int main(){
    Sales_item item, result;
    
    
    while (std::cin >> item) {
        result += item;
    }
    std::cout << result;
    return 0;
}