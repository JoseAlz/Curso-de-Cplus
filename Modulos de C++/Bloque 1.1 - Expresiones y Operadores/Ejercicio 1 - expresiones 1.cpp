//1. Escribe la siguiente expresi�n como expresi�n en C++: (a/b) + 1
#include<iostream>
using namespace std;

int main()
{
	float a,b;
	
	cout<<"Digite el valor de a: "; cin>>a;
	cout<<"Digite el valor de b: ";	cin>>b;
	
	cout.precision(2);//recorta los n�meros despues de la coma decimal a 2
	cout<<"El resultado es: "<< ((b != 0)? ((a / b) + 1) : 0);	
	
	return 0;
}