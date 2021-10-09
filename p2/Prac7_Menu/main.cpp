#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>

struct datos
{
	int clave,depto;
	char descripcion[30],marca[25];
	float precio,iva,total;
};

datos tienda[100];
int opc,contar,r,c;
char otro;

void listagral();

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
					printf("marca ");
					gets(tienda[contar].marca);
					fflush(stdin);
					printf("descripcion del articulo ");
					gets(tienda[contar].descripcion);
					printf("departamentos \n");
					printf("\t\t\t\t\t1 Damas \n");
					printf("\t\t\t\t\t2 Caballeros \n");
					printf("\t\t\t\t\t3 Electronica \n");
					printf("\t\t\t\t\t4 Perfumeria \n");
					printf("\t\t\t\t\t5 Linea Blanca \n");
					printf("\t\t\t\t\t6 Vinos y Licores \n");
					fflush(stdin);
					printf("Que departamento pertenece");
					scanf("%d",&tienda[contar].depto);
					fflush(stdin);
					printf("Precio del articulo ");
					scanf("%f",&tienda[contar].precio);
					tienda[contar].iva=tienda[contar].precio*0.16;
					tienda[contar].total=tienda[contar].precio+tienda[contar].iva;
					fflush(stdin);
					printf("Quieres capturar otro articulo ");
					scanf("%c",&otro);
					
					
					
					
					
					
					
					fflush(stdin);
					printf("quieres capturar otro articulo ");
					scanf("%c",&otro);
					
				}while(otro=='s');//termina switch del menu
				
			break;
			
			case 2:
				system("cls");
				printf("clave   marca   descripcion   depto   precio   iva   total \n");
				for(r=1;r<=contar;r++)
				{
					listagral();
				}
				
				system("pause");
			break;
			
		}//terminal switch principal
    }while(opc<5); 
}//termina el main


void listagral()
{
	printf("%d %s %s",tienda[r].clave,tienda[r].marca,tienda[r].descripcion);
	switch(tienda[r].depto)
	{
		case 1:
			printf("Damas");
		break;
		case 2:
			printf("Caballeros");
		break;
		case 3:
			printf("Electronica");
		break;
		case 4:
			printf("Perfumeria");
		break;
		case 5:
			printf("Linea Blanca");
		break;
		case 6:
			printf("Vinos y Licores");
		break;
		printf("%.2f ",tienda[r].precio);
		printf("%.2f ",tienda[r].iva);
		printf("%.2f ",tienda[r].total);
	}//terminal swtich 
}


