#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>

struct datos
{
	int clave;	
	char marca[25];
	char descripcion[30];	
	int depto;
	float precio;
	float iva;
	float total;
};

datos tienda[100];
int opc, contar, xclave, r, xr, xdepto;
int lista[10],j,k=0,i,aux;
char otro, encontrado;

void listagral();
void ordenar();

int main()
{
	do
	{
		system("cls");
		printf("\t\t\t\t\tMENU PRINCIPAL \n");
		printf("\t\t\t\t\t1 captura \n");
		printf("\t\t\t\t\t2 lista general \n");
		printf("\t\t\t\t\t3 busqueda por clave \n");
		printf("\t\t\t\t\t4 lista por departamento totalizada \n");
		printf("\t\t\t\t\t5 salir \n");
		fflush(stdin);
		printf("\t\t\t\t\tque opcion quieres ");
		scanf("%d",&opc);
				
	switch(opc)		
	{
		case 1:
			do
			{
				
				system("cls");
				contar++;
				fflush(stdin);
				printf("clave del articulo ");
				scanf("%d",&tienda[contar].clave);
				fflush(stdin);
				printf("captura la marca ");
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
				printf("6 Vinos y Licores \n");
				fflush(stdin);
				printf("Que departamento pertenece");
				scanf("%d",&tienda[contar].depto);
				fflush(stdin);
				printf("precio del articulo ");
				scanf("%f",&tienda[contar].precio);
				tienda[contar].iva=tienda[contar].precio*0.16;
				tienda[contar].total=tienda[contar].precio+tienda[contar].iva;
				
				fflush(stdin);				
				printf("quieres capturar otro articulo ");
				scanf("%c",&otro);
				
				
				
			}while(otro=='s');
		
		break;
		
		case 2:
			system("cls");
			printf("clave	marca	descripcion	depto	precio	iva	total");
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
				printf("Menu de departamentos \n");
				printf("1 Damas \n");
				printf("2 Caballeros \n");
				printf("3 Electronica \n",162);
				printf("4 Perfumeria \n");
				printf("5 Linea blanca \n");
				printf("6 Vinos y Licores \n");
				fflush(stdin);
				printf("¿Que departamento quieres listar? ");
				scanf("%d",xdepto);
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
	}//termina switch principal

}while(opc<5);

}//termina main

void listagral()
{
	printf("%d	%s	%	s	",tienda[r].clave,tienda[r].marca,tienda[r].descripcion);
	switch(tienda[r].depto)
	{
		case 1:
			printf("Damas \n");
		break;
		case 2:
			printf("Caballeros \n");
		break;
		case 3:
			printf("Electronica \n");
		break;
		case 4:
			printf("Perfumeria \n");
		break;
		case 5:
			printf("Linea Blanca \n");
		break;
		case 6:
			printf("Vinos y Licores \n");
		break;	
		
		printf("%.2f ",tienda[r].precio);
		printf("%.2f ",tienda[r].iva);
		printf("%.2f ",tienda[r].total);
	}//Termina switch depto
	
}//Termina lista gral

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
