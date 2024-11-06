#include <stdio.h>
//desarrollado por manuel valenica
//version 1.0
//22/06/20244
//Leer una matriz 4x6 entera y determinar cu�ntas veces est� en ella el n�mero menor.

// Funci�n para encontrar el n�mero m�nimo en la matriz
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

// Funci�n para contar cu�ntas veces aparece el n�mero m�nimo en la matriz
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

    // Encontrar el n�mero m�nimo
    int minimo = encontrarMinimo(matriz);

    // Contar cu�ntas veces aparece el n�mero m�nimo
    int vecesMinimo = contarMinimo(matriz, minimo);

    printf("El n�mero m�nimo es %d y aparece %d veces en la matriz.\n", minimo, vecesMinimo);

    return 0;
}

