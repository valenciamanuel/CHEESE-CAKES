#include <iostream>
#include <string>
using namespace std;
//desarrollado por manuel valencia
//version 1.0
//12/06/2024

//Ingresar por teclado dos números enteros.
//Si los valores son iguales sumarlos, sino multiplicarlos.
//Emplear el operador condicional ?: para guardar en una variable el resultado.


int main(){
	//definiendo la variable
	int num1, num2, iguales;
	cout<<"ingrese el primer numero:";
	cin>>num1;
		cout<<"ingrese el segundo numero:";
	cin>>num2;
	//ternarios
	iguales=(num1==num2)?num1+num2:num1*num2;
	cout<<iguales;
}
