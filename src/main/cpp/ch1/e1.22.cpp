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
                std::cout << "Expected same ISBN [" << sum.isbn() << "], but got ["
                    << currItem.isbn() << "]; Discarding last transaction." << std::endl;
                std::cout << "Discarded transaction: " << currItem << std::endl;
            }

            std::cout << "Enter item: ";
        }

        std::cout << "Sum (until now): " << sum << std::endl;
    } else {
        std::cout << "Invalid transaction; Aborting" << std::endl;
    }

    return 0;
}
