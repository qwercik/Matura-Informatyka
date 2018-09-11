#include <iostream>

int getSequenceElement(unsigned index)
{
    if (index == 1)
    {
        return -1;
    }
    else
    {
        return (-index) * getSequenceElement(index - 1) - 3; 
    }
}

int main()
{
    std::cout << "Podaj który wyraz ciągu wyznaczyć: ";
    unsigned index;
    std::cin >> index;

    std::cout << "a(" << index << ") = " << getSequenceElement(index) << '\n';
}
