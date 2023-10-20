#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item itm1, itm2;

    std::cout << "Enter first item: ";
    std::cin >> itm1;

    std::cout << "Enter second item: ";
    std::cin >> itm2;

    if (itm1.isbn() == itm2.isbn()) {
        std::cout << "Items sum: " << itm1 + itm2 << std::endl;
    } else {
        std::cout << "Invalid Input: items have different ISBN";
    }

    return 0;
}
