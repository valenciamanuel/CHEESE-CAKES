#include <iostream>
using namespace std;
//desarrollado por manuel valencia
//version 1.0
//22/06/2024
// Función para calcular el factorial
long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Ingresa un numero para calcular su factorial: ";
    cin >> num;

    if (num < 0) {
        cout << "El factorial no está definido para números negativos." << endl;
    } else {
        cout << "El factorial de " << num << " es " << factorial(num) << endl;
    }

    return 0;
}

