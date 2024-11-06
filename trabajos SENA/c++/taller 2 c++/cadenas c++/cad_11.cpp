#include <iostream>
#include <string>
#include <locale.h>
//desarrollado por manuel valenica
//version 1.0
//18/06/2024

//  Leer  una  cadena  de  caracteres,  donde  en  lugar  de  �  se  han  utilizado  los  caracteres  ny.  Crear  una  nueva cadena de caracteres sustituyendo ny por �. 
int main() {
	setlocale (LC_ALL, "SPANISH");
    std::string frase;
    std::cout << "Escribe una frase: ";
    std::getline(std::cin, frase);

    size_t pos = 0;
    while ((pos = frase.find("ny", pos)) != std::string::npos) {
        frase.replace(pos, 2, "�");
        pos += 1; // Avanzamos la posici�n para continuar la b�squeda
    }

    std::cout << "La nueva frase es: " << frase << std::endl;

    return 0;
}
