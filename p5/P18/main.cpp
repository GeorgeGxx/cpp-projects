#include <stdio.h>
#include <conio.h>
//Escritura en archivo de acceso aleatorio

struct DatosCliente
{
int cuenta;
char apellido[15];
char nombre[10];
float saldo;
};

main( )
{
/* la variable cliente de tipo DatosCliente servirá para
almacenar los valores para cada cliente introducido */
struct DatosCliente cliente;
FILE *cuentaPtr;
if ((cuentaPtr = fopen("cliente2.dat","r+")) == NULL)//Abre el archivo en modo lectura y escritura
printf("No se puede abrir el archivo\n");
		else
		{
		printf("Introduzca numero de cuenta"//Solicita datos de entrada
		" (1 a 100), 0 para finalizar)\n?");
		scanf("%d", &cliente.cuenta);
		while (cliente.cuenta != 0)
			{
			printf("Introduzca el apellido, nombre y saldo\n? ");
			scanf("%s%s%f", cliente.apellido, cliente.nombre, &cliente.saldo);
			fseek(cuentaPtr, (cliente.cuenta - 1) * sizeof(struct DatosCliente), SEEK_SET);
			//Realiza una búsqueda del lugar correcto donde insertar el nuevo registro
			fwrite(&cliente, sizeof(struct DatosCliente), 1, cuentaPtr);
			//Escribe el registro en el archivo
			printf("Intruduzca n{umero de cuenta\n? ");
			scanf("%d", &cliente.cuenta);
			}
		}
fclose(cuentaPtr);
getch ( );
return 0;
}
