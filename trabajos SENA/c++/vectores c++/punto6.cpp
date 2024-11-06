#include <iostream>
#include <vector>
using namespace std;
//desarrollado por manuel valencia
//version 1.0
//22/06/2024
//Leer 10 números enteros, almacenarlos en un vector. Luego leer un entero y determinar cuántos divisores exactos tiene este último número entre los valores almacenados en el vector.

// Función para contar los divisores exactos de un número
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

    // Contar los divisores del entero adicional
    int divisores = contarDivisores(enteroAdicional);

    cout << "El número " << enteroAdicional << " tiene " << divisores << " divisores exactos." << endl;

    return 0;
}

