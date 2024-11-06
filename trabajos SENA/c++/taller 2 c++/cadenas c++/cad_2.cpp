#include <iostream>
#include <string>
#include <cctype>
//desarrollado por manuel valenica
//version 1.0
//18/06/2024
//Escribir un programa que lea una frase y cuente el número de palabras que contiene.


int main() {
    std::string texto;
    std::cout << "Escribe tu texto: ";
    std::getline(std::cin, texto);

    int cantidadPalabras = 1; // Inicializamos en 1 para contar la última palabra

    for (size_t i = 0; i < texto.length(); ++i) {
        char c = texto[i];
        if (c == ' ' || c == '\t' || c == '\n') {
            cantidadPalabras++;
        }
    }

    std::cout << "La cantidad de palabras es: " << cantidadPalabras << std::endl;

    return 0;
}
