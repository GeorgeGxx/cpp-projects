#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

char nombre[70][35];
int clave[70],opc,contar,r,c,x,rencontrado;
float calif[70][7];
char otro,encontrado;

int main()
{
	
	do
	{
		system("cls");
		printf("MENU PRINCIPAL \n");
		printf("1 captura \n");	
		printf("2 lista general \n");
		printf("3 lista promedio aprobatorio \n");
		printf("4 lista promedio NO aprobatorio \n");
		printf("5 busqueda por clave de alumno \n");
		printf("6 salir \n");		
		fflush(stdin);
		printf("que opcion quieres: ");
		scanf("%d",&opc);
		switch(opc)
		{
			case 1:
				do
				{
					system("cls");
					contar++;
					fflush(stdin);
					printf("captura la clave del alumno ");
					scanf("%d",&clave[contar]);
					fflush(stdin);
					printf("nombre del alumno ");
					gets(nombre[contar]);
					fflush(stdin);
					printf("calificacion de elementos ");
					scanf("%f",&calif[contar][1]);
					fflush(stdin);
					printf("calificacion de redes ");
					scanf("%f",&calif[contar][2]);
					fflush(stdin);
					printf("calificacion de dispo ");
					scanf("%f",&calif[contar][3]);
					fflush(stdin);
					printf("calificacion de senales ");
					scanf("%f",&calif[contar][4]);
					fflush(stdin);
					printf("calificacion de cal ");
					scanf("%f",&calif[contar][5]);
					fflush(stdin);
					printf("calificacion de diseno ");
					scanf("%f",&calif[contar][6]);
					for(c=1;c<=6;c++)
					{
						calif[contar][0]=calif[contar][0]+calif[contar][0];
					}
					calif[contar][0]=calif[contar][0]/6;
					
					
					fflush(stdin);
					printf("quieres capturar otro alumno ");
					scanf("%c",&otro);
				}while(otro=='s');
				
			break;//termina case 1	
		
		
			case 2:
				system("cls");
				printf("	clave	nombre	prom	elementos	redes	dispo	senales	cal	diseno");
				printf("\n");
				
				for(r=1;r<=contar;r++)
				{
					printf("%i	%s ", clave [r], nombre[r]);
					for (c=0;c<=6;c++)
				{
						printf("%5.1f",calif[r][c]);
				
				}
				
				printf("\n");
				
			}
			
			printf("\n");
			fflush(stdin);
			printf("oprime cualquier tecla para continuar ");
			getche();
			break;
			
			case 3:
				system("cls");
				printf("	clave	nombre	prom	elementos	redes	dispo	senales	cal	diseno");
				printf("\n");
				
				for(r=1;r<=contar;r++)
				{
					if (calif[r][0]>=6)
					{
						printf("%i	%s ", clave [r], nombre[r]);
						for (c=0;c<=6;c++)
						{
							
							printf("%5.1f",calif[r][c]);
						}
				}
				
				printf("\n");
				
			}
			
			printf("\n");
			fflush(stdin);
			printf("oprime cualquier tecla para continuar ");
			getche();
			break;
			
			case 4:
				system("cls");
				printf("	clave	nombre	prom	elementos	redes	dispo	senales	cal	diseno");
				printf("\n");
				
				for(r=1;r<=contar;r++)
				{
					if (calif[r][0]>=6)
					{
						printf("%i	%s ", clave [r], nombre[r]);
						for (c=0;c>=6;c++)
						{
							
							printf("%5.1f",calif[r][c]);
						}
				}
				
				printf("\n");
				
			}
			
			printf("\n");
			
			fflush(stdin);
			printf("oprime cualquier tecla para continuar ");
			getche();
			break;
			
			case 5:
				
				do
				{
					system("cls");
					rencontrado=0;
					encontrado='n';
					printf("captura la clave del alumno a buscar: ");
					scanf("%d",&x);
					for(r=1;r<=contar;r++)
					{
						if(x==clave[r])
						{
							encontrado='s';
							rencontrado=r;
							r=contar;
						}
					}
					
					if(encontrado=='s')
					{
						printf("clave	nombre	redes	so	");
						printf("%d	%s	",clave[rencontrado],nombre[rencontrado]);
						for(c=0;c<=6;c++)
						{
							printf("%5.1f	",calif[rencontrado][c]);
						}
						printf("\n");
					}
					else
					{
						printf("la clave del alumno no existe! ");
					}
					
					fflush(stdin);
					printf("quieres buscar otro alumno: ");
					scanf("%c",&otro);
				}while(otro=='s');
				break;
			
		}//Termina switch del menu
	}while(opc<6);
}
