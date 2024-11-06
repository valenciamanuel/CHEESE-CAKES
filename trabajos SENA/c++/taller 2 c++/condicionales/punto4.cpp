#include <iostream>
#include <locale.h>
using namespace std;
//desarrollado por manuel valencia
//version 1.0
//12/06/2024

//Dada la fecha de hoy, calcular la fecha del día siguiente.  (suponga que el año no es bisiesto)

int main() {
		setlocale(LC_ALL, "spanish");
    int dia, mes, anio;
    cout << "Ingresa la fecha actual (día mes año): ";
    cin >> dia >> mes >> anio;

    // Suponemos que el año no es bisiesto
    int diasPorMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Verificamos si es el último día del mes
    if (dia == diasPorMes[mes]) {
        dia = 1;
        mes++;
        if (mes > 12) {
            mes = 1;
            anio++;
        }
    } else {
        dia++;
    }

    cout << "La fecha del día siguiente es: " << dia << "/" << mes << "/" << anio << endl;
    //si el dia y el mes son mayores mostrara la fecha no es valida
    if (mes>12){//mes mayor a 12 no es valido
    }
    	if (dia>31){//dia mayor a 31 no es valido
    	cout<<"la fecha no es valida";
    	
	}
	
	

    return 0;
    
    
}
