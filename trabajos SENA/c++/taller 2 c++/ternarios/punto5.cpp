#include<iostream>
#include<string>
using namespace std;
//desarrollado por manuel valencia
//version 1.0
//12/06/2024

//USE ternario para validar cadenas por ejemplo para pedir contrase�as, valide con una guardada

int main() {
    string contrasenaGuardada = "manuel";
    string contrasenaIngresada;

    cout << "Por favor ingresa tu contrase�a: ";
    cin >> contrasenaIngresada;

    // Usar el operador ternario para validar la contrase�a
    (contrasenaIngresada == contrasenaGuardada) ? cout << "Acceso concedido" << endl : cout << "Acceso denegado" << endl;

    return 0;
}
