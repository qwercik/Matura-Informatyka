#include <iostream>

bool isPerfect(unsigned number) {
    unsigned sum = 0;

    for (unsigned i = 1; i < number; ++i) {
        if (number % i == 0) {
            sum += i;
        }
    }

    return number == sum;
}

int main() {
    std::cout << "Podaj liczbę: ";
    unsigned number;
    std::cin >> number;

    std::cout << "Podana przez Ciebie liczba " << (isPerfect(number) ? "" : "nie ") << "jest liczbą doskonałą.\n";
}
