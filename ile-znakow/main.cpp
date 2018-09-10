#include <iostream>
#include <string>

unsigned specificCharacterAmount(const std::string& string, char specificCharacter)
{
    unsigned amount = 0;

    for (auto& character : string)
    {
        if (specificCharacter == character)
        {
            ++amount;
        }
    }

    return amount;
}

int main()
{
    std::cout << "Podaj wyraz ";
    std::string word;
    std::cin >> word;

    std::cout << "Podaj konkretną literę ";
    char specificCharacter;
    std::cin >> specificCharacter;

    std::cout << "Ta litera występuje w podanym wyrazie " << specificCharacterAmount(word, specificCharacter) << " razy\n";
}
