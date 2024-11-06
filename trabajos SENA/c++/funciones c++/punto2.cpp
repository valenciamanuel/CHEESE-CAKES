#include <iostream>
using namespace std;
//desarrollado por manuel valencia
//version 1.0
//22/06/2024
// Funci�n para verificar si un n�mero es primo
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
    cout << "Ingresa un n�mero para verificar si es primo: ";
    cin >> n;

    if (esPrimo(n)) {
        cout << n << " es un n�mero primo." << endl;
    } else {
        cout << n << " no es un n�mero primo." << endl;
    }

    return 0;
}

