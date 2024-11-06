#include <iostream>
using namespace std;
//desarrollado por manuel valenica
//version 1.0
//22/06/20244
//Leer una matriz 4x6 entera y determinar en qu� posiciones est�n los menores pares por fila.

const int Nfil = 4; // N�mero de filas de la matriz.
const int Ncol = 6; // N�mero de columnas de la matriz.

// Funci�n para crear una matriz con elementos ingresados por el usuario.
void crearMatriz(int matriz[Nfil][Ncol]) {
    for (int fila = 0; fila < Nfil; ++fila) {
        for (int columna = 0; columna < Ncol; ++columna) {
            cout << "Ingrese el elemento [" << fila + 1 << "][" << columna + 1 << "]: ";
            cin >> matriz[fila][columna];
        }
    }
}

// Funci�n para verificar si un n�mero es par.
bool esPar(int num) {
    return num % 2 == 0;
}

// Funci�n para encontrar el m�nimo en una fila y verificar si es par.
void encontrarMinimosParesPorFila(int matriz[Nfil][Ncol]) {
    for (int fila = 0; fila < Nfil; ++fila) {
        int minimo = matriz[fila][0];
        int posicionColumna = 0;

        for (int columna = 1; columna < Ncol; ++columna) {
            if (matriz[fila][columna] < minimo) {
                minimo = matriz[fila][columna];
                posicionColumna = columna;
            }
        }

        if (esPar(minimo)) {
            cout << "El m�nimo par en la fila " << fila + 1;
            cout << " es " << minimo << " y se encuentra en la columna " << posicionColumna + 1 << "." << endl;
        }
    }
}

int main() {
    int matriz[Nfil][Ncol];
    cout << "Ingrese los elementos de la matriz:" << endl;
    crearMatriz(matriz);
    cout << "\nResultados:" << endl;
    encontrarMinimosParesPorFila(matriz);

    return 0;
}

