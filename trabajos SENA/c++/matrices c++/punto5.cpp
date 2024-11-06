#include <stdio.h>
//desarrollado por manuel valenica
//version 1.0
//22/06/20244
//Leer una matriz 4x6 entera y determinar cuántas veces está en ella el número menor.

// Función para encontrar el número mínimo en la matriz
int encontrarMinimo(int matriz[4][6]) {
    int minimo = matriz[0][0];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            if (matriz[i][j] < minimo) {
                minimo = matriz[i][j];
            }
        }
    }
    return minimo;
}

// Función para contar cuántas veces aparece el número mínimo en la matriz
int contarMinimo(int matriz[4][6], int minimo) {
    int contador = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            if (matriz[i][j] == minimo) {
                contador++;
            }
        }
    }
    return contador;
}

int main() {
    int matriz[4][6];

    // Leer la matriz
    printf("Ingrese los elementos de la matriz:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Encontrar el número mínimo
    int minimo = encontrarMinimo(matriz);

    // Contar cuántas veces aparece el número mínimo
    int vecesMinimo = contarMinimo(matriz, minimo);

    printf("El número mínimo es %d y aparece %d veces en la matriz.\n", minimo, vecesMinimo);

    return 0;
}

