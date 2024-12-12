#include<iostream>
#include <math.h>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int pe1,pe2,pe3,crp;
	cout<<"La primera evalucaion vale 10% \n";
	cout<<"La segunda evaluacion vale 10 \n";
	cout<<"La evalucaion final vale 80% \n";
	cout<<"Dame el porcentaje de la primera evaluacion: ";
	cin>>pe1;
	cout<<"Dame el porcentaje de la segunda evaluacion:  ";
	cin>>pe2;
	cout<<"Dame el porcentaje de la evaluacion final: ";
	cin>>pe3;
	crp=trunc((pe1 % 10) /100);
	crp=trunc((pe2 % 10) /100);
	crp=trunc((pe3 % 80) /100);
	crp=pe1+pe2+pe3;
	cout<<"La calificación de la residencia profesional es: "<<crp;
	printf("\nLa calificación de la residencia profesional es: %d",crp);
	return 0;
	//Juan Pablo Urrutia Medrano
	//24041248
}