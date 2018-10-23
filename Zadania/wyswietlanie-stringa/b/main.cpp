#include <iostream>
#include <string>

void printVertical(const std::string& string)
{
    for (auto& character : string)
    {
        std::cout << character << '\n';
    }
}

int main()
{
    std::string word;
    std::cin >> word;

    printVertical(word);
}
