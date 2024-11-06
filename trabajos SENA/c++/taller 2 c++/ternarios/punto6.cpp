#include <iostream>
using namespace std;
//desarrollado por manuel valencia
//version 1.0
//12/06/2024

//escriba una vocal min�scula, y comprobaremos que lo que ha escrito el usuario
//es efectivamente una vocal min�scula. O CASO CONTRARIO OTRO VALOR.
int main() {
    char caracter;

    // Solicitar al usuario que ingrese un car�cter
    cout << "Ingresa un caracter: ";
    cin >> caracter;

    // Verificar si es una vocal min�scula
    bool esVocalMinuscula = (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u');

    // Mostrar el resultado utilizando el operador ternario
    cout << "El caracter ingresado " << (esVocalMinuscula ? "es" : "no es") << " una vocal minuscula." << endl;

    return 0;
}
