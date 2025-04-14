#include <iostream>  

int main()
{
    int edad = 0;

    std::cout << "Ingrese edad: ";
    std::cin >> edad; 

    if (edad > 17) {
        printf("En efecto es mayor de edad");
    } else {
        printf("Lo sentimos pero no es mayor de edad"); 
    }

    return 0;
}