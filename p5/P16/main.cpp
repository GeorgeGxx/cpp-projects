/* Leyendo datos de un archivo de acceso secuencial */
#include <stdio.h>
#include <conio.h>

main( )
{
int cuenta;
char nombre[30];
float saldo;
FILE *cuentaPtr;

if ((cuentaPtr = fopen("cliente.dat","r")) == NULL)//abrimos en modo lectura el archivo cliente.dat
printf("No se puede abrir el archivo\n");//Si está ya abierto manda error
	else
	{
	printf("%-10s%-13s%s\n","Cuenta","Nombre","Saldo");//Imprime en pantalla un encabezado para la información
	fscanf(cuentaPtr,"%d%s%f",&cuenta, nombre, &saldo);//Imprime la información que trae desde el archivo
	
		while (!feof(cuentaPtr))// Repite el procedimiento mientras no encuentre el fin de archivo
		{
		printf("%-10d%-13s%7.2f\n", cuenta, nombre, saldo);
		fscanf(cuentaPtr,"%d%s%f",&cuenta, nombre, &saldo);
		}
	fclose(cuentaPtr);//Cierra el archivo clientes.dat
	}
	getch( );
	return 0;
}
