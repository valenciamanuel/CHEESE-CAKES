#include <iostream>
using namespace std;
//desarrollado por manuel valencia
//version 1.0
//22/06/2024

// Función para sumar dos números
double suma(double a, double b) {
    return a + b;
}

// Función para restar dos números
double resta(double a, double b) {
    return a - b;
}

int main() {
    double num1, num2;
    cout << "Ingresa el primer número: ";
    cin >> num1;
    cout << "Ingresa el segundo número: ";
    cin >> num2;

    cout << "La suma es: " << suma(num1, num2) << endl;
    cout << "La resta es: " << resta(num1, num2) << endl;

    return 0;
}

