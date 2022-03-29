#include <iostream>

int main() {
    int value {};
    std::cin >> value;
    if (value <= 5)
        std::cout << "SIM\n";
    else
        std::cout << "NAO\n";
}