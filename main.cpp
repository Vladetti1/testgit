#include <iostream>

// Функция возведения в степень через цикл с поддержкой отрицательных степеней
double my_pow(double base, int exponent) {
    double result = 1.0;
    int positive_exponent = exponent < 0 ? -exponent : exponent;

    for (int i = 0; i < positive_exponent; ++i) {
        result *= base;
    }

    return exponent < 0 ? 1.0 / result : result;
}

// Для проверки работы функции
int main() {
    double base;
    int exponent;

    std::cout << "Enter a base: ";
    std::cin >> base;
    std::cout << "Enter an exponent: ";
    std::cin >> exponent;

    std::cout << base << " raised to the power of " << exponent
              << " is " << my_pow(base, exponent) << std::endl;

    return 0;
}

