#include <iostream>
#include <locale.h>
using namespace std;
//desarrollado por manuel valencia
//version 1.0
//12/06/2024

//Que muestre un men� donde las opciones sean �Equil�tero�, �Is�sceles� y �Escaleno�, 
//pida una opci�n y calcule el per�metro del tri�ngulo seleccionado, solicitando los datos respectivos

int main() {
		setlocale(LC_ALL, "SPANISH");
    int opcion;
    float lado1, lado2, lado3, perimetro;
//mostrando las opciones y solicitando el tipo
    cout << "Men�:" << endl;
    cout << "1. Equil�tero" << endl;
    cout << "2. Is�sceles" << endl;
    cout << "3. Escaleno" << endl;
    cout << "Selecciona una opci�n (1/2/3): ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Ingresa la longitud del lado del tri�ngulo equil�tero: ";//equilatero
            cin >> lado1;
            perimetro = 3 * lado1;
            break;
        case 2:
            cout << "Ingresa la longitud de los dos lados iguales del tri�ngulo is�sceles:" << endl;//isoceles
            cout << "Lado 1: ";
            cin >> lado1;
            cout << "Lado 2: ";
            cin >> lado2;
            cout << "Ingresa la longitud del tercer lado: ";
            cin >> lado3;
            perimetro = lado1 + lado2 + lado3;
            break;
        case 3:
            cout << "Ingresa la longitud de los tres lados del tri�ngulo escaleno:" << endl;//escaleno
            cout << "Lado 1: ";
            cin >> lado1;
            cout << "Lado 2: ";
            cin >> lado2;
            cout << "Lado 3: ";
            cin >> lado3;
            perimetro = lado1 + lado2 + lado3;
            break;
        default:
            cout << "Opci�n inv�lida. Debes seleccionar 1, 2 o 3." << endl;
            return 1;
    }

    cout << "El per�metro del tri�ngulo es: " << perimetro << endl;

    return 0;
}
