#include <iostream>
using namespace std;
//desarrollado por manuel valencia
//version 1.0
//12/06/2024

//Solicitar el d�a de la semana, imprimir el correspondiente a los planetas del sistema solar,


int main() {
    char dia;
    cout << "Introduce un d�a de la semana: ";
    cin >> dia;

    
  
    

    // Asociamos los d�as con los planetas
    switch (dia) {
        case 'l':
            cout << "La Luna es el planeta asociado al lunes." << endl;
            break;
        case 'm':
            cout << "Marte es el planeta asociado al martes." << endl;
            break;
        case 'x':
            cout << "Mercurio es el planeta asociado al mi�rcoles." << endl;
            break;
        case 'j':
            cout << "J�piter es el planeta asociado al jueves." << endl;
            break;
        case 'v':
            cout << "Venus es el planeta asociado al viernes." << endl;
            break;
        case 's':
            cout << "Saturno es el planeta asociado al s�bado." << endl;
            break;
        case 'd':
            cout << "El Sol es el planeta asociado al domingo." << endl;
            break;
        default:
            cout << "D�a no v�lido. Introduce un d�a de la semana v�lido." << endl;
    }

    return 0;
}
