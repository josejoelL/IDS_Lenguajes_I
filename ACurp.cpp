#include <iostream>
#include <string>
#include <cctype>

class CURPGenerator {
private:
    // Método para obtener la primera vocal interna de una cadena
    char obtenerPrimeraVocalInterna(const std::string& str) {
        for (size_t i = 1; i < str.length(); ++i) {
            char c = std::toupper(str[i]);
            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
                return c;
        }
        return 'X'; 
    }

public:

    std::string calcularCURP(const std::string& nombre, const std::string& apellidoPaterno, const std::string& apellidoMaterno, const std::string& fechaNacimiento) {
        std::string curp;


        char letraInicial = std::toupper(apellidoPaterno[0]);
        char primeraVocalInterna = obtenerPrimeraVocalInterna(apellidoPaterno);

     
        char inicialApellidoMaterno = (!apellidoMaterno.empty()) ? std::toupper(apellidoMaterno[0]) : 'X';

       
        char inicialNombre = std::toupper(nombre[0]);


        std::string anio = fechaNacimiento.substr(2, 2);

       
        std::string mes = fechaNacimiento.substr(5, 2);
        std::string dia = fechaNacimiento.substr(8, 2);

        curp = letraInicial;
        curp += primeraVocalInterna;
        curp += inicialApellidoMaterno;
        curp += inicialNombre;
        curp += anio;
        curp += mes;
        curp += dia;

        return curp;
    }
};

int main() {
    std::string nombre, apellidoPaterno, apellidoMaterno, fechaNacimiento;

    std::cout << "Ingrese el nombre: ";
    std::getline(std::cin, nombre);

    std::cout << "Ingrese el apellido paterno: ";
    std::getline(std::cin, apellidoPaterno);

    std::cout << "Ingrese el apellido materno (si no tiene, presione Enter): ";
    std::getline(std::cin, apellidoMaterno);

    std::cout << "Ingrese la fecha de nacimiento (YYYY-MM-DD): ";
    std::getline(std::cin, fechaNacimiento);

    CURPGenerator curpGen;
    std::string rfc = curpGen.calcularCURP(nombre, apellidoPaterno, apellidoMaterno, fechaNacimiento);

    std::cout << "CURP: " << rfc << std::endl;

    return 0;
}