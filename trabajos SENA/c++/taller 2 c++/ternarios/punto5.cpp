#include<iostream>
#include<string>
using namespace std;
//desarrollado por manuel valencia
//version 1.0
//12/06/2024

//USE ternario para validar cadenas por ejemplo para pedir contraseñas, valide con una guardada

int main() {
    string contrasenaGuardada = "manuel";
    string contrasenaIngresada;

    cout << "Por favor ingresa tu contraseña: ";
    cin >> contrasenaIngresada;

    // Usar el operador ternario para validar la contraseña
    (contrasenaIngresada == contrasenaGuardada) ? cout << "Acceso concedido" << endl : cout << "Acceso denegado" << endl;

    return 0;
}
