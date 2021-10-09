#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

int numero, contador;
float promedio, suma;
int main()
{
	do
	{
		system("cls");
		fflush(stdin);
		printf("captura un numero ");
		scanf("%d",&numero);
		if(numero>0)
		{
			contador++;
			suma=suma+numero;
		}
						
	}while(numero!=0);
	
	promedio=suma/contador;
	printf("el promedio %.2f \n",promedio);
}
