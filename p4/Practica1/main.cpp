#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>

char nombre[30], sexo, nomalta[30], nombaja[30];
int edades, contadorm, contadorh, contador;
float peso, estatura, estalta, estbaja=4, promedioedades, prompesoh, promestamujeres, pesohombres, estamujeres, sumaedades;

int main()
{
	system("cls");
	do
	{
		contador++;
		printf("captura el nombre de la persona ");
		gets(nombre);
		fflush(stdin);
		printf("\ncaptura su edad ");
		scanf("%d",&edades);
		fflush(stdin);
		printf("\ncaptura el peso ");
		scanf("%f",&peso);
		fflush(stdin);
		printf("\ncaptura la estatura ");
		scanf("%f",&estatura);
		fflush(stdin);
		printf("\ncaptura f=femenino m=masculino ");
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
		
		if(estatura<estbaja)
		{
			strcpy(nombaja, nombre);
			estbaja=estatura;
		}
		
		sumaedades=sumaedades+edades;
	}while(contador<10);
	
	prompesoh=pesohombres/contadorh;
	promestamujeres=estamujeres/contadorm;
	promedioedades=sumaedades/10;
	
	printf("el promedio del peso de los hombres es: %5.2f \n", prompesoh);
	printf("el promedio de estatura de mujeres es: %5.2f \n", promestamujeres);
	printf("la persona mas alta es: %.2f %s \n", estalta, nomalta);
	printf("la persona mas baja es: %.2f %s \n", estbaja, nombaja);
	printf("el promedio de las edades es: %5.2f \n", promedioedades);
}
