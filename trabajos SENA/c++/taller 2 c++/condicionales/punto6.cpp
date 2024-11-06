#include <iostream>
#include <locale.h>
using namespace std;
//desarrollado por manuel valencia
//version 1.0
//12/06/2024

//Validar que, dada una fecha, esta sea correcta. 

int main() {
		setlocale(LC_ALL, "spanish");
		//solicitando la fecha
		int dia, mes, anio;
		 cout << "Ingresa la fecha actual (día mes año): ";
    cin >> dia >> mes >> anio;
    //definiendo si el dia es o no valido
    if (dia<=31 && dia>0){
    		cout<<" el dia es valido, ";
    }
    		else{
    			cout<<" el dia no es valido, ";
    		}
    		//definiendo si el mes es o no valido
    	if (mes<=12 && mes>0){
    			cout<<" el mes es valido, ";
    	}
    		else{
    			cout<<" el mes no es valido, ";
    		}
    		//definiendo si el año es valido
    		if (anio>0){
    				cout<<" el año es valida, ";
    		}
    				else{
    			cout<<" el año no es valido, ";
    		}
    			
    
	}
