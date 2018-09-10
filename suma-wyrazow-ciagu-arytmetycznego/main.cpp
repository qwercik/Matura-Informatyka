#include <iostream>

int main()
{
    std::cout << "Podaj pierwszy wyraz ciągu arytmetycznego ";
    double firstElement;
    std::cin >> firstElement;

    std::cout << "Podaj n-ty wyraz ciągu arytmetycznego ";
    double nElement;
    std::cin >> nElement;

    std::cout << "Podaj liczbę wyrazów ciągu ";
    unsigned elementsAmount;
    std::cin >> elementsAmount;

    double sum = (firstElement + nElement) / 2 * elementsAmount;
    std::cout << "Suma wynosi " << sum << '\n';
}
