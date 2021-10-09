#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
/*LE PERMITE A USUARIO DAR HASTA 10 VALORES ENTEROS*/
/*LOS VALORES SON GUARDADOS EN UN ARREGLO LLAMADA VALOR*/
/*SI SE DAN 99 EL CICLO TERMINA*/
int main()
{

    int valor[10];
    int contador=0;
    int
            numero;
    do
    {
        printf("TECLEE UN NUMERO, 99 PARA TERMINAR \n");
        scanf("%d",&numero);
        valor[contador]=numero;
        contador++;
    }
    while (contador<10 && numero!=99);
    getchar();
    return 0;
}
