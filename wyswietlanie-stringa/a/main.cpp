#include <iostream>
#include <string>

void printReverse(const std::string& string)
{
    for (int i = string.size() - 1; i >= 0; --i)
    {
        std::cout << string[i];
    }
}

int main()
{
    std::string word;
    std::cin >> word;

    printReverse(word);
    std::cout << '\n';
}
