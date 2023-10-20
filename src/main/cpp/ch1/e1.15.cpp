

int main() {
    // syntax errors
    std::cout << "Read each file." << std::endl: // must end in semicolon; not colon
//    std::cout << Update master. << std::endl; // missing double-quotes around string literal
//    std::cout << "Write new master." std::endl; // missing insert-operator (<<)

    // type errors
//    int x = "hello"; // cannot assign string-literal to integer-variable

    // declaration errors
    int v1 = 9, v2 = 6;
//    std::cin >> v >> v2; // variable v is undeclared
//    cout << v1 + v2 << std::endl; // cout is undeclared

    return 0;
}
