#include <iostream>

using ull = unsigned long long;

ull sumOfDigits(ull number)
{
    if (number < 10)
    {
        return number;
    }
    else
    {
        return (number % 10) + sumOfDigits(number / 10);
    }
}

int main()
{
    std::cout << "Podaj liczbę naturalną: ";
    ull number;
    std::cin >> number;

    std::cout << "Suma cyfr wynosi " << sumOfDigits(number) << '\n';
}
