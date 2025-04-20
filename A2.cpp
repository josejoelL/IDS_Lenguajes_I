#include <iostream>
int main() {
    double num1 = 0.0, num2 = 0.0;
    std::cout << "Escribe el primer número: ";
    std::cin >> num1;
    std::cout << "Escribe el segundo número: ";
    std::cin >> num2;
    std::cout << "La suma es: " << num1 + num2 << std::endl;
    std::cout << "La resta es: " << num1 - num2 << std::endl;
    std::cout << "La multiplicación es: " << num1 * num2 << std::endl;
    if (num2 != 0) {
        std::cout << "La división es: " << num1 / num2 << std::endl;
    } else {
        std::cout << "error" << std::endl;
    }
    return 0;
}
