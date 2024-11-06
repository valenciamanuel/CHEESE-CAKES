#include <iostream>
#include <vector>
//desarrollado por manuel valencia
//version 1.0
//22/06/2024
//Leer 10 números enteros, almacenarlos en un vector y determinar a cuánto es igual el promedio entero de los factoriales de cada uno de los números leídos.

using namespace std;

// Función para calcular el factorial de un número
int factorial(int num) {
    int result = 1;
    for (int i = 1; i <= num; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    const int n = 10; // Número de elementos a leer
    vector<int> numeros(n);

    // Leer los 10 números enteros
    cout << "Ingrese " << n << " números enteros:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> numeros[i];
    }

    // Calcular los factoriales y sumarlos
    int sumaFactoriales = 0;
    for (int i = 0; i < n; ++i) {
        sumaFactoriales += factorial(numeros[i]);
    }

    // Calcular el promedio entero de los factoriales
    int promedio = sumaFactoriales / n;

    cout << "El promedio entero de los factoriales es: " << promedio << endl;

    return 0;
}


