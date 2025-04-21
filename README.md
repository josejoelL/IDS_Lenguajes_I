
# Introducción

 En este proyecto se trabajara en un ejercicio usando el lenguaje C++ que a mi parecer es el mejor lenguaje de bajo nivel por excelencia en cuestión de lógica por lo que es muy usado en competencias matemáticas ya que uno de sus pros son los segundos en los que puede correr un código y convertirlo en binario algo que a su competencia directa se le complica como lo es Java que usa un copilador intermediario instalable para poder correr lo escrito en ese lenguaje algunos datos encontrados es que el backend de Facebook y de Google maps fue escrito en C++ y también da inicio a aprender del framework de .Net que en general usa C# que es uno de los backends más utilizados en la industria actualmente, este ejercicio no es para nada un desafío pero es más que nada para ver cómo funciona la sintaxis del código.  
<br>
# Descripción

 Las diferencias que he notado al usar este lenguaje con otros lenguajes a los que he usado es su sintaxis en el import que se maneja con un #include <> lo cual agrega librerías de esa manera, en este ejercicio se usó iostream que i es de in que significa entrada y o de out de salida y stream es flujo o mecanismo que podríamos interpretarlo como el flujo de las entradas y salidas que es muy usado para ver y agregar cosas en la consola como si la consola fuera una interfaz que es muy usado para practicar estos ejercicios de lógica de programación que en este caso usa una sintaxis algo compleja a mi parecer por lo que yo me propondría a mejor crear un método que reciba la información y otra que la imprima ya que sería una manera mas sencilla pero no se hará por que por el momento aquí se tiene que aprender a como se tiene que hacer con un paradigma funcional ya que si no la materia se llamaría orientado a objetos.
# Justificacion
 Me siento cómodo utilizando el Online GBD ya que lo copila de manera virtual sin necesidad de instalación, pero lo mejor sería utilizar un IDE ya que esos nos pueden ayudar mejor en posibles errores al instante como lo puede ser una falta de un ; en un texto y en una copilacion por partes que puede mejorar en depurar y en probar errores de una mejor manera yo no lo hice así porque justifico mi manera de hacerlo de esa forma si yo use el printf y no el que ya viene en el iostream es porque siento que es más entendible a la vista lo que está queriendo hacer el ejercicio y más fácil de leer, considero que esos espacios se pudieran mejorar para dejar un condigo más limpio. 


# Desarrollo 

 

Actividad 1
 Generar un programa que realice lo siguiente:
•	Que pida el ingreso de un valor (edad)
•	Que determine si es mayor de edad o menor de edad
•	Que lo muestre en pantalla con su respectivo enunciado, si es mayor de edad o no
```c++
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
```
Actividad 2
Generar un programa que realice lo siguiente:
Que pida el ingreso de dos valores (ya sean enteros o decimales).
Que los sume, reste, multiplique y divida.
```c++
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
```
}
Actividad 3
crear un programa que permita calcular el RFC
Este debe generarse a partir de la captura de nombre, apellido
paterno, apellido materno y fecha de nacimiento.
<br>
```c++
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
```
# Conclucion
 Este proyecto no tuvo dificultades es muy interesante C++ y creo que puede ser uno de mis lenguajes favoritos para programar lógica, y tener un panorama más amplio de los lenguajes de programación en lo personal hasta el momento no lo siento tan complicado es orientado a objetos utiliza métodos y creo yo que es uno de los lenguajes que hemos estado infravalorando más en la industria sin embargo verlo en esta área de aprendizaje de hace muy alegre ya que no había tenido la oportunidad de encontrarme con el frente a frente y me hizo muy interesante para volver a hacer problemas sencillos pero en lenguajes que no manejo, en cuestión de sacar dudas internet ya resolvió varias dudas desde hace muchos años y es muy difícil que te tropieces con algo que alguien mas no se haya topado con eso antes por lo que se puede aprender mucho de este lenguaje.

# Referencias
### Ivor Horton 2018 AI Beginning C++17: From Novice to Professional [Libro] 5ta edicion Apress
### Robert Lafore 2002  Object-Oriented Programming in C++ [Libro] 3ta edicion Sams Publishing 

