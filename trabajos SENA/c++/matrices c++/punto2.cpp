#include <stdio.h>
#include <stdbool.h>
//desarrollado por manuel valenica
//version 1.0
//22/06/20244
//Leer dos matrices 4x5 enteras y determinar si la cantidad de números primos almacenados en una matriz es igual a la cantidad de números primos almacenados en la otra matriz.
bool esPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Función para contar números primos en una matriz
int contarPrimos(int matriz[4][5]) {
    int primos = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (esPrimo(matriz[i][j])) {
                primos++;
            }
        }
    }
    return primos;
}

int main() {
    int matriz1[4][5];
    int matriz2[4][5];

    // Leer la primera matriz
    printf("Ingrese los elementos de la primera matriz:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    // Leer la segunda matriz
    printf("Ingrese los elementos de la segunda matriz:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    // Contar números primos en cada matriz
    int primosMatriz1 = contarPrimos(matriz1);
    int primosMatriz2 = contarPrimos(matriz2);

    // Comparar las cantidades
    if (primosMatriz1 == primosMatriz2) {
        printf("La cantidad de números primos en ambas matrices es igual.\n");
    } else {
        printf("La cantidad de números primos en ambas matrices no es igual.\n");
    }

    return 0;
}

