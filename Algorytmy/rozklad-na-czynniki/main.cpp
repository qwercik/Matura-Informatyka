#include <iostream>
#include <vector>
#include <cmath>

std::vector<unsigned> factorize(unsigned number) {
    std::vector<unsigned> factors;

    unsigned factor = 2;
    while (number > 1) {
        if (number % factor == 0) {
            factors.push_back(factor);
            number /= factor;
        } else {
            ++factor;
        }
    }

    return factors;
}

void printVector(std::vector<unsigned> vector) {
    if (vector.size() > 0) {
        for (unsigned i = 0; i < vector.size() - 1; ++i) {
            std::cout << vector[i] << ", ";
        }

        std::cout << vector[vector.size() - 1];
    }
}

int main() {
    std::cout << "Podaj liczbę naturalną: ";
    unsigned number;
    std::cin >> number;
    
    std::cout << "Czynniki pierwsze: ";
    printVector(factorize(number));
    std::cout << '\n';
}
