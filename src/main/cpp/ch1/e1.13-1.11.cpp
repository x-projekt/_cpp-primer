#include <iostream>

int main() {
    // exercise 1.11
    int n1, n2;
    std::cout << "Enter the first number: ";
    std::cin >> n1;

    std::cout << "Enter the second number: ";
    std::cin >> n2;

    if (n1 > n2) {
        for (int curr = n1 - 1; curr > n2; curr--) {
            std::cout << curr << std::endl;
        }
    } else if (n1 < n2) {
        for (int curr = n1 + 1; curr < n2; curr++) {
            std::cout << curr << std::endl;
        }
    } else {
        std::cout << "Both numbers are equal [" << n1 << "]; Nothing to print!" << std::endl;
    }

    return 0;
}
