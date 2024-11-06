#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
//desarrollado por manuel valencia
//version 1.0
//22/06/2024

//PROGRAMA, que ordene un vector que guarda 500 elementos generados forma aleatoria
using namespace std;

int main() {
    // Configurar la semilla para generar números aleatorios
    srand(time(NULL));

    // Crear un vector con 500 elementos aleatorios
    vector<int> elementos(500);
    for (int i = 0; i < 500; ++i) {
        elementos[i] = rand();
    }

    // Mezclar los elementos aleatoriamente (Fisher-Yates shuffle)
    for (int k = 0; k < 500; ++k) {
        int r = k + rand() % (500 - k);
        swap(elementos[k], elementos[r]);
    }

    // Ordenar el vector
    sort(elementos.begin(), elementos.end());

    // Mostrar los elementos ordenados
    cout << "Elementos ordenados:" << endl;
    for (int i = 0; i < 500; ++i) {
        cout << elementos[i] << " ";
    }
    cout << endl;

    return 0;
}


