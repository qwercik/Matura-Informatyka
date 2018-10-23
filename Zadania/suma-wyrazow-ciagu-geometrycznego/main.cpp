#include <iostream>
#include <cmath>

double geometricSequenceInitialElementsSum(unsigned elementsAmount, double firstElement, double quotient)
{
    if (quotient == 1)
    {
        return elementsAmount * firstElement;
    }
    else
    {
        return firstElement * (pow(quotient, elementsAmount) - 1) / (quotient - 1);
    }
}

int main()
{
    std::cout << "Podaj pierwszy wyraz ciągu geometrycznego: ";
    double firstElement;
    std::cin >> firstElement;

    std::cout << "Podaj iloraz ciągu geometrycznego: ";
    double quotient;
    std::cin >> quotient;

    std::cout << "Sumę ilu początkowych wyrazów ciągu wyznaczyć? ";
    unsigned elementsAmount;
    std::cin >> elementsAmount;

    std::cout << "Suma wynosi " << geometricSequenceInitialElementsSum(elementsAmount, firstElement, quotient) << '\n';
}
