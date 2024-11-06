#include <iostream>
#include <string>
//desarrollado por manuel valenica
//version 1.0
//18/06/2024

//Leer el nombre completo de una persona y un apellido y comprobar si el apellido pertenece a esa persona.



int main() {
    std::string nombreCompleto, apellido;

    std::cout << "Ingrese el nombre completo: ";
    std::getline(std::cin, nombreCompleto);
    std::cout << "Ingrese el apellido: ";
    std::cin >> apellido;

    if (nombreCompleto.find(apellido) != std::string::npos) {
        std::cout << "El apellido pertenece a la persona." << std::endl;
    } else {
        std::cout << "El apellido no pertenece a la persona." << std::endl;
    }

    return 0;
}
