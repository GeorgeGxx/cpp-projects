#include<stdio.h>
#include<windows.h>
#include<string.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

struct articulo
{
	int clave;
	char marca [20];
	int depto;
	float precio;
	float iva;
	float total;

};

	int auxclave;
	char auxmarca [20];
	int auxdepto;
	float auxprecio;
	float auxiva;
	float auxtotal;


articulo tienda[100];

int r,c,a,contador,opc,xdepto,b,xclave;
int temp,lista[10],j,k=0,i,aux;
char otro,encontrado;

void listagral();
void ordenar();

int main()
{
	do
	{

		system("cls");
		printf("1. Captura");
		printf("\n2. Lista general");
		printf("\n3. Lista por depto");
		printf("\n4. Busqueda por clave");
		printf("\n5. Ordenacion");
		printf("\n6. Salir");
		printf("\nQue opcion quieres: ");
		scanf("%d",&opc);
		switch (opc)
		{
			case 1:
				do
				{
					r++;
					printf("captura la clave\n");
					scanf("%d",&tienda[r].clave);
					fflush(stdin);
					printf("captura la marca\n");
					gets(tienda[r].marca);
					fflush(stdin);
					printf("Elige el departamento\n");
					printf("\n1.-Abarrotes\n");
					printf("2.-Electronica\n");
					printf("3.-Vinos y licores\n");
					printf("4.-Caballeros\n");
					printf("5.-Damas\n");
					scanf("%d",&tienda[r].depto);
					fflush(stdin);
					printf("captura el precio\n");
					scanf("%f",&tienda[r].precio);
					tienda[r].iva=(tienda[r].precio)*(.16);
					tienda[r].total=(tienda[r].precio)+(tienda[r].iva);
					printf("El iva es: %f\n",tienda[r].iva);
					printf("El total es: %f\n",tienda[r].total);
					printf("\nDeseas capturar otro? s/n");
					scanf("%s",&otro);
				}while (otro=='s');
				break;

			case 2:
				system("cls");
				printf("clave\t marca\t depto\t precio \t IVA\t total \n");
				for(a=1;a<=r;a++)
				{
					listagral();
				}
				cin.get();
				break;

			case 3:
				system("cls");
				printf("Elige el departamento\n");
				printf("\n1.-Abarrotes\n");
				printf("2.-Electronica\n");
				printf("3.-Vinos y licores\n");
				printf("4.-Caballeros\n");
				printf("5.-Damas\n");
				printf("�Cual quieres?");
				scanf("%d",&xdepto);
				system("cls");
				printf("clave\t marca\t depto\t precio \t IVA\t total \n");
				for(a=1;a<=r;a++)
				{
					if(xdepto==tienda[a].depto)
					{
						listagral();
					}
				}
				cin.get();
				break;
			case 4:
				do{
					system("cls");
					printf("Que clave de articulo buscas\n");
					scanf("%d",&xclave);
					for(b=1;b<=r;b++)
					{
						if(xclave==tienda[b].clave)
						{
							encontrado='s';
							a=b;
							b=r;
						}
					}
					if (encontrado=='s')
					{
						listagral();
					}
					else
					{
						printf("clave no encontrada\n");
					}
					printf("quieres buscar otro");
					scanf("%c",&otro);
				}while(otro=='s');//cierra do del case 4
				cin.get();
				break; //cierra case 4

		}//termina switch principal

	}while(opc<5);//cierra el do del menu principal
}// termina llave main principal


void listagral()
{

	printf("\n%d\t%s\t",tienda[a].clave,tienda[a].marca);
	switch(tienda[a].depto)
	{
		case 1:
			printf("\tabarrotes");
		break;

		case 2:
			printf("\tElectronica");
		break;
		case 3:
			printf("\tVinos y licores");
		break;
		case 4:
			printf("\tCaballeros");
		break;
		case 5:
			printf("\tDamas");
		break;
	}//termina switch
	printf("%5.2f\t",tienda[a].precio);
	printf("%5.2f\t",tienda[a].iva);
	printf("%5.2f\n",tienda[a].total);

}//termina listagral()


void ordenar()
{
	for(i=0;i<10;i++)
	{
		printf("Ingrese numero ");
		scanf("%d",&lista[i]);
	}

	//Ordenacion
	for(i=0; i<10; i++)
	{
		//Comparaciones
		for(j=0; j<10-1; j++)
		{
			//Intercambiar los elementos
			if(lista[j] > lista[j+1])
			{
				aux=lista[j];
				lista[j]=lista[j+1];
				lista[j+1]=aux;
			}
		}
	}

	for(k=0;k<10;k++)
	{
		printf("%d \n", lista[k]);
	}
}






