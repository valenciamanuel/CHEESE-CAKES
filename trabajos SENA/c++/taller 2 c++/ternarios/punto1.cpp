#include <iostream>
#include <string>
using namespace std;
//desarrollado por manuel valencia
//version 1.0
//12/06/2024

//operador ternario ?;cond;v;f para hallar el mayor de dos números


int main(){
	//definiendo la variable
	int num1, num2, mayor;
	cout<<"ingrese el primer numero:";
	cin>>num1;
		cout<<"ingrese el segundo numero:";
	cin>>num2;
	//ternarios
	mayor=(num1>num2)? num1:num2;
	
	cout<<"el mayor es "<<mayor;
}
