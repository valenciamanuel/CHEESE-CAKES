#include <iostream>
#include <string>
#include <cctype>
//desarrollado por manuel valenica
//version 1.0
//18/06/2024
//Escribir un programa que cuente el número de palabras en un texto.



int contarPalabras(const std::string& texto) {
    int contador = 0;
    bool dentroDePalabra = false;

    for (size_t i = 0; i < texto.length(); ++i) {
        char c = texto[i];
        if (std::isalpha(c)) {
            
            dentroDePalabra = true;
        } else {
           
            if (dentroDePalabra) {
                contador++;
                dentroDePalabra = false;
            }
        }
    }

   
    if (dentroDePalabra) {
        contador++;
    }

    return contador;
}

int main() {
    std::string texto;
    std::cout << "ingrese el texto: ";
    std::getline(std::cin, texto);

    int cantidadPalabras = contarPalabras(texto);
    std::cout << "numero de palabras: " << cantidadPalabras << std::endl;

    return 0;
}
