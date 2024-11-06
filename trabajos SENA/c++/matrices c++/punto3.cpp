#include <stdio.h>
//desarrollado por manuel valenica
//version 1.0
//22/06/20244
// Leer una matriz 4x6 entera y determinar en qu� posiciones se encuentran los n�meros cuyo pen�ltimo d�gito sea el 5
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

    // Verificar cada n�mero en la matriz
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            if (penultimoDigitoEsCinco(matriz[i][j])) {
                printf("El n�mero en la posici�n [%d][%d] tiene pen�ltimo d�gito igual a 5.\n", i, j);
            }
        }
    }

    return 0;
}

