#include <iostream>
using namespace std;
//desarrollado por manuel valencia
//version 1.0
//22/06/2024
// Función para verificar si un número es par o impar
bool esPar(int numero) {
    return numero % 2 == 0;
}

int main() {
    int num = 7; // Cambia este valor al número que desees verificar
    if (esPar(num)) {
        cout << num << " es un número par." << endl;
    } else {
        cout << num << " es un número impar." << endl;
    }
    return 0;
}

