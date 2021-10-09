#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

char articulo[12][30];
float precios[12][3];
int opc,r,c;

int main()
{
	do
	{
		system("cls");
		printf("MENU PRINCIPAL \n");
		printf("1 captura de datos \n");
		printf("2 lista \n");
		printf("3 salir \n");
		printf("que opcion quieres ");
		scanf("%d",&opc);
		switch(opc)
		{
			case 1:
				system("cls");
				for(r=1;r<=10;r++)
				{
					fflush(stdin);
					printf("captura el producto ");
					gets(articulo[r]);
					printf("captura su precio ");
					scanf("%f",&precios[r][0]);
					precios[r][1]=precios[r][0]*0.16;
					precios[r][2]=precios[r][0]+precios[r][1];
				}
		
			break;
			case 2:
				system("cls");
				printf("articulo	precio	i.v.a.	total \n");
				for(r=1;r<=10;r++)
	{
					printf("%s \t",articulo[r]);
					for(c=0;c<=3;c++)
					{
						printf("%.2f \t",precios[r][c]);
					}
					printf("\n");
					
					}//termina ciclo for
					system("pause");
					break;
					
					}
	}while(opc<3);
}
