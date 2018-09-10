#include <iostream>
#include <string>

int main()
{
    std::string word1, word2;
    std::cin >> word1 >> word2;
    
    std::cout << (word1.size() > word2.size() ? word1 : word2) << '\n';
}
