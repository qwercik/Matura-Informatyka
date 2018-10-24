#include <iostream>

unsigned greatestCommonDivisorIterative(unsigned a, unsigned b) {
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }

    return a;
}

unsigned greatestCommonDivisorRecursive(unsigned a, unsigned b) {
    if (a > b) {
        return greatestCommonDivisorRecursive(a - b, b);
    } else if (a < b) { 
        return greatestCommonDivisorRecursive(a, b - a);
    } else {
        return a;
    }
}

int main() {
    std::cout << greatestCommonDivisorIterative(64, 48) << '\n';
    std::cout << greatestCommonDivisorRecursive(64, 48) << '\n';
}
