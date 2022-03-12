#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

struct promedio{
	float nota1;
	float nota2;
	float nota3;
	float nota4;
};

struct alumno{
	int  codigo;
	char nombre[20];
	char apellido[20];
	char curso[20];
	struct promedio prom;	
}alumno1;

int main(){
	float promedio_alumno;
	float nota1;
	float nota2;
	float nota3;
	float nota4;
	
	cout<<"Digite su nombre:  ";
	cin.getline(alumno1.nombre,20, '\n');
	cout<<"Digite su apellido:  ";
	cin.getline(alumno1.apellido,20, '\n');
	cout<<"Digite su curso:  ";
	cin.getline(alumno1.curso,20, '\n');
	cout<<"Digite su codigo: ";
	cin>>alumno1.codigo;
	
	cout<<"\n.:Notas del Alumno:.\n";
	cout<<"nota1: "; cin>>alumno1.prom.nota1;
	cout<<"nota2: "; cin>>alumno1.prom.nota2;
	cout<<"nota3: "; cin>>alumno1.prom.nota3;
	cout<<"nota4: "; cin>>alumno1.prom.nota4;
	
	promedio_alumno = (alumno1.prom.nota1+alumno1.prom.nota2+alumno1.prom.nota3+alumno1.prom.nota4)/4;
	
	cout<<"\nDatos del Alumno\n";
	cout<<"codigo:  "<<alumno1.codigo<<endl;
	cout<<"nombre:  "<<alumno1.nombre<<endl;
	cout<<"apellido:  "<<alumno1.apellido<<endl;
	cout<<"curso:  "<<alumno1.curso<<endl;
	cout<<"Promedio: "<<promedio_alumno;
	
	printf("   __ ");
	
if (promedio_alumno>=60)
{
printf("aprobado");
}
else
{
	printf("reprobado");
}
	
	getch();
	return 0;
	
	
}
