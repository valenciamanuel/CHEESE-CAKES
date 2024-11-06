#include <iostream>
#include <vector>
using namespace std;
//desarrollado por manuel valencia
//version 1.0
//22/06/2024
// Leer 10 n�meros enteros, almacenarlos en un vector y determinar a cu�nto es igual la suma de los d�gitos pares de cada uno de los n�meros le�dos

// Funci�n para calcular la suma de los d�gitos pares de un n�mero
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
    // Declarar un vector de enteros para almacenar los n�meros
    vector<int> numeros(10);

    // Leer los 10 n�meros enteros
    cout << "Ingresa 10 n�meros enteros:" << endl;
    for (int i = 0; i < 10; ++i) {
        cin >> numeros[i];
    }

    // Calcular la suma de los d�gitos pares de cada n�mero
    int sumaTotal = 0;
    for (int i = 0; i < 10; ++i) {
        sumaTotal += sumaDigitosPares(numeros[i]);
    }

    // Mostrar el resultado
    cout << "La suma de los d�gitos pares de los n�meros le�dos es: " << sumaTotal << endl;

    return 0;
}

