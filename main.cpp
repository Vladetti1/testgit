#include <iostream>

// Функция возведения в степень через цикл
double my_pow(double base, unsigned int exponent) {
    double result = 1.0;
    for (unsigned int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

// Для проверки работы функции
int main() {
    double base;
    unsigned int exponent;

    std::cout << "Enter a base: ";
    std::cin >> base;
    std::cout << "Enter an exponent: ";
    std::cin >> exponent;

    std::cout << base << " raised to the power of " << exponent
              << " is " << my_pow(base, exponent) << std::endl;

    return 0;
}
