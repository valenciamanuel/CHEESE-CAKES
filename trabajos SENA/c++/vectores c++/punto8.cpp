#include <iostream>
#include <vector>
using namespace std;
//desarrollado por manuel valencia
//version 1.0
//22/06/2024
// Leer 10 números enteros, almacenarlos en un vector y determinar a cuánto es igual la suma de los dígitos pares de cada uno de los números leídos

// Función para calcular la suma de los dígitos pares de un número
int sumaDigitosPares(int numero) {
    int suma = 0;
    while (numero > 0) {
        int digito = numero % 10;
        if (digito % 2 == 0) {
            suma += digito;
        }
        numero /= 10;
    }
    return suma;
}

int main() {
    // Declarar un vector de enteros para almacenar los números
    vector<int> numeros(10);

    // Leer los 10 números enteros
    cout << "Ingresa 10 números enteros:" << endl;
    for (int i = 0; i < 10; ++i) {
        cin >> numeros[i];
    }

    // Calcular la suma de los dígitos pares de cada número
    int sumaTotal = 0;
    for (int i = 0; i < 10; ++i) {
        sumaTotal += sumaDigitosPares(numeros[i]);
    }

    // Mostrar el resultado
    cout << "La suma de los dígitos pares de los números leídos es: " << sumaTotal << endl;

    return 0;
}

