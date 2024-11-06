#include <iostream>
using namespace std;
//desarrollado por manuel valencia
//version 1.0
//12/06/2024

// lea un entero y diga si es positivo, negativo, nulo, par o impar


int main(){
	//definiendo la variable
	int numero_entero;
	
	cout<<"ingrese un numero entero:\n";//solicitando el numero a ingresar
	
	cin>>numero_entero;
	
	if (numero_entero<0){//comenzando el if
		cout<<"el numnero "<<numero_entero<<" es negativo:\n";//el numero es negativo
	 
}
		 if (numero_entero>0){
			
			cout<<"el numero "<<numero_entero<<" es positivo:\n";//el numero es positivo
	}
			 if (numero_entero %2 ==0){
				
				cout<<"el numero "<<numero_entero<<" es par:\n";//el numero par
		}
				 if (numero_entero %2 !=0){
			
					cout<<"el numero "<<numero_entero<<" es impar:\n";//el numero es impar
				}
				if (numero_entero==0){
					cout<<"el numero "<<numero_entero<<" es nulo:\n";//el numero es nulo
				}
			}
	 
		
	




