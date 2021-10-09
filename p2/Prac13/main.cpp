#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

int annios;
char otro;

int main()
{
	do
	{
		system("cls");
		printf("cuantos annios de antiguedad llevas acumulados \n");
		scanf("%d",&annios);
		if(annios>=10)
		{
			printf("otorga credito de $1000000 \n");
		}
		
		if(annios>=3 && annios<10)
		{
			printf("otorga credito de $500000 \n");
		}
		
		if(annios<3)
		{
			printf("no otorga creditos \n");
		}
		
		
		
		
		fflush(stdin);
		printf("quieres calcular otro s/n ");
		scanf("%c",&otro);
		
	}while(otro=='s');
}
