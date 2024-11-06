#include <iostream>
using namespace std;
//desarrollado por manuel valencia
//version 1.0
//22/06/2024
// Función para verificar si un número es primo
bool esPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Ingresa un número para verificar si es primo: ";
    cin >> n;

    if (esPrimo(n)) {
        cout << n << " es un número primo." << endl;
    } else {
        cout << n << " no es un número primo." << endl;
    }

    return 0;
}

