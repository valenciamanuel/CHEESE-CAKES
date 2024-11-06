#include <iostream>
#include <vector>
using namespace std;
//desarrollado por manuel valencia
//version 1.0
//22/06/2024
//Leer 10 n�meros enteros, almacenarlos en un vector. Luego leer un entero y determinar cu�ntos divisores exactos tiene este �ltimo n�mero entre los valores almacenados en el vector.

// Funci�n para contar los divisores exactos de un n�mero
int contarDivisores(int num) {
    int divisores = 0;
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            divisores++;
        }
    }
    return divisores;
}

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

    // Contar los divisores del entero adicional
    int divisores = contarDivisores(enteroAdicional);

    cout << "El n�mero " << enteroAdicional << " tiene " << divisores << " divisores exactos." << endl;

    return 0;
}

