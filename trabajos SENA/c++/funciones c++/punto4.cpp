#include <iostream>
using namespace std;
//desarrollado por manuel valencia
//version 1.0
//22/06/2024
// Funci�n para verificar si un n�mero es par o impar
bool esPar(int numero) {
    return numero % 2 == 0;
}

int main() {
    int num = 7; // Cambia este valor al n�mero que desees verificar
    if (esPar(num)) {
        cout << num << " es un n�mero par." << endl;
    } else {
        cout << num << " es un n�mero impar." << endl;
    }
    return 0;
}

