#include <iostream>
using namespace std;
//desarrollado por manuel valenica
//version 1.0
//22/06/20244
//Leer una matriz 4x6 entera y determinar en qué posiciones están los menores por fila.

const int Nfil = 4; // Número de filas de la matriz.
const int Ncol = 6; // Número de columnas de la matriz.

// Función para crear una matriz con elementos ingresados por el usuario.
void crearMatriz(int matriz[Nfil][Ncol]) {
    for (int fila = 0; fila < Nfil; ++fila) {
        for (int columna = 0; columna < Ncol; ++columna) {
            cout << "Ingrese el elemento [" << fila + 1 << "][" << columna + 1 << "]: ";
            cin >> matriz[fila][columna];
        }
    }
}

// Función para encontrar el mínimo en una fila y registrar su posición.
void encontrarMinimosPorFila(int matriz[Nfil][Ncol]) {
    for (int fila = 0; fila < Nfil; ++fila) {
        int minimo = matriz[fila][0];
        int posicionColumna = 0;

        for (int columna = 1; columna < Ncol; ++columna) {
            if (matriz[fila][columna] < minimo) {
                minimo = matriz[fila][columna];
                posicionColumna = columna;
            }
        }

        cout << "El mínimo en la fila " << fila + 1 << " es " << minimo;
        cout << " y se encuentra en la columna " << posicionColumna + 1 << "." << endl;
    }
}

int main() {
    int matriz[Nfil][Ncol];
    cout << "Ingrese los elementos de la matriz:" << endl;
    crearMatriz(matriz);
    cout << "\nResultados:" << endl;
    encontrarMinimosPorFila(matriz);

    return 0;
}

