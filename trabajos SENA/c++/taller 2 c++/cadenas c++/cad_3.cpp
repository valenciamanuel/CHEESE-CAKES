#include <iostream>
#include <cctype>
#include <string>
//desarrollado por manuel valenica
//version 1.0
//18/06/2024
//Leer una frase y contar el número de vocales (de cada una) que aparecen.

int main() {
    std::string frase;
    std::cout << "Ingresa una frase: ";
    std::getline(std::cin, frase);

    int contadorVocales[5] = {0}; 

    for (size_t i = 0; i < frase.length(); i++) {
        char letra = std::tolower(frase[i]);

        if (letra == 'a') {
            contadorVocales[0]++;
        } else if (letra == 'e') {
            contadorVocales[1]++;
        } else if (letra == 'i') {
            contadorVocales[2]++;
        } else if (letra == 'o') {
            contadorVocales[3]++;
        } else if (letra == 'u') {
            contadorVocales[4]++;
        }
    }

    std::cout << "Cantidad de vocales:" << std::endl;
    std::cout << "a: " << contadorVocales[0] << std::endl;
    std::cout << "e: " << contadorVocales[1] << std::endl;
    std::cout << "i: " << contadorVocales[2] << std::endl;
    std::cout << "o: " << contadorVocales[3] << std::endl;
    std::cout << "u: " << contadorVocales[4] << std::endl;

    return 0;
}
