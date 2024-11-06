#include <iostream>
#include <string>

//desarrollado por manuel valenica
//version 1.0
//18/06/2024
/*
  Leer tres cadenas de caracteres correspondientes, respectivamente, al nombre y los dos apellidos de
 una persona y crear un nuevo vector que contenga: apellido 1 apellido2, inicial.

 */


int main() {
    std::string nombre, apellido1, apellido2;
    char inicial;

    // Lee las cadenas de caracteres
    std::cout << "Ingrese el nombre: ";
    std::cin >> nombre;
    std::cout << "Ingrese el primer apellido: ";
    std::cin >> apellido1;
    std::cout << "Ingrese el segundo apellido: ";
    std::cin >> apellido2;

    inicial = nombre[0];

    std::string resultado = apellido1 + " " + apellido2 + ", " + inicial;

    std::cout << "El resultado es: " << resultado << std::endl;

    return 0;
}
