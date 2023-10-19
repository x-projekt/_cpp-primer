#include <iostream>

int main() {
    std::cout << "Enter two numbers: " << std::endl;

    float x, y;
    std::cin >> x >> y;

    std::cout << "Product of ";
    std::cout << x;
    std::cout << " and ";
    std::cout << y;
    std::cout << " is ";
    std::cout << x * y;
    std::cout << std::endl;

    return 0;
}
