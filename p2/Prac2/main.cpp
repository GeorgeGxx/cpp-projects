#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

int conta,modelo,contaeuro,conta250,conta2017;
char marca[15],color[10],origen;
float precio,sumagral,sumaeuro,promgral,promeuro;

int main()
{
	system("cls");
	for (conta=1;conta<=8;conta++)
	{
		fflush(stdin);
		printf("cap marca del auto %d",conta);
		gets(marca);
		fflush(stdin);
		printf("cap el color ");
		gets (color);
		fflush(stdin);
		printf("cap el precio ");
		scanf("%f",&precio);
		fflush(stdin);
		printf("cap el modelo ");
		scanf("%d",&modelo);
		fflush(stdin);
		printf("es europeo s/n ");
		scanf("%c",&origen);
		if(origen='s')
		{
			contaeuro++;
			sumaeuro=sumaeuro+precio;
		}
		
		if(precio<=25000)
		{
			conta250++;
		}
		
		if(modelo==2017)
		{
			conta2017++;
		}
		
		sumagral=sumagral+precio;
	
	}
	
	system("cls");
	printf("los autos europeos son %d \n",contaeuro);
	printf("con precio menor a 250,000 %d \n",conta250);
	printf("los modelo 2017 %d \n",conta2017);
	
	promgral=sumagral/8;
	printf("promedio precios de todos %.2f \n",promgral);
	promeuro=sumaeuro/contaeuro;
	printf("promedio europeos %.2f \n",promeuro);
	
	
 }
	
