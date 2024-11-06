#include <iostream>
#include <locale.h>
using namespace std;
//desarrollado por manuel valencia
//version 1.0
//12/06/2024

//Que pida un número del 1 al 7 y diga el día de la semana correspondiente.

int main() {
	setlocale(LC_ALL, "SPANISH");
    int numero;
    cout << "Ingresa un número del 1 al 7: ";
    cin >> numero;

    switch (numero) {
        case 1:
            cout << "Lunes" << endl;
            break;
        case 2:
            cout << "Martes" << endl;
            break;
        case 3:
            cout << "Miércoles" << endl;
            break;
        case 4:
            cout << "Jueves" << endl;
            break;
        case 5:
            cout << "Viernes" << endl;
            break;
        case 6:
            cout << "Sábado" << endl;
            break;
        case 7:
            cout << "Domingo" << endl;
            break;
        default:
            cout << "Número inválido. Debe estar entre 1 y 7." << endl;
    }

    return 0;
}
