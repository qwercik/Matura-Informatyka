#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::cout << "Podaj wyraz: ";
    std::string word;
    std::cin >> word;

    std::string wordCopy = word;
    std::reverse(wordCopy.begin(), wordCopy.end());

    std::cout << "Podany wyraz " << (wordCopy == word ? "" : "nie ") << "jest palindromem\n";
}
