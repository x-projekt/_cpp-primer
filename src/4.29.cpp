#include <iostream>

/**
 * See 4.29.md for more information.
 * 
 * @return
 */
int main() {
    int x[10], *p = x;

    std::cout << sizeof(x) / sizeof(*x) << std::endl;
    std::cout << sizeof(p) / sizeof(*p) << std::endl;
}
