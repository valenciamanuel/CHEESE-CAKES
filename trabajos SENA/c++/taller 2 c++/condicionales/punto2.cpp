#include <iostream>
using namespace std;
//desarrollado por manuel valencia
//version 1.0
//12/06/2024

// Lea dos números y diga si el primero es múltiplo del segundo

int main(){
	int numero1, numero2;
	
	cout<<"ingrese el primer numero:";
	cin>>numero1;
	
	cout<<"ingrese el segundo numero:";
	cin>>numero2;
	
	if (numero1 % numero2 ==0){
		cout<<"el numero "<<numero1<<" si es multiplo de "<<numero2;
	}
		else{
			cout<<"el numero "<<numero1<<" no es multiplo del "<<numero2;
		} 
		
	}
	
	

