#include <iostream>

int main() {
    int sum = 0, curr = 50, end = 100;
    while (curr <= end) {
        sum += curr;
        curr += 1;
    }

    std::cout << "Sum from 50 to 100 (integers): " << sum << std::endl;

    return 0;
}
