#include <iostream>
#include <fstream>
#include <cstdlib>

int main()
{
    std::ifstream file("dane.txt");
    if (!file.is_open())
    {
        std::cerr << "Nie można otworzyć pliku\n";
        return EXIT_FAILURE;
    }

    std::string currentWord, longestWord;
    while (file >> currentWord)
    {
        if (currentWord.size() > longestWord.size())
        {
            longestWord = currentWord;
        }
    }

    std::cout << longestWord << '\n';
}
