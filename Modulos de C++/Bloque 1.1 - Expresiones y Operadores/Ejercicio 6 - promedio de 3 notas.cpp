/*6. Escriba un programa que lea las tres notas de un alumno y calcule la 
nota final media de dicho alumno*/
#include<iostream>
using namespace std;

int main()
{
	float nota1, nota2, nota3;
	
	cout<<"Ingrese nota1: "; cin>>nota1;
	cout<<"Ingrese nota2: "; cin>>nota2;
	cout<<"Ingrese nota3: "; cin>>nota3;
	
	cout<<"la final media es:"<<((nota1 + nota2 + nota3) / 3);
	
	return 0;
}