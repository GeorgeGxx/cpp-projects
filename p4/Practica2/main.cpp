#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>

int conta, modelo;
char marca[15], color[10], origen;
float precio;  

int contaeuro, conta250, conta2017;
float sumagral, sumaeuro;
float promgral, promeuro;

int main()
{
	system("cls");
	for(conta=1;conta<=8;conta++)
	{
		fflush(stdin);
		printf("captura la marca del auto  %d",conta);
		gets(marca);
		fflush(stdin);
		printf("captura el color ");
		gets(color);
		fflush(stdin);
		printf("captura el precio ");
		scanf("%f",&precio);
		fflush(stdin);
		printf("captura el modelo ");
		scanf("%d",&modelo);
		fflush(stdin);
		printf("es europeo s/n ");
		scanf("%c",&origen);
		
		if(origen=='s')
		{
			contaeuro++;
			sumaeuro=sumaeuro+precio;
		}
		
		if(precio<=250000)
		{
			conta250++;
		}
		
		if(modelo==2017)
		{
			conta2017++;
		}
		
		sumagral=sumagral+precio;
	}//termina for
	
	promeuro=sumaeuro/contaeuro;
	promgral=sumagral/8;
	
	system("cls");
	printf("los autos europeos son %d \n",contaeuro);
	printf("con precio menor a 250, 000 %d \n", conta250);
	printf("los modelo 2017 fueron %d \n", conta2017);
	printf("promedio precios de todos %.2f \n",promgral);
	printf("promedio europeos %.2f \n",promeuro);
}
