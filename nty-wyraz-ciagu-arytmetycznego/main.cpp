#include <iostream>

int arithmeticSequenceMember(unsigned memberIndex, double firstMember, double difference)
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
    double firstMember;
    std::cin >> firstMember;

    std::cout << "Podaj różnicę ciągu arytmetycznego: ";
    double difference;
    std::cin >> difference;

    std::cout << "Który wyraz ciągu chcesz obliczyć? Ciągi numerujemy począwszy od 1. ";
    unsigned memberIndex;
    std::cin >> memberIndex;

    std::cout << memberIndex << "z kolei wyraz ciągu arytmetycznego wynosi " << arithmeticSequenceMember(memberIndex, firstMember, difference) << '\n';
}
