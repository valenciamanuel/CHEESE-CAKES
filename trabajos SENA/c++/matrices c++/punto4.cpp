#include <stdio.h>
#include <stdbool.h>
//desarrollado por manuel valenica
//version 1.0
//22/06/20244
// Leer una matriz 4x6 entera y determinar si alguno de sus números está repetido al menos 3 veces.

// Función para verificar si un número está repetido al menos 3 veces
bool estaRepetido(int contador[], int tam) {
    for (int i = 0; i < tam; i++) {
        if (contador[i] >= 3) {
            return true;
        }
    }
    return false;
}

int main() {
    int matriz[4][6];
    int contador[24] = {0}; // Contador para los números (24 posibles valores en una matriz 4x6)

    // Leer la matriz
    printf("Ingrese los elementos de la matriz:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            scanf("%d", &matriz[i][j]);
            contador[matriz[i][j]]++; // Incrementar el contador para el número leído
        }
    }

    // Verificar si algún número está repetido al menos 3 veces
    if (estaRepetido(contador, 24)) {
        printf("Al menos un número está repetido al menos 3 veces en la matriz.\n");
    } else {
        printf("Ningún número está repetido al menos 3 veces en la matriz.\n");
    }

    return 0;
}

