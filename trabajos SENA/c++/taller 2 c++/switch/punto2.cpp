#include <iostream>
#include <locale.h>
using namespace std;
//desarrollado por manuel valencia
//version 1.0
//12/06/2024

//Que pida un número del 1 al 12 y diga el mes correspondiente.

int main() {
	setlocale(LC_ALL, "SPANISH");
    int numero;
    cout << "Ingresa un número del 1 al 12: ";
    cin >> numero;

    switch (numero) {
        case 1:
            cout << "enero" << endl;
            break;
        case 2:
            cout << "febrero" << endl;
            break;
        case 3:
            cout << "Marzo" << endl;
            break;
        case 4:
            cout << "abril" << endl;
            break;
        case 5:
            cout << "amyo" << endl;
            break;
        case 6:
            cout << "junio" << endl;
            break;
        case 7:
            cout << "julio" << endl;
            break;
        case 8:
        	cout << "agosto" << endl;
        	break;
        case 9:
        	cout << "septiembre" << endl;
        	break; 	
         case 10:
        	cout << "octubre" << endl;
        	break;
         case 11:
        	cout << "noviembre" << endl;
        	break;
         case 8+12:
        	cout << "diciembre" << endl;
        	break;
        default:
            cout << "Número inválido. Debe estar entre 1 y 12." << endl;
    }

    return 0;
}
