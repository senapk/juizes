#include <iostream>

int main() {
    int switch_a {}, switch_b {};
    std::cin >> switch_a >> switch_b;
    if (switch_a == 0)
        std::cout << "C\n";
    else if(switch_b == 0)
        std::cout << "B\n";
    else
        std::cout << "A\n";
}
