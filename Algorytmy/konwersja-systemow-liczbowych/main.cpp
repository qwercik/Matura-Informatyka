#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>

const std::string DIGITS = "0123456789ABCDEFGHIJKLMNOPQRSTUWVXYZ";

std::string convertFromDecimal(unsigned decimal, unsigned base) {
    if (decimal < base) {
        return std::string(1, DIGITS[decimal]);
    }

    std::string result = convertFromDecimal(decimal / base, base);
    result += DIGITS[decimal % base];
    return std::move(result);
}

unsigned convertToDecimal(const std::string& value, unsigned base) {
    unsigned result = 0;
    for (int i = value.size() - 1; i >= 0; --i) {
        unsigned digitValue = 0;
        for (int j = 0; j < DIGITS.size(); ++j) {
            if (value[i] == DIGITS[j]) {
                digitValue = j;
                break;
            }
        }
        
        result += digitValue * pow(base, value.size() - i - 1);
    }
    
    return result;
}

int main() {
    std::cout << "Podaj liczbę: ";
    std::string number;
    std::cin >> number;

    std::cout << "Podaj system w jakim zapisana jest liczba: ";
    unsigned base;
    std::cin >> base;

    std::cout << "Podaj system do jakiego skonwertować liczbę: ";
    unsigned targetBase;
    std::cin >> targetBase;
    
    std::cout << "Liczba po konwersji: " << convertFromDecimal(convertToDecimal(number, base), targetBase) << '\n';
}
