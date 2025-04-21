#include <iostream>
#include <string>
// Función para obtener la primera vocal interna de una cadena
char obtenerPrimeraVocalInterna(const std::string& str) {
    for (size_t i = 1; i < str.length(); ++i) {
        char c = str[i];
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            return c;
    }
    return 'X'; // Si no se encuentra ninguna vocal interna, se usa una X
}
// Función principal para calcular el RFC
std::string calcularRFC(const std::string& nombre, const std::string& apellidoPaterno, const std::string& apellidoMaterno, const std::string& fechaNacimiento) {
    std::string rfc;
    // Se obtienen la letra inicial y la primera vocal interna del apellido paterno
    char letraInicial = apellidoPaterno[0];
    char primeraVocalInterna = obtenerPrimeraVocalInterna(apellidoPaterno);
    // Se obtiene la inicial del apellido materno o se usa una 'X' si no hay
    char inicialApellidoMaterno = (!apellidoMaterno.empty()) ? apellidoMaterno[0] : 'X';
    // Se obtiene la inicial del primer nombre o se usa una 'X' si no hay
    char inicialNombre = nombre[0];
    // Se obtienen los dos últimos dígitos del año de nacimiento
    std::string YY = fechaNacimiento.substr(2, 2);
    // Se obtienen el mes y el día de nacimiento
    std::string MM = fechaNacimiento.substr(5, 2);
    std::string DD = fechaNacimiento.substr(8, 2);
    // Se construye el RFC
    rfc = letraInicial;
    rfc += primeraVocalInterna;
    rfc += inicialApellidoMaterno;
    rfc += inicialNombre;
    rfc += YY;
    rfc += MM;
    rfc += DD;
    return rfc;
}
int main() {
    std::string nombre, apellidoPaterno, apellidoMaterno, fechaNacimiento;
    std::cout << "Ingrese el nombre en (letras mayusculas) :";
    std::getline(std::cin, nombre);
    std::cout << "Ingrese el apellido paterno: ";
    std::getline(std::cin, apellidoPaterno);
    std::cout << "Ingrese el apellido materno (si no tiene, presione Enter): ";
    std::getline(std::cin, apellidoMaterno);
    std::cout << "Ingrese la fecha de nacimiento (YYYY-MM-DD): ";
    std::getline(std::cin, fechaNacimiento);
    std::string rfc = calcularRFC(nombre, apellidoPaterno, apellidoMaterno, fechaNacimiento);
    std::cout << "RFC(sin homoclave) : " << rfc << std::endl;
    return 0;
}