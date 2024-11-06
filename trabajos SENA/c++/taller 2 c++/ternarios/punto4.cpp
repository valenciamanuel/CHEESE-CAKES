#include <iostream>
#include <string>
using namespace std;
//desarrollado por manuel valencia
//version 1.0
//12/06/2024

/*Tras declarar las variables que pueden mostrar los resultados,
Escribe un número del 10 al 20
mediante el operador terciario, (r?v:f) mostramos en pantalla el valor de r
si el usuario ha escrito "bien" o "mal" con respecto a lo que le hemos pedido.
*/

int main() {
    int numero;
    cout << "Escribe un numero del 10 al 20: ";
    cin >> numero;
//string
    string respuesta = (numero >= 10 && numero <= 20) ? "bien" : "mal";

    cout << "Respuesta: " << respuesta << endl;

    return 0;
}
