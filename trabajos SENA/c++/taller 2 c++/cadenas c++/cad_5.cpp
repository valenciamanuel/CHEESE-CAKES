#include <iostream>
#include <string>
#include <algorithm>
//desarrollado por manuel valenica
//version 1.0
//18/06/2024
/*Escribir un programa que dada una frase de tamaño máximo N, determine si es un palíndromo o no. Un
 palíndromo es una frase que, atendiendo sólo a sus letras e ignorando los espacios, acentos, signos de
 puntuación y tipo de letra (mayúscula o minúscula) expresa lo mismo leída de izquierda a derecha que
 de derecha a izquierda. “dábale arroz a la zorra el abad”. 
*/

bool esPalindromo(const std::string& frase) {
    std::string procesada;
    for (size_t i = 0; i < frase.length(); ++i) {
        char c = frase[i];
        if (std::isalpha(c)) {
            procesada += std::tolower(c);
        }
    }

    return procesada == std::string(procesada.rbegin(), procesada.rend());
}

int main() {
    std::string frase;
    std::cout << "ingrese la frase a evaluar: ";
    std::getline(std::cin, frase);

    if (esPalindromo(frase)) {
        std::cout << "la frase ingresada es un palindromo. " << std::endl;
    } else {
        std::cout << "la frase ingresada no es un palindromo. " << std::endl;
    }

    return 0;
}
