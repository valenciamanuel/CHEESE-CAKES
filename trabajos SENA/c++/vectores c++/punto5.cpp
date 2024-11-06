#include <iostream>
#include <vector>
//desarrollado por manuel valencia
//version 1.0
//22/06/2024
//. Leer 10 n�meros enteros, almacenarlos en un vector. Luego leer un entero y determinar si este �ltimo entero se encuentra entre los 10 valores almacenados en el vector.
using namespace std;

int main() {
    const int n = 10; // N�mero de elementos a leer
    vector<int> numeros(n);

    // Leer los 10 n�meros enteros
    cout << "Ingrese " << n << " n�meros enteros:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> numeros[i];
    }

    // Leer el entero adicional
    int enteroAdicional;
    cout << "Ingrese un entero adicional: ";
    cin >> enteroAdicional;

    // Verificar si el entero est� en el vector
    bool encontrado = false;
    for (int i = 0; i < n; ++i) {
        if (numeros[i] == enteroAdicional) {
            encontrado = true;
            break;
        }
    }

    if (encontrado) {
        cout << "El entero " << enteroAdicional << " est� en el vector." << endl;
    } else {
        cout << "El entero " << enteroAdicional << " no est� en el vector." << endl;
    }

    return 0;
}

