#include <iostream>
#include <vector>
using namespace std;
//desarrollado por manuel valencia
//version 1.0
//22/06/2024
//Leer 10 números enteros, almacenarlos en un vector. Luego leer un entero y determinar cuántos números de los almacenados en el vector terminan en el mismo dígito que el último valor leído.

int main() {
    // Declarar un vector de enteros para almacenar los números
    vector<int> numeros(10);

    // Leer los 10 números enteros
    cout << "Ingresa 10 números enteros:" << endl;
    for (int i = 0; i < 10; ++i) {
        cin >> numeros[i];
    }

    // Leer un número adicional
    int ultimoNumero;
    cout << "Ingresa un número adicional: ";
    cin >> ultimoNumero;

    // Contar cuántos números del vector terminan en el mismo dígito que el último número
    int contador = 0;
    int ultimoDigito = ultimoNumero % 10; // Obtener el último dígito

    for (int i = 0; i < 10; ++i) {
        if (numeros[i] % 10 == ultimoDigito) {
            contador++;
        }
    }

    // Mostrar el resultado
    cout << "Cantidad de números que terminan en el mismo dígito que el último número: " << contador << endl;

    return 0;
}

