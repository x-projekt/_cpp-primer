#include <iostream>

int main() {
    // exercise 1.9
    int sum = 0;
    for (int curr = 50; curr <= 100; curr++) {
        sum += curr;
    }

    std::cout << "Sum of integers from 50 to 100: " << sum << std::endl;

    return 0;
}
