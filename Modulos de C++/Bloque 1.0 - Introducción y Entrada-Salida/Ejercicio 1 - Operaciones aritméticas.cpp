/*1. Escribe un programa que lea de la entrada est�ndar dos n�meros y muestre 
en la salida est�ndar su suma, resta, multiplicaci�n y divisi�n.*/
#include<iostream>
using namespace std;

int main()
{
	int n1, n2;
	
	cout<<"Digite un numero: "; cin>>n1;
	cout<<"Digite otro numero: "; cin>>n2;
	
	cout<<"\nLa suma es: "<< (n1 + n2)
		<<"\nLa resta es: "<< (n1 - n2)
		<<"\nLa multiplicacion es: "<< (n1 * n2)
		<<"\nLa division es: "<< ((n2 != 0)? (n1 / n2) : 0); // si sale cero es porque es un decimal tipo 0.12 o 0.23444 cosas asi. 
		
	return 0;
}