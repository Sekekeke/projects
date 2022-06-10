#include <iostream>
#include "Sales_Item.h"

int main() {
    Sales_item prevItem, currItem, result;
    
    if (std::cin >> prevItem){
        int counter = 1;

        while (std::cin >> currItem) {
            if (currItem.isbn() == prevItem.isbn()) {
                counter += 1;
            } else {
                std::cout << prevItem.isbn() << " " << counter << std::endl;
                prevItem = currItem;
                counter = 1;
            }
        }
        std::cout << currItem.isbn() << counter << std::endl;
    }
    
    return 0;
}