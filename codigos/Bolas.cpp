#include <iostream>
#include <vector>
#include <algorithm>

bool is_possible(std::vector<int> vet) {
    for (auto elem : vet)
        if (elem > 4)
            return false;
    return true;
}

int main() {
    std::vector<int> vet(10, 0);
    for(int i = 0; i < 8; i++) {
        int value {};
        std::cin >> value;
        vet[value]++;
    }
    std::cout << (is_possible(vet) ? "S" : "N") << std::endl;
}