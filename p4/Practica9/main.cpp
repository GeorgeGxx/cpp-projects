#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>

// MENU
// 1 CAPTURA
//		-CLAVE DEL EJECUTIVO	1018	
//		-NOMBRE					CAMILA
//		-SERVICIO
//			-BAILE EN PISTA	300
//			-PRIVADO		600	
//			-COMPAÑIA		500
//			-FINAL FELIZ	1500
//			-EDAD			23
//			-SEXO			F
//			-PESO			60
//			-ESTATURA		1.65
//			-PAIS DE ORIGEN	5 PAISES
//
//	2 LISTA GRAL
//		-ORDENADA
// 3 LISTA POR EJECUTIVA
// 4 BUSQUEDA POR CLAVE DEL EJECUTIVO
// 5 LISTA POR SERVICIOS
// 6 SALIR			-

struct felicidad
{
	int clave;
	char nombre[30];
	int servicio;
	int edad;
	char sexo;
	float peso;
	float estatura;
	int pais;
	float costo;
};

felicidad ejecutivo[100];
int contar,r,opc,c,xr;
char otro,resp;

void listagral();
void ordenar();
void menu();

int main()
{
	do
	{
		system("cls");
	printf("MENU PRINCIPAL FELICIDAD EJECUTIVO \n");
	printf("1 captura \n");
	printf("2 lista general \n");
	printf("3 lista por ejecutiva \n");
	printf("4 busqueda por clave de la ejecutiva \n");
	printf("5 lista por servicios \n");
	printf("6 SALIR \n");
	
	fflush(stdin);
	printf("¿QUE OPCION QUIERES? \n");
	scanf("%d",&opc);
	
	}while(opc<6);
	
	switch(opc)
	{
		case 1:
		
			system("cls");
			do
			{
				system("cls");
				contar++;
				fflush(stdin);
				printf("clave del ejecutivo ");
				scanf("%d",&ejecutivo[contar].clave);
				fflush(stdin);
				printf("nombre del ejecutivo ");
				gets(ejecutivo[contar].nombre);
				printf("servicios ");
				printf("1 baile de pista \n ");
				printf("2 baile privado \n ");
				printf("3 compania \n");
				printf("4 final feliz \n ");
				scanf("%d",ejecutivo[contar].servicio);
				fflush(stdin);
				printf("edad ");
				scanf("%d",&ejecutivo[contar].edad);
				fflush(stdin);
				printf("sexo del ejecutivo ");
				scanf("%d",ejecutivo[contar].sexo);
				switch(ejecutivo[contar].servicio)
					{
						case 1:
							ejecutivo[contar].costo=300;
						break;
						case 2:
							ejecutivo[contar].costo=600;
						break;
						case 3:
							ejecutivo[contar].costo=500;
						break;
						case 4:
							ejecutivo[contar].costo=1500;
						break;
						
					}//termina switch servicio
				
				printf("quieres capturar otro \n");
				scanf("%c",&otro);
			}while(otro=='s');
		break;
		
		case 2:
			
			system("cls");
				fflush(stdin);
				printf("¿Quieres tu lista ordenada ");
				scanf("%c",&resp);
				if (resp=='s')
				{
					ordenar();
				}
				printf("clave nombre servicio edad sexo peso estatura pais \n");
				for(r=1;r<=contar;r++)
				{
					listagral();
				}//termina for r
				
			
			
		break;
		
		case 3:
			
			
			
		break;
		
		case 4:
			
		break;
		
		case 5:
			
		break;
	}// termina switch de menu principal
	
	
}


