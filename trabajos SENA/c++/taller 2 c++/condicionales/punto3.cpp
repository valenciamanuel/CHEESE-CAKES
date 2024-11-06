#include <iostream>
using namespace std;
//desarrollado por manuel valencia
//version 1.0
//12/06/2024

// Lea dos valores reales (x,y) y diga en que cuadrante del espacio cartesiano está

int main(){
	
	float numero1, numero2;
	
	cout<<"ingrese el primer numero:";
	cin>>numero1;
	
	cout<<"ingrese el segundo numero:";
	cin>>numero2;
	
	if (numero1>0 && numero2>0){
		cout<<"esta en el cuadrante 1";
	}
	if (numero1<0 && numero2>0){
		cout<<"esta en el cuadrante 2";
	}
	if (numero1<0 && numero2<0){
			cout<<"esta en el cuadrante 3";
		}
			if (numero1>0 && numero2<0){
				cout<<"esta en el cuadrante 4";
			}
			if (numero1==0 && numero2==0){
				cout<<"no esta en ningun cuadrante";
			}
			if (numero1==0 && numero2>0){
				cout<<"no esta en ningun cuadrante";
			}
			if (numero1==0 && numero2<0){
				cout<<"no esta en ningun cuadrante";
			}
}

