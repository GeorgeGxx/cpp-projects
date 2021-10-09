#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int opc, paquete1, paquete2, paquete3, paquete4, paquete5;
int main ()
{
    system("cls");
    printf("BIENVENIDO ESTIMADO CLIENTE\n");
    printf("Estas son algunos de los paquetes que puede eleguir\n");
    printf("Paquete1\n");
    printf("Paquete2\n");
    printf("Paquete3\n");
    printf("Paquete4\n");
    printf("Paquete5\n");
    printf("Seleccione el paquete que usted desea\n");
    scanf("%d", &opc);
    switch (opc < 7)
    {
        case 1:
            printf("Hamburgesa sencilla\n");
            printf("Refresco de lata\n");
            printf("Helado en cono sencillo\n");
            printf("Juguete peque�o\n");
            printf("Precio: $60");
            scanf("%d", &paquete1);
            break;
        case 2:
            printf("Hamburgesa doble\n");
            printf("Refresco de 600ml\n");
            printf("Helado con chispas de chocolate\n ");
            printf("Juguete mediano \n");
            printf("Precio: $75");
            scanf("%d", &paquete2);
            break;
        case 3:
            printf("Hambuegesa doble con papas\n");
            printf("Refresco de 1Lt.\n");
            printf("Helado en vaso doble");
            printf("Jugete mediano\n");
            printf("Precio: $90");
            scanf("%d", &paquete3);
            break;
        case 4:
            printf("Hamburgesa doble con una peque�a\n");
            printf("Refresco de 2Lt.\n");
            printf("Helado en vaso doble con chispas\n");
            printf("Jugete grande\n");
            printf("Precio: $110");
            scanf("%d", &paquete4);
            break;
        case 5:
            printf("Hambuegesa doble con una peque�a y papas\n");
            printf("Refresco de 2Lt.\n");
            printf("Helado doble en vaso napolitano\n");
            printf("Jugete grande\n");
            printf("Precio: $130\n");
            scanf("%d", &paquete5);
            break;
        case 6:
            printf("Salida\n");
            printf("Cual es el paquete o paquetes que usted desea");
    }
    cin.get();
    return 0;
}
