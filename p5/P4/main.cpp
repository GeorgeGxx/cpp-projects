using namespace std;
#include <iostream>
#include <conio.h>
#include <stdio.h> 
#include <stdlib.h> 

struct empleado{//empleado es el nombre de la estructura
	char nombre[30];
	char sexo[12];
	float salario;
};
int main()
{
	struct empleado emp[5];	//emp es el nombre del arreglo de estructuras
	
	for(int i=0;i<5;i++)
	{
       cout<<"Nombre: ";
	   cin>>emp[i].nombre;
	   cout<<"Sexo: ";
	   cin>>emp[i].sexo;
	   cout<<"Salario:  ";
	   cin>>emp[i].salario;
	}
cout<<"******Imprimiendo reporte de empleados*******\n"<<endl;
cout<<"NOMBRE"<<"\t"<<"SEXO"<<"\t"<<"SALARIO"<<"\n";
for(int i=0;i<5;i++)
	{
       cout<<emp[i].nombre<<"\t"<<emp[i].sexo<<"\t"<<emp[i].salario<<"\n";
	}
system("pause");
}
