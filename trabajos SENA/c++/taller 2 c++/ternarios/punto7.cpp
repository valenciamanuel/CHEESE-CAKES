#include <iostream>
using namespace std;
//desarrollado por manuel valencia
//version 1.0
//12/06/2024

/*Un ejemplo, comprobar si un carácter es una letra (tanto mayúscula como minúscula)
o no. El programa es similar al del ejercicio 6 anterior,
pero aquí se combina los operadores “and y or” para obtener
las dos franjas en las que están los caracteres de las letras:
*/

int main() {
    char letra;
    cout << "Ingresa un carácter: ";
    cin >> letra;
//string con if
    if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z')) {
        cout << "Es una letra." << endl;
    } else {
        cout << "No es una letra." << endl;
    }

    return 0;
}
