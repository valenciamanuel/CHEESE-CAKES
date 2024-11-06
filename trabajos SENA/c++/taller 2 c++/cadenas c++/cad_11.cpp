#include <iostream>
#include <string>
#include <locale.h>
//desarrollado por manuel valenica
//version 1.0
//18/06/2024

//  Leer  una  cadena  de  caracteres,  donde  en  lugar  de  ñ  se  han  utilizado  los  caracteres  ny.  Crear  una  nueva cadena de caracteres sustituyendo ny por ñ. 
int main() {
	setlocale (LC_ALL, "SPANISH");
    std::string frase;
    std::cout << "Escribe una frase: ";
    std::getline(std::cin, frase);

    size_t pos = 0;
    while ((pos = frase.find("ny", pos)) != std::string::npos) {
        frase.replace(pos, 2, "ñ");
        pos += 1; // Avanzamos la posición para continuar la búsqueda
    }

    std::cout << "La nueva frase es: " << frase << std::endl;

    return 0;
}
