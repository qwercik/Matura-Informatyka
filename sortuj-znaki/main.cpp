#include <iostream>
#include <algorithm>

int main()
{
    std::string word;
    std::cin >> word;

    std::sort(word.begin(), word.end(), [](int left, int right) { // Implicit cast to int
        return left < right;
    });

    std::cout << word << '\n';
}
