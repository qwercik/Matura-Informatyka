#include <iostream>

unsigned factorial(unsigned argument)
{
    if (argument == 1)
    {
        return 1;
    }
    else
    {
        return argument * factorial(argument - 1);
    }
}

int main()
{
    std::cout << "Podaj argument (liczba naturalna dodatnia): ";
    unsigned argument;
    std::cin >> argument;

    std::cout << argument << "! = " << factorial(argument) << '\n';
}
