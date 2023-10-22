#include <iostream>
#include "Sales_item.h"

/**
 * This program only counts the number of consecutive transactions with the same ISBN.
 *
 * @return exit code; always 0
 */
int main() {
    Sales_item stock, currItem;
    int cnt = 0;

    std::cout << "Enter item: ";
    if (std::cin >> stock) {
        cnt += 1;

        std::cout << "Enter item: ";
        while (std::cin >> currItem) {
            if (currItem.isbn() == stock.isbn()) {
                cnt++;
            } else {
                std::cout << "ISBN [" << stock.isbn() << "] occurs #" << cnt << " times" << std::endl;
                stock = currItem;
                cnt = 1;
            }

            std::cout << "Enter item: ";
        }

        std::cout << "ISBN [" << stock.isbn() << "] occurs #" << cnt << " times" << std::endl;
    } else {
        std::cout << "Invalid transaction; Aborting" << std::endl;
    }

    return 0;
}
