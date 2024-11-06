#include <iostream>
#include <vector>
//desarrollado por manuel valencia
//version 1.0
//22/06/2024
//Leer 10 números enteros, almacenarlos en un vector y calcularle el factorial a cada uno de los números leídos almacenándolos en otro vector.
using namespace std;

// Función para calcular el factorial de un número.
int factorial(int num) {
    int result = 1;
    for (int i = 1; i <= num; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    vector<int> numeros(10);
    vector<int> factoriales(10);

    cout << "Ingrese 10 numeros enteros:" << endl;
    for (int i = 0; i < 10; ++i) {
        cin >> numeros[i];
        factoriales[i] = factorial(numeros[i]);
    }

    cout << "Factoriales calculados:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Factorial de " << numeros[i] << ": " << factoriales[i] << endl;
    }

    return 0;
}

