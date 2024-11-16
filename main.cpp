#include <iostream>

// Функция быстрого возведения в степень
double fast_pow(double base, unsigned int exponent) {
    double result = 1.0;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result *= base; // Умножаем на текущую степень, если показатель нечетный
        }
        base *= base;      // Увеличиваем степень основания
        exponent /= 2;     // Делим показатель пополам
    }
    return result;
}

// Функция возведения в степень с поддержкой отрицательных степеней
double my_pow(double base, int exponent) {
    double result = 1.0;
    int positive_exponent = exponent < 0 ? -exponent : exponent;

    for (int i = 0; i < positive_exponent; ++i) {
        result *= base;
    }

    return exponent < 0 ? 1.0 / result : result;
}

// Для проверки работы функций
int main() {
    double base;
    int exponent;

    std::cout << "Enter a base: ";
    std::cin >> base;
    std::cout << "Enter an exponent: ";
    std::cin >> exponent;

    std::cout << base << " raised to the power of " << exponent
              << " is " << my_pow(base, exponent) << std::endl; // Вызываем my_pow

    return 0;
}

