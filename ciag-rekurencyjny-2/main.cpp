#include <iostream>

double getSequenceElement(unsigned index)
{
    if (index == 1)
    {
        return 1;
    }
    else if (index == 2)
    {
        return 0.5;
    }
    else
    {
        return -getSequenceElement(index - 1) * getSequenceElement(index - 2);
    }
}

int main()
{
    std::cout << "Podaj który wyraz ciągu wyznaczyć: ";
    unsigned index;
    std::cin >> index;

    std::cout << getSequenceElement(index) << '\n';
}
