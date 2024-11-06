#include <iostream>
#include <vector>
//desarrollado por manuel valencia
//version 1.0
//22/06/2024
//. Leer 10 números enteros, almacenarlos en un vector. Luego leer un entero y determinar si este último entero se encuentra entre los 10 valores almacenados en el vector.
using namespace std;

int main() {
    const int n = 10; // Número de elementos a leer
    vector<int> numeros(n);

    // Leer los 10 números enteros
    cout << "Ingrese " << n << " números enteros:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> numeros[i];
    }

    // Leer el entero adicional
    int enteroAdicional;
    cout << "Ingrese un entero adicional: ";
    cin >> enteroAdicional;

    // Verificar si el entero está en el vector
    bool encontrado = false;
    for (int i = 0; i < n; ++i) {
        if (numeros[i] == enteroAdicional) {
            encontrado = true;
            break;
        }
    }

    if (encontrado) {
        cout << "El entero " << enteroAdicional << " está en el vector." << endl;
    } else {
        cout << "El entero " << enteroAdicional << " no está en el vector." << endl;
    }

    return 0;
}

