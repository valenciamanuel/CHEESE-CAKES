#include <iostream>
#include <vector>
using namespace std;
//desarrollado por manuel valencia
//version 1.0
//22/06/2024
//Leer 10 n�meros enteros, almacenarlos en un vector. Luego leer un entero y determinar cu�ntos n�meros de los almacenados en el vector terminan en el mismo d�gito que el �ltimo valor le�do.

int main() {
    // Declarar un vector de enteros para almacenar los n�meros
    vector<int> numeros(10);

    // Leer los 10 n�meros enteros
    cout << "Ingresa 10 n�meros enteros:" << endl;
    for (int i = 0; i < 10; ++i) {
        cin >> numeros[i];
    }

    // Leer un n�mero adicional
    int ultimoNumero;
    cout << "Ingresa un n�mero adicional: ";
    cin >> ultimoNumero;

    // Contar cu�ntos n�meros del vector terminan en el mismo d�gito que el �ltimo n�mero
    int contador = 0;
    int ultimoDigito = ultimoNumero % 10; // Obtener el �ltimo d�gito

    for (int i = 0; i < 10; ++i) {
        if (numeros[i] % 10 == ultimoDigito) {
            contador++;
        }
    }

    // Mostrar el resultado
    cout << "Cantidad de n�meros que terminan en el mismo d�gito que el �ltimo n�mero: " << contador << endl;

    return 0;
}

