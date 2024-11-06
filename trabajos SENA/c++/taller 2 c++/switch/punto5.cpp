#include <iostream>
#include <locale.h>
using namespace std;
//desarrollado por manuel valencia
//version 1.0
//12/06/2024

//Que muestre un menú con las operaciones básicas y calcule esta operación con dos valores
//pedidos para la operación.

int main() {
		setlocale(LC_ALL, "SPANISH");
    int opcion;
    float numero1, numero2, resultado;
//mostrando las opciones y solicitando el tipo
    cout << "Menú:" << endl;
    cout << "1. suma" << endl;
    cout << "2. resta" << endl;
    cout << "3. multiplicacion" << endl;
    cout << "4 division" << endl;
    cout << "Selecciona una opción (1/2/3/4): ";
    cin >> opcion;
    
   
    //mostrando segun lo elegido
    switch (opcion){
    	case 1://suma
    		 cout<<"ingre el primer numero:";
    cin>>numero1;
    cout<<"ingrese el segundo numero:";
    cin>>numero2;
    		resultado=numero1+numero2;
    		cout<<resultado;
    		break;
    	case 2://resta
    		 cout<<"ingre el primer numero:";
    cin>>numero1;
    cout<<"ingrese el segundo numero:";
    cin>>numero2;
    	resultado=numero1-numero2;
    		cout<<resultado;
    	break;
    	case 3://multiplicacion
    		 cout<<"ingre el primer numero:";
    cin>>numero1;
    cout<<"ingrese el segundo numero:";
    cin>>numero2;
    	resultado=numero1*numero2;
    		cout<<resultado;
    	break;
    	case 4://division
    		 cout<<"ingre el primer numero:";
    cin>>numero1;
    cout<<"ingrese el segundo numero:";
    cin>>numero2;
    	resultado=numero1/numero2;
    		cout<<resultado;
    	break;
    default:
    	cout<<"elija uno de las operaciones basicas"<<endl;
    	return 1;
	}
	return 0;
}
