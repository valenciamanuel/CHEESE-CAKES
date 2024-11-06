#include <iostream>
#include <vector>
using namespace std;
//desarrollado por manuel valencia
//version 1.0
//22/06/2024
//Leer 10 números enteros, almacenarlos en un vector y mostrar en pantalla todos los enteros comprendidos entre 1 y cada uno de los números almacenados en el vector.
int main() {
    const int n = 10; // Número de elementos a leer
    vector<int> numeros(n);

    // Leer los 10 números enteros
    cout << "Ingrese " << n << " números enteros:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> numeros[i];
    }

    // Mostrar los enteros comprendidos entre 1 y cada número almacenado
    for (int i = 0; i < n; ++i) {
        cout << "Enteros entre 1 y " << numeros[i] << ": ";
        for (int j = 1; j <= numeros[i]; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

