#include <iostream>

int main() {
    int n1, n2;

    std::cout << "Enter start number: ";
    std::cin >> n1;

    std::cout << "Enter end number: ";
    std::cin >> n2;

    if (n1 > n2) {
        while (n1 - 1 > n2) {
            n1--;
            std::cout << n1 << std::endl;
        }
    } else if (n1 < n2) {
        while (n1 + 1 < n2) {
            n1++;
            std::cout << n1 << std::endl;
        }
    } else {
        std::cout << "Both numbers are equal [" << n1 << "]; Nothing to print!" << std::endl;
    }

    return 0;
}
