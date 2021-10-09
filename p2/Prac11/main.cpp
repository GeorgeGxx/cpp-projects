#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

float peso;
int menos50,entre50y69,mas70,contador;

int main()
{
	for(contador=1;contador<=10;contador++)
	{
	
		system("cls");
		fflush(stdin);
		printf("captura el peso del alumno ");
		scanf("%f",&peso);
		if(peso<50)
		{
			menos50++;
		}
		else if(peso>=50 && peso<70)
		{
			entre50y69++;
		}
		else
		{
			mas70++;
		}
	}//termina for
	
	printf("alumnos con peso menor a 50 kg son %d \n",menos50);
	printf("alumnos con peso entre 50 y 69 kg son %d \n",entre50y69);
	printf("alumnos con peso mayor a 70 kg son %d \n",mas70);
}
