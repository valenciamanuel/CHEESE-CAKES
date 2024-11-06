#include <iostream>
#include <locale.h>
using namespace std;

int main() {
			setlocale(LC_ALL, "spanish");
    char letra;
    cout << "Ingresa un carácter alfabético: ";
    cin >> letra;

    if (isalpha(letra)) {
        if (islower(letra)) {
            // Si es minúscula, mostramos su equivalente en mayúscula
            cout << "Equivalente en mayúscula: " << char(toupper(letra)) << endl;
        } else {
            // Si es mayúscula, mostramos su equivalente en minúscula
            cout << "Equivalente en minúscula: " << char(tolower(letra)) << endl;
        }
    } else {
        cout << "No es un carácter alfabético válido." << endl;
    }

    return 0;
}
