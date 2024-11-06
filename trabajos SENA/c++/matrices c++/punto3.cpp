#include <stdio.h>
//desarrollado por manuel valenica
//version 1.0
//22/06/20244
// Leer una matriz 4x6 entera y determinar en qué posiciones se encuentran los números cuyo penúltimo dígito sea el 5
int penultimoDigitoEsCinco(int num) {
    int penultimo = (num / 10) % 10;
    return penultimo == 5;
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

    // Verificar cada número en la matriz
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            if (penultimoDigitoEsCinco(matriz[i][j])) {
                printf("El número en la posición [%d][%d] tiene penúltimo dígito igual a 5.\n", i, j);
            }
        }
    }

    return 0;
}

