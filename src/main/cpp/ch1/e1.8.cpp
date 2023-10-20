#include <iostream>


int main() {
    std::cout << "/*"; // legal
    std::cout << "*/"; // legal

    // illegal
    std::cout << /* "*/" */;
    // correction
//    std::cout << /* "*/" */";

    std::cout << /* "*/" /* "/*" */; // legal

    return 0;
}
