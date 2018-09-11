#include <iostream>

bool compare(const char* str1, const char* str2)
{
    for (unsigned index = 0; str1[index] != '\0'; ++index)
    {
        if (str1[index] != str2[index])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    char str1[] = "Ala ma kota";
    //char str2[] = "Ala ma psa";
    char str2[] = "Ala ma kota";

    std::cout << "Napis 1: " << str1 << '\n';
    std::cout << "Napis 2: " << str2 << '\n';
    std::cout << "Napisy" << (compare(str1, str2) ? "" : " nie") << " są identyczne\n";
}
