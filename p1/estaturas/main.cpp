#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

char nombre[40], sexo, nomalta[40], nombaja[40];
float estatura, peso, estalta, estabaja=4, promedioedades;
float prompesoh, promestamujeres, pesohombres, estamujeres;
float sumaedades;
int edades, contadorm, contadorh, contador;

int main ()
{
	system("cls");
	do
	{
		contador++;
		printf("Captura el nombre de la persona: ");
		gets(nombre);
		fflush(stdin);
		printf("\ncaptura su edad: ");
		scanf("%d",&edades);
		fflush(stdin);
		printf("\ncaptura el peso: ");
		scanf("%f",&peso);
		fflush(stdin);
		printf("\ncaptura la estatura: ");
		scanf("%f",&estatura);
		fflush(stdin);
		printf("\ncaptura f=femenino m=masculino: ");
		scanf("%c",&sexo);
		fflush(stdin);

		if(sexo=='f')
		{
			estamujeres=estamujeres+estatura;
			contadorm++;
		}
		else
		{
			pesohombres=pesohombres+peso;
			contadorh++;

		}

		if(estatura>estalta);
		{
			strcpy(nomalta, nombre);
			estalta=estatura;
		}

		if(estatura<estabaja);
		{
			strcpy(nombaja, nombre);
			estabaja=estatura;
		}

		sumaedades=sumaedades+edades;

	}while(contador<3);

	prompesoh=pesohombres/contadorh;
	promestamujeres=estamujeres/contadorm;
	promedioedades=sumaedades/3;

	printf("el promedio de estatura de mujeres es: %5.2f \n", promestamujeres);
	printf("el promedio del peso de los hombres es: %5.2f \n", prompesoh);
	printf("el promedio de las edades es: %5.2f \n", promedioedades);

}

