#include <iostream>
#include <string>
#include <ctime>
//desarrollado por manuel valenica
//version 1.0
//18/06/2024
/*
 Escribir un programa que lea frase y la procese como si pasase a través de una ventana (de 20
 posiciones), Debe aparecer dicha frase moviéndose de derecha a izquierda. Cuando por la ventana
 pase el último carácter de la frase, ésta volverá a desfilar de nuevo desde el principio. Así un número de
 veces indicado por el usuario.

 */


void mostrarVentana(const std::string& frase, int veces) {
    const int ventana = 20;
    const int totalCaracteres = frase.length();
    std::string ventanaActual;

    for (int i = 0; i < veces; ++i) {
        for (int j = 0; j < totalCaracteres + ventana; ++j) {
            ventanaActual = frase.substr(j % totalCaracteres, ventana);
            std::cout << ventanaActual << '\r' << std::flush;

            // Pausa de 100 ms (alternativa)
            std::clock_t start_time = std::clock();
            while ((std::clock() - start_time) / CLOCKS_PER_SEC < 0.1) {
                // Espera activa
            }
        }
    }
}

int main() {
    std::string frase;
    int veces;

    std::cout << "Ingrese una frase: ";
    std::getline(std::cin, frase);

    std::cout << "Ingrese el numero de veces que desea repetir: ";
    std::cin >> veces;

    mostrarVentana(frase, veces);

    return 0;
}
