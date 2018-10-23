#include <iostream>
#include <cmath>

bool isPrime(unsigned number) {
    // 0 and 1 are not primes
    if (number < 2) {
        return false;
    }

    for (unsigned i = 2; i <= sqrt(number); ++i) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    std::cout << "Podaj liczbę początkową: ";
    unsigned start;
    std::cin >> start;

    std::cout << "Podaj liczbę końcową: ";
    unsigned end;
    std::cin >> end;

    for (; start <= end; ++start) {
        if (isPrime(start)) {
            std::cout << start << " ";
        }
    }

    std::cout << '\n';
}
