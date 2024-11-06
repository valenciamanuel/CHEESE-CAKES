#include <iostream>
#include <locale.h>
using namespace std;

int main() {
			setlocale(LC_ALL, "spanish");
    char letra;
    cout << "Ingresa un car�cter alfab�tico: ";
    cin >> letra;

    if (isalpha(letra)) {
        if (islower(letra)) {
            // Si es min�scula, mostramos su equivalente en may�scula
            cout << "Equivalente en may�scula: " << char(toupper(letra)) << endl;
        } else {
            // Si es may�scula, mostramos su equivalente en min�scula
            cout << "Equivalente en min�scula: " << char(tolower(letra)) << endl;
        }
    } else {
        cout << "No es un car�cter alfab�tico v�lido." << endl;
    }

    return 0;
}
