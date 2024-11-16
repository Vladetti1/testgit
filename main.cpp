#include <iostream>

// Функция быстрого возведения в степень
double fast_pow(double base, unsigned int exponent) {
    double result = 1.0;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result *= base; // Умножаем на текущую степень, если показатель нечетный
        }
        base *= base;      // Увеличиваем степень основания
        exponent /= 2;     // Деляем показатель пополам
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
              << " is " << fast_pow(base, exponent) << std::endl;

    return 0;
}
