#include <iostream>
#include <vector>
//desarrollado por manuel valencia
//version 1.0
//22/06/2024
//Leer 10 n�meros enteros, almacenarlos en un vector y determinar a cu�nto es igual el promedio entero de los factoriales de cada uno de los n�meros le�dos.

using namespace std;

// Funci�n para calcular el factorial de un n�mero
int factorial(int num) {
    int result = 1;
    for (int i = 1; i <= num; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    const int n = 10; // N�mero de elementos a leer
    vector<int> numeros(n);

    // Leer los 10 n�meros enteros
    cout << "Ingrese " << n << " n�meros enteros:" << endl;
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


