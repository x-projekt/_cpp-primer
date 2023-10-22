#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item sum, currItem;

    std::cout << "Enter item: ";
    if (std::cin >> sum) {
        std::cout << "Enter item: ";
        while (std::cin >> currItem) {
            if (currItem.isbn() == sum.isbn()) {
                sum += currItem;
            } else {
                std::cout << "Sum: " << sum << std::endl;
                sum = currItem;
            }

            std::cout << "Enter item: ";
        }

        std::cout << "Sum: " << sum << std::endl;
    } else {
        std::cerr << "Invalid transaction; Aborting" << std::endl;
        return -1;
    }

    return 0;
}
