#include <iostream>
#include <string>
using namespace std;
//desarrollado por manuel valencia
//version 1.0
//12/06/2024

//operador ternario ?;cond;v;f para hallar el mayor de tres números incluye validación

int main() {
    string num1, num2, num3;
    cout << "Introduce el primer numero: ";
    cin >> num1;
    cout << "Introduce el segundo numero: ";
    cin >> num2;
    cout << "Introduce el tercer numero: ";
    cin >> num3;
//string
    string mayor = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    cout << "El mayor de los tres numeros es: " << mayor << endl;

    return 0;
}
