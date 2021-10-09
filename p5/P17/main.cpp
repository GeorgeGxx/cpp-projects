#include <stdio.h>
#include <conio.h>
//Creación de archivo de acceso aleatorio
struct DatosCliente
{
int cuenta;
char apellido[15];
char nombre[10];
float saldo;
};

main( )
{
int i;
struct DatosCliente clienteNulo = {0,"","",0.0};
FILE *cuentaPtr;

if ((cuentaPtr = fopen("cliente2.dat","w")) == NULL)
printf("No se puede abrir el archivo\n");
else
{
/* Escritura de 100 registros en “blanco”*/
for (i=1; i<= 100; i++) 
fwrite( &clienteNulo, sizeof(struct DatosCliente),1, cuentaPtr);
fclose(cuentaPtr);
}
getch ( );
return 0;
}
