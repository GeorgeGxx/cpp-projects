using namespace std;
#include <iostream>
#include <conio.h>
#include <stdio.h> 
#include <stdlib.h> //Observe que seguimos utilizando las librerías básicas

int main()
{
int prom,suma=0;// Declaramos una variable para guardar la suma y otra para calcular el promedio
int calificaciones[10];//Declaramos el arreglo de 10 posiciones
		for(int i=0;i<10;i++)// Con este for hacemos el llenado del arreglo
		{
			cout<<"Teclee calificacion:"<<endl;
			cin>>calificaciones[i];
				
		}
cout<<"Desplegando calificaciones capturadas"<<endl;	
		for(int i=0;i<10;i++)//Con este for desplegamos las calificaciones capturadas
		{
			cout<<calificaciones[i]<<endl;
			suma=suma+calificaciones[i];// En la variable suma vamos acumulando la sumatoria de todos los valores
		}	
prom=suma/10;//Calculamos el promedio dividiendo la suma entre 10
cout<<"El promedio de calificaciones es:"<<prom;//Desplegamos el promedio en pantalla			
system("pause");
}
