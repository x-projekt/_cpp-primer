#include <iostream>

int main() {
    int sum = 0, val;
    if (std::cin >> val) {
        sum += val;
        while (std::cin >> val) {
            sum += val;
        }
    }

    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
