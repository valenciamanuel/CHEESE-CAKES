#include <iostream>
#include <locale.h>
using namespace std;
//desarrollado por manuel valencia
//version 1.0
//12/06/2024

//Que pida una letra y si es vocal que muestre una palabra con esa vocal.

int main() {
	setlocale(LC_ALL, "SPANISH");
    char letra;
    //solicitando la letra
    cout << "Ingresa una letra: ";
    cin >> letra;
    
    letra=tolower(letra);

    switch (letra) {//switch para las vocales
        case 'a':
            cout << "araña" << endl;
            break;
        case 'e':
            cout << "elefante" << endl;
            break;
        case 'i':
            cout << "iglesia" << endl;
            break;
        case 'o':
            cout << "ola" << endl;
            break;
        case 'u':
            cout << "universo" << endl;
            break;
            
        default:
            cout << "No es una vocal" << endl;
    }

    return 0;
}
