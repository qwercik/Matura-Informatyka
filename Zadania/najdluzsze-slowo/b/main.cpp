#include <iostream>
#include <string>

int main()
{
    std::string longestWord;
    for (int i = 0; i < 3; ++i)
    {
        std::string currentWord;
        std::cin >> currentWord;

        if (currentWord.size() > longestWord.size())
        {
            longestWord = currentWord;
        }
    }

    std::cout << longestWord << '\n';
}
