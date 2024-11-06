#include <stdio.h>
//desarrollado por manuel valenica
//version 1.0
//22/06/2024
//Leer dos matrices 4x5 enteras y determinar si la cantidad de números pares almacenados en una matriz es igual a lacantidad de números pares almacenados en la otra matriz.

// Función para contar números pares en una matriz
int contarPares(int matriz[4][5]) {
    int pares = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz[i][j] % 2 == 0) {
                pares++;
            }
        }
    }
    return pares;
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

    // Contar números pares en cada matriz
    int paresMatriz1 = contarPares(matriz1);
    int paresMatriz2 = contarPares(matriz2);

    // Comparar las cantidades
    if (paresMatriz1 == paresMatriz2) {
        printf("La cantidad de números pares en ambas matrices es igual.\n");
    } else {
        printf("La cantidad de números pares en ambas matrices no es igual.\n");
    }

    return 0;
}

