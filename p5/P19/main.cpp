#include <stdio.h>
#include <conio.h>
/* Leyendo de un archivo de acceso aleatorio */

struct DatosCliente
{
int cuenta;
char apellido[15];
char nombre[10];
float saldo;
};
main( )
{
struct DatosCliente cliente;
FILE *cuentaPtr;

if ((cuentaPtr = fopen("cliente2.dat","r")) == NULL)//Abre el archivo en modo lectura
printf("No se puede abrir el archivo\n");
else
{
printf("%-8s%-16s%-11s%10s\n", "Cuenta", "Apellido", "Nombre",
"Saldo");
while (!feof(cuentaPtr))//Realiza la lectura mientras el archivo no llegue a su fin
{
fread(&cliente, sizeof(struct DatosCliente), 1, cuentaPtr);
//Lee el archivo y trae la información a pantalla
if (cliente.cuenta != 0)
printf("%-8d%-16s%-1s%10.2f\n", cliente.cuenta,
cliente.apellido, cliente.nombre, cliente.saldo);
}
}
fclose(cuentaPtr);
getch();
return 0;
}
