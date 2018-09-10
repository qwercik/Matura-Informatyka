#include <iostream>

int arithmeticSequenceMember(unsigned memberIndex, int firstMember, int difference)
{
    if (memberIndex == 1)
    {
        return firstMember;
    }
    else
    {
        return arithmeticSequenceMember(memberIndex - 1, firstMember, difference) + difference;
    }
}

int main()
{
    std::cout << "Podaj pierwszy wyraz ciągu arytmetycznego: ";
    int firstMember;
    std::cin >> firstMember;

    std::cout << "Podaj różnicę ciągu arytmetycznego: ";
    int difference;
    std::cin >> difference;

    std::cout << "Który wyraz ciągu chcesz obliczyć? Ciągi numerujemy począwszy od 1. ";
    unsigned memberIndex;
    std::cin >> memberIndex;

    std::cout << memberIndex << "z kolei wyraz ciągu arytmetycznego wynosi " << arithmeticSequenceMember(memberIndex, firstMember, difference) << '\n';
}
