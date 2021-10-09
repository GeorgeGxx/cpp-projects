#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

/*le permite al usuario dar hasta 1 valores enteros*/
/*los valores son guardados en el arreglo llamado valor*/
/*si se dan 99 el ciclo termina*/
int main()
{
int valor [10];
int contador =0;
int numero;
do
{
    printf("teclee un numero 99 para terminar: ");
    scanf("%d", &numero);
    valor[contador] = numero;
    contador++;
} while (contador < 10 && numero != 99);

cin.get();
return 0;
}
