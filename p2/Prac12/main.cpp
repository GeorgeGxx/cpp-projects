#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

int km;
char otro;

int main()
{
	do
	{
		system("cls");
		printf("cuantos km llevas acumulados \n");
		scanf("%d",&km);
		if(km>=15000)
		{
			printf("viaje redondo a cancun \n");
		}
		if(km<15000 && km>10000)
		{
			printf("viaje redondo a ixtapa \n");
		}
		
		if(km<=10000 && km>5000)
		{
			printf("viaje redondo a acapulco \n");
		}
		
		if(km<=5000)
		{
			printf("viaje a xochimilco \n");
		}
		
		
		fflush(stdin);
		printf("quieres calcular otro s/n ");
		scanf("%c",&otro);
		
	}while(otro=='s');
}
