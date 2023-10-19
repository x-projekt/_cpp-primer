#include <iostream>

int main() {
    // some random value
    int v1 = 23, v2 = 56;

    // solution-1
    std::cout << "The sum of " << v1 // removed line-terminator
        << " and " << v2 // removed line-terminator
        << " is " << v1 + v2 << std::endl;

    // solution-2
    std::cout << "The sum of " << v1;
    std::cout << " and " << v2; // specify output-stream std::cout
    std::cout << " is " << v1 + v2 << std::endl; // specify output-stream std::cout

}
