#include <iostream>
#include <string>

void printBinary(unsigned decimalNumber)
{
    if (decimalNumber >= 2)
    {
        printBinary(decimalNumber / 2);
    }

    std::cout << decimalNumber % 2;
}

int main()
{
    std::cout << "Podaj liczbę dziesiętną: ";
    unsigned decimalNumber;
    std::cin >> decimalNumber;

    printBinary(decimalNumber);

    std::cout << '\n';
}
