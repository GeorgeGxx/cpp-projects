#include <stdio.h>
#include <conio.h>
main( )
{ 
int cuenta;
char nombre[30];
float saldo;
FILE *cuentaPtr;// utilizamos un puntero a la estructura FILE que nos permitirá manejar un archivo
if ((cuentaPtr = fopen("cliente.dat","w")) == NULL)
//Abre un archivo llamado cliente.dat en modo escritura y verifica que no esté abierto
printf("No se puede abrir el archivo\n");
	else
	{
		printf("Introduzca cuenta, nombre y saldo.\n");//Solicita los datos del registro
		printf("Teclas CTRL + Z para terminar.\n");
		printf("? ");
		scanf("%d%s%f", &cuenta, nombre, &saldo);
			while (!feof(stdin))//mientras no encuentre el fin de archivo
			{
				fprintf(cuentaPtr, "%d %s %.2f\n", cuenta, nombre,saldo);//imprime en el archivo los datos
				printf("? ");
				scanf("%d%s%f", &cuenta, nombre, &saldo);
			}
	        fclose(cuentaPtr);//cierra el archivo que se creó
	}
		getch ( ); 
		return 0;
}
