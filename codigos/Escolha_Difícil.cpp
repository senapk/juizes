#include <iostream>

int main() {
    int pes_frango{}, pes_bife{}, pes_massa{};
    int qtd_frango{}, qtd_bife{}, qtd_massa{};

    std::cin >> qtd_frango >> qtd_bife >> qtd_massa;
    std::cin >> pes_frango >> pes_bife >> pes_massa;

    int total {0};
    if (qtd_frango < pes_frango)
        total += pes_frango - qtd_frango;
    if (qtd_bife < pes_bife)
        total += pes_bife - qtd_bife;
    if (qtd_massa < pes_massa)
        total += pes_massa - qtd_massa;
    
    std::cout << total << std::endl;
}
