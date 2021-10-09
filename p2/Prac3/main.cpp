#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

char letra;

int main()
{
	do
	{
		system("cls");
		fflush(stdin);
		printf("captura la letra c ");
		scanf("%c",&letra);
		if(letra!='c')
		{
			printf("que sope digita la letra c \n");
			system("pause");
		}
	}while(letra!='c');//termina ciclo do
	system("cls");
	printf("gracias adios ");
}
