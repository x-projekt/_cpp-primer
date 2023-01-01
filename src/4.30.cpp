#include <iostream>
#include <vector>

int func() {
    return 10;
}

int main() {
    // part-a
    std::cout << "\npart-a:" << std::endl;
    int x = 10, y = 5;
    std::cout << "`sizeof x` is " << sizeof(x)  << ", and y is equal to " << y << std::endl;
    std::cout << "No parenthesis: " << sizeof x + y << std::endl;
    std::cout << "Equ. parenthesis: " << sizeof(x) + y << std::endl;

    // part-b
    std::cout << "\npart-b:" << std::endl;
    std::vector<int> arr = {1, 2, 3, 4, 5, 6}, *prr = &arr;
    int i = 4;

    std::cout << "`prr->data()[i] == arr[i]` evaluates to " << (prr->data()[i] == arr[i]) << std::endl;
    std::cout << "No parenthesis: " << sizeof prr->data()[i] << std::endl;
    std::cout << "Equ. parenthesis: " << sizeof((prr->data())[i]) << std::endl;

    // part-c
    std::cout << "\npart-c:" << std::endl;
    x = 10, y = 1;
    std::cout << "No parenthesis: " << (sizeof x < y) << std::endl;
    std::cout << "Equ. parenthesis: " << (sizeof(x) < y) << std::endl;

    // part-d
    std::cout << "\npart-d:" << std::endl;
    std::cout << "No parenthesis: " << sizeof func() << std::endl;
    std::cout << "Equ. parenthesis: " << sizeof(func()) << std::endl;
}
