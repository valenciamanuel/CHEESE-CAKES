#include <iostream>
#include <locale.h>
using namespace std;
//desarrollado por manuel valencia
//version 1.0
//12/06/2024

//Solicitar por teclado un color y determinar si pertenece a los colores del Arco Iris
int main() {
	setlocale(LC_ALL, "SPANISH");
    char color;
    //solicitando el color
    cout << "Ingresa una color: ";
    cin >> color;
    
    color=tolower(color);
//switch
    switch (color) {//switch para las vocales
        case 'r':
            cout << "es del arcoiris" << endl;
            break;
        case 'n':
            cout << "es del arcoiris" << endl;
            break;
        case 'a':
            cout << "es del arcoiris" << endl;
            break;
        case 'v':
            cout << "es del arcoiris" << endl;
            break;
        case 'z':
            cout << "es del arcoiris" << endl;
            break;
        case 'i':
            cout << "es del arcoiris" << endl;
            break;
        case 'o':
            cout << "es del arcoiris" << endl;
            break;
            
        default:
            cout << "No pertenece al arcoiris" << endl;
    }

    return 0;
}
