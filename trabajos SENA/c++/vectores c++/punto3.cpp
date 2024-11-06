#include <iostream>
#include <vector>
using namespace std;
//desarrollado por manuel valencia
//version 1.0
//22/06/2024
//Leer 10 n�meros enteros, almacenarlos en un vector y mostrar en pantalla todos los enteros comprendidos entre 1 y cada uno de los n�meros almacenados en el vector.
int main() {
    const int n = 10; // N�mero de elementos a leer
    vector<int> numeros(n);

    // Leer los 10 n�meros enteros
    cout << "Ingrese " << n << " n�meros enteros:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> numeros[i];
    }

    // Mostrar los enteros comprendidos entre 1 y cada n�mero almacenado
    for (int i = 0; i < n; ++i) {
        cout << "Enteros entre 1 y " << numeros[i] << ": ";
        for (int j = 1; j <= numeros[i]; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

