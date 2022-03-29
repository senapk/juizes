#include <iostream>
#include <cmath>
#include <sstream>

int main() {
    long voltas {}, placas {};
    std::cin >> voltas >> placas;
	long total = voltas * placas;
    std::stringstream ss;
    for (int i = 1; i <= 9; i++) {
        ss << " " << (int) ceil(total * i / 10.0);
    }

    std::cout << ss.str().substr(1) << '\n';
}
