#include <iostream>
#include <vector>

using Pos = std::pair<int, int>;

Pos next_pos(Pos pos, int dim) {
    auto [l, c] = pos;
    if (l % 2 == 0) {//going rigth
        return (c == dim - 1) ? Pos(l + 1, c) : Pos(l, c + 1);
    } else {
        return (c == 0      ) ? Pos(l + 1, c) : Pos(l, c - 1);
    }
}

int main() {
    int qtd {};
    std::cin >> qtd;
    std::vector<std::string> vet(qtd);
    for (int i = 0; i < qtd; i++)
        std::cin >> vet[i];
    
    Pos pos {0, 0};
    int max_food {0}, food {0};
    while(true) {
        pos = next_pos(pos, qtd);
        auto [l, c] = pos;
        if (l == qtd)
            break;
        if (vet[l][c] == 'o') {
            food++;
            max_food = std::max(max_food, food);
        } else if (vet[l][c] == 'A') {
            food = 0;
        }
    }

    std::cout << max_food << std::endl;
}