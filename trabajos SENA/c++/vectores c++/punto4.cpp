#include <iostream>
#include <vector>
//desarrollado por manuel valencia
//version 1.0
//22/06/2024
//Leer 10 números enteros, almacenarlos en un vector y mostrar en pantalla todos los enteros comprendidos entre 1 y cada uno de los dígitos de cada uno de los números almacenados en el vector.
using namespace std;

int main() {
    const int n = 10; // Número de elementos a leer
    vector<int> numeros(n);

    // Leer los 10 números enteros
    cout << "Ingrese " << n << " números enteros:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> numeros[i];
    }

    // Mostrar los enteros comprendidos entre 1 y los dígitos de cada número
    for (int i = 0; i < n; ++i) {
        cout << "Dígitos de " << numeros[i] << ": ";
        int num = numeros[i];
        while (num > 0) {
            int digito = num % 10;
            cout << digito << " ";
            num /= 10;
        }
        cout << endl;
    }

    return 0;
}

