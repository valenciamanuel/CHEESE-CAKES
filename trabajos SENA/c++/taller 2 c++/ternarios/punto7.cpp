#include <iostream>
using namespace std;
//desarrollado por manuel valencia
//version 1.0
//12/06/2024

/*Un ejemplo, comprobar si un car�cter es una letra (tanto may�scula como min�scula)
o no. El programa es similar al del ejercicio 6 anterior,
pero aqu� se combina los operadores �and y or� para obtener
las dos franjas en las que est�n los caracteres de las letras:
*/

int main() {
    char letra;
    cout << "Ingresa un car�cter: ";
    cin >> letra;
//string con if
    if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z')) {
        cout << "Es una letra." << endl;
    } else {
        cout << "No es una letra." << endl;
    }

    return 0;
}
