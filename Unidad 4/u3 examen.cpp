//juan pablo urrutia medrano 
//24041248
/*examen u3 suma de tiempos de un viaje en dos escalas*/
#include<windows.h>
#include <iostream>
using namespace std;
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int h1, h2, m1, m2, mt, ht;
	char otro;
	do{
		system("cls");
		cout<<"Dame la cantidad de horas de la primera escala: ";
		cin>>h1;
		do{
			gotoxy(40,1);cout<<"    ";
			gotoxy(0,1);
			cout<<"Dame los minutos de la primera escala: ";
			cin>>m1;
		}while(m1<0 or m1>59);
		cout<<"Dame la cantidad de horas de la escala final: ";
		cin>>h2;
		do{
			gotoxy(37,3);cout<<"    ";
			gotoxy(0,3);
			cout<<"Dame los minutos de la escala final: ";
			cin>>m2;
		}while(m2<0 or m2>59);
		ht=h1+h2;
		mt=m1+m2;
		if(mt>59)
		{
			mt=mt-60;
			ht++;
		}	
		printf("El tiempo total es de: %02d:%02d",ht,mt);
		cout<<"\n¿Deseas hacer otro cálculo <S/N>?";
		cin>>otro;	
	}while(otro=='S' or otro=='s');
	return 0;
}
