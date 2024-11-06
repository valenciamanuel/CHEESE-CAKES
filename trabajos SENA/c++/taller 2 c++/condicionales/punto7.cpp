#include <iostream>
#include <locale.h>
using namespace std;

//desarrollado por manuel valencia
//version 1.0
//12/06/2024

//programa que permite encontrar el numero medio

int main(){
	int a, b, c, medio;
	 cout<<"introduzca 3 valores diferentes"<<endl;
	 //solicitando los valores por separado
	 cout<<"introduzca el primer valor:";
	 cin>>a;
	 cout<<"introduzac el segundo valor:";
	 cin>>b;
	 cout<<"introduzac el tercer valor:";
	 cin>>c;
	 
	 if (a!=b && a!=c && b!=c)//confirmando que sean diferentes
	 //if ternario
	 medio=((a>b && a<c)||(a<b && a>c)) ? a:((b>a && b<c)||(b<a && b>c)) ? b:c;
	 else{
	 	cout<<" \n\n  ERROR HAY VALORES QUE SON IGUALES..."<<endl;
	 	exit(0);
	 }
	 cout<<"valor medio: "<<medio<<endl;
}
