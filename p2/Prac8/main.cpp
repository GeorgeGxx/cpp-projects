#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

char empleado[30], otro;
float pagohora,normales,dobles,triples,total;
int horas;

int main()
{
	do
	{
		system("cls");
		normales=0;
		dobles=0;
		triples=0;
		total=0;
		
		fflush(stdin);
		printf("Nombre del Empleado ");
		gets(empleado);
		printf("Cuanto gana por Hora ");
		scanf("%f",&pagohora);
		printf("Cuantas horas de trabajo a la semana ");
		scanf("%d",&horas);
		if(horas<=40)
		{
			normales=pagohora*horas;
		}
		else if(horas<=49)
			{
				normales=40*pagohora;
				dobles=(horas-40)*pagohora*2;
			}
			else if(horas>49)
				{
					normales=40*pagohora;
					dobles=9*pagohora*2;
					triples=(horas-49)*pagohora*3;
				}
			
			total=normales+dobles+triples;
			printf("pago por horas normales %.2f \n",normales);
			printf("pago por horas dobles %.2f \n",dobles);
			printf("pago por horas triples %.2f \n",triples);
			printf("pago total qnal %.2f \n",total);
		
		fflush(stdin);
		printf("¿Quieres calcular otro empleado? ");
		scanf("%c",&otro);
	}while(otro=='s');
}



