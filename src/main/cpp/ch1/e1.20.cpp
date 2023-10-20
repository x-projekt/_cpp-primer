#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item item;

    std::cout << "Enter sales-item: ";
    while (std::cin >> item) {
        std::cout << "Sales-item: " << item << std::endl;
        std::cout << std::endl;

        // next transaction
        std::cout << "Enter sales-item: ";
    }

    return 0;
}
