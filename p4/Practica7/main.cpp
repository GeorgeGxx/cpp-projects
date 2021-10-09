#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>
#include<locale.h>

struct datos
{
	int clave;
	char marca[25];
	char descripcion[30];
	int depto;
	float precio;
	float iva;
	float total;
	int opc,contar;
	char otro;
};

datos tienda[100];
int opc,contar,r,c,xclave,xr,xdepto;
void listagral();
char otro,encontrado;

int main()
{
	do
	{
		/*
		menu de tarea
		*/
		system("cls");
		printf("MENU PRINCIPAL \n");
		printf("1 captura \n");
		printf("2 lista general \n");
		printf("3 busqueda por clave \n");
		printf("4 lista por depa totalizada \n");
		printf("5 salir \n");
		fflush(stdin);
		printf("que opcion quieres ");
		scanf("%d",&opc);
		switch(opc)
		{
			case 1:
			//captura de datos
			do
			{
				system("cls");
				contar++;
				fflush(stdin);
				printf("clave del articulo ");
				scanf("%d",&tienda[contar].clave);
				fflush(stdin);
				printf("marca ");
				gets(tienda[contar].marca);
				fflush(stdin);
				printf("descripcion del articulo ");
				gets(tienda[contar].descripcion);
				printf("departamentos \n");
				printf("1 Damas \n");
				printf("2 Caballeros \n");
				printf("3 Electronica \n");
				printf("4 Perfumeria \n");
				printf("5 Linea Blanca \n");
				printf("6 Vinos y licores \n");
				fflush(stdin);
				printf("Que departamento pertenece ");
				scanf("%d",&tienda[contar].depto);
				fflush(stdin);
				printf("precio del articulo ");
				scanf("%d",&tienda[contar].precio);
				tienda[contar].iva=tienda[contar].precio*0.16;
				tienda[contar].total=tienda[contar].precio+tienda[contar].iva;
				
				
				fflush(stdin);
				printf("quieres capturar otro articulo ");
				scanf("%c",&otro);
			}while(otro=='s');
				
			break;
			
			case 2:
				
				system("cls");
				printf("clave  marca  descipcion  depto  precio  iva  total \n");
				for(r=1;r<=contar;r++)
				{
					listagral();
					
				}
				
				system("pause");
			break;
			case 3:
				
				do
				{
					system("cls");
					printf("clave del producto a buscar ");
					scanf("%d",&xclave);
					for(xr=1;xr<=contar;xr++)
					{
						if(xclave==tienda[xr].clave)
						{
							encontrado='s';
							r=xr;
							xr=contar;
						}
					}
					
					if(encontrado=='s')
					{
						listagral();
					}
					else
					{
						printf("clave no se encontro \n");
					}
					
					fflush(stdin);
					printf("quieres buscar otro articulo ");
					scanf("%c",&otro);
					
				}while(otro=='s');
			break;
			
			case 4:
				
				do
				{
				
				system("cls");
				printf("menu de departamentos \n");
				printf("1 Damas \n");
				printf("2 Caballeros \n");
				printf("3 electr%cnica \n",162);
				printf("4 Perfumeria \n");
				printf("5 Linea Blanca \n");
				printf("6 Vinos y licores \n");
				fflush(stdin);
				printf("¿Que depto quieres listar? \n");
				scanf("%d",&xdepto);
				for(r=1;r<=contar;r++)
				{
					if(xdepto=tienda[r].depto)
					{
						listagral();
					}
				}
				
				fflush(stdin);
					printf("quieres hacer otra lista ");
					scanf("%c",&otro);
			 	}while(otro=='s');
			break;
			
		}// termina switch principal
	}while(opc<5);
}//termina main

void listagral()
{
	printf("%d %s %s ",tienda[r].clave,tienda[r].marca,tienda[r].descripcion);
	switch(tienda[r].depto)
	{
		case 1:
			printf("Damas ");
		break;
		case 2:
			printf("Caballeros ");
		break;
		case 3:
			printf("Electronica ");
		break;
		case 4:
			printf("Perfumeria ");
		break;
		case 5:
			printf("Linea Blanca ");
		break;
		case 6:
			printf("Vinos y licores ");
		break;
		
		printf("%.2f ",tienda[r].precio);
		printf("%.2f ",tienda[r].iva);
		printf("%.2f ",tienda[r].total);
	}//termina switch depto
	
}
